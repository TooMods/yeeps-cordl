#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssumeRoleAWSCredentialsOptions)
namespace System::Net {
class IWebProxy;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class AssumeRoleAWSCredentialsOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions);
// Type: Amazon.Runtime::AssumeRoleAWSCredentialsOptions
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AssumeRoleAWSCredentialsOptions*
class CORDL_TYPE AssumeRoleAWSCredentialsOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DurationSeconds, put = set_DurationSeconds))::System::Nullable_1<int32_t> DurationSeconds;

  __declspec(property(get = get_ExternalId, put = set_ExternalId))::StringW ExternalId;

  __declspec(property(get = get_MfaSerialNumber, put = set_MfaSerialNumber))::StringW MfaSerialNumber;

  __declspec(property(get = get_MfaTokenCode))::StringW MfaTokenCode;

  __declspec(property(get = get_MfaTokenCodeCallback, put = set_MfaTokenCodeCallback))::System::Func_1<::StringW>* MfaTokenCodeCallback;

  __declspec(property(get = get_Policy, put = set_Policy))::StringW Policy;

  __declspec(property(get = get_ProxySettings, put = set_ProxySettings))::System::Net::IWebProxy* ProxySettings;

  __declspec(property(get = get_SourceIdentity, put = set_SourceIdentity))::StringW SourceIdentity;

  /// @brief Field <DurationSeconds>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__DurationSeconds_k__BackingField,
                      put = __cordl_internal_set__DurationSeconds_k__BackingField))::System::Nullable_1<int32_t> _DurationSeconds_k__BackingField;

  /// @brief Field <ExternalId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ExternalId_k__BackingField, put = __cordl_internal_set__ExternalId_k__BackingField))::StringW _ExternalId_k__BackingField;

  /// @brief Field <MfaSerialNumber>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__MfaSerialNumber_k__BackingField, put = __cordl_internal_set__MfaSerialNumber_k__BackingField))::StringW _MfaSerialNumber_k__BackingField;

  /// @brief Field <MfaTokenCodeCallback>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__MfaTokenCodeCallback_k__BackingField,
                      put = __cordl_internal_set__MfaTokenCodeCallback_k__BackingField))::System::Func_1<::StringW>* _MfaTokenCodeCallback_k__BackingField;

  /// @brief Field <Policy>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Policy_k__BackingField, put = __cordl_internal_set__Policy_k__BackingField))::StringW _Policy_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxySettings_k__BackingField, put = __cordl_internal_set__ProxySettings_k__BackingField))::System::Net::IWebProxy* _ProxySettings_k__BackingField;

  /// @brief Field <SourceIdentity>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__SourceIdentity_k__BackingField, put = __cordl_internal_set__SourceIdentity_k__BackingField))::StringW _SourceIdentity_k__BackingField;

  static inline ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__DurationSeconds_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__DurationSeconds_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ExternalId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ExternalId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MfaSerialNumber_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MfaSerialNumber_k__BackingField();

  constexpr ::System::Func_1<::StringW>*& __cordl_internal_get__MfaTokenCodeCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::StringW>*> const& __cordl_internal_get__MfaTokenCodeCallback_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Policy_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Policy_k__BackingField();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__ProxySettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get__ProxySettings_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__SourceIdentity_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SourceIdentity_k__BackingField();

  constexpr void __cordl_internal_set__DurationSeconds_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__ExternalId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MfaSerialNumber_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MfaTokenCodeCallback_k__BackingField(::System::Func_1<::StringW>* value);

  constexpr void __cordl_internal_set__Policy_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProxySettings_k__BackingField(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set__SourceIdentity_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fe4c2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DurationSeconds, addr 0x1fe54f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_DurationSeconds();

  /// @brief Method get_ExternalId, addr 0x1fe54d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExternalId();

  /// @brief Method get_MfaSerialNumber, addr 0x1fe5518, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MfaSerialNumber();

  /// @brief Method get_MfaTokenCode, addr 0x1fe5528, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW get_MfaTokenCode();

  /// @brief Method get_MfaTokenCodeCallback, addr 0x1fe55b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::StringW>* get_MfaTokenCodeCallback();

  /// @brief Method get_Policy, addr 0x1fe54e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Policy();

  /// @brief Method get_ProxySettings, addr 0x1fe5508, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IWebProxy* get_ProxySettings();

  /// @brief Method get_SourceIdentity, addr 0x1fe55c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceIdentity();

  /// @brief Method set_DurationSeconds, addr 0x1fe5500, size 0x8, virtual false, abstract: false, final false
  inline void set_DurationSeconds(::System::Nullable_1<int32_t> value);

  /// @brief Method set_ExternalId, addr 0x1fe54e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExternalId(::StringW value);

  /// @brief Method set_MfaSerialNumber, addr 0x1fe5520, size 0x8, virtual false, abstract: false, final false
  inline void set_MfaSerialNumber(::StringW value);

  /// @brief Method set_MfaTokenCodeCallback, addr 0x1fe55bc, size 0x8, virtual false, abstract: false, final false
  inline void set_MfaTokenCodeCallback(::System::Func_1<::StringW>* value);

  /// @brief Method set_Policy, addr 0x1fe54f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Policy(::StringW value);

  /// @brief Method set_ProxySettings, addr 0x1fe5510, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxySettings(::System::Net::IWebProxy* value);

  /// @brief Method set_SourceIdentity, addr 0x1fe55cc, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceIdentity(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssumeRoleAWSCredentialsOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleAWSCredentialsOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssumeRoleAWSCredentialsOptions(AssumeRoleAWSCredentialsOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleAWSCredentialsOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssumeRoleAWSCredentialsOptions(AssumeRoleAWSCredentialsOptions const&) = delete;

  /// @brief Field <ExternalId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ExternalId_k__BackingField;

  /// @brief Field <Policy>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Policy_k__BackingField;

  /// @brief Field <DurationSeconds>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____DurationSeconds_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____ProxySettings_k__BackingField;

  /// @brief Field <MfaSerialNumber>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____MfaSerialNumber_k__BackingField;

  /// @brief Field <MfaTokenCodeCallback>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Func_1<::StringW>* ____MfaTokenCodeCallback_k__BackingField;

  /// @brief Field <SourceIdentity>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____SourceIdentity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____ExternalId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____Policy_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____DurationSeconds_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____ProxySettings_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____MfaSerialNumber_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____MfaTokenCodeCallback_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions, ____SourceIdentity_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AssumeRoleAWSCredentialsOptions*, "Amazon.Runtime", "AssumeRoleAWSCredentialsOptions");
