#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetItemResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetItemResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetItemResponse);
// Type: Amazon.DynamoDBv2.Model::GetItemResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetItemResponse*
class CORDL_TYPE GetItemResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* ConsumedCapacity;

  __declspec(property(get = get_IsItemSet, put = set_IsItemSet)) bool IsItemSet;

  __declspec(property(get = get_Item, put = set_Item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Item;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity, put = __cordl_internal_set__consumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* _consumedCapacity;

  /// @brief Field _item, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _item;

  /// @brief Method IsSetConsumedCapacity, addr 0x1048c44, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetItem, addr 0x1048d54, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetItem();

  static inline ::Amazon::DynamoDBv2::Model::GetItemResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ConsumedCapacity*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ConsumedCapacity*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__item() const;

  constexpr void __cordl_internal_set__consumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  constexpr void __cordl_internal_set__item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method .ctor, addr 0x1048d58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x1048c34, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ConsumedCapacity* get_ConsumedCapacity();

  /// @brief Method get_IsItemSet, addr 0x1048c64, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsItemSet();

  /// @brief Method get_Item, addr 0x1048c54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Item();

  /// @brief Method set_ConsumedCapacity, addr 0x1048c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  /// @brief Method set_IsItemSet, addr 0x1048cd4, size 0x80, virtual false, abstract: false, final false
  inline void set_IsItemSet(bool value);

  /// @brief Method set_Item, addr 0x1048c5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetItemResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetItemResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetItemResponse(GetItemResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetItemResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetItemResponse(GetItemResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ConsumedCapacity* ____consumedCapacity;

  /// @brief Field _item, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetItemResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemResponse, ____item) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetItemResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetItemResponse*, "Amazon.DynamoDBv2.Model", "GetItemResponse");
