#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventSourceMappingConfigurationUnmarshaller)
namespace Amazon::Lambda::Model {
class EventSourceMappingConfiguration;
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
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class EventSourceMappingConfigurationUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::EventSourceMappingConfigurationUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::EventSourceMappingConfigurationUnmarshaller*
class CORDL_TYPE EventSourceMappingConfigurationUnmarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,
                                                                             ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  /// @brief Method Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.Lambda.Model.EventSourceMappingConfiguration,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall, addr
  /// 0x2ebf3b8, size 0x40, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::EventSourceMappingConfiguration*
  Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_Lambda_Model_EventSourceMappingConfiguration_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
      ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x2ebf3f8, size 0x118c, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::EventSourceMappingConfiguration* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method .ctor, addr 0x2ec05dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2ec0584, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__EventSourceMappingConfiguration____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::EventSourceMappingConfiguration*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__EventSourceMappingConfiguration____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

  static inline void setStaticF__instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSourceMappingConfigurationUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSourceMappingConfigurationUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSourceMappingConfigurationUnmarshaller(EventSourceMappingConfigurationUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSourceMappingConfigurationUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSourceMappingConfigurationUnmarshaller(EventSourceMappingConfigurationUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::EventSourceMappingConfigurationUnmarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "EventSourceMappingConfigurationUnmarshaller");
