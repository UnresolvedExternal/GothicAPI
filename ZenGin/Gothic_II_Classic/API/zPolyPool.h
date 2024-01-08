// Supported with union (c) 2018-2023 Union team
// Licence: GNU General Public License

#ifndef __ZPOLY_POOL_H__VER2__
#define __ZPOLY_POOL_H__VER2__

#include "z3d.h"
#include "zVisual.h"

namespace Gothic_II_Classic {

  // sizeof 0Ch
  class zCVertexFeaturePool {
  public:
    zOPERATORS_DECLARATION()

    GETSmallArrayNative<zCVertFeature>* Pool;     // sizeof 04h    offset 00h
    GETSmallArrayNative<zCVertFeature*>* PtrPool; // sizeof 04h    offset 04h
    int NumOfAllocatedVertexFeatures;             // sizeof 04h    offset 08h

    zCVertexFeaturePool() {}

    // user API
    #if __has_include("zCVertexFeaturePool.inl")
    #include "zCVertexFeaturePool.inl"
    #endif
  };

  // sizeof 08h
  class zCPolygonPool {
  public:
    zOPERATORS_DECLARATION()

    GETSmallArrayNative<zCPolygon>* Pool; // sizeof 04h    offset 00h
    int NumOfAllocatedPolygon;            // sizeof 04h    offset 04h

    zCPolygonPool() {}

    // user API
    #if __has_include("zCPolygonPool.inl")
    #include "zCPolygonPool.inl"
    #endif
  };

  // sizeof 0Ch
  class zCVertexPool {
  public:
    zOPERATORS_DECLARATION()

    GETSmallArrayNative<zCVertex>* Pool;     // sizeof 04h    offset 00h
    GETSmallArrayNative<zCVertex*>* PtrPool; // sizeof 04h    offset 04h
    int NumOfAllocatedVertex;                // sizeof 04h    offset 08h

    zCVertexPool() {}

    // user API
    #if __has_include("zCVertexPool.inl")
    #include "zCVertexPool.inl"
    #endif
  };

  // sizeof 14h
  class zCMeshPool {
  public:
    zOPERATORS_DECLARATION()

    zCVertexPool* vertexPool;               // sizeof 04h    offset 00h
    zCPolygonPool* polygonPool;             // sizeof 04h    offset 04h
    zCVertexFeaturePool* vertexFeaturePool; // sizeof 04h    offset 08h
    int meshIndex;                          // sizeof 04h    offset 0Ch
    zCMesh* meshObject;                     // sizeof 04h    offset 10h

    zCMeshPool() {}

    // user API
    #if __has_include("zCMeshPool.inl")
    #include "zCMeshPool.inl"
    #endif
  };

  // sizeof 08h
  class zCMeshesPool {
  public:
    zOPERATORS_DECLARATION()

    int IsActive;                           // sizeof 04h    offset 00h
    GETSmallArrayNative<zCMeshPool*>* pool; // sizeof 04h    offset 04h

    zCMeshesPool() {}

    // user API
    #if __has_include("zCMeshesPool.inl")
    #include "zCMeshesPool.inl"
    #endif
  };

} // namespace Gothic_II_Classic

#endif // __ZPOLY_POOL_H__VER2__