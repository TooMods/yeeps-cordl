#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchWriteItemRequest)
namespace Amazon::DynamoDBv2::Model {
class WriteRequest;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace Amazon::DynamoDBv2 {
class ReturnItemCollectionMetrics;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest);
// Type: Amazon.DynamoDBv2.Model::BatchWriteItemRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchWriteItemRequest*
class CORDL_TYPE BatchWriteItemRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(
      property(get = get_RequestItems,
               put = set_RequestItems))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* RequestItems;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_ReturnItemCollectionMetrics, put = set_ReturnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ReturnItemCollectionMetrics;

  /// @brief Field _requestItems, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__requestItems, put = __cordl_internal_set__requestItems))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* _requestItems;

  /// @brief Field _returnConsumedCapacity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__returnItemCollectionMetrics,
                      put = __cordl_internal_set__returnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* _returnItemCollectionMetrics;

  /// @brief Method IsSetRequestItems, addr 0x122717c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetRequestItems();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x12271e4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetReturnItemCollectionMetrics, addr 0x1227254, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnItemCollectionMetrics();

  static inline ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*
  New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* requestItems);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*& __cordl_internal_get__requestItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*> const&
  __cordl_internal_get__requestItems() const;

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*& __cordl_internal_get__returnItemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*> const& __cordl_internal_get__returnItemCollectionMetrics() const;

  constexpr void
  __cordl_internal_set__requestItems(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  /// @brief Method .ctor, addr 0x1215994, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x12270dc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* requestItems);

  /// @brief Method get_RequestItems, addr 0x122716c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* get_RequestItems();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x12271d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ReturnItemCollectionMetrics, addr 0x1227244, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* get_ReturnItemCollectionMetrics();

  /// @brief Method set_RequestItems, addr 0x1227174, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestItems(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x12271dc, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ReturnItemCollectionMetrics, addr 0x122724c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchWriteItemRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchWriteItemRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchWriteItemRequest(BatchWriteItemRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchWriteItemRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchWriteItemRequest(BatchWriteItemRequest const&) = delete;

  /// @brief Field _requestItems, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* ____requestItems;

  /// @brief Field _returnConsumedCapacity, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ____returnItemCollectionMetrics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest, ____requestItems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest, ____returnConsumedCapacity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest, ____returnItemCollectionMetrics) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*, "Amazon.DynamoDBv2.Model", "BatchWriteItemRequest");
