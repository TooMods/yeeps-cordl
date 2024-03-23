#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller)
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexAutoScalingDescription;
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
class ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller*
class CORDL_TYPE ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,
                                                                             ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method
  /// Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ReplicaGlobalSecondaryIndexAutoScalingDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall,
  /// addr 0x11cfdd0, size 0x40, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*
  Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ReplicaGlobalSecondaryIndexAutoScalingDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
      ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x11cfe10, size 0x360, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x11d01c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x11d0170, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,
                                                                    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaGlobalSecondaryIndexAutoScalingDescription____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*,
                                                                    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaGlobalSecondaryIndexAutoScalingDescription____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller(ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller(ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller*,
                       "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations", "ReplicaGlobalSecondaryIndexAutoScalingDescriptionUnmarshaller");
