#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonResponseUnmarshaller_def.hpp"
CORDL_MODULE_EXPORT(DescribeContributorInsightsResponseUnmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
class DescribeContributorInsightsResponseUnmarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller);
// Type: Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model.Internal.MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller*
class CORDL_TYPE DescribeContributorInsightsResponseUnmarshaller : public ::Amazon::Runtime::Internal::Transform::JsonResponseUnmarshaller {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* _instance;

  /// @brief Method GetInstance, addr 0x13197b4, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* GetInstance();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* New_ctor();

  /// @brief Method Unmarshall, addr 0x1318d64, size 0x518, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method UnmarshallException, addr 0x131927c, size 0x538, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AmazonServiceException* UnmarshallException(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context, ::System::Exception* innerException,
                                                                        ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1319864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x131980c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* get_Instance();

  static inline void setStaticF__instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeContributorInsightsResponseUnmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeContributorInsightsResponseUnmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeContributorInsightsResponseUnmarshaller(DescribeContributorInsightsResponseUnmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeContributorInsightsResponseUnmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeContributorInsightsResponseUnmarshaller(DescribeContributorInsightsResponseUnmarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::DescribeContributorInsightsResponseUnmarshaller*, "Amazon.DynamoDBv2.Model.Internal.MarshallTransformations",
                       "DescribeContributorInsightsResponseUnmarshaller");
