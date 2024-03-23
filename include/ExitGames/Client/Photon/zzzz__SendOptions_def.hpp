#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendOptions)
namespace ExitGames::Client::Photon {
struct DeliveryMode;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct SendOptions;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::SendOptions);
// Type: ExitGames.Client.Photon::SendOptions
// SizeInfo { instance_size: 8, native_size: 12, calculated_instance_size: 8, calculated_native_size: 22, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::SendOptions
struct CORDL_TYPE SendOptions {
public:
  // Declarations
  __declspec(property(get = get_Reliability, put = set_Reliability)) bool Reliability;

  /// @brief Field SendReliable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendReliable, put = setStaticF_SendReliable))::ExitGames::Client::Photon::SendOptions SendReliable;

  /// @brief Field SendUnreliable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendUnreliable, put = setStaticF_SendUnreliable))::ExitGames::Client::Photon::SendOptions SendUnreliable;

  static inline ::ExitGames::Client::Photon::SendOptions getStaticF_SendReliable();

  static inline ::ExitGames::Client::Photon::SendOptions getStaticF_SendUnreliable();

  /// @brief Method get_Reliability, addr 0x2ab5a50, size 0x10, virtual false, abstract: false, final false
  inline bool get_Reliability();

  static inline void setStaticF_SendReliable(::ExitGames::Client::Photon::SendOptions value);

  static inline void setStaticF_SendUnreliable(::ExitGames::Client::Photon::SendOptions value);

  /// @brief Method set_Reliability, addr 0x2ab5a60, size 0xc, virtual false, abstract: false, final false
  inline void set_Reliability(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendOptions();

  // Ctor Parameters [CppParam { name: "DeliveryMode", ty: "::ExitGames::Client::Photon::DeliveryMode", modifiers: "", def_value: None }, CppParam { name: "Encrypt", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr SendOptions(::ExitGames::Client::Photon::DeliveryMode DeliveryMode, bool Encrypt, uint8_t Channel) noexcept;

  /// @brief Field DeliveryMode, offset: 0x0, size: 0x4, def value: None
  ::ExitGames::Client::Photon::DeliveryMode DeliveryMode;

  /// @brief Field Encrypt, offset: 0x4, size: 0x1, def value: None
  bool Encrypt;

  /// @brief Field Channel, offset: 0x5, size: 0x1, def value: None
  uint8_t Channel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SendOptions, 0x8>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SendOptions, DeliveryMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SendOptions, Encrypt) == 0x4, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SendOptions, Channel) == 0x5, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SendOptions, "ExitGames.Client.Photon", "SendOptions");
