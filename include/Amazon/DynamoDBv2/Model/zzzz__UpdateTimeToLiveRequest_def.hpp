#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateTimeToLiveRequest)
namespace Amazon::DynamoDBv2::Model {
class TimeToLiveSpecification;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateTimeToLiveRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateTimeToLiveRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateTimeToLiveRequest*
class CORDL_TYPE UpdateTimeToLiveRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TimeToLiveSpecification, put = set_TimeToLiveSpecification))::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* TimeToLiveSpecification;

  /// @brief Field _tableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _timeToLiveSpecification, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__timeToLiveSpecification,
                      put = __cordl_internal_set__timeToLiveSpecification))::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* _timeToLiveSpecification;

  /// @brief Method IsSetTableName, addr 0x105584c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTimeToLiveSpecification, addr 0x105586c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTimeToLiveSpecification();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*& __cordl_internal_get__timeToLiveSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*> const& __cordl_internal_get__timeToLiveSpecification() const;

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__timeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value);

  /// @brief Method .ctor, addr 0x105587c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TableName, addr 0x105583c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TimeToLiveSpecification, addr 0x105585c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* get_TimeToLiveSpecification();

  /// @brief Method set_TableName, addr 0x1055844, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TimeToLiveSpecification, addr 0x1055864, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateTimeToLiveRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateTimeToLiveRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateTimeToLiveRequest(UpdateTimeToLiveRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateTimeToLiveRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateTimeToLiveRequest(UpdateTimeToLiveRequest const&) = delete;

  /// @brief Field _tableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _timeToLiveSpecification, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* ____timeToLiveSpecification;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest, ____tableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest, ____timeToLiveSpecification) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest*, "Amazon.DynamoDBv2.Model", "UpdateTimeToLiveRequest");
