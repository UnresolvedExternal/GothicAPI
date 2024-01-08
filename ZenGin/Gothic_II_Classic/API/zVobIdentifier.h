// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZVOB_IDENTIFIER_H__VER2__
#define __ZVOB_IDENTIFIER_H__VER2__

namespace Gothic_II_Classic {
  const unsigned long zVOB_ID_UNDEFINED = 0;

  // sizeof 04h
  class zCVobIdentifier {
  public:
    zOPERATORS_DECLARATION()

    unsigned long id; // sizeof 04h    offset 00h

    zCVobIdentifier() {}

    // user API
    #if __has_include("zCVobIdentifier.inl")
    #include "zCVobIdentifier.inl"
    #endif
  };

} // namespace Gothic_II_Classic

#endif // __ZVOB_IDENTIFIER_H__VER2__