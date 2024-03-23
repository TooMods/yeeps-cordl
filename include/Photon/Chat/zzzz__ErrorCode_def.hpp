#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace Photon::Chat {
class ErrorCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ErrorCode);
// Type: Photon.Chat::ErrorCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ErrorCode*
class CORDL_TYPE ErrorCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ErrorCode* New_ctor();

  /// @brief Method .ctor, addr 0x181106c, size 0x1b534, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorCode(ErrorCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorCode(ErrorCode const&) = delete;

  /// @brief Field AuthenticationTicketExpired offset 0xffffffff size 0x4
  static constexpr int32_t AuthenticationTicketExpired{ static_cast<int32_t>(0x7ff1) };

  /// @brief Field CustomAuthenticationFailed offset 0xffffffff size 0x4
  static constexpr int32_t CustomAuthenticationFailed{ static_cast<int32_t>(0x7ff3) };

  /// @brief Field GameClosed offset 0xffffffff size 0x4
  static constexpr int32_t GameClosed{ static_cast<int32_t>(0x7ffc) };

  /// @brief Field GameDoesNotExist offset 0xffffffff size 0x4
  static constexpr int32_t GameDoesNotExist{ static_cast<int32_t>(0x7ff6) };

  /// @brief Field GameFull offset 0xffffffff size 0x4
  static constexpr int32_t GameFull{ static_cast<int32_t>(0x7ffd) };

  /// @brief Field GameIdAlreadyExists offset 0xffffffff size 0x4
  static constexpr int32_t GameIdAlreadyExists{ static_cast<int32_t>(0x7ffe) };

  /// @brief Field InternalServerError offset 0xffffffff size 0x4
  static constexpr int32_t InternalServerError{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field InvalidAuthentication offset 0xffffffff size 0x4
  static constexpr int32_t InvalidAuthentication{ static_cast<int32_t>(0x7fff) };

  /// @brief Field InvalidOperationCode offset 0xffffffff size 0x4
  static constexpr int32_t InvalidOperationCode{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field InvalidRegion offset 0xffffffff size 0x4
  static constexpr int32_t InvalidRegion{ static_cast<int32_t>(0x7ff4) };

  /// @brief Field MaxCcuReached offset 0xffffffff size 0x4
  static constexpr int32_t MaxCcuReached{ static_cast<int32_t>(0x7ff5) };

  /// @brief Field NoRandomMatchFound offset 0xffffffff size 0x4
  static constexpr int32_t NoRandomMatchFound{ static_cast<int32_t>(0x7ff8) };

  /// @brief Field Ok offset 0xffffffff size 0x4
  static constexpr int32_t Ok{ static_cast<int32_t>(0x0) };

  /// @brief Field OperationNotAllowedInCurrentState offset 0xffffffff size 0x4
  static constexpr int32_t OperationNotAllowedInCurrentState{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field ServerFull offset 0xffffffff size 0x4
  static constexpr int32_t ServerFull{ static_cast<int32_t>(0x7ffa) };

  /// @brief Field UserBlocked offset 0xffffffff size 0x4
  static constexpr int32_t UserBlocked{ static_cast<int32_t>(0x7ff9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ErrorCode, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ErrorCode*, "Photon.Chat", "ErrorCode");
