#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AmazonWebServiceResponse)
namespace Amazon::Runtime {
class ResponseMetadata;
}
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonWebServiceResponse);
// Type: Amazon.Runtime::AmazonWebServiceResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonWebServiceResponse*
class CORDL_TYPE AmazonWebServiceResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_HttpStatusCode, put = set_HttpStatusCode))::System::Net::HttpStatusCode HttpStatusCode;

  __declspec(property(get = get_ResponseMetadata, put = set_ResponseMetadata))::Amazon::Runtime::ResponseMetadata* ResponseMetadata;

  /// @brief Field contentLength, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentLength, put = __cordl_internal_set_contentLength)) int64_t contentLength;

  /// @brief Field httpStatusCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_httpStatusCode, put = __cordl_internal_set_httpStatusCode))::System::Net::HttpStatusCode httpStatusCode;

  /// @brief Field responseMetadataField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_responseMetadataField, put = __cordl_internal_set_responseMetadataField))::Amazon::Runtime::ResponseMetadata* responseMetadataField;

  static inline ::Amazon::Runtime::AmazonWebServiceResponse* New_ctor();

  constexpr int64_t const& __cordl_internal_get_contentLength() const;

  constexpr int64_t& __cordl_internal_get_contentLength();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get_httpStatusCode() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get_httpStatusCode();

  constexpr ::Amazon::Runtime::ResponseMetadata*& __cordl_internal_get_responseMetadataField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ResponseMetadata*> const& __cordl_internal_get_responseMetadataField() const;

  constexpr void __cordl_internal_set_contentLength(int64_t value);

  constexpr void __cordl_internal_set_httpStatusCode(::System::Net::HttpStatusCode value);

  constexpr void __cordl_internal_set_responseMetadataField(::Amazon::Runtime::ResponseMetadata* value);

  /// @brief Method .ctor, addr 0x1fdf5a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContentLength, addr 0x1fdf580, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_HttpStatusCode, addr 0x1fdf590, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpStatusCode get_HttpStatusCode();

  /// @brief Method get_ResponseMetadata, addr 0x1fdf570, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ResponseMetadata* get_ResponseMetadata();

  /// @brief Method set_ContentLength, addr 0x1fdf588, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_HttpStatusCode, addr 0x1fdf598, size 0x8, virtual false, abstract: false, final false
  inline void set_HttpStatusCode(::System::Net::HttpStatusCode value);

  /// @brief Method set_ResponseMetadata, addr 0x1fdf578, size 0x8, virtual false, abstract: false, final false
  inline void set_ResponseMetadata(::Amazon::Runtime::ResponseMetadata* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonWebServiceResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonWebServiceResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonWebServiceResponse(AmazonWebServiceResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonWebServiceResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonWebServiceResponse(AmazonWebServiceResponse const&) = delete;

  /// @brief Field responseMetadataField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::ResponseMetadata* ___responseMetadataField;

  /// @brief Field contentLength, offset: 0x18, size: 0x8, def value: None
  int64_t ___contentLength;

  /// @brief Field httpStatusCode, offset: 0x20, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ___httpStatusCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonWebServiceResponse, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceResponse, ___responseMetadataField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceResponse, ___contentLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceResponse, ___httpStatusCode) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonWebServiceResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonWebServiceResponse*, "Amazon.Runtime", "AmazonWebServiceResponse");
