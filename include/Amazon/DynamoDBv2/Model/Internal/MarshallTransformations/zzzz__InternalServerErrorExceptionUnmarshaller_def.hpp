#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalServerErrorExceptionUnmarshaller)
namespace Amazon::DynamoDBv2::Model {
class InternalServerErrorException;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename TUnmarshaller, typename TUnmarshalleContext> class IErrorResponseUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal {
class ErrorResponse;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class InternalServerErrorExceptionUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::InternalServerErrorExceptionUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::InternalServerErrorExceptionUnmarshaller*
class CORDL_TYPE InternalServerErrorExceptionUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,
                                                                                          ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x11bbc14, size 0x64, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::InternalServerErrorException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x11b2efc, size 0xe4, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::InternalServerErrorException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                               ::Amazon::Runtime::Internal::ErrorResponse* errorResponse);

  /// @brief Method .ctor, addr 0x11bbcd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x11bbc78, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,
                                                                                 ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IErrorResponseUnmarshaller_2___Amazon__DynamoDBv2__Model__InternalServerErrorException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InternalServerErrorException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__InternalServerErrorException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalServerErrorExceptionUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalServerErrorExceptionUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalServerErrorExceptionUnmarshaller(InternalServerErrorExceptionUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalServerErrorExceptionUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalServerErrorExceptionUnmarshaller(InternalServerErrorExceptionUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InternalServerErrorExceptionUnmarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "InternalServerErrorExceptionUnmarshaller");
