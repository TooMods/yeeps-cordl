#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DescribeTimeToLiveEndpointDiscoveryMarshaller)
namespace Amazon::DynamoDBv2::Model {
class DescribeTimeToLiveRequest;
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
class DescribeTimeToLiveEndpointDiscoveryMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller*
class CORDL_TYPE DescribeTimeToLiveEndpointDiscoveryMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller* _instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method Marshall, addr 0x13243f4, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x132446c, size 0x60, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Marshall(::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest* publicRequest);

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x1324524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x13244cc, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__DynamoDBv2__Model__DescribeTimeToLiveRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeTimeToLiveEndpointDiscoveryMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeTimeToLiveEndpointDiscoveryMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeTimeToLiveEndpointDiscoveryMarshaller(DescribeTimeToLiveEndpointDiscoveryMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeTimeToLiveEndpointDiscoveryMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeTimeToLiveEndpointDiscoveryMarshaller(DescribeTimeToLiveEndpointDiscoveryMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeTimeToLiveEndpointDiscoveryMarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "DescribeTimeToLiveEndpointDiscoveryMarshaller");
