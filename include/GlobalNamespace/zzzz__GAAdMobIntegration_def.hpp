#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GAAdMobIntegration)
// Forward declare root types
namespace GlobalNamespace {
class GAAdMobIntegration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GAAdMobIntegration);
// Type: ::GAAdMobIntegration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GAAdMobIntegration*
class CORDL_TYPE GAAdMobIntegration : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::GAAdMobIntegration* New_ctor();

  /// @brief Method .ctor, addr 0x1583998, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GAAdMobIntegration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GAAdMobIntegration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GAAdMobIntegration(GAAdMobIntegration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GAAdMobIntegration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GAAdMobIntegration(GAAdMobIntegration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GAAdMobIntegration, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GAAdMobIntegration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GAAdMobIntegration*, "", "GAAdMobIntegration");
