#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IResponseUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
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
class ResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::ResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::ResponseUnmarshaller*
class CORDL_TYPE ResponseUnmarshaller : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasStreamingProperty)) bool HasStreamingProperty;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*() noexcept;

  /// @brief Method ConstructUnmarshallerContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                                   ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException);

  /// @brief Method CreateContext, addr 0x244b338, size 0xa8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* CreateContext(::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool readEntireResponse,
                                                                                    ::System::IO::Stream* stream, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, bool isException);

  /// @brief Method GetDefaultErrorMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW GetDefaultErrorMessage();

  static inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* New_ctor();

  /// @brief Method ShouldReadEntireResponse, addr 0x244b568, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldReadEntireResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool readEntireResponse);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input);

  /// @brief Method UnmarshallException, addr 0x244b3e8, size 0x40, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method UnmarshallResponse, addr 0x244b428, size 0x140, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* UnmarshallResponse(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x244b570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasStreamingProperty, addr 0x244b3e0, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasStreamingProperty();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IResponseUnmarshaller_2___Amazon__Runtime__AmazonWebServiceResponse____Amazon__Runtime__Internal__Transform__UnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Runtime__AmazonWebServiceResponse____Amazon__Runtime__Internal__Transform__UnmarshallerContext__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseUnmarshaller(ResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseUnmarshaller(ResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*, "Amazon.Runtime.Internal.Transform", "ResponseUnmarshaller");
