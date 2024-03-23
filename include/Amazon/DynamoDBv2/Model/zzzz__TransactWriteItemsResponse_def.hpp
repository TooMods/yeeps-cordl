#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransactWriteItemsResponse)
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace Amazon::DynamoDBv2::Model {
class ItemCollectionMetrics;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItemsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse);
// Type: Amazon.DynamoDBv2.Model::TransactWriteItemsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactWriteItemsResponse*
class CORDL_TYPE TransactWriteItemsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ConsumedCapacity;

  __declspec(property(get = get_ItemCollectionMetrics, put = set_ItemCollectionMetrics))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* ItemCollectionMetrics;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity,
                      put = __cordl_internal_set__consumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* _consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__itemCollectionMetrics, put = __cordl_internal_set__itemCollectionMetrics))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* _itemCollectionMetrics;

  /// @brief Method IsSetConsumedCapacity, addr 0x10539b8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetItemCollectionMetrics, addr 0x1053a1c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItemCollectionMetrics();

  static inline ::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*&
  __cordl_internal_get__itemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*> const&
  __cordl_internal_get__itemCollectionMetrics() const;

  constexpr void __cordl_internal_set__consumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  constexpr void __cordl_internal_set__itemCollectionMetrics(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value);

  /// @brief Method .ctor, addr 0x1053a74, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x10539a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* get_ConsumedCapacity();

  /// @brief Method get_ItemCollectionMetrics, addr 0x1053a0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* get_ItemCollectionMetrics();

  /// @brief Method set_ConsumedCapacity, addr 0x10539b0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  /// @brief Method set_ItemCollectionMetrics, addr 0x1053a14, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemCollectionMetrics(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactWriteItemsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactWriteItemsResponse(TransactWriteItemsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItemsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactWriteItemsResponse(TransactWriteItemsResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ____consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* ____itemCollectionMetrics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse, ____itemCollectionMetrics) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse*, "Amazon.DynamoDBv2.Model", "TransactWriteItemsResponse");
