#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWebResponseData)
namespace Amazon::Runtime::Internal::Transform {
class IHttpResponseBody;
}
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::IWebResponseData);
// Type: Amazon.Runtime.Internal.Transform::IWebResponseData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::IWebResponseData*
class CORDL_TYPE IWebResponseData {
public:
  // Declarations
  __declspec(property(get = get_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_ContentType))::StringW ContentType;

  __declspec(property(get = get_IsSuccessStatusCode)) bool IsSuccessStatusCode;

  __declspec(property(get = get_ResponseBody))::Amazon::Runtime::Internal::Transform::IHttpResponseBody* ResponseBody;

  __declspec(property(get = get_StatusCode))::System::Net::HttpStatusCode StatusCode;

  /// @brief Method GetHeaderNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetHeaderNames();

  /// @brief Method GetHeaderValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetHeaderValue(::StringW headerName);

  /// @brief Method IsHeaderPresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsHeaderPresent(::StringW headerName);

  /// @brief Method get_ContentLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_ContentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ContentType();

  /// @brief Method get_IsSuccessStatusCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSuccessStatusCode();

  /// @brief Method get_ResponseBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* get_ResponseBody();

  /// @brief Method get_StatusCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  // Ctor Parameters [CppParam { name: "", ty: "IWebResponseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWebResponseData(IWebResponseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWebResponseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWebResponseData(IWebResponseData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::IWebResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::IWebResponseData*, "Amazon.Runtime.Internal.Transform", "IWebResponseData");
