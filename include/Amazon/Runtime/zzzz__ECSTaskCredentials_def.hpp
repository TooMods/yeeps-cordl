#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__URIBasedRefreshingCredentialHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECSTaskCredentials)
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class ECSTaskCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ECSTaskCredentials);
// Type: Amazon.Runtime::ECSTaskCredentials
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ECSTaskCredentials*
class CORDL_TYPE ECSTaskCredentials : public ::Amazon::Runtime::URIBasedRefreshingCredentialHelper {
public:
  // Declarations
  /// @brief Field MaxRetries, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxRetries, put = setStaticF_MaxRetries)) int32_t MaxRetries;

  /// @brief Field Proxy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Proxy, put = __cordl_internal_set_Proxy))::System::Net::IWebProxy* Proxy;

  /// @brief Field Server, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Server, put = __cordl_internal_set_Server))::StringW Server;

  __declspec(property(get = get_Uri))::System::Uri* Uri;

  /// @brief Method CreateAuthorizationHeader, addr 0x1fe948c, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateAuthorizationHeader();

  /// @brief Method GenerateNewCredentials, addr 0x1fe9124, size 0x368, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  static inline ::Amazon::Runtime::ECSTaskCredentials* New_ctor();

  static inline ::Amazon::Runtime::ECSTaskCredentials* New_ctor(::System::Net::IWebProxy* proxy);

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_Proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get_Proxy() const;

  constexpr ::StringW const& __cordl_internal_get_Server() const;

  constexpr ::StringW& __cordl_internal_get_Server();

  constexpr void __cordl_internal_set_Proxy(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set_Server(::StringW value);

  /// @brief Method .ctor, addr 0x1fe9098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1fe90a0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IWebProxy* proxy);

  static inline int32_t getStaticF_MaxRetries();

  /// @brief Method get_Uri, addr 0x1fe8f18, size 0x180, virtual false, abstract: false, final false
  inline ::System::Uri* get_Uri();

  static inline void setStaticF_MaxRetries(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECSTaskCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECSTaskCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECSTaskCredentials(ECSTaskCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECSTaskCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECSTaskCredentials(ECSTaskCredentials const&) = delete;

  /// @brief Field Server, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Server;

  /// @brief Field Proxy, offset: 0x40, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___Proxy;

  /// @brief Field ContainerCredentialsAuthorizationTokenEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString ContainerCredentialsAuthorizationTokenEnvVariable{ u"AWS_CONTAINER_AUTHORIZATION_TOKEN" };

  /// @brief Field ContainerCredentialsFullURIEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString ContainerCredentialsFullURIEnvVariable{ u"AWS_CONTAINER_CREDENTIALS_FULL_URI" };

  /// @brief Field ContainerCredentialsURIEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString ContainerCredentialsURIEnvVariable{ u"AWS_CONTAINER_CREDENTIALS_RELATIVE_URI" };

  /// @brief Field EndpointAddress offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointAddress{ u"http://169.254.170.2" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ECSTaskCredentials, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ECSTaskCredentials, ___Server) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ECSTaskCredentials, ___Proxy) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ECSTaskCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ECSTaskCredentials*, "Amazon.Runtime", "ECSTaskCredentials");
