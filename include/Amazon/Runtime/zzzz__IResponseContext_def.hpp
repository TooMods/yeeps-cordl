#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResponseContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
// Forward declare root types
namespace Amazon::Runtime {
class IResponseContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IResponseContext);
// Type: Amazon.Runtime::IResponseContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IResponseContext*
class CORDL_TYPE IResponseContext {
public:
  // Declarations
  __declspec(property(get = get_HttpResponse, put = set_HttpResponse))::Amazon::Runtime::Internal::Transform::IWebResponseData* HttpResponse;

  __declspec(property(get = get_Response, put = set_Response))::Amazon::Runtime::AmazonWebServiceResponse* Response;

  /// @brief Method get_HttpResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* get_HttpResponse();

  /// @brief Method get_Response, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* get_Response();

  /// @brief Method set_HttpResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_HttpResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  /// @brief Method set_Response, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Response(::Amazon::Runtime::AmazonWebServiceResponse* value);

  // Ctor Parameters [CppParam { name: "", ty: "IResponseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResponseContext(IResponseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResponseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResponseContext(IResponseContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IResponseContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IResponseContext*, "Amazon.Runtime", "IResponseContext");
