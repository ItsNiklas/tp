/**
 * @file d_a_obj_kbacket.cpp
 * 
*/

#include "d/actor/d_a_obj_kbacket.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __dt__15daObj_KBacket_cFv();
extern "C" void create__15daObj_KBacket_cFv();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__15daObj_KBacket_cFv();
extern "C" void Delete__15daObj_KBacket_cFv();
extern "C" void Execute__15daObj_KBacket_cFv();
extern "C" void Draw__15daObj_KBacket_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void createHeapCallBack__15daObj_KBacket_cFP10fopAc_ac_c();
extern "C" void setEnvTevColor__15daObj_KBacket_cFv();
extern "C" void setRoomNo__15daObj_KBacket_cFv();
extern "C" void reset__15daObj_KBacket_cFv();
extern "C" void setMtx__15daObj_KBacket_cFv();
extern "C" void calcRollAngle__15daObj_KBacket_cFsi();
extern "C" void getWallAngle__15daObj_KBacket_cFsPs();
extern "C" void setSmokePrtcl__15daObj_KBacket_cFv();
extern "C" void setWaterPrtcl__15daObj_KBacket_cFv();
extern "C" void setHamonPrtcl__15daObj_KBacket_cFv();
extern "C" static void daObj_KBacket_Create__FPv();
extern "C" static void daObj_KBacket_Delete__FPv();
extern "C" static void daObj_KBacket_Execute__FPv();
extern "C" static void daObj_KBacket_Draw__FPv();
extern "C" static bool daObj_KBacket_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80587C88(void* _this, int*);
extern "C" void __sinit_d_a_obj_kbacket_cpp();
extern "C" void __dt__21daObj_KBacket_Param_cFv();
extern "C" static void func_80587D60();
extern "C" static void func_80587D68();
extern "C" u8 const m__21daObj_KBacket_Param_c[44];
extern "C" extern char const* const d_a_obj_kbacket__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_calcSpeed__FP10fopAc_ac_c();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopAcM_carryOffRevise__FP10fopAc_ac_c();
extern "C" void fopAcM_getWaterY__FPC4cXyzPf();
extern "C" void fopAcM_getWaterStream__FPC4cXyzRC13cBgS_PolyInfoP4cXyzPii();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void setSimple__21dDlst_shadowControl_cFP4cXyzffP4cXyzsfP9_GXTexObj();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void daNpcF_getGroundAngle__FP13cBgS_PolyInfos();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80587E70-80587E70 0000EC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80587E70 = "Kakashi";
#pragma pop

/* 80587E78-80587E84 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80587E84-80587E98 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80587E98-80587EA8 000020 0010+00 2/3 0/0 0/0 .data            l_bmdData */
SECTION_DATA static u8 l_bmdData[16] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
};

/* 80587EA8-80587EAC -00001 0004+00 2/4 0/0 0/0 .data            l_resNameList */
SECTION_DATA static void* l_resNameList = (void*)&d_a_obj_kbacket__stringBase0;

/* 80587EAC-80587EF0 000034 0044+00 1/2 0/0 0/0 .data            l_ccDCyl */
static dCcD_SrcCyl l_ccDCyl = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        0.0f, // mRadius
        0.0f // mHeight
    } // mCyl
};

/* 80587EF0-80587EF8 000078 0008+00 1/1 0/0 0/0 .data            emttrId$4670 */
SECTION_DATA static u8 emttrId[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 80587EF8-80587F18 -00001 0020+00 1/0 0/0 0/0 .data            daObj_KBacket_MethodTable */
static actor_method_class daObj_KBacket_MethodTable = {
    (process_method_func)daObj_KBacket_Create__FPv,
    (process_method_func)daObj_KBacket_Delete__FPv,
    (process_method_func)daObj_KBacket_Execute__FPv,
    (process_method_func)daObj_KBacket_IsDelete__FPv,
    (process_method_func)daObj_KBacket_Draw__FPv,
};

/* 80587F18-80587F48 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_KBACKET */
extern actor_process_profile_definition g_profile_OBJ_KBACKET = {
  fpcLy_CURRENT_e,            // mLayerID
  8,                          // mListID
  fpcPi_CURRENT_e,            // mListPrio
  PROC_OBJ_KBACKET,           // mProcName
  &g_fpcLf_Method.base,      // sub_method
  sizeof(daObj_KBacket_c),    // mSize
  0,                          // mSizeOther
  0,                          // mParameters
  &g_fopAc_Method.base,       // sub_method
  714,                        // mPriority
  &daObj_KBacket_MethodTable, // sub_method
  0x00044100,                 // mStatus
  fopAc_ACTOR_e,              // mActorType
  fopAc_CULLBOX_CUSTOM_e,     // cullType
};

/* 80587F48-80587F54 0000D0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80587F54-80587F78 0000DC 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80587D68,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80587D60,
};

/* 80587F78-80587F84 000100 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80587F84-80587F90 00010C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80587F90-80587F9C 000118 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80587F9C-80587FA8 000124 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80587FA8-80587FB4 000130 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80587FB4-80587FC0 00013C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGLin */
SECTION_DATA extern void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80587FC0-80587FCC 000148 000C+00 2/2 0/0 0/0 .data            __vt__15daObj_KBacket_c */
SECTION_DATA extern void* __vt__15daObj_KBacket_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daObj_KBacket_cFv,
};

/* 80585E4C-80586048 0000EC 01FC+00 1/0 0/0 0/0 .text            __dt__15daObj_KBacket_cFv */
daObj_KBacket_c::~daObj_KBacket_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80587D84-80587DB0 000000 002C+00 3/3 0/0 0/0 .rodata          m__21daObj_KBacket_Param_c */
SECTION_RODATA u8 const daObj_KBacket_Param_c::m[44] = {
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xA0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x43, 0xC8, 0x00,
    0x00, 0x42, 0x92, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0,
    0x00, 0x00, 0x42, 0x14, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80587D84, &daObj_KBacket_Param_c::m);

/* 80587DB0-80587DE0 00002C 0030+00 1/1 0/0 0/0 .rodata          l_ccDObjData */
SECTION_RODATA static u8 const l_ccDObjData[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80587DB0, &l_ccDObjData);

/* 80587DE0-80587DE4 00005C 0004+00 0/2 0/0 0/0 .rodata          @3965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3965 = -50.0f;
COMPILER_STRIP_GATE(0x80587DE0, &lit_3965);
#pragma pop

/* 80587DE4-80587DE8 000060 0004+00 1/2 0/0 0/0 .rodata          @3966 */
SECTION_RODATA static f32 const lit_3966 = 50.0f;
COMPILER_STRIP_GATE(0x80587DE4, &lit_3966);

/* 80587DE8-80587DEC 000064 0004+00 0/3 0/0 0/0 .rodata          @3967 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3967[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80587DE8, &lit_3967);
#pragma pop

/* 80587DEC-80587DF0 000068 0004+00 0/1 0/0 0/0 .rodata          @3968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3968 = 42.0f;
COMPILER_STRIP_GATE(0x80587DEC, &lit_3968);
#pragma pop

/* 80587DF0-80587DF4 00006C 0004+00 0/2 0/0 0/0 .rodata          @3969 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3969 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80587DF0, &lit_3969);
#pragma pop

/* 80586048-805863F0 0002E8 03A8+00 1/1 0/0 0/0 .text            create__15daObj_KBacket_cFv */
void daObj_KBacket_c::create() {
    // NONMATCHING
}

/* 805863F0-80586438 000690 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGLinFv */
// cM3dGLin::~cM3dGLin() {
extern "C" void __dt__8cM3dGLinFv() {
    // NONMATCHING
}

/* 80586438-80586480 0006D8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80586480-805864C8 000720 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 805864C8-80586538 000768 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80586538-80586594 0007D8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80586594-80586604 000834 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80586604-80586704 0008A4 0100+00 1/1 0/0 0/0 .text            CreateHeap__15daObj_KBacket_cFv */
void daObj_KBacket_c::CreateHeap() {
    // NONMATCHING
}

/* 80586704-80586738 0009A4 0034+00 1/1 0/0 0/0 .text            Delete__15daObj_KBacket_cFv */
void daObj_KBacket_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80587DF4-80587DF8 000070 0004+00 0/1 0/0 0/0 .rodata          @4463 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4463 = 0x43360B61;
COMPILER_STRIP_GATE(0x80587DF4, &lit_4463);
#pragma pop

/* 80587DF8-80587DFC 000074 0004+00 0/1 0/0 0/0 .rodata          @4464 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4464 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80587DF8, &lit_4464);
#pragma pop

/* 80587DFC-80587E00 000078 0004+00 0/1 0/0 0/0 .rodata          @4465 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4465 = 0.5f;
COMPILER_STRIP_GATE(0x80587DFC, &lit_4465);
#pragma pop

/* 80587E00-80587E04 00007C 0004+00 0/1 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 3000.0f;
COMPILER_STRIP_GATE(0x80587E00, &lit_4466);
#pragma pop

/* 80587E04-80587E08 000080 0004+00 0/1 0/0 0/0 .rodata          @4467 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4467 = 31.0f / 20.0f;
COMPILER_STRIP_GATE(0x80587E04, &lit_4467);
#pragma pop

/* 80587E08-80587E0C 000084 0004+00 0/1 0/0 0/0 .rodata          @4468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4468 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x80587E08, &lit_4468);
#pragma pop

/* 80587E0C-80587E10 000088 0004+00 2/3 0/0 0/0 .rodata          @4469 */
SECTION_RODATA static f32 const lit_4469 = 1.0f;
COMPILER_STRIP_GATE(0x80587E0C, &lit_4469);

/* 80587E10-80587E14 00008C 0004+00 0/1 0/0 0/0 .rodata          @4470 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4470 = 0.75f;
COMPILER_STRIP_GATE(0x80587E10, &lit_4470);
#pragma pop

/* 80587E14-80587E18 000090 0004+00 0/1 0/0 0/0 .rodata          @4471 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4471 = 2000.0f;
COMPILER_STRIP_GATE(0x80587E14, &lit_4471);
#pragma pop

/* 80587E18-80587E1C 000094 0004+00 0/1 0/0 0/0 .rodata          @4472 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4472 = 2.0f;
COMPILER_STRIP_GATE(0x80587E18, &lit_4472);
#pragma pop

/* 80587E1C-80587E20 000098 0004+00 0/1 0/0 0/0 .rodata          @4473 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4473 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80587E1C, &lit_4473);
#pragma pop

/* 80587E20-80587E24 00009C 0004+00 0/1 0/0 0/0 .rodata          @4474 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4474 = 11.0f;
COMPILER_STRIP_GATE(0x80587E20, &lit_4474);
#pragma pop

/* 80587E24-80587E28 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4475 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4475 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80587E24, &lit_4475);
#pragma pop

/* 80587E28-80587E2C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4476 = 1000.0f;
COMPILER_STRIP_GATE(0x80587E28, &lit_4476);
#pragma pop

/* 80587E2C-80587E30 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4477 = -1.0f;
COMPILER_STRIP_GATE(0x80587E2C, &lit_4477);
#pragma pop

/* 80587E30-80587E34 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4478 = -30.0f;
COMPILER_STRIP_GATE(0x80587E30, &lit_4478);
#pragma pop

/* 80587E34-80587E38 0000B0 0004+00 1/2 0/0 0/0 .rodata          @4479 */
SECTION_RODATA static f32 const lit_4479 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80587E34, &lit_4479);

/* 80587E38-80587E3C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = -2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80587E38, &lit_4480);
#pragma pop

/* 80587E3C-80587E40 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = 1200.0f;
COMPILER_STRIP_GATE(0x80587E3C, &lit_4481);
#pragma pop

/* 80587E40-80587E44 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4482 = 900.0f;
COMPILER_STRIP_GATE(0x80587E40, &lit_4482);
#pragma pop

/* 80587E44-80587E48 0000C0 0004+00 1/2 0/0 0/0 .rodata          @4483 */
SECTION_RODATA static f32 const lit_4483 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80587E44, &lit_4483);

/* 80587E48-80587E4C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4484 = 100.0f;
COMPILER_STRIP_GATE(0x80587E48, &lit_4484);
#pragma pop

/* 80587E4C-80587E50 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4485 = 0.25f;
COMPILER_STRIP_GATE(0x80587E4C, &lit_4485);
#pragma pop

/* 80587E50-80587E54 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4486 = 30.0f;
COMPILER_STRIP_GATE(0x80587E50, &lit_4486);
#pragma pop

/* 80587E54-80587E5C 0000D0 0004+04 0/1 0/0 0/0 .rodata          @4487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4487[1 + 1 /* padding */] = {
    33.0f / 100.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80587E54, &lit_4487);
#pragma pop

/* 80587E5C-80587E64 0000D8 0008+00 1/2 0/0 0/0 .rodata          @4489 */
SECTION_RODATA static u8 const lit_4489[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80587E5C, &lit_4489);

/* 80586738-8058742C 0009D8 0CF4+00 2/2 0/0 0/0 .text            Execute__15daObj_KBacket_cFv */
void daObj_KBacket_c::Execute() {
    // NONMATCHING
}

/* 8058742C-80587558 0016CC 012C+00 1/1 0/0 0/0 .text            Draw__15daObj_KBacket_cFv */
void daObj_KBacket_c::Draw() {
    // NONMATCHING
}

/* 80587558-805875A0 0017F8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* 805875A0-805875C0 001840 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__15daObj_KBacket_cFP10fopAc_ac_c          */
void daObj_KBacket_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805875C0-8058761C 001860 005C+00 2/2 0/0 0/0 .text            setEnvTevColor__15daObj_KBacket_cFv
 */
void daObj_KBacket_c::setEnvTevColor() {
    // NONMATCHING
}

/* 8058761C-80587660 0018BC 0044+00 2/2 0/0 0/0 .text            setRoomNo__15daObj_KBacket_cFv */
void daObj_KBacket_c::setRoomNo() {
    // NONMATCHING
}

/* 80587660-80587694 001900 0034+00 1/1 0/0 0/0 .text            reset__15daObj_KBacket_cFv */
void daObj_KBacket_c::reset() {
    // NONMATCHING
}

/* 80587694-805877C4 001934 0130+00 1/1 0/0 0/0 .text            setMtx__15daObj_KBacket_cFv */
void daObj_KBacket_c::setMtx() {
    // NONMATCHING
}

/* 805877C4-80587864 001A64 00A0+00 1/1 0/0 0/0 .text            calcRollAngle__15daObj_KBacket_cFsi
 */
void daObj_KBacket_c::calcRollAngle(s16 param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80587E64-80587E68 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4649 = 5.0f;
COMPILER_STRIP_GATE(0x80587E64, &lit_4649);
#pragma pop

/* 80587E68-80587E6C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4650 = 200.0f;
COMPILER_STRIP_GATE(0x80587E68, &lit_4650);
#pragma pop

/* 80587864-805879F4 001B04 0190+00 1/1 0/0 0/0 .text            getWallAngle__15daObj_KBacket_cFsPs
 */
void daObj_KBacket_c::getWallAngle(s16 param_0, s16* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80587E6C-80587E70 0000E8 0004+00 2/2 0/0 0/0 .rodata          @4666 */
SECTION_RODATA static f32 const lit_4666 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80587E6C, &lit_4666);

/* 805879F4-80587A70 001C94 007C+00 1/1 0/0 0/0 .text            setSmokePrtcl__15daObj_KBacket_cFv
 */
void daObj_KBacket_c::setSmokePrtcl() {
    // NONMATCHING
}

/* 80587A70-80587B68 001D10 00F8+00 1/1 0/0 0/0 .text            setWaterPrtcl__15daObj_KBacket_cFv
 */
void daObj_KBacket_c::setWaterPrtcl() {
    // NONMATCHING
}

/* 80587B68-80587BB8 001E08 0050+00 1/1 0/0 0/0 .text            setHamonPrtcl__15daObj_KBacket_cFv
 */
void daObj_KBacket_c::setHamonPrtcl() {
    // NONMATCHING
}

/* 80587BB8-80587BD8 001E58 0020+00 1/0 0/0 0/0 .text            daObj_KBacket_Create__FPv */
static void daObj_KBacket_Create(void* param_0) {
    // NONMATCHING
}

/* 80587BD8-80587BF8 001E78 0020+00 1/0 0/0 0/0 .text            daObj_KBacket_Delete__FPv */
static void daObj_KBacket_Delete(void* param_0) {
    // NONMATCHING
}

/* 80587BF8-80587C18 001E98 0020+00 1/0 0/0 0/0 .text            daObj_KBacket_Execute__FPv */
static void daObj_KBacket_Execute(void* param_0) {
    // NONMATCHING
}

/* 80587C18-80587C38 001EB8 0020+00 1/0 0/0 0/0 .text            daObj_KBacket_Draw__FPv */
static void daObj_KBacket_Draw(void* param_0) {
    // NONMATCHING
}

/* 80587C38-80587C40 001ED8 0008+00 1/0 0/0 0/0 .text            daObj_KBacket_IsDelete__FPv */
static bool daObj_KBacket_IsDelete(void* param_0) {
    return true;
}

/* 80587C40-80587C88 001EE0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80587C88-80587CA4 001F28 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
extern "C" void func_80587C88(void* _this, int* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80587FCC-80587FD8 000154 000C+00 2/2 0/0 0/0 .data            __vt__21daObj_KBacket_Param_c */
SECTION_DATA extern void* __vt__21daObj_KBacket_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__21daObj_KBacket_Param_cFv,
};

/* 80587FE0-80587FEC 000008 000C+00 1/1 0/0 0/0 .bss             @3810 */
static u8 lit_3810[12];

/* 80587FEC-80587FF0 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80587CA4-80587D18 001F44 0074+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_kbacket_cpp */
void __sinit_d_a_obj_kbacket_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80587CA4, __sinit_d_a_obj_kbacket_cpp);
#pragma pop

/* 80587D18-80587D60 001FB8 0048+00 2/1 0/0 0/0 .text            __dt__21daObj_KBacket_Param_cFv */
daObj_KBacket_Param_c::~daObj_KBacket_Param_c() {
    // NONMATCHING
}

/* 80587D60-80587D68 002000 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80587D60() {
    // NONMATCHING
}

/* 80587D68-80587D70 002008 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80587D68() {
    // NONMATCHING
}

/* 80587E70-80587E70 0000EC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
