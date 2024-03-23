#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Tag)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Tag;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Tag);
// Type: Amazon.DynamoDBv2.Model::Tag
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Tag*
class CORDL_TYPE Tag : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::StringW _key;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::StringW _value;

  /// @brief Method IsSetKey, addr 0x1052d80, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKey();

  /// @brief Method IsSetValue, addr 0x1052da0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetValue();

  static inline ::Amazon::DynamoDBv2::Model::Tag* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__key() const;

  constexpr ::StringW& __cordl_internal_get__key();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__key(::StringW value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x1052db0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x1052d70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method get_Value, addr 0x1052d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Key, addr 0x1052d78, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Value, addr 0x1052d98, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tag(Tag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tag(Tag const&) = delete;

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::StringW ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Tag, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Tag, ____key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Tag, ____value) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Tag);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Tag*, "Amazon.DynamoDBv2.Model", "Tag");
