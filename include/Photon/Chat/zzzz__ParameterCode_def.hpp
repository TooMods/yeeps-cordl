#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterCode)
// Forward declare root types
namespace Photon::Chat {
class ParameterCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ParameterCode);
// Type: Photon.Chat::ParameterCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ParameterCode*
class CORDL_TYPE ParameterCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ParameterCode* New_ctor();

  /// @brief Method .ctor, addr 0x1811064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterCode(ParameterCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterCode(ParameterCode const&) = delete;

  /// @brief Field Address offset 0xffffffff size 0x1
  static constexpr uint8_t Address{ static_cast<uint8_t>(0xe6u) };

  /// @brief Field AppVersion offset 0xffffffff size 0x1
  static constexpr uint8_t AppVersion{ static_cast<uint8_t>(0xdcu) };

  /// @brief Field ApplicationId offset 0xffffffff size 0x1
  static constexpr uint8_t ApplicationId{ static_cast<uint8_t>(0xe0u) };

  /// @brief Field ClientAuthenticationData offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationData{ static_cast<uint8_t>(0xd6u) };

  /// @brief Field ClientAuthenticationParams offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationParams{ static_cast<uint8_t>(0xd8u) };

  /// @brief Field ClientAuthenticationType offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationType{ static_cast<uint8_t>(0xd9u) };

  /// @brief Field Region offset 0xffffffff size 0x1
  static constexpr uint8_t Region{ static_cast<uint8_t>(0xd2u) };

  /// @brief Field Secret offset 0xffffffff size 0x1
  static constexpr uint8_t Secret{ static_cast<uint8_t>(0xddu) };

  /// @brief Field UserId offset 0xffffffff size 0x1
  static constexpr uint8_t UserId{ static_cast<uint8_t>(0xe1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ParameterCode, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ParameterCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ParameterCode*, "Photon.Chat", "ParameterCode");
