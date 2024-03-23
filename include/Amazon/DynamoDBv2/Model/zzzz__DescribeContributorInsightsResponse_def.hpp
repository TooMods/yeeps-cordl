#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DescribeContributorInsightsResponse)
namespace Amazon::DynamoDBv2::Model {
class FailureException;
}
namespace Amazon::DynamoDBv2 {
class ContributorInsightsStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeContributorInsightsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeContributorInsightsResponse
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeContributorInsightsResponse*
class CORDL_TYPE DescribeContributorInsightsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ContributorInsightsRuleList, put = set_ContributorInsightsRuleList))::System::Collections::Generic::List_1<::StringW>* ContributorInsightsRuleList;

  __declspec(property(get = get_ContributorInsightsStatus, put = set_ContributorInsightsStatus))::Amazon::DynamoDBv2::ContributorInsightsStatus* ContributorInsightsStatus;

  __declspec(property(get = get_FailureException, put = set_FailureException))::Amazon::DynamoDBv2::Model::FailureException* FailureException;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_LastUpdateDateTime, put = set_LastUpdateDateTime))::System::DateTime LastUpdateDateTime;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _contributorInsightsRuleList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__contributorInsightsRuleList,
                      put = __cordl_internal_set__contributorInsightsRuleList))::System::Collections::Generic::List_1<::StringW>* _contributorInsightsRuleList;

  /// @brief Field _contributorInsightsStatus, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__contributorInsightsStatus,
                      put = __cordl_internal_set__contributorInsightsStatus))::Amazon::DynamoDBv2::ContributorInsightsStatus* _contributorInsightsStatus;

  /// @brief Field _failureException, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__failureException, put = __cordl_internal_set__failureException))::Amazon::DynamoDBv2::Model::FailureException* _failureException;

  /// @brief Field _indexName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _lastUpdateDateTime, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__lastUpdateDateTime, put = __cordl_internal_set__lastUpdateDateTime))::System::Nullable_1<::System::DateTime> _lastUpdateDateTime;

  /// @brief Field _tableName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetContributorInsightsRuleList, addr 0x1229cc0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetContributorInsightsRuleList();

  /// @brief Method IsSetContributorInsightsStatus, addr 0x1229d24, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetContributorInsightsStatus();

  /// @brief Method IsSetFailureException, addr 0x1229d94, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFailureException();

  /// @brief Method IsSetIndexName, addr 0x1229db4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetLastUpdateDateTime, addr 0x1229e70, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastUpdateDateTime();

  /// @brief Method IsSetTableName, addr 0x1229ebc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__contributorInsightsRuleList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__contributorInsightsRuleList() const;

  constexpr ::Amazon::DynamoDBv2::ContributorInsightsStatus*& __cordl_internal_get__contributorInsightsStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ContributorInsightsStatus*> const& __cordl_internal_get__contributorInsightsStatus() const;

  constexpr ::Amazon::DynamoDBv2::Model::FailureException*& __cordl_internal_get__failureException();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::FailureException*> const& __cordl_internal_get__failureException() const;

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastUpdateDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastUpdateDateTime();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__contributorInsightsRuleList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__contributorInsightsStatus(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  constexpr void __cordl_internal_set__failureException(::Amazon::DynamoDBv2::Model::FailureException* value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__lastUpdateDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1229ecc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContributorInsightsRuleList, addr 0x1229cb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_ContributorInsightsRuleList();

  /// @brief Method get_ContributorInsightsStatus, addr 0x1229d14, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* get_ContributorInsightsStatus();

  /// @brief Method get_FailureException, addr 0x1229d84, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::FailureException* get_FailureException();

  /// @brief Method get_IndexName, addr 0x1229da4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_LastUpdateDateTime, addr 0x1229dc4, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUpdateDateTime();

  /// @brief Method get_TableName, addr 0x1229eac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ContributorInsightsRuleList, addr 0x1229cb8, size 0x8, virtual false, abstract: false, final false
  inline void set_ContributorInsightsRuleList(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ContributorInsightsStatus, addr 0x1229d1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ContributorInsightsStatus(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  /// @brief Method set_FailureException, addr 0x1229d8c, size 0x8, virtual false, abstract: false, final false
  inline void set_FailureException(::Amazon::DynamoDBv2::Model::FailureException* value);

  /// @brief Method set_IndexName, addr 0x1229dac, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_LastUpdateDateTime, addr 0x1229e00, size 0x70, virtual false, abstract: false, final false
  inline void set_LastUpdateDateTime(::System::DateTime value);

  /// @brief Method set_TableName, addr 0x1229eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeContributorInsightsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeContributorInsightsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeContributorInsightsResponse(DescribeContributorInsightsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeContributorInsightsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeContributorInsightsResponse(DescribeContributorInsightsResponse const&) = delete;

  /// @brief Field _contributorInsightsRuleList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____contributorInsightsRuleList;

  /// @brief Field _contributorInsightsStatus, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ContributorInsightsStatus* ____contributorInsightsStatus;

  /// @brief Field _failureException, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::FailureException* ____failureException;

  /// @brief Field _indexName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _lastUpdateDateTime, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastUpdateDateTime;

  /// @brief Field _tableName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____contributorInsightsRuleList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____contributorInsightsStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____failureException) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____indexName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____lastUpdateDateTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse, ____tableName) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse*, "Amazon.DynamoDBv2.Model", "DescribeContributorInsightsResponse");
