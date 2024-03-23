#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWS3Signer)
namespace Amazon::Runtime::Internal::Auth {
struct ClientProtocol;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AWS3Signer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AWS3Signer);
// Type: Amazon.Runtime.Internal.Auth::AWS3Signer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AWS3Signer*
class CORDL_TYPE AWS3Signer : public ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner {
public:
  // Declarations
  __declspec(property(get = get_Protocol))::Amazon::Runtime::Internal::Auth::ClientProtocol Protocol;

  __declspec(property(get = get_UseAws3Https, put = set_UseAws3Https)) bool UseAws3Https;

  /// @brief Field <UseAws3Https>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__UseAws3Https_k__BackingField, put = __cordl_internal_set__UseAws3Https_k__BackingField)) bool _UseAws3Https_k__BackingField;

  /// @brief Method GetCanonicalizedHeadersForStringToSign, addr 0x2456914, size 0x6ac, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalizedHeadersForStringToSign(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetCanonicalizedQueryString, addr 0x2456410, size 0x504, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalizedQueryString(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* parameters);

  /// @brief Method GetCanonicalizedResourcePath, addr 0x24560e8, size 0x328, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalizedResourcePath(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetHeadersForStringToSign, addr 0x2457364, size 0x154c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetHeadersForStringToSign(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetRequestPayload, addr 0x2456fc0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::StringW GetRequestPayload(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetSignedHeadersComponent, addr 0x2457180, size 0x1e4, virtual false, abstract: false, final false
  static inline ::StringW GetSignedHeadersComponent(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method IsHttpsRequest, addr 0x2455f74, size 0x174, virtual false, abstract: false, final false
  static inline bool IsHttpsRequest(::Amazon::Runtime::Internal::IRequest* request);

  static inline ::Amazon::Runtime::Internal::Auth::AWS3Signer* New_ctor();

  static inline ::Amazon::Runtime::Internal::Auth::AWS3Signer* New_ctor(bool useAws3Https);

  /// @brief Method Sign, addr 0x2454bc8, size 0x124, virtual true, abstract: false, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method SignHttp, addr 0x2455318, size 0xc5c, virtual false, abstract: false, final false
  static inline void SignHttp(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  /// @brief Method SignHttps, addr 0x2454cec, size 0x62c, virtual false, abstract: false, final false
  static inline void SignHttps(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics,
                               ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  constexpr bool const& __cordl_internal_get__UseAws3Https_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseAws3Https_k__BackingField();

  constexpr void __cordl_internal_set__UseAws3Https_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2454ba4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2454b78, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool useAws3Https);

  /// @brief Method get_Protocol, addr 0x2454bc0, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::ClientProtocol get_Protocol();

  /// @brief Method get_UseAws3Https, addr 0x2454b64, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseAws3Https();

  /// @brief Method set_UseAws3Https, addr 0x2454b6c, size 0xc, virtual false, abstract: false, final false
  inline void set_UseAws3Https(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWS3Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWS3Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWS3Signer(AWS3Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWS3Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWS3Signer(AWS3Signer const&) = delete;

  /// @brief Field <UseAws3Https>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____UseAws3Https_k__BackingField;

  /// @brief Field HTTPS_SCHEME offset 0xffffffff size 0x8
  static constexpr ::ConstString HTTPS_SCHEME{ u"AWS3-HTTPS" };

  /// @brief Field HTTP_SCHEME offset 0xffffffff size 0x8
  static constexpr ::ConstString HTTP_SCHEME{ u"AWS3" };

  /// @brief Field Slash offset 0xffffffff size 0x8
  static constexpr ::ConstString Slash{ u"/" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AWS3Signer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS3Signer, ____UseAws3Https_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AWS3Signer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AWS3Signer*, "Amazon.Runtime.Internal.Auth", "AWS3Signer");
