#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnStartDelete)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnStartDelete;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnStartDelete);
// Type: Photon.Pun.UtilityScripts::OnStartDelete
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnStartDelete*
class CORDL_TYPE OnStartDelete : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::Photon::Pun::UtilityScripts::OnStartDelete* New_ctor();

  /// @brief Method Start, addr 0x1ec9f10, size 0x6c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method .ctor, addr 0x1ec9f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnStartDelete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnStartDelete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnStartDelete(OnStartDelete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnStartDelete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnStartDelete(OnStartDelete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnStartDelete, 0x18>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnStartDelete);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnStartDelete*, "Photon.Pun.UtilityScripts", "OnStartDelete");
