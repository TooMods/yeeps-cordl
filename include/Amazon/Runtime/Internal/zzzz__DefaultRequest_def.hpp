#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultRequest)
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime::Internal {
class __DefaultRequest____c;
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class DefaultRequest;
}
namespace Amazon::Runtime::Internal {
class __DefaultRequest____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::DefaultRequest);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__DefaultRequest____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::DefaultRequest::<>c*
class CORDL_TYPE __DefaultRequest____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::__DefaultRequest____c* __9;

  /// @brief Field <>9__68_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__68_0, put = setStaticF___9__68_0))::System::Func_2<::System::IO::Stream*, bool>* __9__68_0;

  static inline ::Amazon::Runtime::Internal::__DefaultRequest____c* New_ctor();

  /// @brief Method <ComputeContentStreamHash>b__68_0, addr 0x23d6540, size 0x20, virtual false, abstract: false, final false
  inline bool _ComputeContentStreamHash_b__68_0(::System::IO::Stream* s);

  /// @brief Method .ctor, addr 0x23d6538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::__DefaultRequest____c* getStaticF___9();

  static inline ::System::Func_2<::System::IO::Stream*, bool>* getStaticF___9__68_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::__DefaultRequest____c* value);

  static inline void setStaticF___9__68_0(::System::Func_2<::System::IO::Stream*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultRequest____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultRequest____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultRequest____c(__DefaultRequest____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultRequest____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultRequest____c(__DefaultRequest____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__DefaultRequest____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::DefaultRequest
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::DefaultRequest*
class CORDL_TYPE DefaultRequest : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::Internal::__DefaultRequest____c;

  __declspec(property(get = get_AWS4SignerResult, put = set_AWS4SignerResult))::Amazon::Runtime::Internal::Auth::AWS4SigningResult* AWS4SignerResult;

  __declspec(property(get = get_AlternateEndpoint, put = set_AlternateEndpoint))::Amazon::RegionEndpoint* AlternateEndpoint;

  __declspec(property(get = get_AuthenticationRegion, put = set_AuthenticationRegion))::StringW AuthenticationRegion;

  __declspec(property(get = get_CanonicalResource, put = set_CanonicalResource))::StringW CanonicalResource;

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

  /// @brief Field <AWS4SignerResult>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__AWS4SignerResult_k__BackingField,
                      put = __cordl_internal_set__AWS4SignerResult_k__BackingField))::Amazon::Runtime::Internal::Auth::AWS4SigningResult* _AWS4SignerResult_k__BackingField;

  /// @brief Field <AuthenticationRegion>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__AuthenticationRegion_k__BackingField,
                      put = __cordl_internal_set__AuthenticationRegion_k__BackingField))::StringW _AuthenticationRegion_k__BackingField;

  /// @brief Field <CanonicalResourcePrefix>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__CanonicalResourcePrefix_k__BackingField,
                      put = __cordl_internal_set__CanonicalResourcePrefix_k__BackingField))::StringW _CanonicalResourcePrefix_k__BackingField;

  /// @brief Field <DeterminedSigningRegion>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__DeterminedSigningRegion_k__BackingField,
                      put = __cordl_internal_set__DeterminedSigningRegion_k__BackingField))::StringW _DeterminedSigningRegion_k__BackingField;

  /// @brief Field <DisablePayloadSigning>k__BackingField, offset 0xc0, size 0x2
  __declspec(property(get = __cordl_internal_get__DisablePayloadSigning_k__BackingField,
                      put = __cordl_internal_set__DisablePayloadSigning_k__BackingField))::System::Nullable_1<bool> _DisablePayloadSigning_k__BackingField;

  /// @brief Field <HostPrefix>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__HostPrefix_k__BackingField, put = __cordl_internal_set__HostPrefix_k__BackingField))::StringW _HostPrefix_k__BackingField;

  /// @brief Field <OverrideSigningServiceName>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__OverrideSigningServiceName_k__BackingField,
                      put = __cordl_internal_set__OverrideSigningServiceName_k__BackingField))::StringW _OverrideSigningServiceName_k__BackingField;

  /// @brief Field <SetContentFromParameters>k__BackingField, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__SetContentFromParameters_k__BackingField,
                      put = __cordl_internal_set__SetContentFromParameters_k__BackingField)) bool _SetContentFromParameters_k__BackingField;

  /// @brief Field <Suppress404Exceptions>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__Suppress404Exceptions_k__BackingField,
                      put = __cordl_internal_set__Suppress404Exceptions_k__BackingField)) bool _Suppress404Exceptions_k__BackingField;

  /// @brief Field <UseChunkEncoding>k__BackingField, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get__UseChunkEncoding_k__BackingField, put = __cordl_internal_set__UseChunkEncoding_k__BackingField)) bool _UseChunkEncoding_k__BackingField;

  /// @brief Field <UseSigV4>k__BackingField, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__UseSigV4_k__BackingField, put = __cordl_internal_set__UseSigV4_k__BackingField)) bool _UseSigV4_k__BackingField;

  /// @brief Field alternateRegion, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_alternateRegion, put = __cordl_internal_set_alternateRegion))::Amazon::RegionEndpoint* alternateRegion;

  /// @brief Field canonicalResource, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_canonicalResource, put = __cordl_internal_set_canonicalResource))::StringW canonicalResource;

  /// @brief Field content, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::ArrayW<uint8_t, ::Array<uint8_t>*> content;

  /// @brief Field contentStream, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_contentStream, put = __cordl_internal_set_contentStream))::System::IO::Stream* contentStream;

  /// @brief Field contentStreamHash, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_contentStreamHash, put = __cordl_internal_set_contentStreamHash))::StringW contentStreamHash;

  /// @brief Field endpoint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_endpoint, put = __cordl_internal_set_endpoint))::System::Uri* endpoint;

  /// @brief Field headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field httpMethod, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_httpMethod, put = __cordl_internal_set_httpMethod))::StringW httpMethod;

  /// @brief Field marshallerVersion, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_marshallerVersion, put = __cordl_internal_set_marshallerVersion)) int32_t marshallerVersion;

  /// @brief Field originalRequest, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_originalRequest, put = __cordl_internal_set_originalRequest))::Amazon::Runtime::AmazonWebServiceRequest* originalRequest;

  /// @brief Field originalStreamLength, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_originalStreamLength, put = __cordl_internal_set_originalStreamLength)) int64_t originalStreamLength;

  /// @brief Field parametersCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parametersCollection, put = __cordl_internal_set_parametersCollection))::Amazon::Runtime::Internal::ParameterCollection* parametersCollection;

  /// @brief Field parametersFacade, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parametersFacade, put = __cordl_internal_set_parametersFacade))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* parametersFacade;

  /// @brief Field pathResources, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pathResources, put = __cordl_internal_set_pathResources))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources;

  /// @brief Field requestName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_requestName, put = __cordl_internal_set_requestName))::StringW requestName;

  /// @brief Field resourcePath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  /// @brief Field serviceName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serviceName, put = __cordl_internal_set_serviceName))::StringW serviceName;

  /// @brief Field subResources, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_subResources, put = __cordl_internal_set_subResources))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* subResources;

  /// @brief Field useQueryString, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_useQueryString, put = __cordl_internal_set_useQueryString)) bool useQueryString;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::IRequest"
  constexpr operator ::Amazon::Runtime::Internal::IRequest*() noexcept;

  /// @brief Method AddPathResource, addr 0x23d5d94, size 0xbc, virtual true, abstract: false, final true
  inline void AddPathResource(::StringW key, ::StringW value);

  /// @brief Method AddSubResource, addr 0x23d5ca8, size 0x8, virtual true, abstract: false, final true
  inline void AddSubResource(::StringW subResource);

  /// @brief Method AddSubResource, addr 0x23d5cb0, size 0xbc, virtual true, abstract: false, final true
  inline void AddSubResource(::StringW subResource, ::StringW value);

  /// @brief Method ComputeContentStreamHash, addr 0x23d5f10, size 0x254, virtual true, abstract: false, final true
  inline ::StringW ComputeContentStreamHash();

  /// @brief Method GetHeaderValue, addr 0x23d63ec, size 0xe8, virtual true, abstract: false, final true
  inline ::StringW GetHeaderValue(::StringW headerName);

  /// @brief Method HasRequestBody, addr 0x23d630c, size 0xe0, virtual true, abstract: false, final true
  inline bool HasRequestBody();

  /// @brief Method IsRequestStreamRewindable, addr 0x23d6228, size 0x38, virtual true, abstract: false, final true
  inline bool IsRequestStreamRewindable();

  /// @brief Method MayContainRequestBody, addr 0x23d6260, size 0xac, virtual true, abstract: false, final true
  inline bool MayContainRequestBody();

  static inline ::Amazon::Runtime::Internal::DefaultRequest* New_ctor(::Amazon::Runtime::AmazonWebServiceRequest* request, ::StringW serviceName);

  constexpr ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*& __cordl_internal_get__AWS4SignerResult_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*> const& __cordl_internal_get__AWS4SignerResult_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__AuthenticationRegion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AuthenticationRegion_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CanonicalResourcePrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CanonicalResourcePrefix_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DeterminedSigningRegion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DeterminedSigningRegion_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__DisablePayloadSigning_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__DisablePayloadSigning_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__HostPrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__HostPrefix_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__OverrideSigningServiceName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__OverrideSigningServiceName_k__BackingField();

  constexpr bool const& __cordl_internal_get__SetContentFromParameters_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SetContentFromParameters_k__BackingField();

  constexpr bool const& __cordl_internal_get__Suppress404Exceptions_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Suppress404Exceptions_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseChunkEncoding_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseChunkEncoding_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseSigV4_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseSigV4_k__BackingField();

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get_alternateRegion();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get_alternateRegion() const;

  constexpr ::StringW const& __cordl_internal_get_canonicalResource() const;

  constexpr ::StringW& __cordl_internal_get_canonicalResource();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_content() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_content();

  constexpr ::System::IO::Stream*& __cordl_internal_get_contentStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_contentStream() const;

  constexpr ::StringW const& __cordl_internal_get_contentStreamHash() const;

  constexpr ::StringW& __cordl_internal_get_contentStreamHash();

  constexpr ::System::Uri*& __cordl_internal_get_endpoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_endpoint() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_headers() const;

  constexpr ::StringW const& __cordl_internal_get_httpMethod() const;

  constexpr ::StringW& __cordl_internal_get_httpMethod();

  constexpr int32_t const& __cordl_internal_get_marshallerVersion() const;

  constexpr int32_t& __cordl_internal_get_marshallerVersion();

  constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& __cordl_internal_get_originalRequest();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& __cordl_internal_get_originalRequest() const;

  constexpr int64_t const& __cordl_internal_get_originalStreamLength() const;

  constexpr int64_t& __cordl_internal_get_originalStreamLength();

  constexpr ::Amazon::Runtime::Internal::ParameterCollection*& __cordl_internal_get_parametersCollection();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParameterCollection*> const& __cordl_internal_get_parametersCollection() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_parametersFacade();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_parametersFacade() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_pathResources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_pathResources() const;

  constexpr ::StringW const& __cordl_internal_get_requestName() const;

  constexpr ::StringW& __cordl_internal_get_requestName();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr ::StringW const& __cordl_internal_get_serviceName() const;

  constexpr ::StringW& __cordl_internal_get_serviceName();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_subResources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_subResources() const;

  constexpr bool const& __cordl_internal_get_useQueryString() const;

  constexpr bool& __cordl_internal_get_useQueryString();

  constexpr void __cordl_internal_set__AWS4SignerResult_k__BackingField(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value);

  constexpr void __cordl_internal_set__AuthenticationRegion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CanonicalResourcePrefix_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__DeterminedSigningRegion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__DisablePayloadSigning_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__HostPrefix_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__OverrideSigningServiceName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SetContentFromParameters_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Suppress404Exceptions_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseChunkEncoding_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseSigV4_k__BackingField(bool value);

  constexpr void __cordl_internal_set_alternateRegion(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set_canonicalResource(::StringW value);

  constexpr void __cordl_internal_set_content(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_contentStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_contentStreamHash(::StringW value);

  constexpr void __cordl_internal_set_endpoint(::System::Uri* value);

  constexpr void __cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_httpMethod(::StringW value);

  constexpr void __cordl_internal_set_marshallerVersion(int32_t value);

  constexpr void __cordl_internal_set_originalRequest(::Amazon::Runtime::AmazonWebServiceRequest* value);

  constexpr void __cordl_internal_set_originalStreamLength(int64_t value);

  constexpr void __cordl_internal_set_parametersCollection(::Amazon::Runtime::Internal::ParameterCollection* value);

  constexpr void __cordl_internal_set_parametersFacade(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_pathResources(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_requestName(::StringW value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  constexpr void __cordl_internal_set_serviceName(::StringW value);

  constexpr void __cordl_internal_set_subResources(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_useQueryString(bool value);

  /// @brief Method .ctor, addr 0x23d5750, size 0x384, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AmazonWebServiceRequest* request, ::StringW serviceName);

  /// @brief Method get_AWS4SignerResult, addr 0x23d61a0, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* get_AWS4SignerResult();

  /// @brief Method get_AlternateEndpoint, addr 0x23d616c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::RegionEndpoint* get_AlternateEndpoint();

  /// @brief Method get_AuthenticationRegion, addr 0x23d61f8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationRegion();

  /// @brief Method get_CanonicalResource, addr 0x23d5e60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CanonicalResource();

  /// @brief Method get_CanonicalResourcePrefix, addr 0x23d61d4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_CanonicalResourcePrefix();

  /// @brief Method get_Content, addr 0x23d5e70, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Content();

  /// @brief Method get_ContentStream, addr 0x23d5e94, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_ContentStream();

  /// @brief Method get_DeterminedSigningRegion, addr 0x23d6208, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_DeterminedSigningRegion();

  /// @brief Method get_DisablePayloadSigning, addr 0x23d61b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Nullable_1<bool> get_DisablePayloadSigning();

  /// @brief Method get_Endpoint, addr 0x23d5d6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Uri* get_Endpoint();

  /// @brief Method get_Headers, addr 0x23d5c88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_HostPrefix, addr 0x23d617c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_HostPrefix();

  /// @brief Method get_HttpMethod, addr 0x23d5bfc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_HttpMethod();

  /// @brief Method get_MarshallerVersion, addr 0x23d5e50, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_MarshallerVersion();

  /// @brief Method get_OriginalRequest, addr 0x23d5c80, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_OriginalRequest();

  /// @brief Method get_OriginalStreamPosition, addr 0x23d5f00, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_OriginalStreamPosition();

  /// @brief Method get_OverrideSigningServiceName, addr 0x23d6218, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_OverrideSigningServiceName();

  /// @brief Method get_ParameterCollection, addr 0x23d5c98, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::ParameterCollection* get_ParameterCollection();

  /// @brief Method get_Parameters, addr 0x23d5c90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Parameters();

  /// @brief Method get_PathResources, addr 0x23d5d8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_PathResources();

  /// @brief Method get_RequestName, addr 0x23d5bf4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RequestName();

  /// @brief Method get_ResourcePath, addr 0x23d5d7c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ResourcePath();

  /// @brief Method get_ServiceName, addr 0x23d6164, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ServiceName();

  /// @brief Method get_SetContentFromParameters, addr 0x23d5e80, size 0x8, virtual true, abstract: false, final true
  inline bool get_SetContentFromParameters();

  /// @brief Method get_SubResources, addr 0x23d5ca0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_SubResources();

  /// @brief Method get_Suppress404Exceptions, addr 0x23d618c, size 0x8, virtual true, abstract: false, final true
  inline bool get_Suppress404Exceptions();

  /// @brief Method get_UseChunkEncoding, addr 0x23d61c0, size 0x8, virtual true, abstract: false, final true
  inline bool get_UseChunkEncoding();

  /// @brief Method get_UseQueryString, addr 0x23d5c0c, size 0x68, virtual true, abstract: false, final true
  inline bool get_UseQueryString();

  /// @brief Method get_UseSigV4, addr 0x23d61e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_UseSigV4();

  /// @brief Convert to "::Amazon::Runtime::Internal::IRequest"
  constexpr ::Amazon::Runtime::Internal::IRequest* i___Amazon__Runtime__Internal__IRequest() noexcept;

  /// @brief Method set_AWS4SignerResult, addr 0x23d61a8, size 0x8, virtual true, abstract: false, final true
  inline void set_AWS4SignerResult(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value);

  /// @brief Method set_AlternateEndpoint, addr 0x23d6174, size 0x8, virtual true, abstract: false, final true
  inline void set_AlternateEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_AuthenticationRegion, addr 0x23d6200, size 0x8, virtual true, abstract: false, final true
  inline void set_AuthenticationRegion(::StringW value);

  /// @brief Method set_CanonicalResource, addr 0x23d5e68, size 0x8, virtual false, abstract: false, final false
  inline void set_CanonicalResource(::StringW value);

  /// @brief Method set_CanonicalResourcePrefix, addr 0x23d61dc, size 0x8, virtual true, abstract: false, final true
  inline void set_CanonicalResourcePrefix(::StringW value);

  /// @brief Method set_Content, addr 0x23d5e78, size 0x8, virtual true, abstract: false, final true
  inline void set_Content(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_ContentStream, addr 0x23d5e9c, size 0x64, virtual true, abstract: false, final true
  inline void set_ContentStream(::System::IO::Stream* value);

  /// @brief Method set_DeterminedSigningRegion, addr 0x23d6210, size 0x8, virtual true, abstract: false, final true
  inline void set_DeterminedSigningRegion(::StringW value);

  /// @brief Method set_DisablePayloadSigning, addr 0x23d61b8, size 0x8, virtual true, abstract: false, final true
  inline void set_DisablePayloadSigning(::System::Nullable_1<bool> value);

  /// @brief Method set_Endpoint, addr 0x23d5d74, size 0x8, virtual true, abstract: false, final true
  inline void set_Endpoint(::System::Uri* value);

  /// @brief Method set_HostPrefix, addr 0x23d6184, size 0x8, virtual true, abstract: false, final true
  inline void set_HostPrefix(::StringW value);

  /// @brief Method set_HttpMethod, addr 0x23d5c04, size 0x8, virtual true, abstract: false, final true
  inline void set_HttpMethod(::StringW value);

  /// @brief Method set_MarshallerVersion, addr 0x23d5e58, size 0x8, virtual true, abstract: false, final true
  inline void set_MarshallerVersion(int32_t value);

  /// @brief Method set_OriginalStreamPosition, addr 0x23d5f08, size 0x8, virtual true, abstract: false, final true
  inline void set_OriginalStreamPosition(int64_t value);

  /// @brief Method set_OverrideSigningServiceName, addr 0x23d6220, size 0x8, virtual true, abstract: false, final true
  inline void set_OverrideSigningServiceName(::StringW value);

  /// @brief Method set_ResourcePath, addr 0x23d5d84, size 0x8, virtual true, abstract: false, final true
  inline void set_ResourcePath(::StringW value);

  /// @brief Method set_SetContentFromParameters, addr 0x23d5e88, size 0xc, virtual true, abstract: false, final true
  inline void set_SetContentFromParameters(bool value);

  /// @brief Method set_Suppress404Exceptions, addr 0x23d6194, size 0xc, virtual true, abstract: false, final true
  inline void set_Suppress404Exceptions(bool value);

  /// @brief Method set_UseChunkEncoding, addr 0x23d61c8, size 0xc, virtual true, abstract: false, final true
  inline void set_UseChunkEncoding(bool value);

  /// @brief Method set_UseQueryString, addr 0x23d5c74, size 0xc, virtual true, abstract: false, final true
  inline void set_UseQueryString(bool value);

  /// @brief Method set_UseSigV4, addr 0x23d61ec, size 0xc, virtual true, abstract: false, final true
  inline void set_UseSigV4(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultRequest(DefaultRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultRequest(DefaultRequest const&) = delete;

  /// @brief Field parametersCollection, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ParameterCollection* ___parametersCollection;

  /// @brief Field parametersFacade, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___parametersFacade;

  /// @brief Field headers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___headers;

  /// @brief Field subResources, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___subResources;

  /// @brief Field pathResources, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___pathResources;

  /// @brief Field endpoint, offset: 0x38, size: 0x8, def value: None
  ::System::Uri* ___endpoint;

  /// @brief Field resourcePath, offset: 0x40, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field serviceName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___serviceName;

  /// @brief Field originalRequest, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceRequest* ___originalRequest;

  /// @brief Field content, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___content;

  /// @brief Field contentStream, offset: 0x60, size: 0x8, def value: None
  ::System::IO::Stream* ___contentStream;

  /// @brief Field contentStreamHash, offset: 0x68, size: 0x8, def value: None
  ::StringW ___contentStreamHash;

  /// @brief Field httpMethod, offset: 0x70, size: 0x8, def value: None
  ::StringW ___httpMethod;

  /// @brief Field useQueryString, offset: 0x78, size: 0x1, def value: None
  bool ___useQueryString;

  /// @brief Field requestName, offset: 0x80, size: 0x8, def value: None
  ::StringW ___requestName;

  /// @brief Field canonicalResource, offset: 0x88, size: 0x8, def value: None
  ::StringW ___canonicalResource;

  /// @brief Field alternateRegion, offset: 0x90, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ___alternateRegion;

  /// @brief Field originalStreamLength, offset: 0x98, size: 0x8, def value: None
  int64_t ___originalStreamLength;

  /// @brief Field marshallerVersion, offset: 0xa0, size: 0x4, def value: None
  int32_t ___marshallerVersion;

  /// @brief Field <SetContentFromParameters>k__BackingField, offset: 0xa4, size: 0x1, def value: None
  bool ____SetContentFromParameters_k__BackingField;

  /// @brief Field <HostPrefix>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____HostPrefix_k__BackingField;

  /// @brief Field <Suppress404Exceptions>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____Suppress404Exceptions_k__BackingField;

  /// @brief Field <AWS4SignerResult>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* ____AWS4SignerResult_k__BackingField;

  /// @brief Field <DisablePayloadSigning>k__BackingField, offset: 0xc0, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____DisablePayloadSigning_k__BackingField;

  /// @brief Field <UseChunkEncoding>k__BackingField, offset: 0xc2, size: 0x1, def value: None
  bool ____UseChunkEncoding_k__BackingField;

  /// @brief Field <CanonicalResourcePrefix>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____CanonicalResourcePrefix_k__BackingField;

  /// @brief Field <UseSigV4>k__BackingField, offset: 0xd0, size: 0x1, def value: None
  bool ____UseSigV4_k__BackingField;

  /// @brief Field <AuthenticationRegion>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::StringW ____AuthenticationRegion_k__BackingField;

  /// @brief Field <DeterminedSigningRegion>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____DeterminedSigningRegion_k__BackingField;

  /// @brief Field <OverrideSigningServiceName>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____OverrideSigningServiceName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::DefaultRequest, 0xf0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___parametersCollection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___parametersFacade) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___subResources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___pathResources) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___endpoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___resourcePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___serviceName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___originalRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___content) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___contentStream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___contentStreamHash) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___httpMethod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___useQueryString) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___requestName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___canonicalResource) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___alternateRegion) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___originalStreamLength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ___marshallerVersion) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____SetContentFromParameters_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____HostPrefix_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____Suppress404Exceptions_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____AWS4SignerResult_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____DisablePayloadSigning_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____UseChunkEncoding_k__BackingField) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____CanonicalResourcePrefix_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____UseSigV4_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____AuthenticationRegion_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____DeterminedSigningRegion_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRequest, ____OverrideSigningServiceName_k__BackingField) == 0xe8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::DefaultRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::DefaultRequest*, "Amazon.Runtime.Internal", "DefaultRequest");
NEED_NO_BOX(::Amazon::Runtime::Internal::__DefaultRequest____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__DefaultRequest____c*, "Amazon.Runtime.Internal", "DefaultRequest/<>c");
