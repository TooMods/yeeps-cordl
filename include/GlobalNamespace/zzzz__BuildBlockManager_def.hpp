#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BuildBlockManager)
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class Room;
}
// Forward declare root types
namespace GlobalNamespace {
class BuildBlockManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BuildBlockManager);
// Type: ::BuildBlockManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BuildBlockManager*
class CORDL_TYPE BuildBlockManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field curPrompt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curPrompt, put = __cordl_internal_set_curPrompt))::GlobalNamespace::ImaginationPrompt* curPrompt;

  static inline ::GlobalNamespace::BuildBlockManager* New_ctor();

  /// @brief Method OnDisable, addr 0x1060eb0, size 0x4e8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1060934, size 0x43c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x106139c, size 0x4, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnIsPrivateRoomOwnerPresent, addr 0x1061398, size 0x4, virtual false, abstract: false, final false
  inline void OnIsPrivateRoomOwnerPresent(bool newIsOwnerPresent);

  /// @brief Method OnJoinedPhotonRoom, addr 0x10613a0, size 0x4, virtual false, abstract: false, final false
  inline void OnJoinedPhotonRoom(::StringW roomName);

  /// @brief Method OnLeftPhotonRoom, addr 0x10613a4, size 0x4, virtual false, abstract: false, final false
  inline void OnLeftPhotonRoom();

  /// @brief Method OnRoomLoadedLate, addr 0x10613a8, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomLoadedLate(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x10613ac, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method RefreshBuildBlockActive, addr 0x1060d70, size 0x140, virtual false, abstract: false, final false
  inline void RefreshBuildBlockActive();

  /// @brief Method ShouldBeBuildBlocked, addr 0x10613b0, size 0x1ac, virtual false, abstract: false, final false
  inline bool ShouldBeBuildBlocked(ByRef<::StringW> reasonIfTrue);

  constexpr ::GlobalNamespace::ImaginationPrompt*& __cordl_internal_get_curPrompt();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& __cordl_internal_get_curPrompt() const;

  constexpr void __cordl_internal_set_curPrompt(::GlobalNamespace::ImaginationPrompt* value);

  /// @brief Method .ctor, addr 0x106155c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildBlockManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuildBlockManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuildBlockManager(BuildBlockManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuildBlockManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuildBlockManager(BuildBlockManager const&) = delete;

  /// @brief Field curPrompt, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ImaginationPrompt* ___curPrompt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BuildBlockManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildBlockManager, ___curPrompt) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BuildBlockManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuildBlockManager*, "", "BuildBlockManager");
