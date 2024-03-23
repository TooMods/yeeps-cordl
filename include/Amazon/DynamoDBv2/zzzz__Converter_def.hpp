#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Converter)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class Converter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Converter);
// Type: Amazon.DynamoDBv2::Converter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::Converter*
class CORDL_TYPE Converter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  /// @brief Field <Conversion>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Method FromEntry, addr 0x12092cc, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Object* FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::System::Type* targetType);

  /// @brief Method GetTargetTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetTargetTypes();

  static inline ::Amazon::DynamoDBv2::Converter* New_ctor();

  /// @brief Method ToEntry, addr 0x1209054, size 0x170, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::System::Object* value);

  /// @brief Method TryFrom, addr 0x120b3a0, size 0xc, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* b, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x120b3d0, size 0xc, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Document* d, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x120b3c4, size 0xc, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x120b3ac, size 0xc, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x120b3b8, size 0xc, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFromEntry, addr 0x1208d00, size 0x250, virtual false, abstract: false, final false
  inline bool TryFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::System::Type* targetType, ByRef<::System::Object*> value);

  /// @brief Method TryTo, addr 0x120b364, size 0xc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> b);

  /// @brief Method TryTo, addr 0x120b394, size 0xc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> d);

  /// @brief Method TryTo, addr 0x120b388, size 0xc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l);

  /// @brief Method TryTo, addr 0x120b370, size 0xc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method TryTo, addr 0x120b37c, size 0xc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl);

  /// @brief Method TryToEntry, addr 0x1208aa8, size 0x140, virtual false, abstract: false, final false
  inline bool TryToEntry(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method .ctor, addr 0x120b3dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Conversion, addr 0x120b354, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method set_Conversion, addr 0x120b35c, size 0x8, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Converter(Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Converter(Converter const&) = delete;

  /// @brief Field <Conversion>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Converter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Converter, ____Conversion_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::Converter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Converter*, "Amazon.DynamoDBv2", "Converter");
