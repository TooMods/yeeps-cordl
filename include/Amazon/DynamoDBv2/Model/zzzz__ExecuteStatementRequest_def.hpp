#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExecuteStatementRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExecuteStatementRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest);
// Type: Amazon.DynamoDBv2.Model::ExecuteStatementRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExecuteStatementRequest*
class CORDL_TYPE ExecuteStatementRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  __declspec(property(get = get_Parameters, put = set_Parameters))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* Parameters;

  __declspec(property(get = get_Statement, put = set_Statement))::StringW Statement;

  /// @brief Field _consistentRead, offset 0x31, size 0x2
  __declspec(property(get = __cordl_internal_get__consistentRead, put = __cordl_internal_set__consistentRead))::System::Nullable_1<bool> _consistentRead;

  /// @brief Field _nextToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Field _parameters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _parameters;

  /// @brief Field _statement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__statement, put = __cordl_internal_set__statement))::StringW _statement;

  /// @brief Method IsSetConsistentRead, addr 0x122acb4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetNextToken, addr 0x122ad00, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  /// @brief Method IsSetParameters, addr 0x122ad20, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetParameters();

  /// @brief Method IsSetStatement, addr 0x122ad84, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatement();

  static inline ::Amazon::DynamoDBv2::Model::ExecuteStatementRequest* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__consistentRead() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__consistentRead();

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__parameters() const;

  constexpr ::StringW const& __cordl_internal_get__statement() const;

  constexpr ::StringW& __cordl_internal_get__statement();

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  constexpr void __cordl_internal_set__parameters(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__statement(::StringW value);

  /// @brief Method .ctor, addr 0x122ad94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsistentRead, addr 0x122ac10, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_NextToken, addr 0x122acf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method get_Parameters, addr 0x122ad10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Parameters();

  /// @brief Method get_Statement, addr 0x122ad74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Statement();

  /// @brief Method set_ConsistentRead, addr 0x122ac4c, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_NextToken, addr 0x122acf8, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

  /// @brief Method set_Parameters, addr 0x122ad18, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameters(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Statement, addr 0x122ad7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Statement(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteStatementRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteStatementRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteStatementRequest(ExecuteStatementRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteStatementRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteStatementRequest(ExecuteStatementRequest const&) = delete;

  /// @brief Field _consistentRead, offset: 0x31, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____consistentRead;

  /// @brief Field _nextToken, offset: 0x38, size: 0x8, def value: None
  ::StringW ____nextToken;

  /// @brief Field _parameters, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____parameters;

  /// @brief Field _statement, offset: 0x48, size: 0x8, def value: None
  ::StringW ____statement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExecuteStatementRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest, ____consistentRead) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest, ____nextToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest, ____parameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest, ____statement) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest*, "Amazon.DynamoDBv2.Model", "ExecuteStatementRequest");
