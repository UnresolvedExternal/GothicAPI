﻿// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZPROTOTYPES_H__VER2__
#define __ZPROTOTYPES_H__VER2__

namespace Gothic_II_Classic {
  class zCEngine;
  class zCMallocGeneric;
  struct zTEngineStats;
  class zCLineCache;
  struct zTViewportData;
  class zCCamera;
  class zCVertex;
  class zCVertFeature;
  class zCPolygon;
  class zCPortal;
  class zCAccount;
  class zCAIBase;
  class zCAIBaseSound;
  class zCAICamera;
  struct zSEvasionSearchDesc;
  struct zSPathSearchResult;
  struct zSPathSearchState;
  struct zSPathSearchState_Internal;
  class zCSphereCoordsCache;
  class zCPathSearch;
  class zCMovementTracker;
  class zCAIPlayer;
  class zVEC2;
  class zVEC3;
  class zVEC4;
  class zMAT3;
  class zMAT4;
  class zCQuat;
  class zCPackedNormal16;
  struct zComplex;
  class zCValueSmooth;
  class zCVEC3Smooth;
  class zCArchiverFactory;
  class zCArchiver;
  class zCArchiverBinSafe;
  class zCArchiverGeneric;
  class zCBinkPlayer;
  class zCMeshOctreeNode;
  class zCRayTurbo;
  class zCRayTurboAdmin;
  class zCBspBase;
  class zCBspNode;
  class zCBspLeaf;
  class zCBspTree;
  class zTPolyNode;
  class zCCBspNode;
  class zCCBspTree;
  class zCBspSector;
  class zCBuildPortal;
  class zCBuffer;
  struct zTBCylinder3D;
  struct zTBSphere3D;
  struct zTBBox2D;
  struct zTBBox3D;
  struct zTNode;
  class zCOBBox3D;
  class zCCSCutsceneContext;
  class zCCSDebugger;
  struct zTCSBlockPosition;
  class zCEvMsgCutscene;
  class zCCSRole;
  class zCCSBlockBase;
  class zCCSAtomicBlock;
  class zCCSBlockPosition;
  class zCCSBlock;
  class zCCSSyncBlock;
  class zCCutscene;
  class zCCSLib;
  class zCCSManager;
  class zCCSPlayer;
  class zCCSPoolItem;
  class zCCSProps;
  class zCCollisionReport;
  class zCCollisionDetector;
  class zCCollisionObjectDef;
  class zCCollisionObject;
  class zCCollObjectBase;
  class zCCollObjectUndef;
  class zCCollObjectPoint;
  class zCCollObjectProjectile;
  class zCCollObjectComplex;
  class zCCollObjectLevelPolys;
  class zCCollObjectBoxPassThrough;
  class zCCollObjectBoxBlocker;
  class zCCollObjectCharacter;
  class zCConDat;
  class zCConsole;
  class zCConvexCollisionCache;
  class zCConvexPrimitive;
  class zCConvexPrimitiveUnitSphere;
  class zCConvexPrimitiveScaleTrans;
  class zCConvexPrimitiveEllipsoid;
  class zCCamTrj_KeyFrame;
  class zCCSCamera_EventMsg;
  class zCCSCamera_EventMsgActivate;
  class zCCSCamera;
  class zDATE;
  class zFILE_STATS;
  class zFILE_INFO;
  class zFILE;
  class zFILE_FILE;
  class zPATH;
  class zFILE_VDFS;
  class zCMgcEigenD;
  struct ASSERT_FAIL_INFO;
  class zERROR;
  class zCEventManager;
  class zRandom_Gauss;
  class zCFFT;
  class zCFile3DS;
  class zCFileQuakeBSP;
  class zCFileBIN;
  class zCFileCSV;
  class zCFlash;
  class zCFont;
  class zCFontMan;
  class zCGameInfo;
  struct TGfx_Gfx;
  class zCGfx;
  struct zSKeyMapping;
  struct zSCtrlValue;
  class zCInput;
  class zCInput_Win32;
  class zCPositionKey;
  class zCCubicPolynomial;
  class zCKBSpline;
  class zCLensFlareFX;
  class zCTexAniCtrl;
  class zCMaterial;
  class zCCircleArc3D;
  class zCPose;
  struct zTMallocStats;
  struct zTMallocProcessStats;
  class zCMalloc;
  class zCMallocWin32Debug;
  class zCVolatileMemoryBase;
  class zCMemPoolBase;
  class zCMenu;
  class zCMenuItem;
  class zCMenuItemInput;
  class zCMenuItemText;
  class zCMenuItemSlider;
  class zCMenuItemButton;
  class zCMenuItemChoice;
  struct zTMenuItemListElement;
  class zCMenuItemList;
  class zCModelMeshLib;
  class zCModelAniEvent;
  class zCModelNode;
  struct zTMdl_AniSample;
  class zCModelAni;
  class zCModelPrototype;
  class zCModelAniActive;
  class zCModelTexAniState;
  class zCModelNodeInst;
  struct zTRandAni;
  struct zTAniAttachment;
  class zCModel;
  class zCModelConvertFileHandler;
  class zCMorphMeshAni;
  class zCMorphMeshProto;
  class zCMorphMesh;
  class zCMorphMeshConvertFileHandler;
  class zCMoveRecorder;
  class CMov_Movement;
  class zCMusicTheme;
  class zCMusicJingle;
  class zCMusicSystem;
  class zCMusicSys_Dummy;
  class zCEventMusicControler;
  class zCMusicControler;
  class zCMusicTheme_DM;
  class zCMusicJingle_DM;
  class CMusDrvProperties;
  class zCMusicSys_DirectMusic;
  struct zTNetStatistics;
  class zCNetStatistics;
  class zCNet;
  class zCNetEventManager;
  class zCNetHost;
  class zCNetManager;
  struct zTNetMessageHeader;
  class zCNetMessage;
  class zCNetMessageQueue;
  class zCNetSession;
  class zCNetVersion;
  class zCNetVobControl;
  struct zTNetAddress;
  struct zTNetBufferInfo;
  struct zTNetPacket;
  struct zTNetTimeout;
  class zCLivingObjectsState;
  class zCClassDef;
  class zCObject;
  class zCObjectFactory;
  class zCOptionEntry;
  class zCOptionSection;
  class zCOption;
  class zCPar_TreeNode;
  class zCPar_File;
  class zCParser;
  class zCPar_StringTable;
  class zCPar_Symbol;
  class zCPar_SymbolTable;
  class zCPar_Stack;
  class zCPar_DataStack;
  struct zSParticle;
  class zCParticleEmitter;
  class zCParticleEmitterVars;
  class zCParticleFX;
  class zCRigidBody;
  class zCPlayerGroup;
  class zCPlayerInfo;
  class zCVertexFeaturePool;
  class zCPolygonPool;
  class zCVertexPool;
  class zCMeshPool;
  class zCMeshesPool;
  class zCPolyStrip;
  class zCLightning;
  class zCQuadMark;
  class zCPrime;
  struct zTPMWedge;
  struct zTPMTriangle;
  struct zTPMTriangleEdges;
  struct zTPMEdge;
  struct zTPMVertexUpdate;
  class zCProgMeshProto;
  class zCProgMeshBuilder;
  class zCProgMesh;
  class zCMeshSoftSkin;
  class zCProgMeshConvertFileHandler;
  class zCRayCache;
  class zCRenderLight;
  class zCRndAlphaSortObject;
  struct zTRnd_TexFormatInfo;
  struct zTRnd_DeviceInfo;
  struct zTRnd_VidModeInfo;
  struct zTRnd_Stats;
  struct zTRndSimpleVertex;
  struct zTRndSurfaceDesc;
  class zCRenderer;
  class zCRenderLightContainer;
  class zCRenderManager;
  class zCShaderStage;
  class zCShader;
  class zCMapDetailTexture;
  class zCResourceManager;
  class zCResource;
  class zD3D_alphaPoly;
  class zCRnd_D3D;
  class zCSurfaceCache_D3D;
  class zCDXTCCache_D3D;
  struct zD3D_savedTexture;
  class zCTex_D3D;
  class zCVertexBuffer_D3D;
  struct dxDEVICE;
  struct dxDDMODE;
  struct zD3DTEX;
  class zCTex_RndGlide;
  class zCRnd_Glide;
  class CDIBSection16;
  struct zSRndGlide_AlphaPoly;
  class zCScanDirFileHandler;
  class zCScanDir;
  class zCSession;
  class zCUnderwaterPFX;
  class zCSkyControler;
  class zCSkyControler_Mid;
  class zCSkyControler_Indoor;
  class zCSkyLayerData;
  class zCSkyState;
  class zCSkyLayer;
  class zCSkyPlanet;
  class zCSkyControler_Outdoor;
  class zCOutdoorRainFX;
  class zCDrvProperties_MSS;
  class zCActiveSnd;
  class zCSndChannel;
  class zCSndFrame;
  class zCWaveData;
  class zCSndSys_MSS;
  class zCSndFX_MSS;
  class zCHandleManager;
  class zCSoundSystem;
  class zCSoundFX;
  class zCSoundFXDummy;
  class zCSoundSystemDummy;
  class zCSoundManager;
  struct zTErrorMessage;
  class zCSystemInfo;
  struct RGBPIXEL;
  class zCTexConGeneric;
  struct zTTexPalette;
  class zCTextureInfo;
  class zCTextureFileFormat;
  class zCTextureFileFormatTGA;
  class zCTextureFileFormatInternal;
  class zCTextureExchange;
  class zCTextureConvert;
  class zCTexture;
  class zCLightMap;
  class zCTextureFileHandler;
  class zCThread;
  class zCSyncObject;
  class zCCriticalSection;
  class zCMutex;
  class zCTimer;
  class zCChecksum;
  class zCChecksum16;
  class zCFPUControler;
  struct zCOLOR;
  struct zTPlane;
  class zCVertexBuffer;
  class zCVertexBufferDyn;
  class zCVertexBufferDyn2;
  class zCVertexBufferManager;
  class zCVertexTransform;
  class zCVideoPlayer;
  struct VIDEO_INFO;
  struct VIDMEM_INFO;
  struct SURFACE_INFO;
  struct SURFACE;
  struct VIDMODE;
  struct BLIT_CMD;
  struct CUSTOMCAPTION;
  class zCInputCallback;
  class zCViewText;
  class zCView;
  class zCViewBase;
  class zCViewDialog;
  class zCViewDialogChoice;
  class zCViewDraw;
  class zCViewFX;
  class zCPosition;
  class zCViewObject;
  class zCViewPrint;
  class zCViewFont;
  class zCViewText2;
  struct zTProgressRange;
  class zCViewProgressBar;
  class zCViewWindow;
  class zCViewStatusBar;
  struct zTRenderContext;
  class zCVisual;
  class zCVisualAnimate;
  class zCDecal;
  class zCMesh;
  class zCEventMessage;
  class zCEventCore;
  class zCVob;
  class zCVobLightData;
  class zCVobLightPreset;
  class zCVobLight;
  class zCVobLevelCompo;
  class zCVobIdentifier;
  class zCEventCommon;
  class zCTriggerBase;
  class zCTrigger;
  class zCEventMover;
  class zCMover;
  class zCTriggerTeleport;
  class zCTriggerList;
  class zCEffect;
  class zCEarthquake;
  class zCPFXControler;
  class zCTouchDamage;
  class zCVobStair;
  class zCTouchAnimate;
  class zCTouchAnimateSound;
  class zCVobAnimate;
  class zCVobLensFlare;
  class zCEventScreenFX;
  class zCVobScreenFX;
  class zCMessageFilter;
  class zCTriggerUntouch;
  class zCTriggerWorldStart;
  class zCCodeMaster;
  class zCMoverControler;
  class zCVobChar;
  class zCVobWaypoint;
  class zCWaypoint;
  class zCWay;
  class zCWayNet;
  class zCRoute;
  class zCVobSpot;
  class zCVobStartpoint;
  class zCCallback;
  class zCVobCallback;
  class zCWorldPerFrameCallback;
  struct zTTraceRayReport;
  class zCWorld;
  class zCWorldInfo;
  class zCBBox3DSorterBase;
  class zCZone;
  class zCZoneZFog;
  class zCZoneZFogDefault;
  class zCZoneReverb;
  class zCZoneReverbDefault;
  class zCZoneMusic;
  class zCZoneVobFarPlane;
  class zCZoneVobFarPlaneDefault;
  class zCVobSound;
  class zCVobSoundDaytime;
  class zCTransferConstr;
  class zCTransfer;
  class zCPatch;
  class zCPatchMap;
  enum zTAICamMsg;
  enum zTMatIDList;
  enum zTAnimationMode;
  enum zELogTopicStatus;
  enum zELogSection;
  enum TMobInterDirection;
  enum TMobMsgSubType;
  enum TDamageSubType;
  enum TWeaponSubType;
  enum TMovementSubType;
  enum TAttackSubType;
  enum TUseItemSubType;
  enum TStateSubType;
  enum TManipulateSubType;
  enum TConversationSubType;
  enum TConversationSubType;
  enum zTPortalType;
  enum zTWayPoint;
  enum zTSurfaceAlignMode;
  enum zTMovementState;
  enum zTArchiveMedium;
  enum zTAccessMode;
  enum zEOctreeChild;
  enum zTSpanningMode;
  enum zTCSPlayResult;
  enum TCutsceneSubType;
  enum zTCSRoleFlag;
  enum zTCSCheckResult;
  enum zTCSRunBehaviour;
  enum zEConfigState;
  enum zTCSCam_EvSubType;
  enum zTCSCam_ActivateSubType;
  enum zTCamTrj_FOR;
  enum zTCamTrj_LoopMode;
  enum zCOLLECT_MODE;
  enum zTFileSourceType;
  enum zTEventMusicControlerSubType;
  enum zTCamAlign;
  enum zTTexAniType;
  enum zTCamLocationHint;
  enum zTLoopType;
  enum zTSpeakerType;
  enum zTSndManMedium;
  enum zTOperatingSystem;
  enum zTCpuType;
  enum zTTexFileDesiredBPP;
  enum zTThread_Prio;
  enum LOCK_FLAGS;
  enum LOCK_FLAGS;
  enum zTCalcVertNormalMode;
  enum zTTimeBehavior;
  enum zTEventCoreSubType;
  enum zTVobCharClass;
  enum zTMovementMode;
  enum zTDynShadowType;
  enum zTEventCommonSubType;
  enum zTEventMoverSubType;
  enum zTMoverState;
  enum zTMoverAniType;
  enum zTMoverBehavior;
  enum zTTouchBehavior;
  enum zTPosLerpType;
  enum zTSpeedType;
  enum zTListProcess;
  enum zTDamageCollType;
  enum zTEventScreenFXSubType;
  enum zTMessageType;
  enum zTWorldLoadMode;
  enum zTWorldSaveMode;
  enum zTWorldLoadMergeMode;
  enum zTStaticWorldLightMode;
  enum zTSoundVolType;
  enum zTSoundMode;
  enum zTWld_RenderMode;
  enum zTRnd_ScreenMode;
  enum zTInfoMgrMode;
  enum TFAction;
  enum zETradeDialogSection;
  enum zEHeading;
  enum zTViewFX;
  enum zTViewFX;
  enum zTViewAlign;
  enum zTVisualCamAlign;
} // namespace Gothic_II_Classic

#endif // __ZPROTOTYPES_H__VER2__