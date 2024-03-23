#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(ExecuteTransactionResponse)
namespace Amazon::DynamoDBv2::Model {
class ItemResponse;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExecuteTransactionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse);
// Type: Amazon.DynamoDBv2.Model::ExecuteTransactionResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExecuteTransactionResponse*
class CORDL_TYPE ExecuteTransactionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Responses, put = set_Responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* Responses;

  /// @brief Field _responses, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__responses, put = __cordl_internal_set__responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* _responses;

  /// @brief Method IsSetResponses, addr 0x122b020, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetResponses();

  static inline ::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>*& __cordl_internal_get__responses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>*> const& __cordl_internal_get__responses() const;

  constexpr void __cordl_internal_set__responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* value);

  /// @brief Method .ctor, addr 0x122b074, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Responses, addr 0x122b010, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* get_Responses();

  /// @brief Method set_Responses, addr 0x122b018, size 0x8, virtual false, abstract: false, final false
  inline void set_Responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteTransactionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteTransactionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteTransactionResponse(ExecuteTransactionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteTransactionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteTransactionResponse(ExecuteTransactionResponse const&) = delete;

  /// @brief Field _responses, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* ____responses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse, ____responses) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse*, "Amazon.DynamoDBv2.Model", "ExecuteTransactionResponse");
