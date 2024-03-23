#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__InternalConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableInternalConfiguration)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EnvironmentVariableInternalConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration);
// Type: Amazon.Runtime.Internal::EnvironmentVariableInternalConfiguration
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EnvironmentVariableInternalConfiguration*
class CORDL_TYPE EnvironmentVariableInternalConfiguration : public ::Amazon::Runtime::Internal::InternalConfiguration {
public:
  // Declarations
  /// @brief Field _logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Method GetEnvironmentVariable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Nullable_1<T> GetEnvironmentVariable(::StringW name);

  static inline ::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration* New_ctor();

  /// @brief Method TryGetEnvironmentVariable, addr 0x23d7e80, size 0x124, virtual false, abstract: false, final false
  inline bool TryGetEnvironmentVariable(::StringW environmentVariableName, ByRef<::StringW> value);

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x23d7cf8, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableInternalConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableInternalConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableInternalConfiguration(EnvironmentVariableInternalConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableInternalConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableInternalConfiguration(EnvironmentVariableInternalConfiguration const&) = delete;

  /// @brief Field _logger, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field ENVIRONMENT_VARIABLE_AWS_ENABLE_ENDPOINT_DISCOVERY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_AWS_ENABLE_ENDPOINT_DISCOVERY{ u"AWS_ENABLE_ENDPOINT_DISCOVERY" };

  /// @brief Field ENVIRONMENT_VARIABLE_AWS_MAX_ATTEMPTS offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_AWS_MAX_ATTEMPTS{ u"AWS_MAX_ATTEMPTS" };

  /// @brief Field ENVIRONMENT_VARIABLE_AWS_RETRY_MODE offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_AWS_RETRY_MODE{ u"AWS_RETRY_MODE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration, ____logger) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EnvironmentVariableInternalConfiguration*, "Amazon.Runtime.Internal", "EnvironmentVariableInternalConfiguration");
