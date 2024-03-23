#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GeometryUtility)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine {
class GeometryUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GeometryUtility);
// Type: UnityEngine::GeometryUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GeometryUtility*
class CORDL_TYPE GeometryUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateFrustumPlanes, addr 0x27fa3e0, size 0x114, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Camera* camera, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes);

  /// @brief Method CalculateFrustumPlanes, addr 0x27fa5cc, size 0x104, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes);

  /// @brief Method Internal_ExtractPlanes, addr 0x27fa358, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes(ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>> planes, ::UnityEngine::Matrix4x4 worldToProjectionMatrix);

  /// @brief Method Internal_ExtractPlanes_Injected, addr 0x27fa39c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes_Injected(ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>> planes, ByRef<::UnityEngine::Matrix4x4> worldToProjectionMatrix);

  /// @brief Method TestPlanesAABB, addr 0x27fa2d0, size 0x44, virtual false, abstract: false, final false
  static inline bool TestPlanesAABB(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes, ::UnityEngine::Bounds bounds);

  /// @brief Method TestPlanesAABB_Injected, addr 0x27fa314, size 0x44, virtual false, abstract: false, final false
  static inline bool TestPlanesAABB_Injected(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes, ByRef<::UnityEngine::Bounds> bounds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryUtility(GeometryUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryUtility(GeometryUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GeometryUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GeometryUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GeometryUtility*, "UnityEngine", "GeometryUtility");
