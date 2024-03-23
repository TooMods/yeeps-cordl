#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ND_TEST_TYPE)
// Forward declare root types
namespace Unity::Services::Vivox {
struct ND_TEST_TYPE;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::ND_TEST_TYPE);
// Type: Unity.Services.Vivox::ND_TEST_TYPE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::ND_TEST_TYPE
struct CORDL_TYPE ND_TEST_TYPE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ND_TEST_TYPE_Unwrapped
  enum struct __ND_TEST_TYPE_Unwrapped : int32_t {
    __E_ND_TEST_LOCATE_INTERFACE = static_cast<int32_t>(0x0),
    __E_ND_TEST_PING_GATEWAY = static_cast<int32_t>(0x1),
    __E_ND_TEST_DNS = static_cast<int32_t>(0x2),
    __E_ND_TEST_STUN = static_cast<int32_t>(0x3),
    __E_ND_TEST_ECHO = static_cast<int32_t>(0x4),
    __E_ND_TEST_ECHO_SIP_FIRST_PORT = static_cast<int32_t>(0x5),
    __E_ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_REQUEST = static_cast<int32_t>(0x6),
    __E_ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_RESPONSE = static_cast<int32_t>(0x7),
    __E_ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_REQUEST = static_cast<int32_t>(0x8),
    __E_ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_RESPONSE = static_cast<int32_t>(0x9),
    __E_ND_TEST_ECHO_SIP_SECOND_PORT = static_cast<int32_t>(0xa),
    __E_ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_REQUEST = static_cast<int32_t>(0xb),
    __E_ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_RESPONSE = static_cast<int32_t>(0xc),
    __E_ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_REQUEST = static_cast<int32_t>(0xd),
    __E_ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_RESPONSE = static_cast<int32_t>(0xe),
    __E_ND_TEST_ECHO_MEDIA = static_cast<int32_t>(0xf),
    __E_ND_TEST_ECHO_MEDIA_LARGE_PACKET = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ND_TEST_TYPE_Unwrapped() const noexcept {
    return static_cast<__ND_TEST_TYPE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ND_TEST_TYPE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ND_TEST_TYPE(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ND_TEST_DNS value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_DNS;

  /// @brief Field ND_TEST_ECHO value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO;

  /// @brief Field ND_TEST_ECHO_MEDIA value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_MEDIA;

  /// @brief Field ND_TEST_ECHO_MEDIA_LARGE_PACKET value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_MEDIA_LARGE_PACKET;

  /// @brief Field ND_TEST_ECHO_SIP_FIRST_PORT value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_FIRST_PORT;

  /// @brief Field ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_REQUEST value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_REQUEST;

  /// @brief Field ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_RESPONSE value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_FIRST_PORT_INVITE_RESPONSE;

  /// @brief Field ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_REQUEST value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_REQUEST;

  /// @brief Field ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_RESPONSE value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_FIRST_PORT_REGISTER_RESPONSE;

  /// @brief Field ND_TEST_ECHO_SIP_SECOND_PORT value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_SECOND_PORT;

  /// @brief Field ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_REQUEST value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_REQUEST;

  /// @brief Field ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_RESPONSE value: static_cast<int32_t>(0xc)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_SECOND_PORT_INVITE_RESPONSE;

  /// @brief Field ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_REQUEST value: static_cast<int32_t>(0xd)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_REQUEST;

  /// @brief Field ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_RESPONSE value: static_cast<int32_t>(0xe)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_ECHO_SIP_SECOND_PORT_REGISTER_RESPONSE;

  /// @brief Field ND_TEST_LOCATE_INTERFACE value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_LOCATE_INTERFACE;

  /// @brief Field ND_TEST_PING_GATEWAY value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_PING_GATEWAY;

  /// @brief Field ND_TEST_STUN value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::ND_TEST_TYPE const ND_TEST_STUN;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ND_TEST_TYPE, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ND_TEST_TYPE, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ND_TEST_TYPE, "Unity.Services.Vivox", "ND_TEST_TYPE");
