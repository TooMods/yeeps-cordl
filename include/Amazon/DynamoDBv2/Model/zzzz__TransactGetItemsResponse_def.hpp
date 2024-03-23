#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(TransactGetItemsResponse)
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace Amazon::DynamoDBv2::Model {
class ItemResponse;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactGetItemsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactGetItemsResponse);
// Type: Amazon.DynamoDBv2.Model::TransactGetItemsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactGetItemsResponse*
class CORDL_TYPE TransactGetItemsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ConsumedCapacity;

  __declspec(property(get = get_Responses, put = set_Responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* Responses;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity,
                      put = __cordl_internal_set__consumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* _consumedCapacity;

  /// @brief Field _responses, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__responses, put = __cordl_internal_set__responses))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* _responses;

  /// @brief Method IsSetConsumedCapacity, addr 0x10531e8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetResponses, addr 0x105324c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetResponses();

  static inline ::Amazon::DynamoDBv2::Model::TransactGetItemsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>*& __cordl_internal_get__responses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>*> const& __cordl_internal_get__responses() const;

  constexpr void __cordl_internal_set__consumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  constexpr void __cordl_internal_set__responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* value);

  /// @brief Method .ctor, addr 0x10532a0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x10531d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* get_ConsumedCapacity();

  /// @brief Method get_Responses, addr 0x105323c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* get_Responses();

  /// @brief Method set_ConsumedCapacity, addr 0x10531e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  /// @brief Method set_Responses, addr 0x1053244, size 0x8, virtual false, abstract: false, final false
  inline void set_Responses(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactGetItemsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItemsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactGetItemsResponse(TransactGetItemsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItemsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactGetItemsResponse(TransactGetItemsResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ____consumedCapacity;

  /// @brief Field _responses, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemResponse*>* ____responses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactGetItemsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactGetItemsResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactGetItemsResponse, ____responses) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactGetItemsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactGetItemsResponse*, "Amazon.DynamoDBv2.Model", "TransactGetItemsResponse");
