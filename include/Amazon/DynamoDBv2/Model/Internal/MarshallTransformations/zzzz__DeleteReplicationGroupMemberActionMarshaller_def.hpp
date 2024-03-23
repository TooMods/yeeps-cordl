#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeleteReplicationGroupMemberActionMarshaller)
namespace Amazon::DynamoDBv2::Model {
class DeleteReplicationGroupMemberAction;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename R, typename T> class IRequestMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonMarshallerContext;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class DeleteReplicationGroupMemberActionMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller*
class CORDL_TYPE DeleteReplicationGroupMemberActionMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance,
                             put = setStaticF_Instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller* Instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*,
                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept;

  /// @brief Method Marshall, addr 0x1314334, size 0x90, virtual true, abstract: false, final true
  inline void Marshall(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x13143c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller* getStaticF_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*,
                                                                         ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__DynamoDBv2__Model__DeleteReplicationGroupMemberAction____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept;

  static inline void setStaticF_Instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteReplicationGroupMemberActionMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteReplicationGroupMemberActionMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteReplicationGroupMemberActionMarshaller(DeleteReplicationGroupMemberActionMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteReplicationGroupMemberActionMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteReplicationGroupMemberActionMarshaller(DeleteReplicationGroupMemberActionMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DeleteReplicationGroupMemberActionMarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "DeleteReplicationGroupMemberActionMarshaller");
