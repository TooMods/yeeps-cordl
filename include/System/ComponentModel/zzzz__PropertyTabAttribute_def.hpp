#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyTabAttribute)
namespace System::ComponentModel {
struct PropertyTabScope;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyTabAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyTabAttribute);
// Type: System.ComponentModel::PropertyTabAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::PropertyTabAttribute*
class CORDL_TYPE PropertyTabAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_TabClassNames))::ArrayW<::StringW, ::Array<::StringW>*> TabClassNames;

  __declspec(property(get = get_TabClasses))::ArrayW<::System::Type*, ::Array<::System::Type*>*> TabClasses;

  __declspec(property(get = get_TabScopes, put = set_TabScopes))::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> TabScopes;

  /// @brief Field <TabScopes>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TabScopes_k__BackingField,
      put = __cordl_internal_set__TabScopes_k__BackingField))::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> _TabScopes_k__BackingField;

  /// @brief Field _tabClassNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tabClassNames, put = __cordl_internal_set__tabClassNames))::ArrayW<::StringW, ::Array<::StringW>*> _tabClassNames;

  /// @brief Field _tabClasses, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tabClasses, put = __cordl_internal_set__tabClasses))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _tabClasses;

  /// @brief Method Equals, addr 0x1af5cfc, size 0x194, virtual false, abstract: false, final false
  inline bool Equals(::System::ComponentModel::PropertyTabAttribute* other);

  /// @brief Method Equals, addr 0x1af5c70, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x1af5e90, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InitializeArrays, addr 0x1af5ea4, size 0x2b0, virtual false, abstract: false, final false
  inline void InitializeArrays(::ArrayW<::StringW, ::Array<::StringW>*> tabClassNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> tabClasses,
                               ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> tabScopes);

  /// @brief Method InitializeArrays, addr 0x1af5e98, size 0xc, virtual false, abstract: false, final false
  inline void InitializeArrays(::ArrayW<::StringW, ::Array<::StringW>*> tabClassNames,
                               ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> tabScopes);

  /// @brief Method InitializeArrays, addr 0x1af6154, size 0x10, virtual false, abstract: false, final false
  inline void InitializeArrays(::ArrayW<::System::Type*, ::Array<::System::Type*>*> tabClasses,
                               ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> tabScopes);

  static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor();

  static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::System::Type* tabClass);

  static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::System::Type* tabClass, ::System::ComponentModel::PropertyTabScope tabScope);

  static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::StringW tabClassName);

  static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::StringW tabClassName, ::System::ComponentModel::PropertyTabScope tabScope);

  constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> const& __cordl_internal_get__TabScopes_k__BackingField() const;

  constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*>& __cordl_internal_get__TabScopes_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__tabClassNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__tabClassNames();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__tabClasses() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__tabClasses();

  constexpr void __cordl_internal_set__TabScopes_k__BackingField(::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> value);

  constexpr void __cordl_internal_set__tabClassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__tabClasses(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x1af5524, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1af560c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* tabClass);

  /// @brief Method .ctor, addr 0x1af5614, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* tabClass, ::System::ComponentModel::PropertyTabScope tabScope);

  /// @brief Method .ctor, addr 0x1af577c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW tabClassName);

  /// @brief Method .ctor, addr 0x1af5784, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::StringW tabClassName, ::System::ComponentModel::PropertyTabScope tabScope);

  /// @brief Method get_TabClassNames, addr 0x1af5bec, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_TabClassNames();

  /// @brief Method get_TabClasses, addr 0x1af58ec, size 0x300, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_TabClasses();

  /// @brief Method get_TabScopes, addr 0x1af5c60, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> get_TabScopes();

  /// @brief Method set_TabScopes, addr 0x1af5c68, size 0x8, virtual false, abstract: false, final false
  inline void set_TabScopes(::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyTabAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyTabAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyTabAttribute(PropertyTabAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyTabAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyTabAttribute(PropertyTabAttribute const&) = delete;

  /// @brief Field _tabClasses, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____tabClasses;

  /// @brief Field _tabClassNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____tabClassNames;

  /// @brief Field <TabScopes>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::PropertyTabScope, ::Array<::System::ComponentModel::PropertyTabScope>*> ____TabScopes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyTabAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____tabClasses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____tabClassNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____TabScopes_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyTabAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyTabAttribute*, "System.ComponentModel", "PropertyTabAttribute");
