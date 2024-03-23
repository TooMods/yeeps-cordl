#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContributorInsightsSummary)
namespace Amazon::DynamoDBv2 {
class ContributorInsightsStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ContributorInsightsSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary);
// Type: Amazon.DynamoDBv2.Model::ContributorInsightsSummary
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ContributorInsightsSummary*
class CORDL_TYPE ContributorInsightsSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContributorInsightsStatus, put = set_ContributorInsightsStatus))::Amazon::DynamoDBv2::ContributorInsightsStatus* ContributorInsightsStatus;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _contributorInsightsStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__contributorInsightsStatus,
                      put = __cordl_internal_set__contributorInsightsStatus))::Amazon::DynamoDBv2::ContributorInsightsStatus* _contributorInsightsStatus;

  /// @brief Field _indexName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _tableName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetContributorInsightsStatus, addr 0x12283a4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetContributorInsightsStatus();

  /// @brief Method IsSetIndexName, addr 0x1228414, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetTableName, addr 0x1228434, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::ContributorInsightsSummary* New_ctor();

  constexpr ::Amazon::DynamoDBv2::ContributorInsightsStatus*& __cordl_internal_get__contributorInsightsStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ContributorInsightsStatus*> const& __cordl_internal_get__contributorInsightsStatus() const;

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__contributorInsightsStatus(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1228444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContributorInsightsStatus, addr 0x1228394, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* get_ContributorInsightsStatus();

  /// @brief Method get_IndexName, addr 0x1228404, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_TableName, addr 0x1228424, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ContributorInsightsStatus, addr 0x122839c, size 0x8, virtual false, abstract: false, final false
  inline void set_ContributorInsightsStatus(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  /// @brief Method set_IndexName, addr 0x122840c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_TableName, addr 0x122842c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContributorInsightsSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContributorInsightsSummary(ContributorInsightsSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContributorInsightsSummary(ContributorInsightsSummary const&) = delete;

  /// @brief Field _contributorInsightsStatus, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ContributorInsightsStatus* ____contributorInsightsStatus;

  /// @brief Field _indexName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ContributorInsightsSummary, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary, ____contributorInsightsStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary, ____indexName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary, ____tableName) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ContributorInsightsSummary*, "Amazon.DynamoDBv2.Model", "ContributorInsightsSummary");
