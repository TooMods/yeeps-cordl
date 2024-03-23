#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IProjectConfiguration)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration);
// Type: Unity.Services.Core.Configuration.Internal::IProjectConfiguration
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration.Internal::IProjectConfiguration*
class CORDL_TYPE IProjectConfiguration {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method GetBool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetBool(::StringW key, bool defaultValue);

  /// @brief Method GetFloat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetFloat(::StringW key, float_t defaultValue);

  /// @brief Method GetInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IProjectConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProjectConfiguration(IProjectConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProjectConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProjectConfiguration(IProjectConfiguration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Configuration::Internal
NEED_NO_BOX(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*, "Unity.Services.Core.Configuration.Internal", "IProjectConfiguration");
