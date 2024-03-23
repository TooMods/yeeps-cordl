#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SSOAWSCredentialsOptions)
namespace Amazon::Runtime {
class SsoVerificationArguments;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class SSOAWSCredentialsOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SSOAWSCredentialsOptions);
// Type: Amazon.Runtime::SSOAWSCredentialsOptions
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SSOAWSCredentialsOptions*
class CORDL_TYPE SSOAWSCredentialsOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ClientName, put = set_ClientName))::StringW ClientName;

  __declspec(property(get = get_ProxySettings, put = set_ProxySettings))::System::Net::IWebProxy* ProxySettings;

  __declspec(property(get = get_SsoVerificationCallback, put = set_SsoVerificationCallback))::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* SsoVerificationCallback;

  /// @brief Field <ClientName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientName_k__BackingField, put = __cordl_internal_set__ClientName_k__BackingField))::StringW _ClientName_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxySettings_k__BackingField, put = __cordl_internal_set__ProxySettings_k__BackingField))::System::Net::IWebProxy* _ProxySettings_k__BackingField;

  /// @brief Field <SsoVerificationCallback>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoVerificationCallback_k__BackingField,
                      put = __cordl_internal_set__SsoVerificationCallback_k__BackingField))::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* _SsoVerificationCallback_k__BackingField;

  static inline ::Amazon::Runtime::SSOAWSCredentialsOptions* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__ClientName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientName_k__BackingField();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__ProxySettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get__ProxySettings_k__BackingField() const;

  constexpr ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*& __cordl_internal_get__SsoVerificationCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*> const& __cordl_internal_get__SsoVerificationCallback_k__BackingField() const;

  constexpr void __cordl_internal_set__ClientName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProxySettings_k__BackingField(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set__SsoVerificationCallback_k__BackingField(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value);

  /// @brief Method .ctor, addr 0x1ff2d14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientName, addr 0x1ff46a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientName();

  /// @brief Method get_ProxySettings, addr 0x1ff46c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IWebProxy* get_ProxySettings();

  /// @brief Method get_SsoVerificationCallback, addr 0x1ff46b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* get_SsoVerificationCallback();

  /// @brief Method set_ClientName, addr 0x1ff46ac, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientName(::StringW value);

  /// @brief Method set_ProxySettings, addr 0x1ff46cc, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxySettings(::System::Net::IWebProxy* value);

  /// @brief Method set_SsoVerificationCallback, addr 0x1ff46bc, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoVerificationCallback(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSOAWSCredentialsOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSOAWSCredentialsOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSOAWSCredentialsOptions(SSOAWSCredentialsOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSOAWSCredentialsOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSOAWSCredentialsOptions(SSOAWSCredentialsOptions const&) = delete;

  /// @brief Field <ClientName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ClientName_k__BackingField;

  /// @brief Field <SsoVerificationCallback>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* ____SsoVerificationCallback_k__BackingField;

  /// @brief Field <ProxySettings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____ProxySettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SSOAWSCredentialsOptions, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentialsOptions, ____ClientName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentialsOptions, ____SsoVerificationCallback_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentialsOptions, ____ProxySettings_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SSOAWSCredentialsOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SSOAWSCredentialsOptions*, "Amazon.Runtime", "SSOAWSCredentialsOptions");
