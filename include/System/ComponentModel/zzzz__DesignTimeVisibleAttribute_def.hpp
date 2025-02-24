#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignTimeVisibleAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignTimeVisibleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignTimeVisibleAttribute);
// Type: System.ComponentModel::DesignTimeVisibleAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DesignTimeVisibleAttribute*
class CORDL_TYPE DesignTimeVisibleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DesignTimeVisibleAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::DesignTimeVisibleAttribute* No;

  __declspec(property(get = get_Visible)) bool Visible;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::DesignTimeVisibleAttribute* Yes;

  /// @brief Field <Visible>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Visible_k__BackingField, put = __cordl_internal_set__Visible_k__BackingField)) bool _Visible_k__BackingField;

  /// @brief Method Equals, addr 0x1af66fc, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1af6794, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1af6830, size 0x80, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::DesignTimeVisibleAttribute* New_ctor();

  static inline ::System::ComponentModel::DesignTimeVisibleAttribute* New_ctor(bool visible);

  constexpr bool const& __cordl_internal_get__Visible_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Visible_k__BackingField();

  constexpr void __cordl_internal_set__Visible_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1af66ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1af66c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool visible);

  static inline ::System::ComponentModel::DesignTimeVisibleAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DesignTimeVisibleAttribute* getStaticF_No();

  static inline ::System::ComponentModel::DesignTimeVisibleAttribute* getStaticF_Yes();

  /// @brief Method get_Visible, addr 0x1af66f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Visible();

  static inline void setStaticF_Default(::System::ComponentModel::DesignTimeVisibleAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::DesignTimeVisibleAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::DesignTimeVisibleAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignTimeVisibleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignTimeVisibleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignTimeVisibleAttribute(DesignTimeVisibleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignTimeVisibleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignTimeVisibleAttribute(DesignTimeVisibleAttribute const&) = delete;

  /// @brief Field <Visible>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Visible_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignTimeVisibleAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignTimeVisibleAttribute, ____Visible_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignTimeVisibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignTimeVisibleAttribute*, "System.ComponentModel", "DesignTimeVisibleAttribute");
