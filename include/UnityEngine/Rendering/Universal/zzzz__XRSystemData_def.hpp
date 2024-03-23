#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRSystemData)
namespace UnityEngine::Rendering::Universal {
class __XRSystemData__ShaderResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine::Rendering::Universal {
class __XRSystemData__ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRSystemData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources);
// Type: ::ShaderResources
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::XRSystemData::ShaderResources*
class CORDL_TYPE __XRSystemData__ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field xrMirrorViewPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xrMirrorViewPS, put = __cordl_internal_set_xrMirrorViewPS))::UnityW<::UnityEngine::Shader> xrMirrorViewPS;

  /// @brief Field xrOcclusionMeshPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xrOcclusionMeshPS, put = __cordl_internal_set_xrOcclusionMeshPS))::UnityW<::UnityEngine::Shader> xrOcclusionMeshPS;

  static inline ::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_xrMirrorViewPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_xrMirrorViewPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_xrOcclusionMeshPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_xrOcclusionMeshPS();

  constexpr void __cordl_internal_set_xrMirrorViewPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_xrOcclusionMeshPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2c5bab0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSystemData__ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRSystemData__ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRSystemData__ShaderResources(__XRSystemData__ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRSystemData__ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRSystemData__ShaderResources(__XRSystemData__ShaderResources const&) = delete;

  /// @brief Field xrOcclusionMeshPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___xrOcclusionMeshPS;

  /// @brief Field xrMirrorViewPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___xrMirrorViewPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources, ___xrOcclusionMeshPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources, ___xrMirrorViewPS) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::XRSystemData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::XRSystemData*
class CORDL_TYPE XRSystemData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources;

  /// @brief Field shaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders))::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources* shaders;

  static inline ::UnityEngine::Rendering::Universal::XRSystemData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources*& __cordl_internal_get_shaders();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources*> const& __cordl_internal_get_shaders() const;

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources* value);

  /// @brief Method .ctor, addr 0x2c5baa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystemData(XRSystemData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystemData(XRSystemData const&) = delete;

  /// @brief Field shaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources* ___shaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRSystemData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystemData, ___shaders) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRSystemData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRSystemData*, "UnityEngine.Rendering.Universal", "XRSystemData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__XRSystemData__ShaderResources*, "UnityEngine.Rendering.Universal", "XRSystemData/ShaderResources");
