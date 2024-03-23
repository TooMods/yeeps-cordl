#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DescribeContinuousBackupsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeContinuousBackupsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeContinuousBackupsRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeContinuousBackupsRequest*
class CORDL_TYPE DescribeContinuousBackupsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _tableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetTableName, addr 0x1229c28, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1229c38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TableName, addr 0x1229c18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_TableName, addr 0x1229c20, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeContinuousBackupsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeContinuousBackupsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeContinuousBackupsRequest(DescribeContinuousBackupsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeContinuousBackupsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeContinuousBackupsRequest(DescribeContinuousBackupsRequest const&) = delete;

  /// @brief Field _tableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest, ____tableName) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest*, "Amazon.DynamoDBv2.Model", "DescribeContinuousBackupsRequest");
