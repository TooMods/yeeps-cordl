#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConfigurationLoader)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class IConfigurationLoader;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::IConfigurationLoader);
// Type: Unity.Services.Core.Configuration::IConfigurationLoader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration::IConfigurationLoader*
class CORDL_TYPE IConfigurationLoader {
public:
  // Declarations
  /// @brief Method GetConfigAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* GetConfigAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IConfigurationLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConfigurationLoader(IConfigurationLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConfigurationLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConfigurationLoader(IConfigurationLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::IConfigurationLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::IConfigurationLoader*, "Unity.Services.Core.Configuration", "IConfigurationLoader");
