#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchGetItemRequest)
namespace Amazon::DynamoDBv2::Model {
class KeysAndAttributes;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchGetItemRequest);
// Type: Amazon.DynamoDBv2.Model::BatchGetItemRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchGetItemRequest*
class CORDL_TYPE BatchGetItemRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_RequestItems, put = set_RequestItems))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* RequestItems;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  /// @brief Field _requestItems, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__requestItems,
                      put = __cordl_internal_set__requestItems))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* _requestItems;

  /// @brief Field _returnConsumedCapacity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Method IsSetRequestItems, addr 0x1226a40, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetRequestItems();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x1226aa8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  static inline ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems);

  static inline ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems,
                                                                           ::Amazon::DynamoDBv2::ReturnConsumedCapacity* returnConsumedCapacity);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>*& __cordl_internal_get__requestItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>*> const&
  __cordl_internal_get__requestItems() const;

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr void __cordl_internal_set__requestItems(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method .ctor, addr 0x12153a8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122690c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems);

  /// @brief Method .ctor, addr 0x122699c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems,
                    ::Amazon::DynamoDBv2::ReturnConsumedCapacity* returnConsumedCapacity);

  /// @brief Method get_RequestItems, addr 0x1226a30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* get_RequestItems();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x1226a98, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method set_RequestItems, addr 0x1226a38, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestItems(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x1226aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchGetItemRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchGetItemRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchGetItemRequest(BatchGetItemRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchGetItemRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchGetItemRequest(BatchGetItemRequest const&) = delete;

  /// @brief Field _requestItems, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* ____requestItems;

  /// @brief Field _returnConsumedCapacity, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchGetItemRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchGetItemRequest, ____requestItems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchGetItemRequest, ____returnConsumedCapacity) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchGetItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchGetItemRequest*, "Amazon.DynamoDBv2.Model", "BatchGetItemRequest");
