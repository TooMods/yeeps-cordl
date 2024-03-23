#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListExportsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListExportsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListExportsRequest);
// Type: Amazon.DynamoDBv2.Model::ListExportsRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListExportsRequest*
class CORDL_TYPE ListExportsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_MaxResults, put = set_MaxResults)) int32_t MaxResults;

  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  /// @brief Field _maxResults, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get__maxResults, put = __cordl_internal_set__maxResults))::System::Nullable_1<int32_t> _maxResults;

  /// @brief Field _nextToken, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Field _tableArn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Method IsSetMaxResults, addr 0x104ad38, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxResults();

  /// @brief Method IsSetNextToken, addr 0x104ad84, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  /// @brief Method IsSetTableArn, addr 0x104ada4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  static inline ::Amazon::DynamoDBv2::Model::ListExportsRequest* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxResults() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxResults();

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr void __cordl_internal_set__maxResults(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  /// @brief Method .ctor, addr 0x104adb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxResults, addr 0x104ac94, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxResults();

  /// @brief Method get_NextToken, addr 0x104ad74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method get_TableArn, addr 0x104ad94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method set_MaxResults, addr 0x104acd0, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxResults(int32_t value);

  /// @brief Method set_NextToken, addr 0x104ad7c, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

  /// @brief Method set_TableArn, addr 0x104ad9c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListExportsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListExportsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListExportsRequest(ListExportsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListExportsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListExportsRequest(ListExportsRequest const&) = delete;

  /// @brief Field _maxResults, offset: 0x34, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxResults;

  /// @brief Field _nextToken, offset: 0x40, size: 0x8, def value: None
  ::StringW ____nextToken;

  /// @brief Field _tableArn, offset: 0x48, size: 0x8, def value: None
  ::StringW ____tableArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListExportsRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListExportsRequest, ____maxResults) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListExportsRequest, ____nextToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListExportsRequest, ____tableArn) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListExportsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListExportsRequest*, "Amazon.DynamoDBv2.Model", "ListExportsRequest");
