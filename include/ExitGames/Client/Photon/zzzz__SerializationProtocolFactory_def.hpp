#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationProtocolFactory)
namespace ExitGames::Client::Photon {
class IProtocol;
}
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SerializationProtocolFactory;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SerializationProtocolFactory);
// Type: ExitGames.Client.Photon::SerializationProtocolFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SerializationProtocolFactory*
class CORDL_TYPE SerializationProtocolFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x277fda0, size 0x98, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::IProtocol* Create(::ExitGames::Client::Photon::SerializationProtocol serializationProtocol);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationProtocolFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationProtocolFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationProtocolFactory(SerializationProtocolFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationProtocolFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationProtocolFactory(SerializationProtocolFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SerializationProtocolFactory, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SerializationProtocolFactory);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SerializationProtocolFactory*, "ExitGames.Client.Photon", "SerializationProtocolFactory");
