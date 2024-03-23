#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
CORDL_MODULE_EXPORT(BatchExecuteStatementRequest)
namespace Amazon::DynamoDBv2::Model {
class BatchStatementRequest;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchExecuteStatementRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest);
// Type: Amazon.DynamoDBv2.Model::BatchExecuteStatementRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchExecuteStatementRequest*
class CORDL_TYPE BatchExecuteStatementRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_Statements, put = set_Statements))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* Statements;

  /// @brief Field _statements, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__statements,
                      put = __cordl_internal_set__statements))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* _statements;

  /// @brief Method IsSetStatements, addr 0x122675c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetStatements();

  static inline ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*& __cordl_internal_get__statements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*> const& __cordl_internal_get__statements() const;

  constexpr void __cordl_internal_set__statements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* value);

  /// @brief Method .ctor, addr 0x12267b0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Statements, addr 0x122674c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* get_Statements();

  /// @brief Method set_Statements, addr 0x1226754, size 0x8, virtual false, abstract: false, final false
  inline void set_Statements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchExecuteStatementRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchExecuteStatementRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchExecuteStatementRequest(BatchExecuteStatementRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchExecuteStatementRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchExecuteStatementRequest(BatchExecuteStatementRequest const&) = delete;

  /// @brief Field _statements, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* ____statements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest, ____statements) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*, "Amazon.DynamoDBv2.Model", "BatchExecuteStatementRequest");
