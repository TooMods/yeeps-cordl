#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITrafficRecorder)
namespace ExitGames::Client::Photon {
class IPhotonSocket;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ITrafficRecorder;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::ITrafficRecorder);
// Type: ExitGames.Client.Photon::ITrafficRecorder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::ITrafficRecorder*
class CORDL_TYPE ITrafficRecorder {
public:
  // Declarations
  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  /// @brief Method Record, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Record(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuffer, int32_t length, bool incoming, int16_t peerId, ::ExitGames::Client::Photon::IPhotonSocket* connection);

  /// @brief Method get_Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Enabled();

  /// @brief Method set_Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Enabled(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ITrafficRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITrafficRecorder(ITrafficRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITrafficRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITrafficRecorder(ITrafficRecorder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::ITrafficRecorder);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::ITrafficRecorder*, "ExitGames.Client.Photon", "ITrafficRecorder");
