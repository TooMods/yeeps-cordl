#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatOperationCode)
// Forward declare root types
namespace Photon::Chat {
class ChatOperationCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatOperationCode);
// Type: Photon.Chat::ChatOperationCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatOperationCode*
class CORDL_TYPE ChatOperationCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ChatOperationCode* New_ctor();

  /// @brief Method .ctor, addr 0x18106a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatOperationCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatOperationCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatOperationCode(ChatOperationCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatOperationCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatOperationCode(ChatOperationCode const&) = delete;

  /// @brief Field AddFriends offset 0xffffffff size 0x1
  static constexpr uint8_t AddFriends{ static_cast<uint8_t>(0x6u) };

  /// @brief Field Authenticate offset 0xffffffff size 0x1
  static constexpr uint8_t Authenticate{ static_cast<uint8_t>(0xe6u) };

  /// @brief Field ChannelHistory offset 0xffffffff size 0x1
  static constexpr uint8_t ChannelHistory{ static_cast<uint8_t>(0x4u) };

  /// @brief Field Publish offset 0xffffffff size 0x1
  static constexpr uint8_t Publish{ static_cast<uint8_t>(0x2u) };

  /// @brief Field RemoveFriends offset 0xffffffff size 0x1
  static constexpr uint8_t RemoveFriends{ static_cast<uint8_t>(0x7u) };

  /// @brief Field SendPrivate offset 0xffffffff size 0x1
  static constexpr uint8_t SendPrivate{ static_cast<uint8_t>(0x3u) };

  /// @brief Field SetProperties offset 0xffffffff size 0x1
  static constexpr uint8_t SetProperties{ static_cast<uint8_t>(0x8u) };

  /// @brief Field Subscribe offset 0xffffffff size 0x1
  static constexpr uint8_t Subscribe{ static_cast<uint8_t>(0x0u) };

  /// @brief Field Unsubscribe offset 0xffffffff size 0x1
  static constexpr uint8_t Unsubscribe{ static_cast<uint8_t>(0x1u) };

  /// @brief Field UpdateStatus offset 0xffffffff size 0x1
  static constexpr uint8_t UpdateStatus{ static_cast<uint8_t>(0x5u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatOperationCode, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatOperationCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatOperationCode*, "Photon.Chat", "ChatOperationCode");
