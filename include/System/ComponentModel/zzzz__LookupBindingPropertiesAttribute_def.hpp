#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LookupBindingPropertiesAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class LookupBindingPropertiesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LookupBindingPropertiesAttribute);
// Type: System.ComponentModel::LookupBindingPropertiesAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LookupBindingPropertiesAttribute*
class CORDL_TYPE LookupBindingPropertiesAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DataSource))::StringW DataSource;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::LookupBindingPropertiesAttribute* Default;

  __declspec(property(get = get_DisplayMember))::StringW DisplayMember;

  __declspec(property(get = get_LookupMember))::StringW LookupMember;

  __declspec(property(get = get_ValueMember))::StringW ValueMember;

  /// @brief Field <DataSource>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DataSource_k__BackingField, put = __cordl_internal_set__DataSource_k__BackingField))::StringW _DataSource_k__BackingField;

  /// @brief Field <DisplayMember>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayMember_k__BackingField, put = __cordl_internal_set__DisplayMember_k__BackingField))::StringW _DisplayMember_k__BackingField;

  /// @brief Field <LookupMember>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__LookupMember_k__BackingField, put = __cordl_internal_set__LookupMember_k__BackingField))::StringW _LookupMember_k__BackingField;

  /// @brief Field <ValueMember>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ValueMember_k__BackingField, put = __cordl_internal_set__ValueMember_k__BackingField))::StringW _ValueMember_k__BackingField;

  /// @brief Method Equals, addr 0x1afc844, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1afc900, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* New_ctor();

  static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* New_ctor(::StringW dataSource, ::StringW displayMember, ::StringW valueMember, ::StringW lookupMember);

  constexpr ::StringW const& __cordl_internal_get__DataSource_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DataSource_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DisplayMember_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayMember_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LookupMember_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LookupMember_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ValueMember_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ValueMember_k__BackingField();

  constexpr void __cordl_internal_set__DataSource_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__DisplayMember_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__LookupMember_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ValueMember_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1afc7c4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1afc7e4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW dataSource, ::StringW displayMember, ::StringW valueMember, ::StringW lookupMember);

  static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* getStaticF_Default();

  /// @brief Method get_DataSource, addr 0x1afc824, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DataSource();

  /// @brief Method get_DisplayMember, addr 0x1afc82c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayMember();

  /// @brief Method get_LookupMember, addr 0x1afc83c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LookupMember();

  /// @brief Method get_ValueMember, addr 0x1afc834, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ValueMember();

  static inline void setStaticF_Default(::System::ComponentModel::LookupBindingPropertiesAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookupBindingPropertiesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LookupBindingPropertiesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookupBindingPropertiesAttribute(LookupBindingPropertiesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookupBindingPropertiesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookupBindingPropertiesAttribute(LookupBindingPropertiesAttribute const&) = delete;

  /// @brief Field <DataSource>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DataSource_k__BackingField;

  /// @brief Field <DisplayMember>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____DisplayMember_k__BackingField;

  /// @brief Field <ValueMember>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ValueMember_k__BackingField;

  /// @brief Field <LookupMember>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____LookupMember_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LookupBindingPropertiesAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____DataSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____DisplayMember_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____ValueMember_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____LookupMember_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LookupBindingPropertiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LookupBindingPropertiesAttribute*, "System.ComponentModel", "LookupBindingPropertiesAttribute");
