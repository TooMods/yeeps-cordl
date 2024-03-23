#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RoomEntrance)
namespace GlobalNamespace {
class RoomData;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomEntrance;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomEntrance);
// Type: ::RoomEntrance
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomEntrance*
class CORDL_TYPE RoomEntrance : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field UIActiveContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_UIActiveContainer, put = __cordl_internal_set_UIActiveContainer))::UnityW<::UnityEngine::GameObject> UIActiveContainer;

  /// @brief Field roomNameText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomNameText, put = __cordl_internal_set_roomNameText))::UnityW<::UnityEngine::UI::Text> roomNameText;

  static inline ::GlobalNamespace::RoomEntrance* New_ctor();

  /// @brief Method SetRoomData, addr 0x1639f1c, size 0x38, virtual false, abstract: false, final false
  inline void SetRoomData(::GlobalNamespace::RoomData* roomData);

  /// @brief Method SetUIActive, addr 0x1639f54, size 0x20, virtual false, abstract: false, final false
  inline void SetUIActive(bool newActive);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_UIActiveContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_UIActiveContainer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_roomNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_roomNameText();

  constexpr void __cordl_internal_set_UIActiveContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_roomNameText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1639f74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomEntrance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomEntrance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomEntrance(RoomEntrance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomEntrance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomEntrance(RoomEntrance const&) = delete;

  /// @brief Field roomNameText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___roomNameText;

  /// @brief Field UIActiveContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___UIActiveContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomEntrance, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomEntrance, ___roomNameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomEntrance, ___UIActiveContainer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomEntrance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomEntrance*, "", "RoomEntrance");
