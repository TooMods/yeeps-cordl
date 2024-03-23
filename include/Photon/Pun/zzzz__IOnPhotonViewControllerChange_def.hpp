#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnPhotonViewControllerChange)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IOnPhotonViewControllerChange;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IOnPhotonViewControllerChange);
// Type: Photon.Pun::IOnPhotonViewControllerChange
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IOnPhotonViewControllerChange*
class CORDL_TYPE IOnPhotonViewControllerChange {
public:
  // Declarations
  /// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
  constexpr operator ::Photon::Pun::IPhotonViewCallback*() noexcept;

  /// @brief Method OnControllerChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnControllerChange(::Photon::Realtime::Player* newController, ::Photon::Realtime::Player* previousController);

  /// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
  constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewControllerChange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOnPhotonViewControllerChange(IOnPhotonViewControllerChange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOnPhotonViewControllerChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOnPhotonViewControllerChange(IOnPhotonViewControllerChange const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IOnPhotonViewControllerChange);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IOnPhotonViewControllerChange*, "Photon.Pun", "IOnPhotonViewControllerChange");
