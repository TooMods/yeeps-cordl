#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationUtils)
namespace Unity::Services::Core::Configuration {
class IConfigurationLoader;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ConfigurationUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ConfigurationUtils);
// Type: Unity.Services.Core.Configuration::ConfigurationUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration::ConfigurationUtils*
class CORDL_TYPE ConfigurationUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ConfigurationLoader>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ConfigurationLoader_k__BackingField,
                             put = setStaticF__ConfigurationLoader_k__BackingField))::Unity::Services::Core::Configuration::IConfigurationLoader* _ConfigurationLoader_k__BackingField;

  static inline ::Unity::Services::Core::Configuration::IConfigurationLoader* getStaticF__ConfigurationLoader_k__BackingField();

  /// @brief Method get_ConfigurationLoader, addr 0x264aa78, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Configuration::IConfigurationLoader* get_ConfigurationLoader();

  static inline void setStaticF__ConfigurationLoader_k__BackingField(::Unity::Services::Core::Configuration::IConfigurationLoader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationUtils(ConfigurationUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationUtils(ConfigurationUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ConfigurationUtils, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ConfigurationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ConfigurationUtils*, "Unity.Services.Core.Configuration", "ConfigurationUtils");
