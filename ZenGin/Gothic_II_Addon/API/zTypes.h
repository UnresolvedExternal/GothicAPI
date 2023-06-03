﻿// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZTYPES_H__VER3__
#define __ZTYPES_H__VER3__

namespace Gothic_II_Addon {

  typedef float               zREAL;
  typedef int                 zTFrameCtr;
  typedef int                 zBOOL;
  typedef char                zBOOL8;
  typedef short int           zBOOL16;
  typedef int                 zBOOL32;
  typedef char                zINT8;
  typedef char                zSINT8;
  typedef unsigned char       zUINT8;
  typedef short               zINT16;
  typedef short               zSINT16;
  typedef unsigned short      zUINT16;
  typedef long                zINT32;
  typedef long                zSINT32;
  typedef unsigned long       zUINT32;
  typedef unsigned __int64    zQWORD;
  typedef unsigned __int64    zUQWORD;
  typedef signed  __int64     zSQWORD;
  typedef unsigned long       zDWORD;
  typedef unsigned long int   zUDWORD;
  typedef signed long int     zSDWORD;
  typedef signed long         zLONG;
  typedef unsigned short int  zWORD;
  typedef unsigned short int  zUWORD;
  typedef signed short int    zSWORD;
  typedef signed short int    zINT;
  typedef unsigned char       zBYTE;
  typedef unsigned char       zUBYTE;
  typedef signed char         zSBYTE;
  typedef float (*LerpFunc)( const float, const float );

  typedef zBOOL(
    zTStaticIntersectionTest)(zREAL timeStamp, 
    zCCollisionObject*  collObject0, const zMAT4& trafoObj0,
    zCCollisionObject*  collObject1, const zMAT4& trafoObj1,
    zCCollisionReport** ppoCollReport);

  typedef zBOOL(zTDynamicIntersectionTest)(
    zCCollisionObject*  collObject0,
    zCCollisionObject*  collObject1,
    zCCollisionReport** ppoCollReport);

#ifndef _FILE_DEFINED
  struct _iobuf {
    zOPERATORS_DECLARATION()

    char *_ptr;
    int   _cnt;
    char *_base;
    int   _flag;
    int   _file;
    int   _charbuf;
    int   _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
#define _FILE_DEFINED
#endif

#ifndef _finddata_t
  struct _finddata_t {
    zOPERATORS_DECLARATION()

    unsigned int  attrib;
    long long     time_create;
    long long     time_access;
    long long     time_write;
    unsigned long size;
    char          name[260];
  };
#endif

  enum RTTI_TD
  {
    TD_zSTRING                             = 0x0088DC64,
    TD_zCCSManager                         = 0x0088DD8C,
    TD_oCCSManager                         = 0x0088DDA8,
    TD_zCEventCore                         = 0x0088DDC4,
    TD_zCObject                            = 0x0088DDE0,
    TD_zCEventMessage                      = 0x0088DDF8,
    TD_zCCSCamera_EventMsgActivate         = 0x0088DE18,
    TD_zCCSDebugger                        = 0x0088DE5C,
    TD_zCCSPlayer                          = 0x0088DE78,
    TD_oCCSPlayer                          = 0x0088DE94,
    TD_zCWorld                             = 0x0088DEFC,
    TD_oCWorld                             = 0x0088DF14,
    TD_zCCSProps                           = 0x0088DF98,
    TD_oCCSProps                           = 0x0088DFB0,
    TD_zCVob                               = 0x0088DFE0,
    TD_zCTriggerBase                       = 0x0088DFF4,
    TD_zCTrigger                           = 0x0088E010,
    TD_oCCSTrigger                         = 0x0088E028,
    TD_zCCSBlockBase                       = 0x0088E0D8,
    TD_zCCSBlock                           = 0x0088E0F4,
    TD_zCCutscene                          = 0x0088E10C,
    TD_zCCSCutsceneContext                 = 0x0088E128,
    TD_zCCSAtomicBlock                     = 0x0088E7A0,
    TD_zCCSSyncBlock                       = 0x0088E7DC,
    TD_zCCSRole                            = 0x0088E804,
    TD_zCEvMsgCutscene                     = 0x0088E83C,
    TD_zCCSBlockPosition                   = 0x0088EA44,
    TD_zCCSCamera                          = 0x0088EE70,
    TD_zCCSLib                             = 0x0088F0D8,
    TD_zCCSPoolItem                        = 0x0088F25C,
    TD_zCVideoPlayer                       = 0x0088FBA0,
    TD_zCBinkPlayer                        = 0x0088FBBC,
    TD_oCBinkPlayer                        = 0x0088FBD8,
    TD_zCGameInfo                          = 0x0088FD8C,
    TD_oCGameInfo                          = 0x0088FDA8,
    TD_zCInputCallback                     = 0x0088FE34,
    TD_CGameManager                        = 0x0088FE54,
    TD_zCScanDirFileHandler                = 0x0088FEEC,
    TD_zCTextureFileHandler                = 0x0088FF10,
    TD_zCObjectFactory                     = 0x0089020C,
    TD_oCObjectFactory                     = 0x0089022C,
    TD_zCSoundSystem                       = 0x00890C80,
    TD_zCSndSys_MSS                        = 0x00890C9C,
    TD_zCMenu                              = 0x00890DC4,
    TD_oCMenu_Main                         = 0x00890DDC,
    TD_oCMenuSavegame                      = 0x00890DF8,
    TD_oCNpc                               = 0x008913B0,
    TD_zCSkyControler                      = 0x00891610,
    TD_zCSkyControler_Outdoor              = 0x00891630,
    TD_zCPlayerInfo                        = 0x00891C18,
    TD_oCPlayerInfo                        = 0x00891C34,
    TD_oCSavegameInfo                      = 0x00891D38,
    TD_oCSavegameManager                   = 0x00891E78,
    TD_zCSystemInfo                        = 0x00891F40,
    TD_oCSystemInfo                        = 0x00891F5C,
    TD_oCTriggerChangeLevel                = 0x00892198,
    TD_oCTriggerScript                     = 0x008921CC,
    TD_oCObjectGenerator                   = 0x00892284,
    TD_zCViewBase                          = 0x008922F4,
    TD_zCView                              = 0x00892310,
    TD_zCViewStatusBar                     = 0x00892328,
    TD_oCViewStatusBar                     = 0x00892348,
    TD_zCBuffer                            = 0x00892784,
    TD_zFILE                               = 0x00892AE0,
    TD_zFILE_FILE                          = 0x00892AF4,
    TD_zPATH                               = 0x00892CA0,
    TD_zFILE_VDFS                          = 0x00892D30,
    TD_zERROR                              = 0x00892FB8,
    TD_zCFileCSV                           = 0x008931F8,
    TD_zCNetStatistics                     = 0x00893214,
    TD_zCNet                               = 0x00893234,
    TD_zCEventManager                      = 0x008940B8,
    TD_zCNetEventManager                   = 0x008940D8,
    TD_zCNetVobControl                     = 0x008942E8,
    TD_zCNetHost                           = 0x008943B8,
    TD_zCNetManager                        = 0x00894434,
    TD_zCNetMessage                        = 0x008944B0,
    TD_zCNetSession                        = 0x0089460C,
    TD_zCNetVersion                        = 0x00894628,
    TD_zCOption                            = 0x00894BD8,
    TD_zCPlayerGroup                       = 0x00894EBC,
    TD_zCScanDir                           = 0x008950C0,
    TD_zCViewProgressBar                   = 0x00895468,
    TD_zCWorldInfo                         = 0x008954E8,
    TD_zCVisual                            = 0x00895EF8,
    TD_zCModel                             = 0x00895F10,
    TD_zCDecal                             = 0x00896054,
    TD_oCMenu_ChgKeys                      = 0x008960BC,
    TD_oCMenu_Log                          = 0x00896294,
    TD_zCMenuItemText                      = 0x00896318,
    TD_zCMenuItem                          = 0x00896338,
    TD_zCMenuItemList                      = 0x00896354,
    TD_oCMenu_Status                       = 0x008963A4,
    TD_oCStatusScreen                      = 0x008963D0,
    TD_oCLogScreen                         = 0x00896458,
    TD_oCMapScreen                         = 0x008964D8,
    TD_oCVob                               = 0x008969B8,
    TD_oCSpell                             = 0x008969CC,
    TD_zCEffect                            = 0x00896E7C,
    TD_oCVisualFX                          = 0x00896E94,
    TD_zCAIBase                            = 0x00896FBC,
    TD_oCVisualFXAI                        = 0x00896FD4,
    TD_zCParticleFX                        = 0x00897AE0,
    TD_oCVisFX_MultiTarget                 = 0x00897B54,
    TD_zCAICamera                          = 0x00897CEC,
    TD_zCAIPlayer                          = 0x00898E80,
    TD_zCCamTrj_KeyFrame                   = 0x00898EA4,
    TD_zCCSCamera_EventMsg                 = 0x00899138,
    TD_zCFlash                             = 0x008998B0,
    TD_zCPolyStrip                         = 0x008998C8,
    TD_zCFlash_zCBolt                      = 0x008998E4,
    TD_zCInput                             = 0x00899918,
    TD_zCInput_Win32                       = 0x0089A4FC,
    TD_zCMenuItemInput                     = 0x0089A97C,
    TD_zCMenuItemSlider                    = 0x0089A99C,
    TD_zCMenuItemChoice                    = 0x0089A9BC,
    TD_zCMenuItemButton                    = 0x0089A9DC,
    TD_zCMusicTheme_DM                     = 0x0089AC14,
    TD_zCMusicTheme                        = 0x0089AC34,
    TD_zCMusicSystem                       = 0x0089AC50,
    TD_zCMusicSys_DirectMusic              = 0x0089AC6C,
    TD_zCMusicJingle                       = 0x0089AFAC,
    TD_zCCallback                          = 0x0089B70C,
    TD_zCWorldPerFrameCallback             = 0x0089B728,
    TD_zCSndDebugCallback                  = 0x0089B750,
    TD_zCResource                          = 0x0089BD00,
    TD_zCSoundFX                           = 0x0089BD1C,
    TD_zCSndFX_MSS                         = 0x0089BD34,
    TD_zCViewWindow                        = 0x0089D988,
    TD_zCVolatileMemoryBase                = 0x0089EC24,
    TD_zCSparseArrayBase                   = 0x0089EE04,
    TD_zCCacheBase                         = 0x0089EE88,
    TD_zCArchiverFactory                   = 0x0089EF98,
    TD_zCArchiver                          = 0x0089F204,
    TD_zCArchiverBinSafe                   = 0x0089F220,
    TD_zCArchiverGeneric                   = 0x0089F93C,
    TD_zCRndAlphaSortObject                = 0x0089FEA0,
    TD_zCRndAlphaSortObject_Vob            = 0x0089FEC4,
    TD_zCVobLight                          = 0x008A00EC,
    TD_zCCollisionReport                   = 0x008A0DF0,
    TD_zCCollisionDetector                 = 0x008A0E10,
    TD_zCCollisionObject                   = 0x008A0EA8,
    TD_zCCollObjectBase                    = 0x008A0EC8,
    TD_zCCollObjectUndef                   = 0x008A0EE8,
    TD_zCCollObjectLevelPolys              = 0x008A0F08,
    TD_zCCollObjectPoint                   = 0x008A0F30,
    TD_zCCollObjectProjectile              = 0x008A0F50,
    TD_zCCollObjectComplex                 = 0x008A0F78,
    TD_zCCollObjectBoxBlocker              = 0x008A0F9C,
    TD_zCCollObjectBoxPassThrough          = 0x008A0FC4,
    TD_zCCollObjectCharacter               = 0x008A0FF0,
    TD_zCConvexPrimitive                   = 0x008A1014,
    TD_zCConvexPrimitiveScaleTrans         = 0x008A1034,
    TD_zCConvexPrimitiveUnitSphere         = 0x008A1180,
    TD_zCConvexPrimitiveEllipsoid          = 0x008A11AC,
    TD_zCEngine                            = 0x008A1454,
    TD_zCFFT                               = 0x008A15F0,
    TD_zCLensFlareFX                       = 0x008A2188,
    TD_zCMaterial                          = 0x008A2274,
    TD_zCMalloc                            = 0x008A2520,
    TD_zCMallocGeneric                     = 0x008A2538,
    TD_zCMesh                              = 0x008A25D8,
    TD_zCVisualAnimate                     = 0x008A2D64,
    TD_zCModelMeshLib                      = 0x008A3024,
    TD_zCModelAni                          = 0x008A3214,
    TD_zCModelConvertFileHandler           = 0x008A4748,
    TD_zCMorphMesh                         = 0x008A47B4,
    TD_zCMorphMeshConvertFileHandler       = 0x008A4AB0,
    TD_zCPFXPerFrameCallback               = 0x008A4F18,
    TD_zCLightning_zCBolt                  = 0x008A51AC,
    TD_zCProgMeshProto                     = 0x008A534C,
    TD_zCMeshSoftSkin                      = 0x008A536C,
    TD_zCProgMeshConvertFileHandler        = 0x008A55E0,
    TD_zCQuadMark                          = 0x008A5658,
    TD_zCRndAlphaSortObject_WorldPoly      = 0x008A5A08,
    TD_zCThread                            = 0x008A5C3C,
    TD_zCResourceManager                   = 0x008A5C54,
    TD_zCSession                           = 0x008A5D8C,
    TD_zCSkyControler_Mid                  = 0x008A5DF4,
    TD_zCSkyControler_Indoor               = 0x008A5E18,
    TD_zCUnderwaterPFX                     = 0x008A5E60,
    TD_zCTextureFileFormat                 = 0x008A66E0,
    TD_zCTextureFileFormatTGA              = 0x008A6704,
    TD_zCTextureFileFormatInternal         = 0x008A6748,
    TD_zCTextureExchange                   = 0x008A6B74,
    TD_zCTexture                           = 0x008A6B94,
    TD_zCLightMap                          = 0x008A6FC8,
    TD_zCSyncObject                        = 0x008A7034,
    TD_zCCriticalSection                   = 0x008A7050,
    TD_zCMutex                             = 0x008A7070,
    TD_zCVertexBuffer                      = 0x008A7544,
    TD_zCVobLightPreset                    = 0x008A765C,
    TD_zCVobLevelCompo                     = 0x008A768C,
    TD_zCVobStair                          = 0x008A7C8C,
    TD_zCTriggerUntouch                    = 0x008A7CCC,
    TD_zCMessageFilter                     = 0x008A7CFC,
    TD_zCCodeMaster                        = 0x008A7D2C,
    TD_zCMoverControler                    = 0x008A7D5C,
    TD_zCTriggerWorldStart                 = 0x008A7D90,
    TD_zCTriggerList                       = 0x008A7DC4,
    TD_zCTriggerTeleport                   = 0x008A7DFC,
    TD_zCEarthquake                        = 0x008A7E2C,
    TD_zCPFXControler                      = 0x008A7E58,
    TD_zCTouchDamage                       = 0x008A7E88,
    TD_zCTouchAnimate                      = 0x008A7EB4,
    TD_zCTouchAnimateSound                 = 0x008A7EE8,
    TD_zCVobAnimate                        = 0x008A7F1C,
    TD_zCVobLensFlare                      = 0x008A7F48,
    TD_zCEventCommon                       = 0x008A7F88,
    TD_zCEventMover                        = 0x008A7FB4,
    TD_zCEventScreenFX                     = 0x008A7FE0,
    TD_zCMover                             = 0x008A81CC,
    TD_zCVobScreenFX                       = 0x008A8750,
    TD_zCBBox3DSorterBase                  = 0x008A8EC4,
    TD_zCBBox3DSorterBase_zTBoxSortHandle  = 0x008A8F14,
    TD_zCMusicSys_Dummy                    = 0x008A99D8,
    TD_zCSoundSystemDummy                  = 0x008A99F8,
    TD_zCSoundFXDummy                      = 0x008AA9B8,
    TD_zCZone                              = 0x008AA9D8,
    TD_zCZoneZFog                          = 0x008AA9F0,
    TD_zCZoneZFogDefault                   = 0x008AAA0C,
    TD_zCVobCallback                       = 0x008AAA2C,
    TD_zCVobCallback_PrintBigBBox          = 0x008AAA48,
    TD_zCShowMemCallback                   = 0x008AAE90,
    TD_zCZoneReverb                        = 0x008AAF88,
    TD_zCZoneReverbDefault                 = 0x008AAFB8,
    TD_zCZoneVobFarPlane                   = 0x008AAFF0,
    TD_zCZoneVobFarPlaneDefault            = 0x008AB02C,
    TD_zCZoneMusic                         = 0x008AB060,
    TD_zCVobSound                          = 0x008AB0BC,
    TD_zCVobSoundDaytime                   = 0x008AB0D8,
    TD_oCZoneMusic                         = 0x008AB2F0,
    TD_oCZoneMusicDefault                  = 0x008AB320,
    TD_zCMusicControler                    = 0x008AB62C,
    TD_zCEventMusicControler               = 0x008AB664,
    TD_zCRenderer                          = 0x008ACDB0,
    TD_zCRnd_D3D                           = 0x008ACDCC,
    TD_zD3D_alphaPoly                      = 0x008ACEB0,
    TD_zCTex_D3D                           = 0x008ADD10,
    TD_zCVertexBuffer_D3D                  = 0x008AE650,
    TD_zCTextureConvert                    = 0x008AF01C,
    TD_zCTexConGeneric                     = 0x008AF03C,
    TD_oCCollObjectCharacter               = 0x008AF14C,
    TD_oCDocumentManager                   = 0x008AF328,
    TD_oCViewDocument                      = 0x008AF348,
    TD_oCViewDocumentMap                   = 0x008AF368,
    TD_oCMobInter                          = 0x008AF690,
    TD_oCMsgConversation                   = 0x008AF8F4,
    TD_zCViewObject                        = 0x008B0BA4,
    TD_zCViewDraw                          = 0x008B0BC0,
    TD_zCViewFX                            = 0x008B0BDC,
    TD_zCViewPrint                         = 0x008B0BF4,
    TD_zCViewDialog                        = 0x008B0C10,
    TD_oCViewDialogInventory               = 0x008B0C2C,
    TD_oCViewDialogItem                    = 0x008B0C64,
    TD_oCViewDialogItemContainer           = 0x008B0CA0,
    TD_oCViewDialogStealContainer          = 0x008B0CE4,
    TD_oCViewDialogTrade                   = 0x008B0D24,
    TD_zCViewDialogChoice                  = 0x008B0DD0,
    TD_oCAniCtrl_Human                     = 0x008B0E48,
    TD_oCAIHuman                           = 0x008B0E68,
    TD_oCAICamera                          = 0x008B10E0,
    TD_oCAIHuman_Stand                     = 0x008B10FC,
    TD_oCAISound                           = 0x008B1170,
    TD_oCAIVobMove                         = 0x008B1188,
    TD_oCAIVobMoveTorch                    = 0x008B1208,
    TD_oCAIArrowBase                       = 0x008B1238,
    TD_oCAIArrow                           = 0x008B1288,
    TD_oCAIDrop                            = 0x008B135C,
    TD_oCSkyControler_Barrier              = 0x008B1FE8,
    TD_oCAskBox                            = 0x008B2018,
    TD_oCDoc                               = 0x008B2080,
    TD_oCGame                              = 0x008B21F4,
    TD_oCViewGothicProgressBar             = 0x008B2468,
    TD_oCItem                              = 0x008B2534,
    TD_zCVobSpot                           = 0x008B2AC0,
    TD_oCMOB                               = 0x008B5AD0,
    TD_oCMsgAttack                         = 0x008B6258,
    TD_oCMobContainer                      = 0x008B634C,
    TD_oCInfoManager                       = 0x008B6AE4,
    TD_oCInfo                              = 0x008B6B2C,
    TD_oCItemContainer                     = 0x008B6DA8,
    TD_oCNpcContainer                      = 0x008B70C8,
    TD_oCStealContainer                    = 0x008B7104,
    TD_oCNpcInventory                      = 0x008B7124,
    TD_oCMissionManager                    = 0x008B7620,
    TD_oCMission                           = 0x008B7640,
    TD_oCMobBed                            = 0x008B7750,
    TD_oCMobSwitch                         = 0x008B7780,
    TD_oCMobLockable                       = 0x008B77C4,
    TD_oCMobMsg                            = 0x008B77E0,
    TD_oCMobWheel                          = 0x008B7804,
    TD_oCMobLadder                         = 0x008B7834,
    TD_oCMobDoor                           = 0x008B7864,
    TD_oCMobFire                           = 0x008B7888,
    TD_oCMobItemSlot                       = 0x008B78D0,
    TD_oCDummyVobGenerator                 = 0x008B7900,
    TD_oCNewsMemory                        = 0x008B7F94,
    TD_oCNews                              = 0x008B8074,
    TD_oCNpcTalent                         = 0x008B85A0,
    TD_oCNpcMessage                        = 0x008B9DB4,
    TD_oCMsgDamage                         = 0x008B9DDC,
    TD_oCMsgWeapon                         = 0x008B9E04,
    TD_oCMsgMovement                       = 0x008B9E30,
    TD_oCMsgUseItem                        = 0x008B9E68,
    TD_oCMsgState                          = 0x008B9E90,
    TD_oCMsgManipulate                     = 0x008B9EBC,
    TD_oCMsgMagic                          = 0x008B9EFC,
    TD_oCNpc_States                        = 0x008BA718,
    TD_oCRtnCutscene                       = 0x008BAB24,
    TD_oCTouchDamage                       = 0x008BB40C,
    TD_zCWaypoint                          = 0x008BB428,
    TD_oCWaypoint                          = 0x008BB444,
    TD_zCWay                               = 0x008BB460,
    TD_oCWay                               = 0x008BB474,
    TD_zCConsole                           = 0x008BB6D8,
    TD_zCViewText                          = 0x008BC8D8,
    TD_zCVobWaypoint                       = 0x008BC938,
    TD_zCWayNet                            = 0x008BC954,
    TD_zCRoute                             = 0x008BCB74,
    TD_zCVobStartpoint                     = 0x008BCCDC
  };
} // namespace Gothic_II_Addon

#endif // __ZTYPES_H__VER3__ 