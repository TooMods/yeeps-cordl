#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariablesAWSCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
// Forward declare root types
namespace Amazon::Runtime {
class EnvironmentVariablesAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EnvironmentVariablesAWSCredentials);
// Type: Amazon.Runtime::EnvironmentVariablesAWSCredentials
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::EnvironmentVariablesAWSCredentials*
class CORDL_TYPE EnvironmentVariablesAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  /// @brief Field logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger))::Amazon::Runtime::Internal::Util::Logger* logger;

  /// @brief Method FetchCredentials, addr 0x1fe9688, size 0x344, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* FetchCredentials();

  /// @brief Method GetCredentials, addr 0x1fe99cc, size 0x4, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  static inline ::Amazon::Runtime::EnvironmentVariablesAWSCredentials* New_ctor();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get_logger() const;

  constexpr void __cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x1fe95c0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariablesAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariablesAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariablesAWSCredentials(EnvironmentVariablesAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariablesAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariablesAWSCredentials(EnvironmentVariablesAWSCredentials const&) = delete;

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ___logger;

  /// @brief Field ENVIRONMENT_VARIABLE_ACCESSKEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_ACCESSKEY{ u"AWS_ACCESS_KEY_ID" };

  /// @brief Field ENVIRONMENT_VARIABLE_SECRETKEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_SECRETKEY{ u"AWS_SECRET_ACCESS_KEY" };

  /// @brief Field ENVIRONMENT_VARIABLE_SESSION_TOKEN offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_SESSION_TOKEN{ u"AWS_SESSION_TOKEN" };

  /// @brief Field LEGACY_ENVIRONMENT_VARIABLE_SECRETKEY offset 0xffffffff size 0x8
  static constexpr ::ConstString LEGACY_ENVIRONMENT_VARIABLE_SECRETKEY{ u"AWS_SECRET_KEY" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EnvironmentVariablesAWSCredentials, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EnvironmentVariablesAWSCredentials, ___logger) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::EnvironmentVariablesAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EnvironmentVariablesAWSCredentials*, "Amazon.Runtime", "EnvironmentVariablesAWSCredentials");
