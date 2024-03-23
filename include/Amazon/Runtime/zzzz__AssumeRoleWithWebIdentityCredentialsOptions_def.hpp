#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssumeRoleWithWebIdentityCredentialsOptions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class AssumeRoleWithWebIdentityCredentialsOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions);
// Type: Amazon.Runtime::AssumeRoleWithWebIdentityCredentialsOptions
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AssumeRoleWithWebIdentityCredentialsOptions*
class CORDL_TYPE AssumeRoleWithWebIdentityCredentialsOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DurationSeconds))::System::Nullable_1<int32_t> DurationSeconds;

  __declspec(property(get = get_Policy))::StringW Policy;

  __declspec(property(get = get_PolicyArns))::System::Collections::Generic::List_1<::StringW>* PolicyArns;

  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_ProxySettings))::System::Net::IWebProxy* ProxySettings;

  /// @brief Field <DurationSeconds>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DurationSeconds_k__BackingField,
                      put = __cordl_internal_set__DurationSeconds_k__BackingField))::System::Nullable_1<int32_t> _DurationSeconds_k__BackingField;

  /// @brief Field <PolicyArns>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__PolicyArns_k__BackingField,
                      put = __cordl_internal_set__PolicyArns_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _PolicyArns_k__BackingField;

  /// @brief Field <Policy>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Policy_k__BackingField, put = __cordl_internal_set__Policy_k__BackingField))::StringW _Policy_k__BackingField;

  /// @brief Field <ProviderId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProviderId_k__BackingField, put = __cordl_internal_set__ProviderId_k__BackingField))::StringW _ProviderId_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxySettings_k__BackingField, put = __cordl_internal_set__ProxySettings_k__BackingField))::System::Net::IWebProxy* _ProxySettings_k__BackingField;

  static inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__DurationSeconds_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__DurationSeconds_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__PolicyArns_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__PolicyArns_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Policy_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Policy_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProviderId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProviderId_k__BackingField();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__ProxySettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get__ProxySettings_k__BackingField() const;

  constexpr void __cordl_internal_set__DurationSeconds_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__PolicyArns_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__Policy_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProviderId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProxySettings_k__BackingField(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x1fe5cac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DurationSeconds, addr 0x1fe79ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_DurationSeconds();

  /// @brief Method get_Policy, addr 0x1fe79bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Policy();

  /// @brief Method get_PolicyArns, addr 0x1fe79c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_PolicyArns();

  /// @brief Method get_ProviderId, addr 0x1fe79b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProviderId();

  /// @brief Method get_ProxySettings, addr 0x1fe79cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IWebProxy* get_ProxySettings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssumeRoleWithWebIdentityCredentialsOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleWithWebIdentityCredentialsOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssumeRoleWithWebIdentityCredentialsOptions(AssumeRoleWithWebIdentityCredentialsOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleWithWebIdentityCredentialsOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssumeRoleWithWebIdentityCredentialsOptions(AssumeRoleWithWebIdentityCredentialsOptions const&) = delete;

  /// @brief Field <DurationSeconds>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____DurationSeconds_k__BackingField;

  /// @brief Field <ProviderId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ProviderId_k__BackingField;

  /// @brief Field <Policy>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Policy_k__BackingField;

  /// @brief Field <PolicyArns>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____PolicyArns_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____ProxySettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, ____DurationSeconds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, ____ProviderId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, ____Policy_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, ____PolicyArns_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions, ____ProxySettings_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*, "Amazon.Runtime", "AssumeRoleWithWebIdentityCredentialsOptions");
