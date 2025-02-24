#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPhotonViewCallback)
// Forward declare root types
namespace Photon::Pun {
class IPhotonViewCallback;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IPhotonViewCallback);
// Type: Photon.Pun::IPhotonViewCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IPhotonViewCallback*
class CORDL_TYPE IPhotonViewCallback {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IPhotonViewCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPhotonViewCallback(IPhotonViewCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonViewCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPhotonViewCallback(IPhotonViewCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IPhotonViewCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IPhotonViewCallback*, "Photon.Pun", "IPhotonViewCallback");
