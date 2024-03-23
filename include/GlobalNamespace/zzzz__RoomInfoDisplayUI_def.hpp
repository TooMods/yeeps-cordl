#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RoomInfoDisplayUI)
namespace GlobalNamespace {
class RoomData;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomInfoDisplayUI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomInfoDisplayUI);
// Type: ::RoomInfoDisplayUI
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomInfoDisplayUI*
class CORDL_TYPE RoomInfoDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field roomNameText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomNameText, put = __cordl_internal_set_roomNameText))::UnityW<::UnityEngine::UI::Text> roomNameText;

  /// @brief Method Clear, addr 0xf22a74, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Display, addr 0xf22a38, size 0x3c, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::RoomInfoDisplayUI* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_roomNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_roomNameText();

  constexpr void __cordl_internal_set_roomNameText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0xf22ad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomInfoDisplayUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomInfoDisplayUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomInfoDisplayUI(RoomInfoDisplayUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomInfoDisplayUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomInfoDisplayUI(RoomInfoDisplayUI const&) = delete;

  /// @brief Field roomNameText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___roomNameText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomInfoDisplayUI, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomInfoDisplayUI, ___roomNameText) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomInfoDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomInfoDisplayUI*, "", "RoomInfoDisplayUI");
