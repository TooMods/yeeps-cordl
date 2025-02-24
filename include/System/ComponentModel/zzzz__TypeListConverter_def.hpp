#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TypeListConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeListConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeListConverter);
// Type: System.ComponentModel::TypeListConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeListConverter*
class CORDL_TYPE TypeListConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Field _types, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__types, put = __cordl_internal_set__types))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _types;

  /// @brief Field _values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::ComponentModel::__TypeConverter__StandardValuesCollection* _values;

  /// @brief Method CanConvertFrom, addr 0x1b0e868, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x1b0e930, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x1b0e9f8, size 0x110, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x1b0eb08, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x1b0ecbc, size 0xc0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x1b0ed7c, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x1b0ed84, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::TypeListConverter* New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__types() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__types();

  constexpr ::System::ComponentModel::__TypeConverter__StandardValuesCollection*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeConverter__StandardValuesCollection*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__types(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__values(::System::ComponentModel::__TypeConverter__StandardValuesCollection* value);

  /// @brief Method .ctor, addr 0x1b0e840, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeListConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeListConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeListConverter(TypeListConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeListConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeListConverter(TypeListConverter const&) = delete;

  /// @brief Field _types, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____types;

  /// @brief Field _values, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::__TypeConverter__StandardValuesCollection* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeListConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeListConverter, ____types) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeListConverter, ____values) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeListConverter*, "System.ComponentModel", "TypeListConverter");
