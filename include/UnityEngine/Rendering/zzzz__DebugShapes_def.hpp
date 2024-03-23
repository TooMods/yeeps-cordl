#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugShapes)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugShapes;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugShapes);
// Type: UnityEngine.Rendering::DebugShapes
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DebugShapes*
class CORDL_TYPE DebugShapes : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_boxMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_boxMesh, put = __cordl_internal_set_m_boxMesh))::UnityW<::UnityEngine::Mesh> m_boxMesh;

  /// @brief Field m_coneMesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_coneMesh, put = __cordl_internal_set_m_coneMesh))::UnityW<::UnityEngine::Mesh> m_coneMesh;

  /// @brief Field m_pyramidMesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pyramidMesh, put = __cordl_internal_set_m_pyramidMesh))::UnityW<::UnityEngine::Mesh> m_pyramidMesh;

  /// @brief Field m_sphereMesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sphereMesh, put = __cordl_internal_set_m_sphereMesh))::UnityW<::UnityEngine::Mesh> m_sphereMesh;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::Rendering::DebugShapes* s_Instance;

  /// @brief Method BuildBox, addr 0x1bd6430, size 0x760, virtual false, abstract: false, final false
  inline void BuildBox(ByRef<::UnityEngine::Mesh*> outputMesh, float_t length, float_t width, float_t height);

  /// @brief Method BuildCone, addr 0x1bd6b90, size 0x928, virtual false, abstract: false, final false
  inline void BuildCone(ByRef<::UnityEngine::Mesh*> outputMesh, float_t height, float_t topRadius, float_t bottomRadius, int32_t nbSides);

  /// @brief Method BuildPyramid, addr 0x1bd74b8, size 0x2ec, virtual false, abstract: false, final false
  inline void BuildPyramid(ByRef<::UnityEngine::Mesh*> outputMesh, float_t width, float_t height, float_t depth);

  /// @brief Method BuildShapes, addr 0x1bd77a4, size 0x104, virtual false, abstract: false, final false
  inline void BuildShapes();

  /// @brief Method BuildSphere, addr 0x1bd5d34, size 0x6fc, virtual false, abstract: false, final false
  inline void BuildSphere(ByRef<::UnityEngine::Mesh*> outputMesh, float_t radius, uint32_t longSubdiv, uint32_t latSubdiv);

  static inline ::UnityEngine::Rendering::DebugShapes* New_ctor();

  /// @brief Method RebuildResources, addr 0x1bd78a8, size 0xf0, virtual false, abstract: false, final false
  inline void RebuildResources();

  /// @brief Method RequestBoxMesh, addr 0x1bd79b0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> RequestBoxMesh();

  /// @brief Method RequestConeMesh, addr 0x1bd79c8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> RequestConeMesh();

  /// @brief Method RequestPyramidMesh, addr 0x1bd79e0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> RequestPyramidMesh();

  /// @brief Method RequestSphereMesh, addr 0x1bd7998, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> RequestSphereMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_boxMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_boxMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_coneMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_coneMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_pyramidMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_pyramidMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_sphereMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_sphereMesh();

  constexpr void __cordl_internal_set_m_boxMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_coneMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_pyramidMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_sphereMesh(::UnityW<::UnityEngine::Mesh> value);

  /// @brief Method .ctor, addr 0x1bd5d2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DebugShapes* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x1bd5cac, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugShapes* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::DebugShapes* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugShapes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugShapes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugShapes(DebugShapes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugShapes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugShapes(DebugShapes const&) = delete;

  /// @brief Field m_sphereMesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_sphereMesh;

  /// @brief Field m_boxMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_boxMesh;

  /// @brief Field m_coneMesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_coneMesh;

  /// @brief Field m_pyramidMesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_pyramidMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugShapes, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugShapes, ___m_sphereMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugShapes, ___m_boxMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugShapes, ___m_coneMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugShapes, ___m_pyramidMesh) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugShapes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugShapes*, "UnityEngine.Rendering", "DebugShapes");
