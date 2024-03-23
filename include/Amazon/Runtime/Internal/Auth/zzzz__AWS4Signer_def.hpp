#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AWS4Signer)
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
namespace Amazon::Runtime::Internal::Auth {
struct ClientProtocol;
}
namespace Amazon::Runtime::Internal::Auth {
class __AWS4Signer____c;
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
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace Amazon::Runtime {
struct SigningAlgorithm;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AWS4Signer;
}
namespace Amazon::Runtime::Internal::Auth {
class __AWS4Signer____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AWS4Signer);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::__AWS4Signer____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::AWS4Signer::<>c*
class CORDL_TYPE __AWS4Signer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Auth::__AWS4Signer____c* __9;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* __9__51_0;

  /// @brief Field <>9__55_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__55_0, put = setStaticF___9__55_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__55_0;

  static inline ::Amazon::Runtime::Internal::Auth::__AWS4Signer____c* New_ctor();

  /// @brief Method <CanonicalizeQueryParameters>b__55_0, addr 0x25e4038, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _CanonicalizeQueryParameters_b__55_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method <GetParametersToCanonicalize>b__51_0, addr 0x25e3ff8, size 0x40, virtual false, abstract: false, final false
  inline bool _GetParametersToCanonicalize_b__51_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> queryParameter);

  /// @brief Method .ctor, addr 0x25e3ff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Auth::__AWS4Signer____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* getStaticF___9__51_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__55_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Auth::__AWS4Signer____c* value);

  static inline void setStaticF___9__51_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value);

  static inline void setStaticF___9__55_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWS4Signer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWS4Signer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWS4Signer____c(__AWS4Signer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWS4Signer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWS4Signer____c(__AWS4Signer____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::__AWS4Signer____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
// Type: Amazon.Runtime.Internal.Auth::AWS4Signer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AWS4Signer*
class CORDL_TYPE AWS4Signer : public ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner {
public:
  // Declarations
  using __c = ::Amazon::Runtime::Internal::Auth::__AWS4Signer____c;

  __declspec(property(get = get_Protocol))::Amazon::Runtime::Internal::Auth::ClientProtocol Protocol;

  __declspec(property(get = get_SignPayload, put = set_SignPayload)) bool SignPayload;

  /// @brief Field TerminatorBytes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminatorBytes, put = setStaticF_TerminatorBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> TerminatorBytes;

  /// @brief Field <SignPayload>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__SignPayload_k__BackingField, put = __cordl_internal_set__SignPayload_k__BackingField)) bool _SignPayload_k__BackingField;

  /// @brief Field _headersToIgnoreWhenSigning, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__headersToIgnoreWhenSigning,
                             put = setStaticF__headersToIgnoreWhenSigning))::System::Collections::Generic::IEnumerable_1<::StringW>* _headersToIgnoreWhenSigning;

  /// @brief Method CanonicalizeHeaderNames, addr 0x25e10f0, size 0x3a8, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeHeaderNames(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* sortedHeaders);

  /// @brief Method CanonicalizeHeaders, addr 0x25e30d8, size 0x488, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeHeaders(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* sortedHeaders);

  /// @brief Method CanonicalizeQueryParameters, addr 0x25dfe34, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeQueryParameters(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* parameters);

  /// @brief Method CanonicalizeQueryParameters, addr 0x25e390c, size 0x494, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeQueryParameters(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* parameters,
                                                      bool uriEncodeParameters);

  /// @brief Method CanonicalizeQueryParameters, addr 0x25e3560, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeQueryParameters(::StringW queryString);

  /// @brief Method CanonicalizeQueryParameters, addr 0x25e35b8, size 0x354, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeQueryParameters(::StringW queryString, bool uriEncodeParameters);

  /// @brief Method CanonicalizeRequest, addr 0x25e2d1c, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeRequest(::System::Uri* endpoint, ::StringW resourcePath, ::StringW httpMethod, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* sortedHeaders,
                                              ::StringW canonicalQueryString, ::StringW precomputedBodyHash);

  /// @brief Method CanonicalizeRequest, addr 0x25e2dc4, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeRequest(::System::Uri* endpoint, ::StringW resourcePath, ::StringW httpMethod, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* sortedHeaders,
                                              ::StringW canonicalQueryString, ::StringW precomputedBodyHash, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources,
                                              int32_t marshallerVersion);

  /// @brief Method CanonicalizeRequest, addr 0x25e1008, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeRequest(::System::Uri* endpoint, ::StringW resourcePath, ::StringW httpMethod, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* sortedHeaders,
                                              ::StringW canonicalQueryString, ::StringW precomputedBodyHash, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources,
                                              int32_t marshallerVersion, ::StringW service);

  /// @brief Method CanonicalizeRequestHelper, addr 0x25e2e84, size 0x254, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeRequestHelper(::System::Uri* endpoint, ::StringW resourcePath, ::StringW httpMethod,
                                                    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* sortedHeaders, ::StringW canonicalQueryString, ::StringW precomputedBodyHash,
                                                    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources, int32_t marshallerVersion, bool detectPreEncode);

  /// @brief Method CleanHeaders, addr 0x25e1c14, size 0x30c, virtual false, abstract: false, final false
  static inline void CleanHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method ComposeSigningKey, addr 0x25e2178, size 0x270, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComposeSigningKey(::StringW awsSecretAccessKey, ::StringW region, ::StringW date, ::StringW service);

  /// @brief Method ComputeHash, addr 0x25e2c18, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeHash, addr 0x25e20f8, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::StringW data);

  /// @brief Method ComputeKeyedHash, addr 0x25e24d4, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeKeyedHash(::Amazon::Runtime::SigningAlgorithm algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeKeyedHash, addr 0x25e23e8, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeKeyedHash(::Amazon::Runtime::SigningAlgorithm algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::StringW data);

  /// @brief Method ComputeSignature, addr 0x25e1fc0, size 0xac, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* ComputeSignature(::StringW awsAccessKey, ::StringW awsSecretAccessKey, ::StringW region, ::System::DateTime signedAt,
                                                                                       ::StringW service, ::StringW signedHeaders, ::StringW canonicalRequest);

  /// @brief Method ComputeSignature, addr 0x25e1498, size 0x49c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* ComputeSignature(::StringW awsAccessKey, ::StringW awsSecretAccessKey, ::StringW region, ::System::DateTime signedAt,
                                                                                       ::StringW service, ::StringW signedHeaders, ::StringW canonicalRequest,
                                                                                       ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics);

  /// @brief Method ComputeSignature, addr 0x25e1f20, size 0xa0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* ComputeSignature(::Amazon::Runtime::ImmutableCredentials* credentials, ::StringW region, ::System::DateTime signedAt,
                                                                                       ::StringW service, ::StringW signedHeaders, ::StringW canonicalRequest);

  /// @brief Method DetermineService, addr 0x25decb8, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW DetermineService(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method DetermineSigningRegion, addr 0x25dee50, size 0x4b4, virtual false, abstract: false, final false
  static inline ::StringW DetermineSigningRegion(::Amazon::Runtime::IClientConfig* clientConfig, ::StringW serviceName, ::Amazon::RegionEndpoint* alternateEndpoint,
                                                 ::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method FormatDateTime, addr 0x25e206c, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW FormatDateTime(::System::DateTime dt, ::StringW formatString);

  /// @brief Method GetParametersToCanonicalize, addr 0x25df304, size 0xb30, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  GetParametersToCanonicalize(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetRequestPayloadBytes, addr 0x25e28a4, size 0x1d4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRequestPayloadBytes(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method InitializeHeaders, addr 0x25debf8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::DateTime InitializeHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, ::System::Uri* requestEndpoint);

  /// @brief Method InitializeHeaders, addr 0x25e1934, size 0x2e0, virtual false, abstract: false, final false
  static inline ::System::DateTime InitializeHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, ::System::Uri* requestEndpoint, ::System::DateTime requestDateTime);

  static inline ::Amazon::Runtime::Internal::Auth::AWS4Signer* New_ctor();

  static inline ::Amazon::Runtime::Internal::Auth::AWS4Signer* New_ctor(bool signPayload);

  /// @brief Method SetPayloadSignatureHeader, addr 0x25e2648, size 0x25c, virtual false, abstract: false, final false
  static inline ::StringW SetPayloadSignatureHeader(::Amazon::Runtime::Internal::IRequest* request, ::StringW payloadHash);

  /// @brief Method SetRequestBodyHash, addr 0x25e25f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW SetRequestBodyHash(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method SetRequestBodyHash, addr 0x25dfe8c, size 0xd3c, virtual false, abstract: false, final false
  static inline ::StringW SetRequestBodyHash(::Amazon::Runtime::Internal::IRequest* request, bool signPayload);

  /// @brief Method Sign, addr 0x25de0b8, size 0x18c, virtual true, abstract: false, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method SignBlob, addr 0x25e2b00, size 0x118, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SignBlob, addr 0x25e2a78, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::StringW data);

  /// @brief Method SignRequest, addr 0x25de244, size 0x6a8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* SignRequest(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                           ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  /// @brief Method SortAndPruneHeaders, addr 0x25e0bc8, size 0x440, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
  SortAndPruneHeaders(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* requestHeaders);

  /// @brief Method ValidateRequest, addr 0x25dea5c, size 0x19c, virtual false, abstract: false, final false
  static inline void ValidateRequest(::Amazon::Runtime::Internal::IRequest* request);

  constexpr bool const& __cordl_internal_get__SignPayload_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SignPayload_k__BackingField();

  constexpr void __cordl_internal_set__SignPayload_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x25de050, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25de070, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool signPayload);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_TerminatorBytes();

  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* getStaticF__headersToIgnoreWhenSigning();

  /// @brief Method get_Protocol, addr 0x25de0b0, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::ClientProtocol get_Protocol();

  /// @brief Method get_SignPayload, addr 0x25de09c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SignPayload();

  static inline void setStaticF_TerminatorBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF__headersToIgnoreWhenSigning(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method set_SignPayload, addr 0x25de0a4, size 0xc, virtual false, abstract: false, final false
  inline void set_SignPayload(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWS4Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWS4Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWS4Signer(AWS4Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWS4Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWS4Signer(AWS4Signer const&) = delete;

  /// @brief Field <SignPayload>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____SignPayload_k__BackingField;

  /// @brief Field AWS4AlgorithmTag offset 0xffffffff size 0x8
  static constexpr ::ConstString AWS4AlgorithmTag{ u"AWS4-HMAC-SHA256" };

  /// @brief Field AWSChunkedEncoding offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSChunkedEncoding{ u"aws-chunked" };

  /// @brief Field Algorithm offset 0xffffffff size 0x8
  static constexpr ::ConstString Algorithm{ u"HMAC-SHA256" };

  /// @brief Field Credential offset 0xffffffff size 0x8
  static constexpr ::ConstString Credential{ u"Credential" };

  /// @brief Field EmptyBodySha256 offset 0xffffffff size 0x8
  static constexpr ::ConstString EmptyBodySha256{ u"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855" };

  /// @brief Field Scheme offset 0xffffffff size 0x8
  static constexpr ::ConstString Scheme{ u"AWS4" };

  /// @brief Field Signature offset 0xffffffff size 0x8
  static constexpr ::ConstString Signature{ u"Signature" };

  /// @brief Field SignedHeaders offset 0xffffffff size 0x8
  static constexpr ::ConstString SignedHeaders{ u"SignedHeaders" };

  /// @brief Field SignerAlgorithm value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::SigningAlgorithm const SignerAlgorithm;

  /// @brief Field StreamingBodySha256 offset 0xffffffff size 0x8
  static constexpr ::ConstString StreamingBodySha256{ u"STREAMING-AWS4-HMAC-SHA256-PAYLOAD" };

  /// @brief Field Terminator offset 0xffffffff size 0x8
  static constexpr ::ConstString Terminator{ u"aws4_request" };

  /// @brief Field UnsignedPayload offset 0xffffffff size 0x8
  static constexpr ::ConstString UnsignedPayload{ u"UNSIGNED-PAYLOAD" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AWS4Signer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4Signer, ____SignPayload_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AWS4Signer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AWS4Signer*, "Amazon.Runtime.Internal.Auth", "AWS4Signer");
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::__AWS4Signer____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::__AWS4Signer____c*, "Amazon.Runtime.Internal.Auth", "AWS4Signer/<>c");
