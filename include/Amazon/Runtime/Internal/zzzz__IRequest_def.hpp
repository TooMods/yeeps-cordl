#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRequest)
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class IRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::IRequest);
// Type: Amazon.Runtime.Internal::IRequest
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::IRequest*
class CORDL_TYPE IRequest {
public:
  // Declarations
  __declspec(property(get = get_AWS4SignerResult, put = set_AWS4SignerResult))::Amazon::Runtime::Internal::Auth::AWS4SigningResult* AWS4SignerResult;

  __declspec(property(get = get_AlternateEndpoint, put = set_AlternateEndpoint))::Amazon::RegionEndpoint* AlternateEndpoint;

  __declspec(property(get = get_AuthenticationRegion, put = set_AuthenticationRegion))::StringW AuthenticationRegion;

  __declspec(property(get = get_CanonicalResourcePrefix, put = set_CanonicalResourcePrefix))::StringW CanonicalResourcePrefix;

  __declspec(property(get = get_Content, put = set_Content))::ArrayW<uint8_t, ::Array<uint8_t>*> Content;

  __declspec(property(get = get_ContentStream, put = set_ContentStream))::System::IO::Stream* ContentStream;

  __declspec(property(get = get_DeterminedSigningRegion, put = set_DeterminedSigningRegion))::StringW DeterminedSigningRegion;

  __declspec(property(get = get_DisablePayloadSigning, put = set_DisablePayloadSigning))::System::Nullable_1<bool> DisablePayloadSigning;

  __declspec(property(get = get_Endpoint, put = set_Endpoint))::System::Uri* Endpoint;

  __declspec(property(get = get_Headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_HostPrefix, put = set_HostPrefix))::StringW HostPrefix;

  __declspec(property(get = get_HttpMethod, put = set_HttpMethod))::StringW HttpMethod;

  __declspec(property(get = get_MarshallerVersion, put = set_MarshallerVersion)) int32_t MarshallerVersion;

  __declspec(property(get = get_OriginalRequest))::Amazon::Runtime::AmazonWebServiceRequest* OriginalRequest;

  __declspec(property(get = get_OriginalStreamPosition, put = set_OriginalStreamPosition)) int64_t OriginalStreamPosition;

  __declspec(property(get = get_OverrideSigningServiceName, put = set_OverrideSigningServiceName))::StringW OverrideSigningServiceName;

  __declspec(property(get = get_ParameterCollection))::Amazon::Runtime::Internal::ParameterCollection* ParameterCollection;

  __declspec(property(get = get_Parameters))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Parameters;

  __declspec(property(get = get_PathResources))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* PathResources;

  __declspec(property(get = get_RequestName))::StringW RequestName;

  __declspec(property(get = get_ResourcePath, put = set_ResourcePath))::StringW ResourcePath;

  __declspec(property(get = get_ServiceName))::StringW ServiceName;

  __declspec(property(get = get_SetContentFromParameters, put = set_SetContentFromParameters)) bool SetContentFromParameters;

  __declspec(property(get = get_SubResources))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* SubResources;

  __declspec(property(get = get_Suppress404Exceptions, put = set_Suppress404Exceptions)) bool Suppress404Exceptions;

  __declspec(property(get = get_UseChunkEncoding, put = set_UseChunkEncoding)) bool UseChunkEncoding;

  __declspec(property(get = get_UseQueryString, put = set_UseQueryString)) bool UseQueryString;

  __declspec(property(get = get_UseSigV4, put = set_UseSigV4)) bool UseSigV4;

  /// @brief Method AddPathResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddPathResource(::StringW key, ::StringW value);

  /// @brief Method AddSubResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddSubResource(::StringW subResource);

  /// @brief Method AddSubResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddSubResource(::StringW subResource, ::StringW value);

  /// @brief Method ComputeContentStreamHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ComputeContentStreamHash();

  /// @brief Method GetHeaderValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetHeaderValue(::StringW headerName);

  /// @brief Method HasRequestBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasRequestBody();

  /// @brief Method IsRequestStreamRewindable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsRequestStreamRewindable();

  /// @brief Method MayContainRequestBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MayContainRequestBody();

  /// @brief Method get_AWS4SignerResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* get_AWS4SignerResult();

  /// @brief Method get_AlternateEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::RegionEndpoint* get_AlternateEndpoint();

  /// @brief Method get_AuthenticationRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AuthenticationRegion();

  /// @brief Method get_CanonicalResourcePrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_CanonicalResourcePrefix();

  /// @brief Method get_Content, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Content();

  /// @brief Method get_ContentStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* get_ContentStream();

  /// @brief Method get_DeterminedSigningRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DeterminedSigningRegion();

  /// @brief Method get_DisablePayloadSigning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Nullable_1<bool> get_DisablePayloadSigning();

  /// @brief Method get_Endpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Uri* get_Endpoint();

  /// @brief Method get_Headers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_HostPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_HostPrefix();

  /// @brief Method get_HttpMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_HttpMethod();

  /// @brief Method get_MarshallerVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_MarshallerVersion();

  /// @brief Method get_OriginalRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_OriginalRequest();

  /// @brief Method get_OriginalStreamPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_OriginalStreamPosition();

  /// @brief Method get_OverrideSigningServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_OverrideSigningServiceName();

  /// @brief Method get_ParameterCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::ParameterCollection* get_ParameterCollection();

  /// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Parameters();

  /// @brief Method get_PathResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_PathResources();

  /// @brief Method get_RequestName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RequestName();

  /// @brief Method get_ResourcePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ResourcePath();

  /// @brief Method get_ServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ServiceName();

  /// @brief Method get_SetContentFromParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SetContentFromParameters();

  /// @brief Method get_SubResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_SubResources();

  /// @brief Method get_Suppress404Exceptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Suppress404Exceptions();

  /// @brief Method get_UseChunkEncoding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseChunkEncoding();

  /// @brief Method get_UseQueryString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseQueryString();

  /// @brief Method get_UseSigV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseSigV4();

  /// @brief Method set_AWS4SignerResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AWS4SignerResult(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value);

  /// @brief Method set_AlternateEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AlternateEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_AuthenticationRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AuthenticationRegion(::StringW value);

  /// @brief Method set_CanonicalResourcePrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CanonicalResourcePrefix(::StringW value);

  /// @brief Method set_Content, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Content(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_ContentStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ContentStream(::System::IO::Stream* value);

  /// @brief Method set_DeterminedSigningRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_DeterminedSigningRegion(::StringW value);

  /// @brief Method set_DisablePayloadSigning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_DisablePayloadSigning(::System::Nullable_1<bool> value);

  /// @brief Method set_Endpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Endpoint(::System::Uri* value);

  /// @brief Method set_HostPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_HostPrefix(::StringW value);

  /// @brief Method set_HttpMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_HttpMethod(::StringW value);

  /// @brief Method set_MarshallerVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_MarshallerVersion(int32_t value);

  /// @brief Method set_OriginalStreamPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_OriginalStreamPosition(int64_t value);

  /// @brief Method set_OverrideSigningServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_OverrideSigningServiceName(::StringW value);

  /// @brief Method set_ResourcePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ResourcePath(::StringW value);

  /// @brief Method set_SetContentFromParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_SetContentFromParameters(bool value);

  /// @brief Method set_Suppress404Exceptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Suppress404Exceptions(bool value);

  /// @brief Method set_UseChunkEncoding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UseChunkEncoding(bool value);

  /// @brief Method set_UseQueryString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UseQueryString(bool value);

  /// @brief Method set_UseSigV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UseSigV4(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRequest(IRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequest(IRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::IRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::IRequest*, "Amazon.Runtime.Internal", "IRequest");
