#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeEndpointsResponse)
namespace Amazon::DynamoDBv2::Model {
class Endpoint;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeEndpointsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeEndpointsResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeEndpointsResponse*
class CORDL_TYPE DescribeEndpointsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Endpoints, put = set_Endpoints))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* Endpoints;

  /// @brief Field _endpoints, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__endpoints, put = __cordl_internal_set__endpoints))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* _endpoints;

  /// @brief Method IsSetEndpoints, addr 0x1229f58, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetEndpoints();

  static inline ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*& __cordl_internal_get__endpoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*> const& __cordl_internal_get__endpoints() const;

  constexpr void __cordl_internal_set__endpoints(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* value);

  /// @brief Method .ctor, addr 0x1229fac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Endpoints, addr 0x1229f48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* get_Endpoints();

  /// @brief Method set_Endpoints, addr 0x1229f50, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoints(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeEndpointsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeEndpointsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeEndpointsResponse(DescribeEndpointsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeEndpointsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeEndpointsResponse(DescribeEndpointsResponse const&) = delete;

  /// @brief Field _endpoints, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* ____endpoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse, ____endpoints) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*, "Amazon.DynamoDBv2.Model", "DescribeEndpointsResponse");
