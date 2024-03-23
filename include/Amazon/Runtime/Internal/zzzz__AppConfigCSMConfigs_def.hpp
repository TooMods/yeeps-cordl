#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AppConfigCSMConfigs)
namespace Amazon::Runtime::Internal {
class CSMFallbackConfigChain;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AppConfigCSMConfigs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AppConfigCSMConfigs);
// Type: Amazon.Runtime.Internal::AppConfigCSMConfigs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AppConfigCSMConfigs*
class CORDL_TYPE AppConfigCSMConfigs : public ::System::Object {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::AppConfigCSMConfigs* New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method .ctor, addr 0x23d3a0c, size 0x444, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppConfigCSMConfigs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppConfigCSMConfigs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppConfigCSMConfigs(AppConfigCSMConfigs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppConfigCSMConfigs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppConfigCSMConfigs(AppConfigCSMConfigs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AppConfigCSMConfigs, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AppConfigCSMConfigs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AppConfigCSMConfigs*, "Amazon.Runtime.Internal", "AppConfigCSMConfigs");
