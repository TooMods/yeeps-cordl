#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPunTurnManagerCallbacks)
namespace Photon::Realtime {
class Player;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class IPunTurnManagerCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks);
// Type: Photon.Pun.UtilityScripts::IPunTurnManagerCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::IPunTurnManagerCallbacks*
class CORDL_TYPE IPunTurnManagerCallbacks {
public:
  // Declarations
  /// @brief Method OnPlayerFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayerFinished(::Photon::Realtime::Player* player, int32_t turn, ::System::Object* move);

  /// @brief Method OnPlayerMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayerMove(::Photon::Realtime::Player* player, int32_t turn, ::System::Object* move);

  /// @brief Method OnTurnBegins, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTurnBegins(int32_t turn);

  /// @brief Method OnTurnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTurnCompleted(int32_t turn);

  /// @brief Method OnTurnTimeEnds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTurnTimeEnds(int32_t turn);

  // Ctor Parameters [CppParam { name: "", ty: "IPunTurnManagerCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPunTurnManagerCallbacks(IPunTurnManagerCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPunTurnManagerCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPunTurnManagerCallbacks(IPunTurnManagerCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*, "Photon.Pun.UtilityScripts", "IPunTurnManagerCallbacks");
