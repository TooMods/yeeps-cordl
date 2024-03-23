#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExecuteStatementResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExecuteStatementResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExecuteStatementResponse);
// Type: Amazon.DynamoDBv2.Model::ExecuteStatementResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExecuteStatementResponse*
class CORDL_TYPE ExecuteStatementResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Items,
                      put = set_Items))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* Items;

  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  /// @brief Field _items, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__items,
      put = __cordl_internal_set__items))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* _items;

  /// @brief Field _nextToken, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Method IsSetItems, addr 0x122ae20, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetItems();

  /// @brief Method IsSetNextToken, addr 0x122ae84, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  static inline ::Amazon::DynamoDBv2::Model::ExecuteStatementResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*> const&
  __cordl_internal_get__items() const;

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  /// @brief Method .ctor, addr 0x122ae94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Items, addr 0x122ae10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* get_Items();

  /// @brief Method get_NextToken, addr 0x122ae74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method set_Items, addr 0x122ae18, size 0x8, virtual false, abstract: false, final false
  inline void set_Items(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  /// @brief Method set_NextToken, addr 0x122ae7c, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteStatementResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteStatementResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteStatementResponse(ExecuteStatementResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteStatementResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteStatementResponse(ExecuteStatementResponse const&) = delete;

  /// @brief Field _items, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* ____items;

  /// @brief Field _nextToken, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExecuteStatementResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementResponse, ____items) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementResponse, ____nextToken) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExecuteStatementResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExecuteStatementResponse*, "Amazon.DynamoDBv2.Model", "ExecuteStatementResponse");
