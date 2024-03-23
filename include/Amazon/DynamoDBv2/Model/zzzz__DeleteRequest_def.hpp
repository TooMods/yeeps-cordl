#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DeleteRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DeleteRequest);
// Type: Amazon.DynamoDBv2.Model::DeleteRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DeleteRequest*
class CORDL_TYPE DeleteRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Key;

  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _key;

  /// @brief Method IsSetKey, addr 0x1229b00, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKey();

  static inline ::Amazon::DynamoDBv2::Model::DeleteRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::DeleteRequest* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__key() const;

  constexpr void __cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method .ctor, addr 0x12299e4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1229a60, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  /// @brief Method get_Key, addr 0x1229af0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Key();

  /// @brief Method set_Key, addr 0x1229af8, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteRequest(DeleteRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteRequest(DeleteRequest const&) = delete;

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DeleteRequest, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteRequest, ____key) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DeleteRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DeleteRequest*, "Amazon.DynamoDBv2.Model", "DeleteRequest");
