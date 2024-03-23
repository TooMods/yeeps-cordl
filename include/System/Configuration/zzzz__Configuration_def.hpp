#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Configuration)
// Forward declare root types
namespace System::Configuration {
class Configuration;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::Configuration);
// Type: System.Configuration::Configuration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::Configuration*
class CORDL_TYPE Configuration : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Configuration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Configuration(Configuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Configuration(Configuration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::Configuration, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::Configuration);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::Configuration*, "System.Configuration", "Configuration");
