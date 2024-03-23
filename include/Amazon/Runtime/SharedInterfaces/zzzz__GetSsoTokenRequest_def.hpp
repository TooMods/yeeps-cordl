#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetSsoTokenRequest)
namespace Amazon::Runtime {
class SsoVerificationArguments;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class GetSsoTokenRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest);
// Type: Amazon.Runtime.SharedInterfaces::GetSsoTokenRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::GetSsoTokenRequest*
class CORDL_TYPE GetSsoTokenRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AdditionalProperties, put = set_AdditionalProperties))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* AdditionalProperties;

  __declspec(property(get = get_ClientName, put = set_ClientName))::StringW ClientName;

  __declspec(property(get = get_ClientType, put = set_ClientType))::StringW ClientType;

  __declspec(property(get = get_SsoVerificationCallback, put = set_SsoVerificationCallback))::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* SsoVerificationCallback;

  __declspec(property(get = get_StartUrl, put = set_StartUrl))::StringW StartUrl;

  /// @brief Field <AdditionalProperties>k__BackingField, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get__AdditionalProperties_k__BackingField,
               put = __cordl_internal_set__AdditionalProperties_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* _AdditionalProperties_k__BackingField;

  /// @brief Field <ClientName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientName_k__BackingField, put = __cordl_internal_set__ClientName_k__BackingField))::StringW _ClientName_k__BackingField;

  /// @brief Field <ClientType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientType_k__BackingField, put = __cordl_internal_set__ClientType_k__BackingField))::StringW _ClientType_k__BackingField;

  /// @brief Field <SsoVerificationCallback>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoVerificationCallback_k__BackingField,
                      put = __cordl_internal_set__SsoVerificationCallback_k__BackingField))::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* _SsoVerificationCallback_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__StartUrl_k__BackingField, put = __cordl_internal_set__StartUrl_k__BackingField))::StringW _StartUrl_k__BackingField;

  static inline ::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__AdditionalProperties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get__AdditionalProperties_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ClientName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ClientType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientType_k__BackingField();

  constexpr ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*& __cordl_internal_get__SsoVerificationCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*> const& __cordl_internal_get__SsoVerificationCallback_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__StartUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StartUrl_k__BackingField();

  constexpr void __cordl_internal_set__AdditionalProperties_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* value);

  constexpr void __cordl_internal_set__ClientName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ClientType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SsoVerificationCallback_k__BackingField(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value);

  constexpr void __cordl_internal_set__StartUrl_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x20214f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AdditionalProperties, addr 0x20214e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* get_AdditionalProperties();

  /// @brief Method get_ClientName, addr 0x20214a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientName();

  /// @brief Method get_ClientType, addr 0x20214b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientType();

  /// @brief Method get_SsoVerificationCallback, addr 0x20214d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* get_SsoVerificationCallback();

  /// @brief Method get_StartUrl, addr 0x20214c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StartUrl();

  /// @brief Method set_AdditionalProperties, addr 0x20214ec, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method set_ClientName, addr 0x20214ac, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientName(::StringW value);

  /// @brief Method set_ClientType, addr 0x20214bc, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientType(::StringW value);

  /// @brief Method set_SsoVerificationCallback, addr 0x20214dc, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoVerificationCallback(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value);

  /// @brief Method set_StartUrl, addr 0x20214cc, size 0x8, virtual false, abstract: false, final false
  inline void set_StartUrl(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetSsoTokenRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetSsoTokenRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetSsoTokenRequest(GetSsoTokenRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetSsoTokenRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetSsoTokenRequest(GetSsoTokenRequest const&) = delete;

  /// @brief Field <ClientName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ClientName_k__BackingField;

  /// @brief Field <ClientType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ClientType_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____StartUrl_k__BackingField;

  /// @brief Field <SsoVerificationCallback>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* ____SsoVerificationCallback_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* ____AdditionalProperties_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, ____ClientName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, ____ClientType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, ____StartUrl_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, ____SsoVerificationCallback_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest, ____AdditionalProperties_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest*, "Amazon.Runtime.SharedInterfaces", "GetSsoTokenRequest");
