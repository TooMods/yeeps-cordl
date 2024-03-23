#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PutItemResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace Amazon::DynamoDBv2::Model {
class ItemCollectionMetrics;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class PutItemResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::PutItemResponse);
// Type: Amazon.DynamoDBv2.Model::PutItemResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::PutItemResponse*
class CORDL_TYPE PutItemResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Attributes, put = set_Attributes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Attributes;

  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* ConsumedCapacity;

  __declspec(property(get = get_ItemCollectionMetrics, put = set_ItemCollectionMetrics))::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* ItemCollectionMetrics;

  /// @brief Field _attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes,
                      put = __cordl_internal_set__attributes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _attributes;

  /// @brief Field _consumedCapacity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity, put = __cordl_internal_set__consumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* _consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__itemCollectionMetrics, put = __cordl_internal_set__itemCollectionMetrics))::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* _itemCollectionMetrics;

  /// @brief Method IsSetAttributes, addr 0x104d44c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetAttributes();

  /// @brief Method IsSetConsumedCapacity, addr 0x104d4b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetItemCollectionMetrics, addr 0x104d4d4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetItemCollectionMetrics();

  static inline ::Amazon::DynamoDBv2::Model::PutItemResponse* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__attributes() const;

  constexpr ::Amazon::DynamoDBv2::Model::ConsumedCapacity*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ConsumedCapacity*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*& __cordl_internal_get__itemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*> const& __cordl_internal_get__itemCollectionMetrics() const;

  constexpr void __cordl_internal_set__attributes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__consumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  constexpr void __cordl_internal_set__itemCollectionMetrics(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* value);

  /// @brief Method .ctor, addr 0x104d4e4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x104d43c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Attributes();

  /// @brief Method get_ConsumedCapacity, addr 0x104d4a4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ConsumedCapacity* get_ConsumedCapacity();

  /// @brief Method get_ItemCollectionMetrics, addr 0x104d4c4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* get_ItemCollectionMetrics();

  /// @brief Method set_Attributes, addr 0x104d444, size 0x8, virtual false, abstract: false, final false
  inline void set_Attributes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ConsumedCapacity, addr 0x104d4ac, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  /// @brief Method set_ItemCollectionMetrics, addr 0x104d4cc, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemCollectionMetrics(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutItemResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutItemResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutItemResponse(PutItemResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutItemResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutItemResponse(PutItemResponse const&) = delete;

  /// @brief Field _attributes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____attributes;

  /// @brief Field _consumedCapacity, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ConsumedCapacity* ____consumedCapacity;

  /// @brief Field _itemCollectionMetrics, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* ____itemCollectionMetrics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::PutItemResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemResponse, ____attributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemResponse, ____consumedCapacity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemResponse, ____itemCollectionMetrics) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::PutItemResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::PutItemResponse*, "Amazon.DynamoDBv2.Model", "PutItemResponse");
