#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClientResponseData)
namespace Amazon::Runtime::Internal::Transform {
class HttpResponseMessageBody;
}
namespace Amazon::Runtime::Internal::Transform {
class IHttpResponseBody;
}
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class HttpClientResponseData;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::HttpClientResponseData);
// Type: Amazon.Runtime.Internal.Transform::HttpClientResponseData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::HttpClientResponseData*
class CORDL_TYPE HttpClientResponseData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_ContentType, put = set_ContentType))::StringW ContentType;

  __declspec(property(get = get_IsSuccessStatusCode, put = set_IsSuccessStatusCode)) bool IsSuccessStatusCode;

  __declspec(property(get = get_ResponseBody))::Amazon::Runtime::Internal::Transform::IHttpResponseBody* ResponseBody;

  __declspec(property(get = get_StatusCode, put = set_StatusCode))::System::Net::HttpStatusCode StatusCode;

  /// @brief Field <ContentLength>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ContentLength_k__BackingField, put = __cordl_internal_set__ContentLength_k__BackingField)) int64_t _ContentLength_k__BackingField;

  /// @brief Field <ContentType>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ContentType_k__BackingField, put = __cordl_internal_set__ContentType_k__BackingField))::StringW _ContentType_k__BackingField;

  /// @brief Field <IsSuccessStatusCode>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSuccessStatusCode_k__BackingField, put = __cordl_internal_set__IsSuccessStatusCode_k__BackingField)) bool _IsSuccessStatusCode_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField))::System::Net::HttpStatusCode _StatusCode_k__BackingField;

  /// @brief Field _headerNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__headerNames, put = __cordl_internal_set__headerNames))::ArrayW<::StringW, ::Array<::StringW>*> _headerNames;

  /// @brief Field _headerNamesSet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__headerNamesSet, put = __cordl_internal_set__headerNamesSet))::System::Collections::Generic::HashSet_1<::StringW>* _headerNamesSet;

  /// @brief Field _headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headers, put = __cordl_internal_set__headers))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _headers;

  /// @brief Field _response, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__response, put = __cordl_internal_set__response))::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody* _response;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IWebResponseData"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IWebResponseData*() noexcept;

  /// @brief Method CopyHeaderValues, addr 0x244f72c, size 0x83c, virtual false, abstract: false, final false
  inline void CopyHeaderValues(::System::Net::Http::HttpResponseMessage* response);

  /// @brief Method GetFirstHeaderValue, addr 0x24500a0, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetFirstHeaderValue(::System::Net::Http::Headers::HttpHeaders* headers, ::StringW key);

  /// @brief Method GetHeaderNames, addr 0x2450098, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetHeaderNames();

  /// @brief Method GetHeaderValue, addr 0x244ffac, size 0x94, virtual true, abstract: false, final true
  inline ::StringW GetHeaderValue(::StringW headerName);

  /// @brief Method IsHeaderPresent, addr 0x2450040, size 0x58, virtual true, abstract: false, final true
  inline bool IsHeaderPresent(::StringW headerName);

  static inline ::Amazon::Runtime::Internal::Transform::HttpClientResponseData* New_ctor(::System::Net::Http::HttpResponseMessage* response);

  static inline ::Amazon::Runtime::Internal::Transform::HttpClientResponseData* New_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient,
                                                                                         bool disposeClient);

  constexpr int64_t const& __cordl_internal_get__ContentLength_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__ContentLength_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ContentType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ContentType_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsSuccessStatusCode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsSuccessStatusCode_k__BackingField();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__headerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__headerNames();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__headerNamesSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__headerNamesSet() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__headers() const;

  constexpr ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*& __cordl_internal_get__response();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*> const& __cordl_internal_get__response() const;

  constexpr void __cordl_internal_set__ContentLength_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__ContentType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsSuccessStatusCode_k__BackingField(bool value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value);

  constexpr void __cordl_internal_set__headerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__headerNamesSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__headers(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__response(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody* value);

  /// @brief Method .ctor, addr 0x244f5b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpResponseMessage* response);

  /// @brief Method .ctor, addr 0x244f5c0, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient);

  /// @brief Method get_ContentLength, addr 0x244ff9c, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_ContentLength();

  /// @brief Method get_ContentType, addr 0x244ff8c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ContentType();

  /// @brief Method get_IsSuccessStatusCode, addr 0x244ff78, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSuccessStatusCode();

  /// @brief Method get_ResponseBody, addr 0x2450140, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* get_ResponseBody();

  /// @brief Method get_StatusCode, addr 0x244ff68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IWebResponseData"
  constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData* i___Amazon__Runtime__Internal__Transform__IWebResponseData() noexcept;

  /// @brief Method set_ContentLength, addr 0x244ffa4, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_ContentType, addr 0x244ff94, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentType(::StringW value);

  /// @brief Method set_IsSuccessStatusCode, addr 0x244ff80, size 0xc, virtual false, abstract: false, final false
  inline void set_IsSuccessStatusCode(bool value);

  /// @brief Method set_StatusCode, addr 0x244ff70, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientResponseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientResponseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientResponseData(HttpClientResponseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientResponseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientResponseData(HttpClientResponseData const&) = delete;

  /// @brief Field _response, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody* ____response;

  /// @brief Field _headerNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____headerNames;

  /// @brief Field _headers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____headers;

  /// @brief Field _headerNamesSet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____headerNamesSet;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ____StatusCode_k__BackingField;

  /// @brief Field <IsSuccessStatusCode>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____IsSuccessStatusCode_k__BackingField;

  /// @brief Field <ContentType>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____ContentType_k__BackingField;

  /// @brief Field <ContentLength>k__BackingField, offset: 0x40, size: 0x8, def value: None
  int64_t ____ContentLength_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::HttpClientResponseData, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____response) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____headerNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____headerNamesSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____StatusCode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____IsSuccessStatusCode_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____ContentType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpClientResponseData, ____ContentLength_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::HttpClientResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::HttpClientResponseData*, "Amazon.Runtime.Internal.Transform", "HttpClientResponseData");
