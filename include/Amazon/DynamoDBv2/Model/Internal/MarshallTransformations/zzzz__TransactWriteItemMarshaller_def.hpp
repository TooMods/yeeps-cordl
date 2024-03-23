#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransactWriteItemMarshaller)
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItem;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename R, typename T> class IRequestMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonMarshallerContext;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class TransactWriteItemMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::TransactWriteItemMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::TransactWriteItemMarshaller*
class CORDL_TYPE TransactWriteItemMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller* Instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::TransactWriteItem*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::TransactWriteItem*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept;

  /// @brief Method Marshall, addr 0x1733fa0, size 0x2bc, virtual true, abstract: false, final true
  inline void Marshall(::Amazon::DynamoDBv2::Model::TransactWriteItem* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x1734974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller* getStaticF_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::TransactWriteItem*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::TransactWriteItem*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__DynamoDBv2__Model__TransactWriteItem____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept;

  static inline void setStaticF_Instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactWriteItemMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactWriteItemMarshaller(TransactWriteItemMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactWriteItemMarshaller(TransactWriteItemMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactWriteItemMarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "TransactWriteItemMarshaller");
