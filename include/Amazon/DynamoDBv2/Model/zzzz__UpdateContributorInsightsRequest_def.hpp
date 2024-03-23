#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateContributorInsightsRequest)
namespace Amazon::DynamoDBv2 {
class ContributorInsightsAction;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateContributorInsightsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateContributorInsightsRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateContributorInsightsRequest*
class CORDL_TYPE UpdateContributorInsightsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ContributorInsightsAction, put = set_ContributorInsightsAction))::Amazon::DynamoDBv2::ContributorInsightsAction* ContributorInsightsAction;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _contributorInsightsAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__contributorInsightsAction,
                      put = __cordl_internal_set__contributorInsightsAction))::Amazon::DynamoDBv2::ContributorInsightsAction* _contributorInsightsAction;

  /// @brief Field _indexName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _tableName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetContributorInsightsAction, addr 0x1053fd0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetContributorInsightsAction();

  /// @brief Method IsSetIndexName, addr 0x1054040, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetTableName, addr 0x1054060, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest* New_ctor();

  constexpr ::Amazon::DynamoDBv2::ContributorInsightsAction*& __cordl_internal_get__contributorInsightsAction();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ContributorInsightsAction*> const& __cordl_internal_get__contributorInsightsAction() const;

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__contributorInsightsAction(::Amazon::DynamoDBv2::ContributorInsightsAction* value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1054070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContributorInsightsAction, addr 0x1053fc0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ContributorInsightsAction* get_ContributorInsightsAction();

  /// @brief Method get_IndexName, addr 0x1054030, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_TableName, addr 0x1054050, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ContributorInsightsAction, addr 0x1053fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_ContributorInsightsAction(::Amazon::DynamoDBv2::ContributorInsightsAction* value);

  /// @brief Method set_IndexName, addr 0x1054038, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_TableName, addr 0x1054058, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateContributorInsightsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateContributorInsightsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateContributorInsightsRequest(UpdateContributorInsightsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateContributorInsightsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateContributorInsightsRequest(UpdateContributorInsightsRequest const&) = delete;

  /// @brief Field _contributorInsightsAction, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ContributorInsightsAction* ____contributorInsightsAction;

  /// @brief Field _indexName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _tableName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest, ____contributorInsightsAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest, ____indexName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest, ____tableName) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest*, "Amazon.DynamoDBv2.Model", "UpdateContributorInsightsRequest");
