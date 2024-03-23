#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBBool)
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool);
// Type: Amazon.DynamoDBv2.DocumentModel::DynamoDBBool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DynamoDBBool*
class CORDL_TYPE DynamoDBBool : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  /// @brief Field False, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_False, put = setStaticF_False))::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* False;

  /// @brief Field True, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_True, put = setStaticF_True))::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* True;

  __declspec(property(get = get_Value, put = set_Value)) bool Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) bool _Value_k__BackingField;

  /// @brief Method AsBoolean, addr 0x164dde8, size 0x8, virtual true, abstract: false, final false
  inline bool AsBoolean();

  /// @brief Method Clone, addr 0x164dd80, size 0x68, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeValue, addr 0x164dd10, size 0x70, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Equals, addr 0x164de74, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x164df18, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* New_ctor(bool value);

  constexpr bool const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x164dcc8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* getStaticF_False();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* getStaticF_True();

  /// @brief Method get_Value, addr 0x164dcfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_Value();

  /// @brief Method op_Explicit, addr 0x164de58, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* p);

  /// @brief Method op_Implicit, addr 0x164ddf0, size 0x68, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBBool_(bool data);

  static inline void setStaticF_False(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* value);

  static inline void setStaticF_True(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* value);

  /// @brief Method set_Value, addr 0x164dd04, size 0xc, virtual false, abstract: false, final false
  inline void set_Value(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBBool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBBool(DynamoDBBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBBool(DynamoDBBool const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBBool");
