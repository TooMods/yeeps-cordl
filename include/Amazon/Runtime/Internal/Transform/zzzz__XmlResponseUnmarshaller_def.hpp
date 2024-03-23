#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
CORDL_MODULE_EXPORT(XmlResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
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
class XmlResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::XmlResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::XmlResponseUnmarshaller*
class CORDL_TYPE XmlResponseUnmarshaller : public ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller {
public:
  // Declarations
  /// @brief Method ConstructUnmarshallerContext, addr 0x244ba78, size 0x88, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                                   ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException);

  static inline ::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244b578, size 0x414, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* input);

  /// @brief Method UnmarshallException, addr 0x244b98c, size 0xec, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method UnmarshallException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* input, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x244bb00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlResponseUnmarshaller(XmlResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlResponseUnmarshaller(XmlResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller*, "Amazon.Runtime.Internal.Transform", "XmlResponseUnmarshaller");
