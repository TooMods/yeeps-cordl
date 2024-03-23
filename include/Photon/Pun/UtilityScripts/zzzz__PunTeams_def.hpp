#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PunTeams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
struct __PunTeams__Team;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
struct __PunTeams__Team;
}
namespace Photon::Pun::UtilityScripts {
class PunTeams;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::UtilityScripts::__PunTeams__Team);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PunTeams);
// Type: ::Team
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: true
// CS Name: ::PunTeams::Team
struct CORDL_TYPE __PunTeams__Team {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____PunTeams__Team_Unwrapped
  enum struct ____PunTeams__Team_Unwrapped : uint8_t {
    __E_none = static_cast<uint8_t>(0x0u),
    __E_red = static_cast<uint8_t>(0x1u),
    __E_blue = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PunTeams__Team_Unwrapped() const noexcept {
    return static_cast<____PunTeams__Team_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PunTeams__Team();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __PunTeams__Team(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field blue value: static_cast<uint8_t>(0x2u)
  static ::Photon::Pun::UtilityScripts::__PunTeams__Team const blue;

  /// @brief Field none value: static_cast<uint8_t>(0x0u)
  static ::Photon::Pun::UtilityScripts::__PunTeams__Team const none;

  /// @brief Field red value: static_cast<uint8_t>(0x1u)
  static ::Photon::Pun::UtilityScripts::__PunTeams__Team const red;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__PunTeams__Team, 0x1>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__PunTeams__Team, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::PunTeams
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PunTeams*
class CORDL_TYPE PunTeams : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
  // Declarations
  using Team = ::Photon::Pun::UtilityScripts::__PunTeams__Team;

  /// @brief Field PlayersPerTeam, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PlayersPerTeam,
                             put = setStaticF_PlayersPerTeam))::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team,
                                                                                                           ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>* PlayersPerTeam;

  static inline ::Photon::Pun::UtilityScripts::PunTeams* New_ctor();

  /// @brief Method OnDisable, addr 0x1ec71c0, size 0x14, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnJoinedRoom, addr 0x1ec71d4, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x1ec76a0, size 0x4, virtual true, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method OnPlayerEnteredRoom, addr 0x1ec76ac, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x1ec76a8, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x1ec76a4, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method Start, addr 0x1ec6d8c, size 0x434, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateTeams, addr 0x1ec71d8, size 0x4c8, virtual false, abstract: false, final false
  inline void UpdateTeams();

  /// @brief Method .ctor, addr 0x1ec7774, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*
  getStaticF_PlayersPerTeam();

  static inline void
  setStaticF_PlayersPerTeam(::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunTeams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunTeams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunTeams(PunTeams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunTeams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunTeams(PunTeams const&) = delete;

  /// @brief Field TeamPlayerProp offset 0xffffffff size 0x8
  static constexpr ::ConstString TeamPlayerProp{ u"team" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PunTeams, 0x20>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__PunTeams__Team, "Photon.Pun.UtilityScripts", "PunTeams/Team");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PunTeams);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PunTeams*, "Photon.Pun.UtilityScripts", "PunTeams");
