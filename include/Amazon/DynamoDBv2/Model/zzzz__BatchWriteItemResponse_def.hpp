#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchWriteItemResponse)
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace Amazon::DynamoDBv2::Model {
class ItemCollectionMetrics;
}
namespace Amazon::DynamoDBv2::Model {
class WriteRequest;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse);
// Type: Amazon.DynamoDBv2.Model::BatchWriteItemResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchWriteItemResponse*
class CORDL_TYPE BatchWriteItemResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ConsumedCapacity;

  __declspec(property(get = get_ItemCollectionMetrics, put = set_ItemCollectionMetrics))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* ItemCollectionMetrics;

  __declspec(property(
      get = get_UnprocessedItems,
      put = set_UnprocessedItems))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* UnprocessedItems;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity,
                      put = __cordl_internal_set__consumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* _consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__itemCollectionMetrics, put = __cordl_internal_set__itemCollectionMetrics))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* _itemCollectionMetrics;

  /// @brief Field _unprocessedItems, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__unprocessedItems, put = __cordl_internal_set__unprocessedItems))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* _unprocessedItems;

  /// @brief Method IsSetConsumedCapacity, addr 0x12272c4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetItemCollectionMetrics, addr 0x1227328, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItemCollectionMetrics();

  /// @brief Method IsSetUnprocessedItems, addr 0x1227390, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetUnprocessedItems();

  static inline ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*&
  __cordl_internal_get__itemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*> const&
  __cordl_internal_get__itemCollectionMetrics() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*& __cordl_internal_get__unprocessedItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*> const&
  __cordl_internal_get__unprocessedItems() const;

  constexpr void __cordl_internal_set__consumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  constexpr void __cordl_internal_set__itemCollectionMetrics(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value);

  constexpr void
  __cordl_internal_set__unprocessedItems(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value);

  /// @brief Method .ctor, addr 0x12273e8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x12272b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* get_ConsumedCapacity();

  /// @brief Method get_ItemCollectionMetrics, addr 0x1227318, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* get_ItemCollectionMetrics();

  /// @brief Method get_UnprocessedItems, addr 0x1227380, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* get_UnprocessedItems();

  /// @brief Method set_ConsumedCapacity, addr 0x12272bc, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  /// @brief Method set_ItemCollectionMetrics, addr 0x1227320, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemCollectionMetrics(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value);

  /// @brief Method set_UnprocessedItems, addr 0x1227388, size 0x8, virtual false, abstract: false, final false
  inline void set_UnprocessedItems(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchWriteItemResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchWriteItemResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchWriteItemResponse(BatchWriteItemResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchWriteItemResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchWriteItemResponse(BatchWriteItemResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ____consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* ____itemCollectionMetrics;

  /// @brief Field _unprocessedItems, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* ____unprocessedItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse, ____itemCollectionMetrics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse, ____unprocessedItems) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*, "Amazon.DynamoDBv2.Model", "BatchWriteItemResponse");
