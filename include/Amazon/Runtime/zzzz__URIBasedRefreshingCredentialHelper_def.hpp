#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(URIBasedRefreshingCredentialHelper)
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityBase;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityCredentials;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
struct DateTime;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class URIBasedRefreshingCredentialHelper;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityBase;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityCredentials;
}
namespace Amazon::Runtime {
class __URIBasedRefreshingCredentialHelper__SecurityInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::URIBasedRefreshingCredentialHelper);
MARK_REF_PTR_T(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase);
MARK_REF_PTR_T(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials);
MARK_REF_PTR_T(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo);
// Type: ::SecurityBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::URIBasedRefreshingCredentialHelper::SecurityBase*
class CORDL_TYPE __URIBasedRefreshingCredentialHelper__SecurityBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::StringW Code;

  __declspec(property(get = get_LastUpdated, put = set_LastUpdated))::System::DateTime LastUpdated;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field <Code>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField))::StringW _Code_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__LastUpdated_k__BackingField, put = __cordl_internal_set__LastUpdated_k__BackingField))::System::DateTime _LastUpdated_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  static inline ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Code_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__LastUpdated_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastUpdated_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr void __cordl_internal_set__Code_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__LastUpdated_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ff2b98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x1ff2b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Code();

  /// @brief Method get_LastUpdated, addr 0x1ff2b88, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUpdated();

  /// @brief Method get_Message, addr 0x1ff2b78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Code, addr 0x1ff2b70, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::StringW value);

  /// @brief Method set_LastUpdated, addr 0x1ff2b90, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdated(::System::DateTime value);

  /// @brief Method set_Message, addr 0x1ff2b80, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __URIBasedRefreshingCredentialHelper__SecurityBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __URIBasedRefreshingCredentialHelper__SecurityBase(__URIBasedRefreshingCredentialHelper__SecurityBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __URIBasedRefreshingCredentialHelper__SecurityBase(__URIBasedRefreshingCredentialHelper__SecurityBase const&) = delete;

  /// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Code_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____LastUpdated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase, ____LastUpdated_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::SecurityInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::URIBasedRefreshingCredentialHelper::SecurityInfo*
class CORDL_TYPE __URIBasedRefreshingCredentialHelper__SecurityInfo : public ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase {
public:
  // Declarations
  __declspec(property(get = get_InstanceProfileArn, put = set_InstanceProfileArn))::StringW InstanceProfileArn;

  __declspec(property(get = get_InstanceProfileId, put = set_InstanceProfileId))::StringW InstanceProfileId;

  /// @brief Field <InstanceProfileArn>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InstanceProfileArn_k__BackingField, put = __cordl_internal_set__InstanceProfileArn_k__BackingField))::StringW _InstanceProfileArn_k__BackingField;

  /// @brief Field <InstanceProfileId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__InstanceProfileId_k__BackingField, put = __cordl_internal_set__InstanceProfileId_k__BackingField))::StringW _InstanceProfileId_k__BackingField;

  static inline ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__InstanceProfileArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InstanceProfileArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__InstanceProfileId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InstanceProfileId_k__BackingField();

  constexpr void __cordl_internal_set__InstanceProfileArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__InstanceProfileId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ff2bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstanceProfileArn, addr 0x1ff2ba0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstanceProfileArn();

  /// @brief Method get_InstanceProfileId, addr 0x1ff2bb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstanceProfileId();

  /// @brief Method set_InstanceProfileArn, addr 0x1ff2ba8, size 0x8, virtual false, abstract: false, final false
  inline void set_InstanceProfileArn(::StringW value);

  /// @brief Method set_InstanceProfileId, addr 0x1ff2bb8, size 0x8, virtual false, abstract: false, final false
  inline void set_InstanceProfileId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __URIBasedRefreshingCredentialHelper__SecurityInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __URIBasedRefreshingCredentialHelper__SecurityInfo(__URIBasedRefreshingCredentialHelper__SecurityInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __URIBasedRefreshingCredentialHelper__SecurityInfo(__URIBasedRefreshingCredentialHelper__SecurityInfo const&) = delete;

  /// @brief Field <InstanceProfileArn>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____InstanceProfileArn_k__BackingField;

  /// @brief Field <InstanceProfileId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____InstanceProfileId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo, ____InstanceProfileArn_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo, ____InstanceProfileId_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::SecurityCredentials
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::URIBasedRefreshingCredentialHelper::SecurityCredentials*
class CORDL_TYPE __URIBasedRefreshingCredentialHelper__SecurityCredentials : public ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase {
public:
  // Declarations
  __declspec(property(get = get_AccessKeyId, put = set_AccessKeyId))::StringW AccessKeyId;

  __declspec(property(get = get_Expiration, put = set_Expiration))::System::DateTime Expiration;

  __declspec(property(get = get_RoleArn, put = set_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_SecretAccessKey, put = set_SecretAccessKey))::StringW SecretAccessKey;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field <AccessKeyId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKeyId_k__BackingField, put = __cordl_internal_set__AccessKeyId_k__BackingField))::StringW _AccessKeyId_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Expiration_k__BackingField, put = __cordl_internal_set__Expiration_k__BackingField))::System::DateTime _Expiration_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretAccessKey_k__BackingField, put = __cordl_internal_set__SecretAccessKey_k__BackingField))::StringW _SecretAccessKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField))::StringW _Token_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::StringW _Type_k__BackingField;

  static inline ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__AccessKeyId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKeyId_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__Expiration_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expiration_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretAccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretAccessKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__AccessKeyId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Expiration_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SecretAccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ff2c28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessKeyId, addr 0x1ff2bd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKeyId();

  /// @brief Method get_Expiration, addr 0x1ff2c08, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expiration();

  /// @brief Method get_RoleArn, addr 0x1ff2c18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_SecretAccessKey, addr 0x1ff2be8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretAccessKey();

  /// @brief Method get_Token, addr 0x1ff2bf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method get_Type, addr 0x1ff2bc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_AccessKeyId, addr 0x1ff2be0, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKeyId(::StringW value);

  /// @brief Method set_Expiration, addr 0x1ff2c10, size 0x8, virtual false, abstract: false, final false
  inline void set_Expiration(::System::DateTime value);

  /// @brief Method set_RoleArn, addr 0x1ff2c20, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleArn(::StringW value);

  /// @brief Method set_SecretAccessKey, addr 0x1ff2bf0, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretAccessKey(::StringW value);

  /// @brief Method set_Token, addr 0x1ff2c00, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  /// @brief Method set_Type, addr 0x1ff2bd0, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __URIBasedRefreshingCredentialHelper__SecurityCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __URIBasedRefreshingCredentialHelper__SecurityCredentials(__URIBasedRefreshingCredentialHelper__SecurityCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__URIBasedRefreshingCredentialHelper__SecurityCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __URIBasedRefreshingCredentialHelper__SecurityCredentials(__URIBasedRefreshingCredentialHelper__SecurityCredentials const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <AccessKeyId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____AccessKeyId_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____SecretAccessKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::DateTime ____Expiration_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____AccessKeyId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____SecretAccessKey_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____Token_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____Expiration_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials, ____RoleArn_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::URIBasedRefreshingCredentialHelper
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::URIBasedRefreshingCredentialHelper*
class CORDL_TYPE URIBasedRefreshingCredentialHelper : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  using SecurityBase = ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase;

  using SecurityCredentials = ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials;

  using SecurityInfo = ::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo;

  /// @brief Field SuccessCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SuccessCode, put = setStaticF_SuccessCode))::StringW SuccessCode;

  /// @brief Method GetContents, addr 0x1ff2934, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetContents(::System::Uri* uri);

  /// @brief Method GetContents, addr 0x1ff298c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetContents(::System::Uri* uri, ::System::Net::IWebProxy* proxy);

  /// @brief Method GetContents, addr 0x1fee678, size 0x18c, virtual false, abstract: false, final false
  static inline ::StringW GetContents(::System::Uri* uri, ::System::Net::IWebProxy* proxy, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method GetObjectFromResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetObjectFromResponse(::System::Uri* uri);

  /// @brief Method GetObjectFromResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetObjectFromResponse(::System::Uri* uri, ::System::Net::IWebProxy* proxy);

  /// @brief Method GetObjectFromResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetObjectFromResponse(::System::Uri* uri, ::System::Net::IWebProxy* proxy, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers);

  static inline ::Amazon::Runtime::URIBasedRefreshingCredentialHelper* New_ctor();

  /// @brief Method ValidateResponse, addr 0x1ff29f4, size 0x114, virtual false, abstract: false, final false
  static inline void ValidateResponse(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase* response);

  /// @brief Method .ctor, addr 0x1fe9120, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_SuccessCode();

  static inline void setStaticF_SuccessCode(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URIBasedRefreshingCredentialHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URIBasedRefreshingCredentialHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URIBasedRefreshingCredentialHelper(URIBasedRefreshingCredentialHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URIBasedRefreshingCredentialHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URIBasedRefreshingCredentialHelper(URIBasedRefreshingCredentialHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::URIBasedRefreshingCredentialHelper, 0x38>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::URIBasedRefreshingCredentialHelper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::URIBasedRefreshingCredentialHelper*, "Amazon.Runtime", "URIBasedRefreshingCredentialHelper");
NEED_NO_BOX(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityBase*, "Amazon.Runtime", "URIBasedRefreshingCredentialHelper/SecurityBase");
NEED_NO_BOX(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityCredentials*, "Amazon.Runtime", "URIBasedRefreshingCredentialHelper/SecurityCredentials");
NEED_NO_BOX(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__URIBasedRefreshingCredentialHelper__SecurityInfo*, "Amazon.Runtime", "URIBasedRefreshingCredentialHelper/SecurityInfo");
