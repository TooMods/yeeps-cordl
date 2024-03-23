#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
CORDL_MODULE_EXPORT(TransactGetItemsRequest)
namespace Amazon::DynamoDBv2::Model {
class TransactGetItem;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactGetItemsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest);
// Type: Amazon.DynamoDBv2.Model::TransactGetItemsRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactGetItemsRequest*
class CORDL_TYPE TransactGetItemsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_TransactItems, put = set_TransactItems))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* TransactItems;

  /// @brief Field _returnConsumedCapacity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _transactItems, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transactItems,
                      put = __cordl_internal_set__transactItems))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* _transactItems;

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x1053098, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetTransactItems, addr 0x1053108, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTransactItems();

  static inline ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest* New_ctor();

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*& __cordl_internal_get__transactItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*> const& __cordl_internal_get__transactItems() const;

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__transactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* value);

  /// @brief Method .ctor, addr 0x105315c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x1053088, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_TransactItems, addr 0x10530f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* get_TransactItems();

  /// @brief Method set_ReturnConsumedCapacity, addr 0x1053090, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_TransactItems, addr 0x1053100, size 0x8, virtual false, abstract: false, final false
  inline void set_TransactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactGetItemsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItemsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactGetItemsRequest(TransactGetItemsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItemsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactGetItemsRequest(TransactGetItemsRequest const&) = delete;

  /// @brief Field _returnConsumedCapacity, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _transactItems, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* ____transactItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest, ____returnConsumedCapacity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest, ____transactItems) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*, "Amazon.DynamoDBv2.Model", "TransactGetItemsRequest");
