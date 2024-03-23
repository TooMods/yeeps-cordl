#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(BatchExecuteStatementResponse)
namespace Amazon::DynamoDBv2::Model {
class BatchStatementResponse;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchExecuteStatementResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse);
// Type: Amazon.DynamoDBv2.Model::BatchExecuteStatementResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchExecuteStatementResponse*
class CORDL_TYPE BatchExecuteStatementResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Responses, put = set_Responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* Responses;

  /// @brief Field _responses, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__responses,
                      put = __cordl_internal_set__responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* _responses;

  /// @brief Method IsSetResponses, addr 0x122683c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetResponses();

  static inline ::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>*& __cordl_internal_get__responses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>*> const& __cordl_internal_get__responses() const;

  constexpr void __cordl_internal_set__responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* value);

  /// @brief Method .ctor, addr 0x1226890, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Responses, addr 0x122682c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* get_Responses();

  /// @brief Method set_Responses, addr 0x1226834, size 0x8, virtual false, abstract: false, final false
  inline void set_Responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchExecuteStatementResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchExecuteStatementResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchExecuteStatementResponse(BatchExecuteStatementResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchExecuteStatementResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchExecuteStatementResponse(BatchExecuteStatementResponse const&) = delete;

  /// @brief Field _responses, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementResponse*>* ____responses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse, ____responses) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse*, "Amazon.DynamoDBv2.Model", "BatchExecuteStatementResponse");
