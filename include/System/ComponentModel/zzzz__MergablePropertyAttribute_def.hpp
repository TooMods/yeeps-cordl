#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MergablePropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class MergablePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::MergablePropertyAttribute);
// Type: System.ComponentModel::MergablePropertyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::MergablePropertyAttribute*
class CORDL_TYPE MergablePropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AllowMerge)) bool AllowMerge;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::MergablePropertyAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::MergablePropertyAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::MergablePropertyAttribute* Yes;

  /// @brief Field <AllowMerge>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowMerge_k__BackingField, put = __cordl_internal_set__AllowMerge_k__BackingField)) bool _AllowMerge_k__BackingField;

  /// @brief Method Equals, addr 0x1ae8830, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1ae8914, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1ae891c, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::MergablePropertyAttribute* New_ctor(bool allowMerge);

  constexpr bool const& __cordl_internal_get__AllowMerge_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowMerge_k__BackingField();

  constexpr void __cordl_internal_set__AllowMerge_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1ae8800, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool allowMerge);

  static inline ::System::ComponentModel::MergablePropertyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::MergablePropertyAttribute* getStaticF_No();

  static inline ::System::ComponentModel::MergablePropertyAttribute* getStaticF_Yes();

  /// @brief Method get_AllowMerge, addr 0x1ae8828, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowMerge();

  static inline void setStaticF_Default(::System::ComponentModel::MergablePropertyAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::MergablePropertyAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::MergablePropertyAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergablePropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergablePropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergablePropertyAttribute(MergablePropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergablePropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergablePropertyAttribute(MergablePropertyAttribute const&) = delete;

  /// @brief Field <AllowMerge>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____AllowMerge_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MergablePropertyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::MergablePropertyAttribute, ____AllowMerge_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::MergablePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MergablePropertyAttribute*, "System.ComponentModel", "MergablePropertyAttribute");
