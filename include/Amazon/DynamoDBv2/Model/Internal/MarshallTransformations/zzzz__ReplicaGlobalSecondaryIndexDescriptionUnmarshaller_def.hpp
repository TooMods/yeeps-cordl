#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexDescriptionUnmarshaller)
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexDescription;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class ReplicaGlobalSecondaryIndexDescriptionUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller*
class CORDL_TYPE ReplicaGlobalSecondaryIndexDescriptionUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,
                                                                             ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ReplicaGlobalSecondaryIndexDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall,
  /// addr 0x11d02a0, size 0x40, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*
  Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ReplicaGlobalSecondaryIndexDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
      ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x11d02e0, size 0x21c, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x11d0554, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x11d04fc, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,
                                                                    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaGlobalSecondaryIndexDescription____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*,
                                                                    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaGlobalSecondaryIndexDescription____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexDescriptionUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexDescriptionUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexDescriptionUnmarshaller(ReplicaGlobalSecondaryIndexDescriptionUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexDescriptionUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexDescriptionUnmarshaller(ReplicaGlobalSecondaryIndexDescriptionUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexDescriptionUnmarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "ReplicaGlobalSecondaryIndexDescriptionUnmarshaller");
