#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__StringConverter_def.hpp"
CORDL_MODULE_EXPORT(DefaultValueTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
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
namespace System::Data {
class DefaultValueTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DefaultValueTypeConverter);
// Type: System.Data::DefaultValueTypeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DefaultValueTypeConverter*
class CORDL_TYPE DefaultValueTypeConverter : public ::System::ComponentModel::StringConverter {
public:
  // Declarations
  /// @brief Method ConvertFrom, addr 0x1935470, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x19352c0, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Data::DefaultValueTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x19352b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueTypeConverter(DefaultValueTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueTypeConverter(DefaultValueTypeConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DefaultValueTypeConverter, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DefaultValueTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DefaultValueTypeConverter*, "System.Data", "DefaultValueTypeConverter");
