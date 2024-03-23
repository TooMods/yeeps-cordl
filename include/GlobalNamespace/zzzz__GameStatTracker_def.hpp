#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameStatTracker)
namespace GlobalNamespace {
class Room;
}
// Forward declare root types
namespace GlobalNamespace {
class GameStatTracker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameStatTracker);
// Type: ::GameStatTracker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameStatTracker*
class CORDL_TYPE GameStatTracker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field currentRoomIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentRoomIdentifier, put = __cordl_internal_set_currentRoomIdentifier))::StringW currentRoomIdentifier;

  static inline ::GlobalNamespace::GameStatTracker* New_ctor();

  /// @brief Method OnDisable, addr 0x29d3a20, size 0x33c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x29d3690, size 0x36c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInCosmeticsStoreUpdated, addr 0x29d3d5c, size 0x88, virtual false, abstract: false, final false
  inline void OnInCosmeticsStoreUpdated(bool newInCosmeticsStore);

  /// @brief Method OnInDressingRoomUpdated, addr 0x29d3de4, size 0x88, virtual false, abstract: false, final false
  inline void OnInDressingRoomUpdated(bool newInDressingRoom);

  /// @brief Method OnInTechWebUpdated, addr 0x29d3e6c, size 0xd4, virtual false, abstract: false, final false
  inline void OnInTechWebUpdated(bool newInTechWeb);

  /// @brief Method OnRoomLoaded, addr 0x29d39fc, size 0x24, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  constexpr ::StringW const& __cordl_internal_get_currentRoomIdentifier() const;

  constexpr ::StringW& __cordl_internal_get_currentRoomIdentifier();

  constexpr void __cordl_internal_set_currentRoomIdentifier(::StringW value);

  /// @brief Method .ctor, addr 0x29d3f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameStatTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameStatTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameStatTracker(GameStatTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameStatTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameStatTracker(GameStatTracker const&) = delete;

  /// @brief Field currentRoomIdentifier, offset: 0x18, size: 0x8, def value: None
  ::StringW ___currentRoomIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameStatTracker, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStatTracker, ___currentRoomIdentifier) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameStatTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameStatTracker*, "", "GameStatTracker");
