#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnEventCallback)
namespace ExitGames::Client::Photon {
class EventData;
}
// Forward declare root types
namespace Photon::Realtime {
class IOnEventCallback;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IOnEventCallback);
// Type: Photon.Realtime::IOnEventCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IOnEventCallback*
class CORDL_TYPE IOnEventCallback {
public:
  // Declarations
  /// @brief Method OnEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnEvent(::ExitGames::Client::Photon::EventData* photonEvent);

  // Ctor Parameters [CppParam { name: "", ty: "IOnEventCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOnEventCallback(IOnEventCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOnEventCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOnEventCallback(IOnEventCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IOnEventCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IOnEventCallback*, "Photon.Realtime", "IOnEventCallback");
