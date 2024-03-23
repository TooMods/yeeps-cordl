#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ToolboxItemFilterType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToolboxItemFilterAttribute)
namespace System::ComponentModel {
struct ToolboxItemFilterType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ToolboxItemFilterAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ToolboxItemFilterAttribute);
// Type: System.ComponentModel::ToolboxItemFilterAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ToolboxItemFilterAttribute*
class CORDL_TYPE ToolboxItemFilterAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_FilterString))::StringW FilterString;

  __declspec(property(get = get_FilterType))::System::ComponentModel::ToolboxItemFilterType FilterType;

  __declspec(property(get = get_TypeId))::System::Object* TypeId;

  /// @brief Field <FilterString>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FilterString_k__BackingField, put = __cordl_internal_set__FilterString_k__BackingField))::StringW _FilterString_k__BackingField;

  /// @brief Field <FilterType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__FilterType_k__BackingField,
                      put = __cordl_internal_set__FilterType_k__BackingField))::System::ComponentModel::ToolboxItemFilterType _FilterType_k__BackingField;

  /// @brief Field _typeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeId, put = __cordl_internal_set__typeId))::StringW _typeId;

  /// @brief Method Equals, addr 0x1b0da44, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1b0db38, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Match, addr 0x1b0db58, size 0x84, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  static inline ::System::ComponentModel::ToolboxItemFilterAttribute* New_ctor(::StringW filterString);

  static inline ::System::ComponentModel::ToolboxItemFilterAttribute* New_ctor(::StringW filterString, ::System::ComponentModel::ToolboxItemFilterType filterType);

  /// @brief Method ToString, addr 0x1b0dbdc, size 0x118, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__FilterString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FilterString_k__BackingField();

  constexpr ::System::ComponentModel::ToolboxItemFilterType const& __cordl_internal_get__FilterType_k__BackingField() const;

  constexpr ::System::ComponentModel::ToolboxItemFilterType& __cordl_internal_get__FilterType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__typeId() const;

  constexpr ::StringW& __cordl_internal_get__typeId();

  constexpr void __cordl_internal_set__FilterString_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FilterType_k__BackingField(::System::ComponentModel::ToolboxItemFilterType value);

  constexpr void __cordl_internal_set__typeId(::StringW value);

  /// @brief Method .ctor, addr 0x1b0d964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW filterString);

  /// @brief Method .ctor, addr 0x1b0d96c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filterString, ::System::ComponentModel::ToolboxItemFilterType filterType);

  /// @brief Method get_FilterString, addr 0x1b0d9e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FilterString();

  /// @brief Method get_FilterType, addr 0x1b0d9f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ToolboxItemFilterType get_FilterType();

  /// @brief Method get_TypeId, addr 0x1b0d9f8, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToolboxItemFilterAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToolboxItemFilterAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToolboxItemFilterAttribute(ToolboxItemFilterAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToolboxItemFilterAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToolboxItemFilterAttribute(ToolboxItemFilterAttribute const&) = delete;

  /// @brief Field _typeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____typeId;

  /// @brief Field <FilterString>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____FilterString_k__BackingField;

  /// @brief Field <FilterType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::ComponentModel::ToolboxItemFilterType ____FilterType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ToolboxItemFilterAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemFilterAttribute, ____typeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemFilterAttribute, ____FilterString_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemFilterAttribute, ____FilterType_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ToolboxItemFilterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ToolboxItemFilterAttribute*, "System.ComponentModel", "ToolboxItemFilterAttribute");
