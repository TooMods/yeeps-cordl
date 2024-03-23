#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRendererData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRendererData__DebugShaderResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRendererData__DebugShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources);
// Type: ::DebugShaderResources
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScriptableRendererData::DebugShaderResources*
class CORDL_TYPE __ScriptableRendererData__DebugShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugReplacementPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugReplacementPS, put = __cordl_internal_set_debugReplacementPS))::UnityW<::UnityEngine::Shader> debugReplacementPS;

  static inline ::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_debugReplacementPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_debugReplacementPS();

  constexpr void __cordl_internal_set_debugReplacementPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2730868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRendererData__DebugShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRendererData__DebugShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRendererData__DebugShaderResources(__ScriptableRendererData__DebugShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRendererData__DebugShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRendererData__DebugShaderResources(__ScriptableRendererData__DebugShaderResources const&) = delete;

  /// @brief Field debugReplacementPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___debugReplacementPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources, ___debugReplacementPS) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ScriptableRendererData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScriptableRendererData*
class CORDL_TYPE ScriptableRendererData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DebugShaderResources = ::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources;

  /// @brief Field <isInvalidated>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isInvalidated_k__BackingField, put = __cordl_internal_set__isInvalidated_k__BackingField)) bool _isInvalidated_k__BackingField;

  /// @brief Field debugShaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugShaders,
                      put = __cordl_internal_set_debugShaders))::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources* debugShaders;

  __declspec(property(get = get_isInvalidated, put = set_isInvalidated)) bool isInvalidated;

  /// @brief Field m_RendererFeatureMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererFeatureMap, put = __cordl_internal_set_m_RendererFeatureMap))::System::Collections::Generic::List_1<int64_t>* m_RendererFeatureMap;

  /// @brief Field m_RendererFeatures, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_RendererFeatures,
               put = __cordl_internal_set_m_RendererFeatures))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* m_RendererFeatures;

  /// @brief Field m_UseNativeRenderPass, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseNativeRenderPass, put = __cordl_internal_set_m_UseNativeRenderPass)) bool m_UseNativeRenderPass;

  __declspec(property(get = get_rendererFeatures))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures;

  __declspec(property(get = get_useNativeRenderPass, put = set_useNativeRenderPass)) bool useNativeRenderPass;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  /// @brief Method InternalCreateRenderer, addr 0x273075c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* InternalCreateRenderer();

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererData* New_ctor();

  /// @brief Method OnEnable, addr 0x2730778, size 0xc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x273076c, size 0xc, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetDirty, addr 0x2730750, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method TryGetRendererFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetRendererFeature(ByRef<T> rendererFeature);

  constexpr bool const& __cordl_internal_get__isInvalidated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInvalidated_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources*& __cordl_internal_get_debugShaders();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources*> const& __cordl_internal_get_debugShaders() const;

  constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_m_RendererFeatureMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int64_t>*> const& __cordl_internal_get_m_RendererFeatureMap() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*> const&
  __cordl_internal_get_m_RendererFeatures() const;

  constexpr bool const& __cordl_internal_get_m_UseNativeRenderPass() const;

  constexpr bool& __cordl_internal_get_m_UseNativeRenderPass();

  constexpr void __cordl_internal_set__isInvalidated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_debugShaders(::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources* value);

  constexpr void __cordl_internal_set_m_RendererFeatureMap(::System::Collections::Generic::List_1<int64_t>* value);

  constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value);

  constexpr void __cordl_internal_set_m_UseNativeRenderPass(bool value);

  /// @brief Method .ctor, addr 0x27307a0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isInvalidated, addr 0x2730734, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInvalidated();

  /// @brief Method get_rendererFeatures, addr 0x2730748, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures();

  /// @brief Method get_useNativeRenderPass, addr 0x2730784, size 0x8, virtual false, abstract: false, final false
  inline bool get_useNativeRenderPass();

  /// @brief Method set_isInvalidated, addr 0x273073c, size 0xc, virtual false, abstract: false, final false
  inline void set_isInvalidated(bool value);

  /// @brief Method set_useNativeRenderPass, addr 0x273078c, size 0x14, virtual false, abstract: false, final false
  inline void set_useNativeRenderPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererData(ScriptableRendererData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererData(ScriptableRendererData const&) = delete;

  /// @brief Field <isInvalidated>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isInvalidated_k__BackingField;

  /// @brief Field debugShaders, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources* ___debugShaders;

  /// @brief Field m_RendererFeatures, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* ___m_RendererFeatures;

  /// @brief Field m_RendererFeatureMap, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int64_t>* ___m_RendererFeatureMap;

  /// @brief Field m_UseNativeRenderPass, offset: 0x38, size: 0x1, def value: None
  bool ___m_UseNativeRenderPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererData, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ____isInvalidated_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___debugShaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_RendererFeatures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_RendererFeatureMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_UseNativeRenderPass) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData*, "UnityEngine.Rendering.Universal", "ScriptableRendererData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRendererData__DebugShaderResources*, "UnityEngine.Rendering.Universal", "ScriptableRendererData/DebugShaderResources");
