#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImmutableObjectAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ImmutableObjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ImmutableObjectAttribute);
// Type: System.ComponentModel::ImmutableObjectAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ImmutableObjectAttribute*
class CORDL_TYPE ImmutableObjectAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::ImmutableObjectAttribute* Default;

  __declspec(property(get = get_Immutable)) bool Immutable;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::ImmutableObjectAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::ImmutableObjectAttribute* Yes;

  /// @brief Field <Immutable>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Immutable_k__BackingField, put = __cordl_internal_set__Immutable_k__BackingField)) bool _Immutable_k__BackingField;

  /// @brief Method Equals, addr 0x1ae82b0, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1ae8394, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1ae839c, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::ImmutableObjectAttribute* New_ctor(bool immutable);

  constexpr bool const& __cordl_internal_get__Immutable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Immutable_k__BackingField();

  constexpr void __cordl_internal_set__Immutable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1ae8280, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool immutable);

  static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_No();

  static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_Yes();

  /// @brief Method get_Immutable, addr 0x1ae82a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Immutable();

  static inline void setStaticF_Default(::System::ComponentModel::ImmutableObjectAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::ImmutableObjectAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::ImmutableObjectAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImmutableObjectAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImmutableObjectAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImmutableObjectAttribute(ImmutableObjectAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImmutableObjectAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImmutableObjectAttribute(ImmutableObjectAttribute const&) = delete;

  /// @brief Field <Immutable>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Immutable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ImmutableObjectAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ImmutableObjectAttribute, ____Immutable_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ImmutableObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ImmutableObjectAttribute*, "System.ComponentModel", "ImmutableObjectAttribute");
