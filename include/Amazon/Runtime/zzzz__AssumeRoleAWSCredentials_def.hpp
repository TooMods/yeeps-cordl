#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssumeRoleAWSCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class AssumeRoleAWSCredentialsOptions;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon {
class RegionEndpoint;
}
// Forward declare root types
namespace Amazon::Runtime {
class AssumeRoleAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AssumeRoleAWSCredentials);
// Type: Amazon.Runtime::AssumeRoleAWSCredentials
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AssumeRoleAWSCredentials*
class CORDL_TYPE AssumeRoleAWSCredentials : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  /// @brief Field DefaultSTSClientRegion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultSTSClientRegion, put = __cordl_internal_set_DefaultSTSClientRegion))::Amazon::RegionEndpoint* DefaultSTSClientRegion;

  __declspec(property(get = get_Options, put = set_Options))::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* Options;

  __declspec(property(get = get_RoleArn, put = set_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_RoleSessionName, put = set_RoleSessionName))::StringW RoleSessionName;

  __declspec(property(get = get_SourceCredentials, put = set_SourceCredentials))::Amazon::Runtime::AWSCredentials* SourceCredentials;

  /// @brief Field <Options>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField))::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* _Options_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleSessionName_k__BackingField, put = __cordl_internal_set__RoleSessionName_k__BackingField))::StringW _RoleSessionName_k__BackingField;

  /// @brief Field <SourceCredentials>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__SourceCredentials_k__BackingField,
                      put = __cordl_internal_set__SourceCredentials_k__BackingField))::Amazon::Runtime::AWSCredentials* _SourceCredentials_k__BackingField;

  /// @brief Field _logger, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Method GenerateNewCredentials, addr 0x1fe4fe4, size 0x4c8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  static inline ::Amazon::Runtime::AssumeRoleAWSCredentials* New_ctor(::Amazon::Runtime::AWSCredentials* sourceCredentials, ::StringW roleArn, ::StringW roleSessionName);

  static inline ::Amazon::Runtime::AssumeRoleAWSCredentials* New_ctor(::Amazon::Runtime::AWSCredentials* sourceCredentials, ::StringW roleArn, ::StringW roleSessionName,
                                                                      ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* options);

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get_DefaultSTSClientRegion();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get_DefaultSTSClientRegion() const;

  constexpr ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AssumeRoleAWSCredentialsOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleSessionName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleSessionName_k__BackingField();

  constexpr ::Amazon::Runtime::AWSCredentials*& __cordl_internal_get__SourceCredentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AWSCredentials*> const& __cordl_internal_get__SourceCredentials_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set_DefaultSTSClientRegion(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* value);

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleSessionName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SourceCredentials_k__BackingField(::Amazon::Runtime::AWSCredentials* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x1fe4ba0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* sourceCredentials, ::StringW roleArn, ::StringW roleSessionName);

  /// @brief Method .ctor, addr 0x1fe4c34, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* sourceCredentials, ::StringW roleArn, ::StringW roleSessionName, ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* options);

  /// @brief Method get_Options, addr 0x1fe4b90, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* get_Options();

  /// @brief Method get_RoleArn, addr 0x1fe4b70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_RoleSessionName, addr 0x1fe4b80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleSessionName();

  /// @brief Method get_SourceCredentials, addr 0x1fe4b60, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* get_SourceCredentials();

  /// @brief Method set_Options, addr 0x1fe4b98, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* value);

  /// @brief Method set_RoleArn, addr 0x1fe4b78, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleArn(::StringW value);

  /// @brief Method set_RoleSessionName, addr 0x1fe4b88, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleSessionName(::StringW value);

  /// @brief Method set_SourceCredentials, addr 0x1fe4b68, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceCredentials(::Amazon::Runtime::AWSCredentials* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssumeRoleAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssumeRoleAWSCredentials(AssumeRoleAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssumeRoleAWSCredentials(AssumeRoleAWSCredentials const&) = delete;

  /// @brief Field DefaultSTSClientRegion, offset: 0x38, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ___DefaultSTSClientRegion;

  /// @brief Field _logger, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field <SourceCredentials>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::AWSCredentials* ____SourceCredentials_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____RoleSessionName_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AssumeRoleAWSCredentials, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ___DefaultSTSClientRegion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ____logger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ____SourceCredentials_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ____RoleArn_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ____RoleSessionName_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentials, ____Options_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AssumeRoleAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AssumeRoleAWSCredentials*, "Amazon.Runtime", "AssumeRoleAWSCredentials");
