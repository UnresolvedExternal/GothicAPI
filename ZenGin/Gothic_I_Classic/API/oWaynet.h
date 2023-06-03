﻿// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __OWAYNET_H__VER0__
#define __OWAYNET_H__VER0__

#include "zWaynet.h"

namespace Gothic_I_Classic {

  // sizeof 7Ch
  class oCWaypoint : public zCWaypoint {
  public:
    zOPERATORS_DECLARATION()


    void oCWaypoint_OnInit()              zCall( 0x006D4FC0 );
    oCWaypoint() : zCtor( zCWaypoint )    zInit( oCWaypoint_OnInit() );
    virtual ~oCWaypoint()                 zCall( 0x006D5020 );
    virtual int CanBeUsed( zCVob const* ) zCall( 0x006D5030 );

    // user API
    #include "..\..\Gothic_UserAPI\oCWaypoint.inl"
  };

  // sizeof 28h
  class oCWay : public zCWay {
  public:
    zOPERATORS_DECLARATION()

    oCMobLadder* ladder; // sizeof 04h    offset 20h
    oCMobDoor* door;     // sizeof 04h    offset 24h

    void oCWay_OnInit()                           zCall( 0x006D50A0 );
    oCWay() : zCtor( zCWay )                      zInit( oCWay_OnInit() );
    oCMobLadder* GetLadder()                      zCall( 0x006D5970 );
    oCMobDoor* GetDoor()                          zCall( 0x006D5980 );
    virtual ~oCWay()                              zCall( 0x006D50E0 );
    virtual void Init( zCWaypoint*, zCWaypoint* ) zCall( 0x006D5260 );
    virtual int CanBeUsed( zCVob const* )         zCall( 0x006D5170 );
    virtual int IsObjectOnWay( zCVob const* )     zCall( 0x006D5950 );

    // user API
    #include "..\..\Gothic_UserAPI\oCWay.inl"
  };

} // namespace Gothic_I_Classic

#endif // __OWAYNET_H__VER0__ 