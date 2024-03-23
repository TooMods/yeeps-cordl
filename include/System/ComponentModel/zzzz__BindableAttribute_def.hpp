#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BindingDirection_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindableAttribute)
namespace System::ComponentModel {
struct BindableSupport;
}
namespace System::ComponentModel {
struct BindingDirection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class BindableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BindableAttribute);
// Type: System.ComponentModel::BindableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::BindableAttribute*
class CORDL_TYPE BindableAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Bindable)) bool Bindable;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::BindableAttribute* Default;

  __declspec(property(get = get_Direction))::System::ComponentModel::BindingDirection Direction;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::BindableAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::BindableAttribute* Yes;

  /// @brief Field <Bindable>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__Bindable_k__BackingField, put = __cordl_internal_set__Bindable_k__BackingField)) bool _Bindable_k__BackingField;

  /// @brief Field <Direction>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Direction_k__BackingField,
                      put = __cordl_internal_set__Direction_k__BackingField))::System::ComponentModel::BindingDirection _Direction_k__BackingField;

  /// @brief Field _isDefault, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDefault, put = __cordl_internal_set__isDefault)) bool _isDefault;

  /// @brief Method Equals, addr 0x1aeb798, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1aeb824, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1aeb844, size 0x84, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::BindableAttribute* New_ctor(bool bindable);

  static inline ::System::ComponentModel::BindableAttribute* New_ctor(bool bindable, ::System::ComponentModel::BindingDirection direction);

  static inline ::System::ComponentModel::BindableAttribute* New_ctor(::System::ComponentModel::BindableSupport flags);

  static inline ::System::ComponentModel::BindableAttribute* New_ctor(::System::ComponentModel::BindableSupport flags, ::System::ComponentModel::BindingDirection direction);

  constexpr bool const& __cordl_internal_get__Bindable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Bindable_k__BackingField();

  constexpr ::System::ComponentModel::BindingDirection const& __cordl_internal_get__Direction_k__BackingField() const;

  constexpr ::System::ComponentModel::BindingDirection& __cordl_internal_get__Direction_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDefault() const;

  constexpr bool& __cordl_internal_get__isDefault();

  constexpr void __cordl_internal_set__Bindable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Direction_k__BackingField(::System::ComponentModel::BindingDirection value);

  constexpr void __cordl_internal_set__isDefault(bool value);

  /// @brief Method .ctor, addr 0x1aeb6a8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool bindable);

  /// @brief Method .ctor, addr 0x1aeb6d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool bindable, ::System::ComponentModel::BindingDirection direction);

  /// @brief Method .ctor, addr 0x1aeb704, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::BindableSupport flags);

  /// @brief Method .ctor, addr 0x1aeb744, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::BindableSupport flags, ::System::ComponentModel::BindingDirection direction);

  static inline ::System::ComponentModel::BindableAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::BindableAttribute* getStaticF_No();

  static inline ::System::ComponentModel::BindableAttribute* getStaticF_Yes();

  /// @brief Method get_Bindable, addr 0x1aeb788, size 0x8, virtual false, abstract: false, final false
  inline bool get_Bindable();

  /// @brief Method get_Direction, addr 0x1aeb790, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::BindingDirection get_Direction();

  static inline void setStaticF_Default(::System::ComponentModel::BindableAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::BindableAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::BindableAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableAttribute(BindableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableAttribute(BindableAttribute const&) = delete;

  /// @brief Field _isDefault, offset: 0x10, size: 0x1, def value: None
  bool ____isDefault;

  /// @brief Field <Bindable>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____Bindable_k__BackingField;

  /// @brief Field <Direction>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::System::ComponentModel::BindingDirection ____Direction_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BindableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____isDefault) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____Bindable_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____Direction_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BindableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BindableAttribute*, "System.ComponentModel", "BindableAttribute");
