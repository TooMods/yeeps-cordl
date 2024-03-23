#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ItemCollectionMetrics)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ItemCollectionMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics);
// Type: Amazon.DynamoDBv2.Model::ItemCollectionMetrics
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ItemCollectionMetrics*
class CORDL_TYPE ItemCollectionMetrics : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ItemCollectionKey,
                      put = set_ItemCollectionKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ItemCollectionKey;

  __declspec(property(get = get_SizeEstimateRangeGB, put = set_SizeEstimateRangeGB))::System::Collections::Generic::List_1<double_t>* SizeEstimateRangeGB;

  /// @brief Field _itemCollectionKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__itemCollectionKey,
                      put = __cordl_internal_set__itemCollectionKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _itemCollectionKey;

  /// @brief Field _sizeEstimateRangeGB, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sizeEstimateRangeGB, put = __cordl_internal_set__sizeEstimateRangeGB))::System::Collections::Generic::List_1<double_t>* _sizeEstimateRangeGB;

  /// @brief Method IsSetItemCollectionKey, addr 0x1049ea4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItemCollectionKey();

  /// @brief Method IsSetSizeEstimateRangeGB, addr 0x1049f0c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSizeEstimateRangeGB();

  static inline ::Amazon::DynamoDBv2::Model::ItemCollectionMetrics* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__itemCollectionKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__itemCollectionKey() const;

  constexpr ::System::Collections::Generic::List_1<double_t>*& __cordl_internal_get__sizeEstimateRangeGB();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<double_t>*> const& __cordl_internal_get__sizeEstimateRangeGB() const;

  constexpr void __cordl_internal_set__itemCollectionKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__sizeEstimateRangeGB(::System::Collections::Generic::List_1<double_t>* value);

  /// @brief Method .ctor, addr 0x1049f60, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ItemCollectionKey, addr 0x1049e94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ItemCollectionKey();

  /// @brief Method get_SizeEstimateRangeGB, addr 0x1049efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<double_t>* get_SizeEstimateRangeGB();

  /// @brief Method set_ItemCollectionKey, addr 0x1049e9c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemCollectionKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_SizeEstimateRangeGB, addr 0x1049f04, size 0x8, virtual false, abstract: false, final false
  inline void set_SizeEstimateRangeGB(::System::Collections::Generic::List_1<double_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemCollectionMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemCollectionMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemCollectionMetrics(ItemCollectionMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemCollectionMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemCollectionMetrics(ItemCollectionMetrics const&) = delete;

  /// @brief Field _itemCollectionKey, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____itemCollectionKey;

  /// @brief Field _sizeEstimateRangeGB, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<double_t>* ____sizeEstimateRangeGB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics, ____itemCollectionKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics, ____sizeEstimateRangeGB) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*, "Amazon.DynamoDBv2.Model", "ItemCollectionMetrics");
