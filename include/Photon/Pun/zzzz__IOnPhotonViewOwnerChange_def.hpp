#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnPhotonViewOwnerChange)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IOnPhotonViewOwnerChange;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IOnPhotonViewOwnerChange);
// Type: Photon.Pun::IOnPhotonViewOwnerChange
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IOnPhotonViewOwnerChange*
class CORDL_TYPE IOnPhotonViewOwnerChange {
public:
  // Declarations
  /// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
  constexpr operator ::Photon::Pun::IPhotonViewCallback*() noexcept;

  /// @brief Method OnOwnerChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOwnerChange(::Photon::Realtime::Player* newOwner, ::Photon::Realtime::Player* previousOwner);

  /// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
  constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewOwnerChange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOnPhotonViewOwnerChange(IOnPhotonViewOwnerChange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewOwnerChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOnPhotonViewOwnerChange(IOnPhotonViewOwnerChange const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IOnPhotonViewOwnerChange);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IOnPhotonViewOwnerChange*, "Photon.Pun", "IOnPhotonViewOwnerChange");
