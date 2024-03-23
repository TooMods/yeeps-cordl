#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateContinuousBackupsRequest)
namespace Amazon::DynamoDBv2::Model {
class PointInTimeRecoverySpecification;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateContinuousBackupsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateContinuousBackupsRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateContinuousBackupsRequest*
class CORDL_TYPE UpdateContinuousBackupsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_PointInTimeRecoverySpecification,
                      put = set_PointInTimeRecoverySpecification))::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* PointInTimeRecoverySpecification;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _pointInTimeRecoverySpecification, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pointInTimeRecoverySpecification,
                      put = __cordl_internal_set__pointInTimeRecoverySpecification))::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* _pointInTimeRecoverySpecification;

  /// @brief Field _tableName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetPointInTimeRecoverySpecification, addr 0x1053f60, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPointInTimeRecoverySpecification();

  /// @brief Method IsSetTableName, addr 0x1053f80, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*& __cordl_internal_get__pointInTimeRecoverySpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*> const& __cordl_internal_get__pointInTimeRecoverySpecification() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__pointInTimeRecoverySpecification(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1053f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PointInTimeRecoverySpecification, addr 0x1053f50, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* get_PointInTimeRecoverySpecification();

  /// @brief Method get_TableName, addr 0x1053f70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_PointInTimeRecoverySpecification, addr 0x1053f58, size 0x8, virtual false, abstract: false, final false
  inline void set_PointInTimeRecoverySpecification(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* value);

  /// @brief Method set_TableName, addr 0x1053f78, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateContinuousBackupsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateContinuousBackupsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateContinuousBackupsRequest(UpdateContinuousBackupsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateContinuousBackupsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateContinuousBackupsRequest(UpdateContinuousBackupsRequest const&) = delete;

  /// @brief Field _pointInTimeRecoverySpecification, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* ____pointInTimeRecoverySpecification;

  /// @brief Field _tableName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest, ____pointInTimeRecoverySpecification) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest, ____tableName) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*, "Amazon.DynamoDBv2.Model", "UpdateContinuousBackupsRequest");
