#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
CORDL_MODULE_EXPORT(JsonResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class JsonResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::JsonResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::JsonResponseUnmarshaller*
class CORDL_TYPE JsonResponseUnmarshaller : public ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller {
public:
  // Declarations
  /// @brief Method ConstructUnmarshallerContext, addr 0x244c180, size 0x88, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                                   ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException);

  static inline ::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller* New_ctor();

  /// @brief Method ShouldReadEntireResponse, addr 0x244c208, size 0xd8, virtual true, abstract: false, final false
  inline bool ShouldReadEntireResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool readEntireResponse);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* input);

  /// @brief Method Unmarshall, addr 0x244bd14, size 0x2d4, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input);

  /// @brief Method UnmarshallException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* input, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method UnmarshallException, addr 0x244bfe8, size 0x198, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x244c2e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonResponseUnmarshaller(JsonResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonResponseUnmarshaller(JsonResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller*, "Amazon.Runtime.Internal.Transform", "JsonResponseUnmarshaller");
