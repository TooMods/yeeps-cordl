#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DescribeKinesisStreamingDestinationResponse)
namespace Amazon::DynamoDBv2::Model {
class KinesisDataStreamDestination;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeKinesisStreamingDestinationResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeKinesisStreamingDestinationResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeKinesisStreamingDestinationResponse*
class CORDL_TYPE DescribeKinesisStreamingDestinationResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_KinesisDataStreamDestinations,
                      put = set_KinesisDataStreamDestinations))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* KinesisDataStreamDestinations;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _kinesisDataStreamDestinations, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__kinesisDataStreamDestinations,
      put = __cordl_internal_set__kinesisDataStreamDestinations))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* _kinesisDataStreamDestinations;

  /// @brief Field _tableName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetKinesisDataStreamDestinations, addr 0x122a228, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKinesisDataStreamDestinations();

  /// @brief Method IsSetTableName, addr 0x122a28c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>*& __cordl_internal_get__kinesisDataStreamDestinations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>*> const&
  __cordl_internal_get__kinesisDataStreamDestinations() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__kinesisDataStreamDestinations(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x122a29c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KinesisDataStreamDestinations, addr 0x122a218, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* get_KinesisDataStreamDestinations();

  /// @brief Method get_TableName, addr 0x122a27c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_KinesisDataStreamDestinations, addr 0x122a220, size 0x8, virtual false, abstract: false, final false
  inline void set_KinesisDataStreamDestinations(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* value);

  /// @brief Method set_TableName, addr 0x122a284, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeKinesisStreamingDestinationResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeKinesisStreamingDestinationResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeKinesisStreamingDestinationResponse(DescribeKinesisStreamingDestinationResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeKinesisStreamingDestinationResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeKinesisStreamingDestinationResponse(DescribeKinesisStreamingDestinationResponse const&) = delete;

  /// @brief Field _kinesisDataStreamDestinations, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*>* ____kinesisDataStreamDestinations;

  /// @brief Field _tableName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse, ____kinesisDataStreamDestinations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse, ____tableName) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse*, "Amazon.DynamoDBv2.Model", "DescribeKinesisStreamingDestinationResponse");
