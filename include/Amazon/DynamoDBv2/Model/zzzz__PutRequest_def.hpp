#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PutRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class PutRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::PutRequest);
// Type: Amazon.DynamoDBv2.Model::PutRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::PutRequest*
class CORDL_TYPE PutRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Item;

  /// @brief Field _item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _item;

  /// @brief Method IsSetItem, addr 0x104d67c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItem();

  static inline ::Amazon::DynamoDBv2::Model::PutRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::PutRequest* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__item() const;

  constexpr void __cordl_internal_set__item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method .ctor, addr 0x104d560, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104d5dc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item);

  /// @brief Method get_Item, addr 0x104d66c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Item();

  /// @brief Method set_Item, addr 0x104d674, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutRequest(PutRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutRequest(PutRequest const&) = delete;

  /// @brief Field _item, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::PutRequest, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutRequest, ____item) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::PutRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::PutRequest*, "Amazon.DynamoDBv2.Model", "PutRequest");
