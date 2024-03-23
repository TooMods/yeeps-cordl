#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PasswordPropertyTextAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class PasswordPropertyTextAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PasswordPropertyTextAttribute);
// Type: System.ComponentModel::PasswordPropertyTextAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::PasswordPropertyTextAttribute*
class CORDL_TYPE PasswordPropertyTextAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::PasswordPropertyTextAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::PasswordPropertyTextAttribute* No;

  __declspec(property(get = get_Password)) bool Password;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::PasswordPropertyTextAttribute* Yes;

  /// @brief Field <Password>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Password_k__BackingField, put = __cordl_internal_set__Password_k__BackingField)) bool _Password_k__BackingField;

  /// @brief Method Equals, addr 0x1b04bf4, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x1b04c70, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1b04c78, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::PasswordPropertyTextAttribute* New_ctor();

  static inline ::System::ComponentModel::PasswordPropertyTextAttribute* New_ctor(bool password);

  constexpr bool const& __cordl_internal_get__Password_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Password_k__BackingField();

  constexpr void __cordl_internal_set__Password_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1b04ba8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b04bc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool password);

  static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_No();

  static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_Yes();

  /// @brief Method get_Password, addr 0x1b04bec, size 0x8, virtual false, abstract: false, final false
  inline bool get_Password();

  static inline void setStaticF_Default(::System::ComponentModel::PasswordPropertyTextAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::PasswordPropertyTextAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::PasswordPropertyTextAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordPropertyTextAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasswordPropertyTextAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordPropertyTextAttribute(PasswordPropertyTextAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordPropertyTextAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordPropertyTextAttribute(PasswordPropertyTextAttribute const&) = delete;

  /// @brief Field <Password>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Password_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PasswordPropertyTextAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PasswordPropertyTextAttribute, ____Password_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PasswordPropertyTextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PasswordPropertyTextAttribute*, "System.ComponentModel", "PasswordPropertyTextAttribute");
