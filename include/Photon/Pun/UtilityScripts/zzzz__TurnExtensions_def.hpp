#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TurnExtensions)
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class Room;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TurnExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::TurnExtensions);
// Type: Photon.Pun.UtilityScripts::TurnExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::TurnExtensions*
class CORDL_TYPE TurnExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field FinishedTurnPropKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FinishedTurnPropKey, put = setStaticF_FinishedTurnPropKey))::StringW FinishedTurnPropKey;

  /// @brief Field TurnPropKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TurnPropKey, put = setStaticF_TurnPropKey))::StringW TurnPropKey;

  /// @brief Field TurnStartPropKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TurnStartPropKey, put = setStaticF_TurnStartPropKey))::StringW TurnStartPropKey;

  /// @brief Method GetFinishedTurn, addr 0x1ecbf08, size 0x174, virtual false, abstract: false, final false
  static inline int32_t GetFinishedTurn(::Photon::Realtime::Player* player);

  /// @brief Method GetTurn, addr 0x1ecad14, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t GetTurn(::Photon::Realtime::RoomInfo* room);

  /// @brief Method GetTurnStart, addr 0x1ecb0ec, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t GetTurnStart(::Photon::Realtime::RoomInfo* room);

  /// @brief Method SetFinishedTurn, addr 0x1ecb764, size 0x164, virtual false, abstract: false, final false
  static inline void SetFinishedTurn(::Photon::Realtime::Player* player, int32_t turn);

  /// @brief Method SetTurn, addr 0x1ecaec0, size 0x184, virtual false, abstract: false, final false
  static inline void SetTurn(::Photon::Realtime::Room* room, int32_t turn, bool setStartTime);

  static inline ::StringW getStaticF_FinishedTurnPropKey();

  static inline ::StringW getStaticF_TurnPropKey();

  static inline ::StringW getStaticF_TurnStartPropKey();

  static inline void setStaticF_FinishedTurnPropKey(::StringW value);

  static inline void setStaticF_TurnPropKey(::StringW value);

  static inline void setStaticF_TurnStartPropKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TurnExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TurnExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TurnExtensions(TurnExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TurnExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TurnExtensions(TurnExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::TurnExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TurnExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TurnExtensions*, "Photon.Pun.UtilityScripts", "TurnExtensions");
