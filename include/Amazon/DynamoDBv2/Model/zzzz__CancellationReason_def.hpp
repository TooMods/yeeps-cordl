#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CancellationReason)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CancellationReason;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CancellationReason);
// Type: Amazon.DynamoDBv2.Model::CancellationReason
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CancellationReason*
class CORDL_TYPE CancellationReason : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::StringW Code;

  __declspec(property(get = get_Item, put = set_Item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Item;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field _code, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::StringW _code;

  /// @brief Field _item, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _item;

  /// @brief Field _message, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message))::StringW _message;

  /// @brief Method IsSetCode, addr 0x122765c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCode();

  /// @brief Method IsSetItem, addr 0x122767c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItem();

  /// @brief Method IsSetMessage, addr 0x12276e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMessage();

  static inline ::Amazon::DynamoDBv2::Model::CancellationReason* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__code() const;

  constexpr ::StringW& __cordl_internal_get__code();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__item() const;

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr void __cordl_internal_set__code(::StringW value);

  constexpr void __cordl_internal_set__item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__message(::StringW value);

  /// @brief Method .ctor, addr 0x12276f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x122764c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Code();

  /// @brief Method get_Item, addr 0x122766c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Item();

  /// @brief Method get_Message, addr 0x12276d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Code, addr 0x1227654, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::StringW value);

  /// @brief Method set_Item, addr 0x1227674, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Message, addr 0x12276dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationReason();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationReason", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationReason(CancellationReason&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationReason", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationReason(CancellationReason const&) = delete;

  /// @brief Field _code, offset: 0x10, size: 0x8, def value: None
  ::StringW ____code;

  /// @brief Field _item, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____item;

  /// @brief Field _message, offset: 0x20, size: 0x8, def value: None
  ::StringW ____message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CancellationReason, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CancellationReason, ____code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CancellationReason, ____item) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CancellationReason, ____message) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CancellationReason);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CancellationReason*, "Amazon.DynamoDBv2.Model", "CancellationReason");
