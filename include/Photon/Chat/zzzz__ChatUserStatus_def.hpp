#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatUserStatus)
// Forward declare root types
namespace Photon::Chat {
class ChatUserStatus;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatUserStatus);
// Type: Photon.Chat::ChatUserStatus
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatUserStatus*
class CORDL_TYPE ChatUserStatus : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatUserStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatUserStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatUserStatus(ChatUserStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatUserStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatUserStatus(ChatUserStatus const&) = delete;

  /// @brief Field Away offset 0xffffffff size 0x4
  static constexpr int32_t Away{ static_cast<int32_t>(0x3) };

  /// @brief Field DND offset 0xffffffff size 0x4
  static constexpr int32_t DND{ static_cast<int32_t>(0x4) };

  /// @brief Field Invisible offset 0xffffffff size 0x4
  static constexpr int32_t Invisible{ static_cast<int32_t>(0x1) };

  /// @brief Field LFG offset 0xffffffff size 0x4
  static constexpr int32_t LFG{ static_cast<int32_t>(0x5) };

  /// @brief Field Offline offset 0xffffffff size 0x4
  static constexpr int32_t Offline{ static_cast<int32_t>(0x0) };

  /// @brief Field Online offset 0xffffffff size 0x4
  static constexpr int32_t Online{ static_cast<int32_t>(0x2) };

  /// @brief Field Playing offset 0xffffffff size 0x4
  static constexpr int32_t Playing{ static_cast<int32_t>(0x6) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatUserStatus, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatUserStatus);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatUserStatus*, "Photon.Chat", "ChatUserStatus");
