#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GAHyperBidIntegration)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GAHyperBidIntegration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GAHyperBidIntegration);
// Type: ::GAHyperBidIntegration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GAHyperBidIntegration*
class CORDL_TYPE GAHyperBidIntegration : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method ListenForImpressions, addr 0x15839b8, size 0x4, virtual false, abstract: false, final false
  static inline void ListenForImpressions(::System::Action_1<::StringW>* callback);

  static inline ::GlobalNamespace::GAHyperBidIntegration* New_ctor();

  /// @brief Method .ctor, addr 0x15839bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GAHyperBidIntegration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GAHyperBidIntegration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GAHyperBidIntegration(GAHyperBidIntegration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GAHyperBidIntegration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GAHyperBidIntegration(GAHyperBidIntegration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GAHyperBidIntegration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GAHyperBidIntegration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GAHyperBidIntegration*, "", "GAHyperBidIntegration");
