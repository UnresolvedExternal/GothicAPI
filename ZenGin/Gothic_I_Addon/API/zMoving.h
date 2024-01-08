// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZMOVING_H__VER1__
#define __ZMOVING_H__VER1__

#include "z3d.h"
#include "zOption.h"
#include "zVob.h"

namespace Gothic_I_Addon {
  const int DEF_NUM_SAMPLES=256;

  // sizeof 34h
  class zCMoveRecorder {
  public:
    zOPERATORS_DECLARATION()


    enum {
      MOR_IDLE,
      MOR_PLAYBACK,
      MOR_RECORD
    };

    // sizeof 40h
    struct zTMOR_Sample {
      zOPERATORS_DECLARATION()

      zMAT4 trafoObjToWorld; // sizeof 40h    offset 00h

      zTMOR_Sample() {}

      // user API
      #if __has_include("zCMoveRecorder_zTMOR_Sample.inl")
      #include "zCMoveRecorder_zTMOR_Sample.inl"
      #endif
    };

    zSTRING name;                  // sizeof 14h    offset 00h
    zCVob* vob;                    // sizeof 04h    offset 14h
    zCArray<zTMOR_Sample> samples; // sizeof 0Ch    offset 18h
    int state;                     // sizeof 04h    offset 24h
    int ctr;                       // sizeof 04h    offset 28h
    int looping;                   // sizeof 04h    offset 2Ch
    float startTime;               // sizeof 04h    offset 30h

    zCMoveRecorder() {}

    // user API
    #if __has_include("zCMoveRecorder.inl")
    #include "zCMoveRecorder.inl"
    #endif
  };

  // sizeof 58h
  class CMov_Movement {
  public:
    zOPERATORS_DECLARATION()

    unsigned long oldtime; // sizeof 04h    offset 00h
    unsigned long now;     // sizeof 04h    offset 04h
    double time_corr;      // sizeof 08h    offset 08h
    zCVob* vob;            // sizeof 04h    offset 10h
    double force_x;        // sizeof 08h    offset 18h
    double force_y;        // sizeof 08h    offset 20h
    double force_z;        // sizeof 08h    offset 28h
    double force_rot;      // sizeof 08h    offset 30h
    double xspeed;         // sizeof 08h    offset 38h
    double yspeed;         // sizeof 08h    offset 40h
    double zspeed;         // sizeof 08h    offset 48h
    double rotspeed;       // sizeof 08h    offset 50h

    CMov_Movement() {}
    void CMov_Movement_OnInit( zCVob* ) zCall( 0x005A36F0 );
    CMov_Movement( zCVob* a0 )          zInit( CMov_Movement_OnInit( a0 ));
    void IncreaseSpeed( double )        zCall( 0x005A3730 );
    void Movement()                     zCall( 0x005A37C0 );
  };

} // namespace Gothic_I_Addon

#endif // __ZMOVING_H__VER1__