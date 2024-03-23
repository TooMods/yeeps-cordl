#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Geom)
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct WindingRule;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Edge;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Vertex;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class Geom;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::Geom);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::Geom
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::Geom*
class CORDL_TYPE Geom : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddWinding, addr 0x2891514, size 0x48, virtual false, abstract: false, final false
  static inline void AddWinding(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDst, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eSrc);

  /// @brief Method EdgeEval, addr 0x289123c, size 0x70, virtual false, abstract: false, final false
  static inline float_t EdgeEval(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v,
                                 ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* w);

  /// @brief Method EdgeGoesLeft, addr 0x2891428, size 0x28, virtual false, abstract: false, final false
  static inline bool EdgeGoesLeft(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e);

  /// @brief Method EdgeGoesRight, addr 0x289146c, size 0x24, virtual false, abstract: false, final false
  static inline bool EdgeGoesRight(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e);

  /// @brief Method EdgeIntersect, addr 0x28915cc, size 0x354, virtual false, abstract: false, final false
  static inline void EdgeIntersect(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* o1, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* d1,
                                   ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* o2, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* d2,
                                   ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v);

  /// @brief Method EdgeSign, addr 0x28912ac, size 0x60, virtual false, abstract: false, final false
  static inline float_t EdgeSign(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v,
                                 ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* w);

  /// @brief Method Interpolate, addr 0x289155c, size 0x5c, virtual false, abstract: false, final false
  static inline float_t Interpolate(float_t a, float_t x, float_t b, float_t y);

  /// @brief Method IsWindingInside, addr 0x28910b4, size 0xac, virtual false, abstract: false, final false
  static inline bool IsWindingInside(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule rule, int32_t n);

  /// @brief Method Swap, addr 0x28915b8, size 0x14, virtual false, abstract: false, final false
  static inline void Swap(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> a, ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> b);

  /// @brief Method TransEval, addr 0x2891358, size 0x70, virtual false, abstract: false, final false
  static inline float_t TransEval(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v,
                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* w);

  /// @brief Method TransLeq, addr 0x289130c, size 0x4c, virtual false, abstract: false, final false
  static inline bool TransLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* rhs);

  /// @brief Method TransSign, addr 0x28913c8, size 0x60, virtual false, abstract: false, final false
  static inline float_t TransSign(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v,
                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* w);

  /// @brief Method VertCCW, addr 0x2891160, size 0x50, virtual false, abstract: false, final false
  static inline bool VertCCW(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v,
                             ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* w);

  /// @brief Method VertEq, addr 0x28911b0, size 0x40, virtual false, abstract: false, final false
  static inline bool VertEq(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* rhs);

  /// @brief Method VertL1dist, addr 0x2891490, size 0x84, virtual false, abstract: false, final false
  static inline float_t VertL1dist(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* v);

  /// @brief Method VertLeq, addr 0x28911f0, size 0x4c, virtual false, abstract: false, final false
  static inline bool VertLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* rhs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Geom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Geom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Geom(Geom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Geom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Geom(Geom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::Geom, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::Geom);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::Geom*, "UnityEngine.Rendering.Universal.LibTessDotNet", "Geom");
