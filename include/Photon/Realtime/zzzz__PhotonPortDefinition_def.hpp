#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonPortDefinition)
// Forward declare root types
namespace Photon::Realtime {
struct PhotonPortDefinition;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::PhotonPortDefinition);
// Type: Photon.Realtime::PhotonPortDefinition
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::PhotonPortDefinition
struct CORDL_TYPE PhotonPortDefinition {
public:
  // Declarations
  /// @brief Field AlternativeUdpPorts, offset 0xffffffff, size 0x6
  static __declspec(property(get = getStaticF_AlternativeUdpPorts, put = setStaticF_AlternativeUdpPorts))::Photon::Realtime::PhotonPortDefinition AlternativeUdpPorts;

  static inline ::Photon::Realtime::PhotonPortDefinition getStaticF_AlternativeUdpPorts();

  static inline void setStaticF_AlternativeUdpPorts(::Photon::Realtime::PhotonPortDefinition value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonPortDefinition();

  // Ctor Parameters [CppParam { name: "NameServerPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "MasterServerPort", ty: "uint16_t", modifiers: "", def_value: None },
  // CppParam { name: "GameServerPort", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr PhotonPortDefinition(uint16_t NameServerPort, uint16_t MasterServerPort, uint16_t GameServerPort) noexcept;

  /// @brief Field NameServerPort, offset: 0x0, size: 0x2, def value: None
  uint16_t NameServerPort;

  /// @brief Field MasterServerPort, offset: 0x2, size: 0x2, def value: None
  uint16_t MasterServerPort;

  /// @brief Field GameServerPort, offset: 0x4, size: 0x2, def value: None
  uint16_t GameServerPort;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::PhotonPortDefinition, 0x6>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPortDefinition, NameServerPort) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPortDefinition, MasterServerPort) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::PhotonPortDefinition, GameServerPort) == 0x4, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::PhotonPortDefinition, "Photon.Realtime", "PhotonPortDefinition");
