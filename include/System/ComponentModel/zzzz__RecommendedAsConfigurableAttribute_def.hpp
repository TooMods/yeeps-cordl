#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecommendedAsConfigurableAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RecommendedAsConfigurableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RecommendedAsConfigurableAttribute);
// Type: System.ComponentModel::RecommendedAsConfigurableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::RecommendedAsConfigurableAttribute*
class CORDL_TYPE RecommendedAsConfigurableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::RecommendedAsConfigurableAttribute* Default;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::RecommendedAsConfigurableAttribute* No;

  __declspec(property(get = get_RecommendedAsConfigurable)) bool RecommendedAsConfigurable;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::RecommendedAsConfigurableAttribute* Yes;

  /// @brief Field <RecommendedAsConfigurable>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__RecommendedAsConfigurable_k__BackingField,
                      put = __cordl_internal_set__RecommendedAsConfigurable_k__BackingField)) bool _RecommendedAsConfigurable_k__BackingField;

  /// @brief Method Equals, addr 0x1b08f2c, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1b08fe0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1b08fe8, size 0x10, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* New_ctor(bool recommendedAsConfigurable);

  constexpr bool const& __cordl_internal_get__RecommendedAsConfigurable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RecommendedAsConfigurable_k__BackingField();

  constexpr void __cordl_internal_set__RecommendedAsConfigurable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1b08efc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool recommendedAsConfigurable);

  static inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* getStaticF_No();

  static inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* getStaticF_Yes();

  /// @brief Method get_RecommendedAsConfigurable, addr 0x1b08f24, size 0x8, virtual false, abstract: false, final false
  inline bool get_RecommendedAsConfigurable();

  static inline void setStaticF_Default(::System::ComponentModel::RecommendedAsConfigurableAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::RecommendedAsConfigurableAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::RecommendedAsConfigurableAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecommendedAsConfigurableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecommendedAsConfigurableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecommendedAsConfigurableAttribute(RecommendedAsConfigurableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecommendedAsConfigurableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecommendedAsConfigurableAttribute(RecommendedAsConfigurableAttribute const&) = delete;

  /// @brief Field <RecommendedAsConfigurable>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____RecommendedAsConfigurable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RecommendedAsConfigurableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::RecommendedAsConfigurableAttribute, ____RecommendedAsConfigurable_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RecommendedAsConfigurableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RecommendedAsConfigurableAttribute*, "System.ComponentModel", "RecommendedAsConfigurableAttribute");
