#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GAMopubIntegration)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GAMopubIntegration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GAMopubIntegration);
// Type: ::GAMopubIntegration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GAMopubIntegration*
class CORDL_TYPE GAMopubIntegration : public ::System::Object {
public:
  // Declarations
  /// @brief Method ListenForImpressions, addr 0x15839dc, size 0x4, virtual false, abstract: false, final false
  static inline void ListenForImpressions(::System::Action_1<::StringW>* callback);

  static inline ::GlobalNamespace::GAMopubIntegration* New_ctor();

  /// @brief Method .ctor, addr 0x15839e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GAMopubIntegration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GAMopubIntegration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GAMopubIntegration(GAMopubIntegration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GAMopubIntegration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GAMopubIntegration(GAMopubIntegration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GAMopubIntegration, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GAMopubIntegration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GAMopubIntegration*, "", "GAMopubIntegration");
