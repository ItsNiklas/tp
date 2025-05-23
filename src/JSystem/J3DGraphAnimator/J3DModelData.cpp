//
// J3DModelData
//

#include "JSystem/J3DGraphAnimator/J3DModelData.h"
#include "JSystem/J3DGraphAnimator/J3DMaterialAnm.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "dolphin/os.h"

/* 80325D88-80325DA0 3206C8 0018+00 1/1 2/2 0/0 .text            clear__12J3DModelDataFv */
void J3DModelData::clear() {
    mpRawData = 0;
    mFlags = 0;
    mbHasBumpArray = 0;
    mbHasBillboard = 0;
}

/* 80325DA0-80325E14 3206E0 0074+00 0/0 2/2 0/0 .text            __ct__12J3DModelDataFv */
J3DModelData::J3DModelData() {
    clear();
}

/* 80325E14-80325EC8 320754 00B4+00 0/0 2/2 0/0 .text newSharedDisplayList__12J3DModelDataFUl */
s32 J3DModelData::newSharedDisplayList(u32 flag) {
    u16 matNum = getMaterialNum();

    for (u16 i = 0; i < matNum; i++) {
        if (!!(flag & 0x40000)) {
            s32 ret = getMaterialNodePointer(i)->newSingleSharedDisplayList(getMaterialNodePointer(i)->countDLSize());
            if (ret != kJ3DError_Success)
                return ret;
        } else {
            s32 ret = getMaterialNodePointer(i)->newSharedDisplayList(getMaterialNodePointer(i)->countDLSize());
            if (ret != kJ3DError_Success)
                return ret;
        }
    }

    return kJ3DError_Success;
}

/* ############################################################################################## */
/* 804515E8-804515EC 000AE8 0004+00 1/1 0/0 0/0 .sbss            sInterruptFlag$965 */
static s32 sInterruptFlag;

/* 804515EC-804515F0 000AEC 0004+00 1/1 0/0 0/0 .sbss            None */
static s8 sInitInterruptFlag;

/* 80325EC8-80325F94 320808 00CC+00 0/0 1/1 0/0 .text            indexToPtr__12J3DModelDataFv */
void J3DModelData::indexToPtr() {
    J3DTexture* tex = getTexture();
    j3dSys.setTexture(tex);

    if (!sInitInterruptFlag) {
        sInterruptFlag = OSDisableInterrupts();
        sInitInterruptFlag = true;
    }
    OSDisableScheduler();

    GDLObj gdl_obj;
    u16 matNum = getMaterialNum();
    for (u16 i = 0; i < matNum; i++) {
        J3DMaterial* matNode = getMaterialNodePointer(i);
        J3DDisplayListObj* dl_obj = matNode->getSharedDisplayListObj();

        GDInitGDLObj(&gdl_obj, dl_obj->getDisplayList(0), dl_obj->getDisplayListSize());
        GDSetCurrent(&gdl_obj);
        matNode->getTevBlock()->indexToPtr();
    }
    GDSetCurrent(NULL);
    OSEnableScheduler();
    OSRestoreInterrupts(sInterruptFlag);
}

/* 80325F94-8032600C 3208D4 0078+00 0/0 2/2 0/0 .text            makeSharedDL__12J3DModelDataFv */
void J3DModelData::makeSharedDL() {
    J3DTexture* tex = getTexture();
    j3dSys.setTexture(tex);

    u16 matNum = getMaterialNum();
    for (u16 i = 0; i < matNum; i++) {
        getMaterialNodePointer(i)->makeSharedDisplayList();
    }
}

/* 8032600C-803260CC 32094C 00C0+00 0/0 3/3 7/7 .text simpleCalcMaterial__12J3DModelDataFUsPA4_f
 */
void J3DModelData::simpleCalcMaterial(u16 idx, Mtx param_1) {
    syncJ3DSysFlags();

    J3DJoint* jointNode = getJointNodePointer(idx);
    for (J3DMaterial* mat = jointNode->getMesh(); mat != NULL; mat = mat->getNext()) {
        if (mat->getMaterialAnm() != NULL) {
            mat->getMaterialAnm()->calc(mat);
        }
        mat->calc(param_1);
    }
}

/* 803260CC-803260F8 320A0C 002C+00 0/0 1/1 0/0 .text syncJ3DSysPointers__12J3DModelDataCFv */
void J3DModelData::syncJ3DSysPointers() const {
    j3dSys.setTexture(getTexture());
    j3dSys.setVtxPos(getVtxPosArray());
    j3dSys.setVtxNrm(getVtxNrmArray());
    j3dSys.setVtxCol(getVtxColorArray(0));
}

/* 803260F8-80326134 320A38 003C+00 1/1 5/5 0/0 .text            syncJ3DSysFlags__12J3DModelDataCFv
 */
void J3DModelData::syncJ3DSysFlags() const {
    if (checkFlag(0x20)) {
        j3dSys.onFlag(J3DSysFlag_PostTexMtx);
    } else {
        j3dSys.offFlag(J3DSysFlag_PostTexMtx);
    }
}
