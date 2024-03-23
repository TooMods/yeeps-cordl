#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActiveNewsDisplay)
namespace GlobalNamespace {
struct __NewsManager__NewsData;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class ActiveNewsDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActiveNewsDisplay);
// Type: ::ActiveNewsDisplay
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveNewsDisplay*
class CORDL_TYPE ActiveNewsDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field messageText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field updatedTimeText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_updatedTimeText, put = __cordl_internal_set_updatedTimeText))::UnityW<::UnityEngine::UI::Text> updatedTimeText;

  static inline ::GlobalNamespace::ActiveNewsDisplay* New_ctor();

  /// @brief Method OnDisable, addr 0x2c8405c, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2c83f0c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnLeaveReviewLinkButtonPressed, addr 0x2c842ec, size 0x58, virtual false, abstract: false, final false
  inline void OnLeaveReviewLinkButtonPressed();

  /// @brief Method OnOpenDiscordLinkButtonPressed, addr 0x2c84294, size 0x58, virtual false, abstract: false, final false
  inline void OnOpenDiscordLinkButtonPressed();

  /// @brief Method TryDisplayNews, addr 0x2c83f10, size 0x14c, virtual false, abstract: false, final false
  inline void TryDisplayNews();

  /// @brief Method <TryDisplayNews>b__4_0, addr 0x2c8434c, size 0x144, virtual false, abstract: false, final false
  inline void _TryDisplayNews_b__4_0(::GlobalNamespace::__NewsManager__NewsData newsData);

  /// @brief Method <TryDisplayNews>b__4_1, addr 0x2c84534, size 0x13c, virtual false, abstract: false, final false
  inline void _TryDisplayNews_b__4_1(::StringW errorType);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_updatedTimeText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_updatedTimeText();

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_updatedTimeText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x2c84344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveNewsDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveNewsDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveNewsDisplay(ActiveNewsDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveNewsDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveNewsDisplay(ActiveNewsDisplay const&) = delete;

  /// @brief Field messageText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field updatedTimeText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___updatedTimeText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActiveNewsDisplay, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveNewsDisplay, ___messageText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveNewsDisplay, ___updatedTimeText) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActiveNewsDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActiveNewsDisplay*, "", "ActiveNewsDisplay");
