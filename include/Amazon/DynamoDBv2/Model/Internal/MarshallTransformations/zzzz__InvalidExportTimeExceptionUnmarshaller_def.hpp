#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InvalidExportTimeExceptionUnmarshaller)
namespace Amazon::DynamoDBv2::Model {
class InvalidExportTimeException;
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
class InvalidExportTimeExceptionUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::InvalidExportTimeExceptionUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::InvalidExportTimeExceptionUnmarshaller*
class CORDL_TYPE InvalidExportTimeExceptionUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,
                                                                                          ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x11bbd3c, size 0x64, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::InvalidExportTimeException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x11b2fe0, size 0xe4, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::InvalidExportTimeException* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                             ::Amazon::Runtime::Internal::ErrorResponse* errorResponse);

  /// @brief Method .ctor, addr 0x11bbdf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x11bbda0, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,
                                                                                 ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IErrorResponseUnmarshaller_2___Amazon__DynamoDBv2__Model__InvalidExportTimeException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::InvalidExportTimeException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__InvalidExportTimeException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidExportTimeExceptionUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidExportTimeExceptionUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidExportTimeExceptionUnmarshaller(InvalidExportTimeExceptionUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidExportTimeExceptionUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidExportTimeExceptionUnmarshaller(InvalidExportTimeExceptionUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::InvalidExportTimeExceptionUnmarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "InvalidExportTimeExceptionUnmarshaller");
