#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTextShadow)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTextShadow);
// Type: UnityEngine.UIElements::StyleTextShadow
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleTextShadow
struct CORDL_TYPE StyleTextShadow {
public:
  // Declarations
  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value))::UnityEngine::UIElements::TextShadow value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>*();

  /// @brief Method Equals, addr 0x30354d8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x30354a4, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleTextShadow other);

  /// @brief Method GetHashCode, addr 0x3035568, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x30355b0, size 0x80, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3035404, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x303541c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextShadow v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x3032618, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x3032620, size 0x4c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextShadow get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>* i___System__IEquatable_1___UnityEngine__UIElements__StyleTextShadow_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__TextShadow_();

  /// @brief Method op_Equality, addr 0x303543c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleTextShadow lhs, ::UnityEngine::UIElements::StyleTextShadow rhs);

  /// @brief Method op_Implicit, addr 0x30327e0, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTextShadow op_Implicit___UnityEngine__UIElements__StyleTextShadow(::UnityEngine::UIElements::StyleKeyword keyword);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleTextShadow();

  // Ctor Parameters [CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty:
  // "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }]
  constexpr StyleTextShadow(::UnityEngine::UIElements::StyleKeyword m_Keyword, ::UnityEngine::UIElements::TextShadow m_Value) noexcept;

  /// @brief Field m_Keyword, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief Field m_Value, offset: 0x4, size: 0x1c, def value: None
  ::UnityEngine::UIElements::TextShadow m_Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTextShadow, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTextShadow, m_Keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTextShadow, m_Value) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTextShadow, "UnityEngine.UIElements", "StyleTextShadow");
