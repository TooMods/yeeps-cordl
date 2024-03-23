#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PunEvent)
// Forward declare root types
namespace Photon::Pun {
class PunEvent;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PunEvent);
// Type: Photon.Pun::PunEvent
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PunEvent*
class CORDL_TYPE PunEvent : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Pun::PunEvent* New_ctor();

  /// @brief Method .ctor, addr 0x27548bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunEvent(PunEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunEvent(PunEvent const&) = delete;

  /// @brief Field CloseConnection offset 0xffffffff size 0x1
  static constexpr uint8_t CloseConnection{ static_cast<uint8_t>(0xcbu) };

  /// @brief Field Destroy offset 0xffffffff size 0x1
  static constexpr uint8_t Destroy{ static_cast<uint8_t>(0xccu) };

  /// @brief Field DestroyPlayer offset 0xffffffff size 0x1
  static constexpr uint8_t DestroyPlayer{ static_cast<uint8_t>(0xcfu) };

  /// @brief Field Instantiation offset 0xffffffff size 0x1
  static constexpr uint8_t Instantiation{ static_cast<uint8_t>(0xcau) };

  /// @brief Field OwnershipRequest offset 0xffffffff size 0x1
  static constexpr uint8_t OwnershipRequest{ static_cast<uint8_t>(0xd1u) };

  /// @brief Field OwnershipTransfer offset 0xffffffff size 0x1
  static constexpr uint8_t OwnershipTransfer{ static_cast<uint8_t>(0xd2u) };

  /// @brief Field OwnershipUpdate offset 0xffffffff size 0x1
  static constexpr uint8_t OwnershipUpdate{ static_cast<uint8_t>(0xd4u) };

  /// @brief Field RPC offset 0xffffffff size 0x1
  static constexpr uint8_t RPC{ static_cast<uint8_t>(0xc8u) };

  /// @brief Field RemoveCachedRPCs offset 0xffffffff size 0x1
  static constexpr uint8_t RemoveCachedRPCs{ static_cast<uint8_t>(0xcdu) };

  /// @brief Field SendSerialize offset 0xffffffff size 0x1
  static constexpr uint8_t SendSerialize{ static_cast<uint8_t>(0xc9u) };

  /// @brief Field SendSerializeReliable offset 0xffffffff size 0x1
  static constexpr uint8_t SendSerializeReliable{ static_cast<uint8_t>(0xceu) };

  /// @brief Field VacantViewIds offset 0xffffffff size 0x1
  static constexpr uint8_t VacantViewIds{ static_cast<uint8_t>(0xd3u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PunEvent, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PunEvent);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PunEvent*, "Photon.Pun", "PunEvent");
