#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComplexBindingPropertiesAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ComplexBindingPropertiesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComplexBindingPropertiesAttribute);
// Type: System.ComponentModel::ComplexBindingPropertiesAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ComplexBindingPropertiesAttribute*
class CORDL_TYPE ComplexBindingPropertiesAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DataMember))::StringW DataMember;

  __declspec(property(get = get_DataSource))::StringW DataSource;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::ComplexBindingPropertiesAttribute* Default;

  /// @brief Field <DataMember>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DataMember_k__BackingField, put = __cordl_internal_set__DataMember_k__BackingField))::StringW _DataMember_k__BackingField;

  /// @brief Field <DataSource>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DataSource_k__BackingField, put = __cordl_internal_set__DataSource_k__BackingField))::StringW _DataSource_k__BackingField;

  /// @brief Method Equals, addr 0x1aec73c, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1aec7d0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* New_ctor();

  static inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* New_ctor(::StringW dataSource);

  static inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* New_ctor(::StringW dataSource, ::StringW dataMember);

  constexpr ::StringW const& __cordl_internal_get__DataMember_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DataMember_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DataSource_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DataSource_k__BackingField();

  constexpr void __cordl_internal_set__DataMember_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__DataSource_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1aec6d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1aec6d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW dataSource);

  /// @brief Method .ctor, addr 0x1aec700, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW dataSource, ::StringW dataMember);

  static inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* getStaticF_Default();

  /// @brief Method get_DataMember, addr 0x1aec734, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DataMember();

  /// @brief Method get_DataSource, addr 0x1aec72c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DataSource();

  static inline void setStaticF_Default(::System::ComponentModel::ComplexBindingPropertiesAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComplexBindingPropertiesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComplexBindingPropertiesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComplexBindingPropertiesAttribute(ComplexBindingPropertiesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComplexBindingPropertiesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComplexBindingPropertiesAttribute(ComplexBindingPropertiesAttribute const&) = delete;

  /// @brief Field <DataSource>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DataSource_k__BackingField;

  /// @brief Field <DataMember>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____DataMember_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComplexBindingPropertiesAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ComplexBindingPropertiesAttribute, ____DataSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ComplexBindingPropertiesAttribute, ____DataMember_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComplexBindingPropertiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComplexBindingPropertiesAttribute*, "System.ComponentModel", "ComplexBindingPropertiesAttribute");
