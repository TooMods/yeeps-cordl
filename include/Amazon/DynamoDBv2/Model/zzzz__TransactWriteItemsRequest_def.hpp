#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransactWriteItemsRequest)
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItem;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace Amazon::DynamoDBv2 {
class ReturnItemCollectionMetrics;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItemsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest);
// Type: Amazon.DynamoDBv2.Model::TransactWriteItemsRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactWriteItemsRequest*
class CORDL_TYPE TransactWriteItemsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ClientRequestToken, put = set_ClientRequestToken))::StringW ClientRequestToken;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_ReturnItemCollectionMetrics, put = set_ReturnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ReturnItemCollectionMetrics;

  __declspec(property(get = get_TransactItems, put = set_TransactItems))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* TransactItems;

  /// @brief Field _clientRequestToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientRequestToken, put = __cordl_internal_set__clientRequestToken))::StringW _clientRequestToken;

  /// @brief Field _returnConsumedCapacity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__returnItemCollectionMetrics,
                      put = __cordl_internal_set__returnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* _returnItemCollectionMetrics;

  /// @brief Field _transactItems, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transactItems,
                      put = __cordl_internal_set__transactItems))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* _transactItems;

  /// @brief Method IsSetClientRequestToken, addr 0x10537d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetClientRequestToken();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x10537f8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetReturnItemCollectionMetrics, addr 0x1053868, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnItemCollectionMetrics();

  /// @brief Method IsSetTransactItems, addr 0x10538d8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTransactItems();

  static inline ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__clientRequestToken() const;

  constexpr ::StringW& __cordl_internal_get__clientRequestToken();

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*& __cordl_internal_get__returnItemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*> const& __cordl_internal_get__returnItemCollectionMetrics() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*& __cordl_internal_get__transactItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*> const& __cordl_internal_get__transactItems() const;

  constexpr void __cordl_internal_set__clientRequestToken(::StringW value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  constexpr void __cordl_internal_set__transactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* value);

  /// @brief Method .ctor, addr 0x105392c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientRequestToken, addr 0x10537c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientRequestToken();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x10537e8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ReturnItemCollectionMetrics, addr 0x1053858, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* get_ReturnItemCollectionMetrics();

  /// @brief Method get_TransactItems, addr 0x10538c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* get_TransactItems();

  /// @brief Method set_ClientRequestToken, addr 0x10537d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientRequestToken(::StringW value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x10537f0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ReturnItemCollectionMetrics, addr 0x1053860, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  /// @brief Method set_TransactItems, addr 0x10538d0, size 0x8, virtual false, abstract: false, final false
  inline void set_TransactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactWriteItemsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactWriteItemsRequest(TransactWriteItemsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactWriteItemsRequest(TransactWriteItemsRequest const&) = delete;

  /// @brief Field _clientRequestToken, offset: 0x38, size: 0x8, def value: None
  ::StringW ____clientRequestToken;

  /// @brief Field _returnConsumedCapacity, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ____returnItemCollectionMetrics;

  /// @brief Field _transactItems, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* ____transactItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest, ____clientRequestToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest, ____returnConsumedCapacity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest, ____returnItemCollectionMetrics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest, ____transactItems) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*, "Amazon.DynamoDBv2.Model", "TransactWriteItemsRequest");
