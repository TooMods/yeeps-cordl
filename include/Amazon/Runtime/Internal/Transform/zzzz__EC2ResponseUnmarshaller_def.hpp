#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlResponseUnmarshaller_def.hpp"
CORDL_MODULE_EXPORT(EC2ResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class EC2ResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller);
// Type: Amazon.Runtime.Internal.Transform::EC2ResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::EC2ResponseUnmarshaller*
class CORDL_TYPE EC2ResponseUnmarshaller : public ::Amazon::Runtime::Internal::Transform::XmlResponseUnmarshaller {
public:
  // Declarations
  /// @brief Method ConstructUnmarshallerContext, addr 0x244bc00, size 0x88, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                                   ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException);

  static inline ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x244bb08, size 0xf8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input);

  /// @brief Method .ctor, addr 0x244bd0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EC2ResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EC2ResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EC2ResponseUnmarshaller(EC2ResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EC2ResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EC2ResponseUnmarshaller(EC2ResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*, "Amazon.Runtime.Internal.Transform", "EC2ResponseUnmarshaller");
