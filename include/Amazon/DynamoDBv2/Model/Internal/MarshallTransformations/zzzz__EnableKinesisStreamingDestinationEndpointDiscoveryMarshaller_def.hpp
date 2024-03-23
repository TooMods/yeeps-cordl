#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller)
namespace Amazon::DynamoDBv2::Model {
class EnableKinesisStreamingDestinationRequest;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryDataBase;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller*
class CORDL_TYPE EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,
                                                                           ::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method Marshall, addr 0x1326e68, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x1326ee0, size 0x60, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Marshall(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest* publicRequest);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x1326f98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x1326f40, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller* get_Instance();

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__DynamoDBv2__Model__EnableKinesisStreamingDestinationRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller(EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller(EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller*,
                       "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations", "EnableKinesisStreamingDestinationEndpointDiscoveryMarshaller");
