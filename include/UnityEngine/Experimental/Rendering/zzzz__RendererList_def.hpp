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
CORDL_MODULE_EXPORT(RendererList)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Experimental::Rendering {
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
namespace UnityEngine::Experimental::Rendering {
struct RendererList;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RendererList);
// Type: UnityEngine.Experimental.Rendering::RendererList
// SizeInfo { instance_size: 480, native_size: -1, calculated_instance_size: 480, calculated_native_size: 492, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::RendererList
struct CORDL_TYPE RendererList {
public:
  // Declarations
  __declspec(property(get = get_isValid, put = set_isValid)) bool isValid;

  /// @brief Field nullRendererList, offset 0xffffffff, size 0x1e0
  static __declspec(property(get = getStaticF_nullRendererList, put = setStaticF_nullRendererList))::UnityEngine::Experimental::Rendering::RendererList nullRendererList;

  /// @brief Field s_EmptyName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_EmptyName, put = setStaticF_s_EmptyName))::UnityEngine::Rendering::ShaderTagId s_EmptyName;

  /// @brief Method Create, addr 0x23ca700, size 0x3d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RendererList Create(ByRef<::UnityEngine::Experimental::Rendering::RendererListDesc> desc);

  static inline ::UnityEngine::Experimental::Rendering::RendererList getStaticF_nullRendererList();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_EmptyName();

  /// @brief Method get_isValid, addr 0x23ca6ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_isValid();

  static inline void setStaticF_nullRendererList(::UnityEngine::Experimental::Rendering::RendererList value);

  static inline void setStaticF_s_EmptyName(::UnityEngine::Rendering::ShaderTagId value);

  /// @brief Method set_isValid, addr 0x23ca6f4, size 0xc, virtual false, abstract: false, final false
  inline void set_isValid(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererList();

  // Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingResult", ty: "::UnityEngine::Rendering::CullingResults",
  // modifiers: "", def_value: None }, CppParam { name: "drawSettings", ty: "::UnityEngine::Rendering::DrawingSettings", modifiers: "", def_value: None }, CppParam { name: "filteringSettings", ty:
  // "::UnityEngine::Rendering::FilteringSettings", modifiers: "", def_value: None }, CppParam { name: "stateBlock", ty: "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers:
  // "", def_value: None }]
  constexpr RendererList(bool _isValid_k__BackingField, ::UnityEngine::Rendering::CullingResults cullingResult, ::UnityEngine::Rendering::DrawingSettings drawSettings,
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RendererList, 0x1e0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererList, _isValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererList, cullingResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererList, drawSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererList, filteringSettings) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererList, stateBlock) == 0x16c, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RendererList, "UnityEngine.Experimental.Rendering", "RendererList");
