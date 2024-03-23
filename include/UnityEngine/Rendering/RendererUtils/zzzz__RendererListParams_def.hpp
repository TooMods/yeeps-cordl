#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RendererListParams)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
// Forward declare root types
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererUtils::RendererListParams);
// Type: UnityEngine.Rendering.RendererUtils::RendererListParams
// SizeInfo { instance_size: 480, native_size: -1, calculated_instance_size: 480, calculated_native_size: 492, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::RendererUtils {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.RendererUtils::RendererListParams
struct CORDL_TYPE RendererListParams {
public:
  // Declarations
  __declspec(property(put = set_isValid)) bool isValid;

  /// @brief Field nullRendererList, offset 0xffffffff, size 0x1e0
  static __declspec(property(get = getStaticF_nullRendererList, put = setStaticF_nullRendererList))::UnityEngine::Rendering::RendererUtils::RendererListParams nullRendererList;

  /// @brief Field s_EmptyName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_EmptyName, put = setStaticF_s_EmptyName))::UnityEngine::Rendering::ShaderTagId s_EmptyName;

  /// @brief Method Create, addr 0x29dcde0, size 0x474, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererUtils::RendererListParams Create(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  static inline ::UnityEngine::Rendering::RendererUtils::RendererListParams getStaticF_nullRendererList();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_EmptyName();

  static inline void setStaticF_nullRendererList(::UnityEngine::Rendering::RendererUtils::RendererListParams value);

  static inline void setStaticF_s_EmptyName(::UnityEngine::Rendering::ShaderTagId value);

  /// @brief Method set_isValid, addr 0x29dcdd4, size 0xc, virtual false, abstract: false, final false
  inline void set_isValid(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListParams();

  // Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingResult", ty: "::UnityEngine::Rendering::CullingResults",
  // modifiers: "", def_value: None }, CppParam { name: "drawSettings", ty: "::UnityEngine::Rendering::DrawingSettings", modifiers: "", def_value: None }, CppParam { name: "filteringSettings", ty:
  // "::UnityEngine::Rendering::FilteringSettings", modifiers: "", def_value: None }, CppParam { name: "stateBlock", ty: "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers:
  // "", def_value: None }]
  constexpr RendererListParams(bool _isValid_k__BackingField, ::UnityEngine::Rendering::CullingResults cullingResult, ::UnityEngine::Rendering::DrawingSettings drawSettings,
                               ::UnityEngine::Rendering::FilteringSettings filteringSettings, ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock) noexcept;

  /// @brief Field <isValid>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _isValid_k__BackingField;

  /// @brief Field cullingResult, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults cullingResult;

  /// @brief Field drawSettings, offset: 0x18, size: 0x13c, def value: None
  ::UnityEngine::Rendering::DrawingSettings drawSettings;

  /// @brief Field filteringSettings, offset: 0x154, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings filteringSettings;

  /// @brief Field stateBlock, offset: 0x16c, size: 0x70, def value: None
  ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1e0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererUtils::RendererListParams, 0x1e0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListParams, _isValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListParams, cullingResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListParams, drawSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListParams, filteringSettings) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListParams, stateBlock) == 0x16c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::RendererUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererUtils::RendererListParams, "UnityEngine.Rendering.RendererUtils", "RendererListParams");
