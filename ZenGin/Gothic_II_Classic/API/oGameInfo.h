// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __OGAME_INFO_H__VER2__
#define __OGAME_INFO_H__VER2__

#include "zGameInfo.h"

namespace Gothic_II_Classic {

  // sizeof 18h
  class oCGameInfo : public zCGameInfo {
  public:
    zOPERATORS_DECLARATION()


    void oCGameInfo_OnInit()                      zCall( 0x00423B00 );
    oCGameInfo() : zCtor( zCGameInfo )            zInit( oCGameInfo_OnInit() );
    virtual ~oCGameInfo()                         zCall( 0x00423CD0 );
    virtual void Init()                           zCall( 0x00423CE0 );
    virtual void Pack( zCBuffer&, unsigned char ) zCall( 0x00423DA0 );
    virtual void Unpack( zCBuffer& )              zCall( 0x00423DB0 );

    // user API
    #if __has_include("oCGameInfo.inl")
    #include "oCGameInfo.inl"
    #endif
  };

} // namespace Gothic_II_Classic

#endif // __OGAME_INFO_H__VER2__