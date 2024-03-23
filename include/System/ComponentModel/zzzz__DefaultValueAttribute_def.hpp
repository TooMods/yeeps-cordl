#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultValueAttribute);
// Type: System.ComponentModel::DefaultValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::System::Object* _value;

  /// @brief Field s_convertFromInvariantString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_convertFromInvariantString, put = setStaticF_s_convertFromInvariantString))::System::Object* s_convertFromInvariantString;

  /// @brief Method Equals, addr 0x1ae58bc, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1ae59c8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Type* type, ::StringW value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::StringW value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Object* value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(bool value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(char16_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(double_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(float_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int16_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int32_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int64_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int8_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint16_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint32_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint64_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint8_t value);

  /// @brief Method SetValue, addr 0x1ae59d0, size 0x8, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value);

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method <.ctor>g__TryConvertFromInvariantString|2_0, addr 0x1ae5164, size 0x1f0, virtual false, abstract: false, final false
  static inline bool __ctor_g__TryConvertFromInvariantString_2_0(::System::Type* typeToConvert, ::StringW stringValue, ByRef<::System::Object*> conversionResult);

  /// @brief Method .ctor, addr 0x1ae4ea4, size 0x2c0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW value);

  /// @brief Method .ctor, addr 0x1ae56b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1ae56dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method .ctor, addr 0x1ae5648, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x1ae5354, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(char16_t value);

  /// @brief Method .ctor, addr 0x1ae55dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x1ae5570, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x1ae542c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int16_t value);

  /// @brief Method .ctor, addr 0x1ae5498, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x1ae5504, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x1ae5704, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int8_t value);

  /// @brief Method .ctor, addr 0x1ae5770, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint16_t value);

  /// @brief Method .ctor, addr 0x1ae57dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x1ae5848, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method .ctor, addr 0x1ae53c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t value);

  static inline ::System::Object* getStaticF_s_convertFromInvariantString();

  /// @brief Method get_Value, addr 0x1ae58b4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  static inline void setStaticF_s_convertFromInvariantString(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueAttribute(DefaultValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueAttribute(DefaultValueAttribute const&) = delete;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DefaultValueAttribute, ____value) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
