#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelWellKnownProperties)
// Forward declare root types
namespace Photon::Chat {
class ChannelWellKnownProperties;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChannelWellKnownProperties);
// Type: Photon.Chat::ChannelWellKnownProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChannelWellKnownProperties*
class CORDL_TYPE ChannelWellKnownProperties : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ChannelWellKnownProperties* New_ctor();

  /// @brief Method .ctor, addr 0x180a338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelWellKnownProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelWellKnownProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelWellKnownProperties(ChannelWellKnownProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelWellKnownProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelWellKnownProperties(ChannelWellKnownProperties const&) = delete;

  /// @brief Field MaxSubscribers offset 0xffffffff size 0x1
  static constexpr uint8_t MaxSubscribers{ static_cast<uint8_t>(0xffu) };

  /// @brief Field PublishSubscribers offset 0xffffffff size 0x1
  static constexpr uint8_t PublishSubscribers{ static_cast<uint8_t>(0xfeu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChannelWellKnownProperties, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChannelWellKnownProperties);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChannelWellKnownProperties*, "Photon.Chat", "ChannelWellKnownProperties");
