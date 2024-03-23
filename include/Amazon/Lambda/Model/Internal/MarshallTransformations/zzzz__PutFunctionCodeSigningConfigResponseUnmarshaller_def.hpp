#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonResponseUnmarshaller_def.hpp"
CORDL_MODULE_EXPORT(PutFunctionCodeSigningConfigResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class PutFunctionCodeSigningConfigResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller*
class CORDL_TYPE PutFunctionCodeSigningConfigResponseUnmarshaller : public ::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* _instance;

  /// @brief Method GetInstance, addr 0x2ba4244, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* GetInstance();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x2ba3858, size 0x1f0, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method UnmarshallException, addr 0x2ba3a48, size 0x7fc, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x2ba42f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2ba429c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* get_Instance();

  static inline void setStaticF__instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutFunctionCodeSigningConfigResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutFunctionCodeSigningConfigResponseUnmarshaller(PutFunctionCodeSigningConfigResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutFunctionCodeSigningConfigResponseUnmarshaller(PutFunctionCodeSigningConfigResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::PutFunctionCodeSigningConfigResponseUnmarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "PutFunctionCodeSigningConfigResponseUnmarshaller");
