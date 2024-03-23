#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CredentialProfileTypeDetector)
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
namespace Amazon::Runtime::CredentialManagement::Internal {
class __CredentialProfileTypeDetector____c;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileOptions;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
class CredentialProfileTypeDetector;
}
namespace Amazon::Runtime::CredentialManagement::Internal {
class __CredentialProfileTypeDetector____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector);
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::CredentialProfileTypeDetector::<>c*
class CORDL_TYPE __CredentialProfileTypeDetector____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Func_2<::StringW, bool>* __9__26_0;

  static inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* New_ctor();

  /// @brief Method <DetectProfileType>b__26_0, addr 0x20333e8, size 0x80, virtual false, abstract: false, final false
  inline bool _DetectProfileType_b__26_0(::StringW propertyName);

  /// @brief Method .ctor, addr 0x20333e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__26_0();

  static inline void setStaticF___9(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CredentialProfileTypeDetector____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfileTypeDetector____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CredentialProfileTypeDetector____c(__CredentialProfileTypeDetector____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfileTypeDetector____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CredentialProfileTypeDetector____c(__CredentialProfileTypeDetector____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
// Type: Amazon.Runtime.CredentialManagement.Internal::CredentialProfileTypeDetector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::CredentialProfileTypeDetector*
class CORDL_TYPE CredentialProfileTypeDetector : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c;

  /// @brief Field CredentialTypeDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CredentialTypeDictionary,
                             put = setStaticF_CredentialTypeDictionary))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType,
                                                                                                                     ::StringW>* CredentialTypeDictionary;

  /// @brief Field SsoProperties, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SsoProperties, put = setStaticF_SsoProperties))::System::Collections::Generic::HashSet_1<::StringW>* SsoProperties;

  /// @brief Field TypePropertyDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypePropertyDictionary,
                             put = setStaticF_TypePropertyDictionary))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType,
                                                                                                                   ::System::Collections::Generic::HashSet_1<::StringW>*>* TypePropertyDictionary;

  /// @brief Method DetectProfileType, addr 0x2028488, size 0x2f4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>
  DetectProfileType(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions);

  /// @brief Method GetPropertiesForProfileType, addr 0x2032624, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* GetPropertiesForProfileType(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType profileType);

  /// @brief Method GetPropertyNames, addr 0x2032484, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* GetPropertyNames(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions);

  /// @brief Method GetUserFriendlyCredentialType, addr 0x20295cc, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetUserFriendlyCredentialType(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType);

  static inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>* getStaticF_CredentialTypeDictionary();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_SsoProperties();

  static inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>*
  getStaticF_TypePropertyDictionary();

  static inline void setStaticF_CredentialTypeDictionary(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>* value);

  static inline void setStaticF_SsoProperties(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline void setStaticF_TypePropertyDictionary(
      ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfileTypeDetector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileTypeDetector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfileTypeDetector(CredentialProfileTypeDetector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileTypeDetector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfileTypeDetector(CredentialProfileTypeDetector const&) = delete;

  /// @brief Field AccessKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AccessKey{ u"AccessKey" };

  /// @brief Field AssumeRoleCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString AssumeRoleCredentials{ u"Assume Role" };

  /// @brief Field AssumeRoleWithWebIdentityCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString AssumeRoleWithWebIdentityCredentials{ u"Assume Role with OIDC Web Identity" };

  /// @brief Field BasicCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString BasicCredentials{ u"Basic" };

  /// @brief Field CredentialProcess offset 0xffffffff size 0x8
  static constexpr ::ConstString CredentialProcess{ u"CredentialProcess" };

  /// @brief Field CredentialSource offset 0xffffffff size 0x8
  static constexpr ::ConstString CredentialSource{ u"CredentialSource" };

  /// @brief Field EndpointName offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointName{ u"EndpointName" };

  /// @brief Field ExternalID offset 0xffffffff size 0x8
  static constexpr ::ConstString ExternalID{ u"ExternalID" };

  /// @brief Field MfaSerial offset 0xffffffff size 0x8
  static constexpr ::ConstString MfaSerial{ u"MfaSerial" };

  /// @brief Field RoleArn offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleArn{ u"RoleArn" };

  /// @brief Field RoleSessionName offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleSessionName{ u"RoleSessionName" };

  /// @brief Field SAMLCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString SAMLCredentials{ u"SAML" };

  /// @brief Field SecretKey offset 0xffffffff size 0x8
  static constexpr ::ConstString SecretKey{ u"SecretKey" };

  /// @brief Field SessionCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString SessionCredentials{ u"Session" };

  /// @brief Field SourceProfile offset 0xffffffff size 0x8
  static constexpr ::ConstString SourceProfile{ u"SourceProfile" };

  /// @brief Field SsoAccountId offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoAccountId{ u"SsoAccountId" };

  /// @brief Field SsoRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRegion{ u"SsoRegion" };

  /// @brief Field SsoRoleName offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRoleName{ u"SsoRoleName" };

  /// @brief Field SsoStartUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoStartUrl{ u"SsoStartUrl" };

  /// @brief Field Token offset 0xffffffff size 0x8
  static constexpr ::ConstString Token{ u"Token" };

  /// @brief Field UserIdentity offset 0xffffffff size 0x8
  static constexpr ::ConstString UserIdentity{ u"UserIdentity" };

  /// @brief Field WebIdentityTokenFile offset 0xffffffff size 0x8
  static constexpr ::ConstString WebIdentityTokenFile{ u"WebIdentityTokenFile" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*, "Amazon.Runtime.CredentialManagement.Internal", "CredentialProfileTypeDetector");
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*, "Amazon.Runtime.CredentialManagement.Internal", "CredentialProfileTypeDetector/<>c");
