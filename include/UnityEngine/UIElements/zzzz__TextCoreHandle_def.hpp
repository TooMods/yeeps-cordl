#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextCoreHandle)
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextCoreHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextCoreHandle);
// Type: UnityEngine.UIElements::TextCoreHandle
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::TextCoreHandle
struct CORDL_TYPE TextCoreHandle {
public:
  // Declarations
  __declspec(property(get = get_MeasuredSizes, put = set_MeasuredSizes))::UnityEngine::Vector2 MeasuredSizes;

  __declspec(property(get = get_RoundedSizes, put = set_RoundedSizes))::UnityEngine::Vector2 RoundedSizes;

  /// @brief Field s_LayoutSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LayoutSettings, put = setStaticF_s_LayoutSettings))::UnityEngine::TextCore::Text::TextGenerationSettings* s_LayoutSettings;

  /// @brief Field s_TextInfoLayout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TextInfoLayout, put = setStaticF_s_TextInfoLayout))::UnityEngine::TextCore::Text::TextInfo* s_TextInfoLayout;

  __declspec(property(get = get_textInfoMesh))::UnityEngine::TextCore::Text::TextInfo* textInfoMesh;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextHandle"
  constexpr operator ::UnityEngine::UIElements::ITextHandle*();

  /// @brief Method ComputeTextHeight, addr 0x2cc542c, size 0x34, virtual true, abstract: false, final true
  inline float_t ComputeTextHeight(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method ComputeTextWidth, addr 0x2cc52c8, size 0x34, virtual true, abstract: false, final true
  inline float_t ComputeTextWidth(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method GetCursorPosition, addr 0x2cc52a0, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling);

  /// @brief Method GetLineHeight, addr 0x2cc5460, size 0x68, virtual true, abstract: false, final true
  inline float_t GetLineHeight(int32_t characterIndex, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint);

  /// @brief Method GetTextOverflowMode, addr 0x2cc5954, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams);

  /// @brief Method IsDirty, addr 0x2cc525c, size 0x44, virtual false, abstract: false, final false
  inline bool IsDirty(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms);

  /// @brief Method IsElided, addr 0x2cc5b70, size 0x64, virtual true, abstract: false, final true
  inline bool IsElided();

  /// @brief Method IsLegacy, addr 0x2cc5254, size 0x8, virtual true, abstract: false, final true
  inline bool IsLegacy();

  /// @brief Method New, addr 0x2cc5068, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ITextHandle* New();

  /// @brief Method Update, addr 0x2cc54c8, size 0x208, virtual true, abstract: false, final true
  inline ::UnityEngine::TextCore::Text::TextInfo* Update(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint);

  /// @brief Method UpdateGenerationSettingsCommon, addr 0x2cc56d0, size 0x284, virtual false, abstract: false, final false
  static inline void UpdateGenerationSettingsCommon(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams painterParams, ::UnityEngine::TextCore::Text::TextGenerationSettings* settings);

  /// @brief Method UpdatePreferredValues, addr 0x2cc52fc, size 0x130, virtual false, abstract: false, final false
  inline void UpdatePreferredValues(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms);

  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* getStaticF_s_LayoutSettings();

  static inline ::UnityEngine::TextCore::Text::TextInfo* getStaticF_s_TextInfoLayout();

  /// @brief Method get_MeasuredSizes, addr 0x2cc5048, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_MeasuredSizes();

  /// @brief Method get_RoundedSizes, addr 0x2cc5058, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_RoundedSizes();

  /// @brief Method get_textInfoLayout, addr 0x2cc5194, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfoLayout();

  /// @brief Method get_textInfoMesh, addr 0x2cc5128, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfoMesh();

  /// @brief Convert to "::UnityEngine::UIElements::ITextHandle"
  constexpr ::UnityEngine::UIElements::ITextHandle* i___UnityEngine__UIElements__ITextHandle();

  static inline void setStaticF_s_LayoutSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* value);

  static inline void setStaticF_s_TextInfoLayout(::UnityEngine::TextCore::Text::TextInfo* value);

  /// @brief Method set_MeasuredSizes, addr 0x2cc5050, size 0x8, virtual true, abstract: false, final true
  inline void set_MeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_RoundedSizes, addr 0x2cc5060, size 0x8, virtual true, abstract: false, final true
  inline void set_RoundedSizes(::UnityEngine::Vector2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextCoreHandle();

  // Ctor Parameters [CppParam { name: "_MeasuredSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_RoundedSizes_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PreferredSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "m_PreviousGenerationSettingsHash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentGenerationSettings", ty: "::UnityEngine::TextCore::Text::TextGenerationSettings*",
  // modifiers: "", def_value: None }, CppParam { name: "m_TextInfoMesh", ty: "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: None }, CppParam { name: "isDirty", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr TextCoreHandle(::UnityEngine::Vector2 _MeasuredSizes_k__BackingField, ::UnityEngine::Vector2 _RoundedSizes_k__BackingField, ::UnityEngine::Vector2 m_PreferredSize,
                           int32_t m_PreviousGenerationSettingsHash, ::UnityEngine::TextCore::Text::TextGenerationSettings* m_CurrentGenerationSettings,
                           ::UnityEngine::TextCore::Text::TextInfo* m_TextInfoMesh, bool isDirty) noexcept;

  /// @brief Field <MeasuredSizes>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _RoundedSizes_k__BackingField;

  /// @brief Field m_PreferredSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PreferredSize;

  /// @brief Field m_PreviousGenerationSettingsHash, offset: 0x18, size: 0x4, def value: None
  int32_t m_PreviousGenerationSettingsHash;

  /// @brief Field m_CurrentGenerationSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextGenerationSettings* m_CurrentGenerationSettings;

  /// @brief Field m_TextInfoMesh, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextInfo* m_TextInfoMesh;

  /// @brief Field isDirty, offset: 0x30, size: 0x1, def value: None
  bool isDirty;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextCoreHandle, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, _MeasuredSizes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, _RoundedSizes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, m_PreferredSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, m_PreviousGenerationSettingsHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, m_CurrentGenerationSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, m_TextInfoMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextCoreHandle, isDirty) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextCoreHandle, "UnityEngine.UIElements", "TextCoreHandle");
