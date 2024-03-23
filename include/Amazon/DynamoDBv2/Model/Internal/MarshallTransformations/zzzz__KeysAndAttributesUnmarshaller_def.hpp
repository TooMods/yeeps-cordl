#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeysAndAttributesUnmarshaller)
namespace Amazon::DynamoDBv2::Model {
class KeysAndAttributes;
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
class KeysAndAttributesUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::KeysAndAttributesUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::KeysAndAttributesUnmarshaller*
class CORDL_TYPE KeysAndAttributesUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.KeysAndAttributes,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall, addr 0x11bd200, size
  /// 0x40, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::KeysAndAttributes*
  Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_KeysAndAttributes_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
      ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x11bd240, size 0x5cc, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::KeysAndAttributes* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x11bd864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x11bd80c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__KeysAndAttributes____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::KeysAndAttributes*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__KeysAndAttributes____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeysAndAttributesUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeysAndAttributesUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeysAndAttributesUnmarshaller(KeysAndAttributesUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeysAndAttributesUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeysAndAttributesUnmarshaller(KeysAndAttributesUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::KeysAndAttributesUnmarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "KeysAndAttributesUnmarshaller");
