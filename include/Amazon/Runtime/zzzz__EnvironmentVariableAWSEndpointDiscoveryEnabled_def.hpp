#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableAWSEndpointDiscoveryEnabled)
// Forward declare root types
namespace Amazon::Runtime {
class EnvironmentVariableAWSEndpointDiscoveryEnabled;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled);
// Type: Amazon.Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*
class CORDL_TYPE EnvironmentVariableAWSEndpointDiscoveryEnabled : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  /// @brief Field <Enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) bool _Enabled_k__BackingField;

  static inline ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled* New_ctor();

  constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enabled_k__BackingField();

  constexpr void __cordl_internal_set__Enabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1ff53d4, size 0x2a8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Enabled, addr 0x1ff53c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method set_Enabled, addr 0x1ff53c8, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableAWSEndpointDiscoveryEnabled();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableAWSEndpointDiscoveryEnabled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableAWSEndpointDiscoveryEnabled(EnvironmentVariableAWSEndpointDiscoveryEnabled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableAWSEndpointDiscoveryEnabled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableAWSEndpointDiscoveryEnabled(EnvironmentVariableAWSEndpointDiscoveryEnabled const&) = delete;

  /// @brief Field <Enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Enabled_k__BackingField;

  /// @brief Field ENVIRONMENT_VARIABLE_AWS_ENABLE_ENDPOINT_DISCOVERY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_AWS_ENABLE_ENDPOINT_DISCOVERY{ u"AWS_ENABLE_ENDPOINT_DISCOVERY" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled, ____Enabled_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*, "Amazon.Runtime", "EnvironmentVariableAWSEndpointDiscoveryEnabled");
