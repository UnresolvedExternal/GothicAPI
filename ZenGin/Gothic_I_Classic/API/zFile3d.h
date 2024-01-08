// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZFILE3D_H__VER0__
#define __ZFILE3D_H__VER0__

namespace Gothic_I_Classic {

  // sizeof 01h
  class zCFile3DS {
  public:
    zOPERATORS_DECLARATION()


    zCFile3DS() {}
    void Load3DS( zSTRING const&, zCMesh* ) zCall( 0x00546C00 );
    void Save3DS( zSTRING const&, zCMesh* ) zCall( 0x00548320 );

    // user API
    #if __has_include("zCFile3DS.inl")
    #include "zCFile3DS.inl"
    #endif
  };

  // sizeof 04h
  class zCFileQuakeBSP {
  public:
    zOPERATORS_DECLARATION()

    zFILE* file; // sizeof 04h    offset 00h

    void zCFileQuakeBSP_OnInit()                           zCall( 0x00549F40 );
    zCFileQuakeBSP()                                       zInit( zCFileQuakeBSP_OnInit() );
    ~zCFileQuakeBSP()                                      zCall( 0x00549F50 );
    void LoadQuakeBSP( zSTRING const&, zCMesh*, zCWorld* ) zCall( 0x00549F70 );

    // user API
    #if __has_include("zCFileQuakeBSP.inl")
    #include "zCFileQuakeBSP.inl"
    #endif
  };

  // sizeof 10h
  class zCFileBIN {
  public:
    zOPERATORS_DECLARATION()

    int lastStart;    // sizeof 04h    offset 00h
    int nextStart;    // sizeof 04h    offset 04h
    int externalFile; // sizeof 04h    offset 08h
    zFILE* file;      // sizeof 04h    offset 0Ch

    void zCFileBIN_OnInit()               zCall( 0x00550AF0 );
    zCFileBIN()                           zInit( zCFileBIN_OnInit() );
    ~zCFileBIN()                          zCall( 0x00550B10 );
    void BinCreate( zSTRING const& )      zCall( 0x00550B90 );
    void BinClose()                       zCall( 0x00550BC0 );
    void BinStartChunk( unsigned short )  zCall( 0x0056CC80 );
    int BinWriteSrcFileStats( zSTRING& )  zCall( 0x0056CD20 );
    void BinEndChunk()                    zCall( 0x0056DA20 );
    void BinWriteString( zSTRING const& ) zCall( 0x0056DCC0 );
    int BinReadCompareSrcFileStats()      zCall( 0x00570240 );
    void BinSkipChunk()                   zCall( 0x005818B0 );
    void BinSetFile( zFILE* )             zCall( 0x005F89E0 );

    // user API
    #if __has_include("zCFileBIN.inl")
    #include "zCFileBIN.inl"
    #endif
  };

} // namespace Gothic_I_Classic

#endif // __ZFILE3D_H__VER0__