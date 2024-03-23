#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PatternCollection)
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PatternCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PatternCollection);
// Type: ::PatternCollection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternCollection*
class CORDL_TYPE PatternCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canDisplayAsCohesiveSet>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__canDisplayAsCohesiveSet_k__BackingField,
                      put = __cordl_internal_set__canDisplayAsCohesiveSet_k__BackingField)) bool _canDisplayAsCohesiveSet_k__BackingField;

  /// @brief Field <forceExpanded>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__forceExpanded_k__BackingField, put = __cordl_internal_set__forceExpanded_k__BackingField)) bool _forceExpanded_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <patterns>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__patterns_k__BackingField,
                      put = __cordl_internal_set__patterns_k__BackingField))::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* _patterns_k__BackingField;

  /// @brief Field <type>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField))::GlobalNamespace::__Pattern__Type _type_k__BackingField;

  __declspec(property(get = get_canDisplayAsCohesiveSet, put = set_canDisplayAsCohesiveSet)) bool canDisplayAsCohesiveSet;

  __declspec(property(get = get_forceExpanded, put = set_forceExpanded)) bool forceExpanded;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_patterns, put = set_patterns))::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns;

  __declspec(property(get = get_type, put = set_type))::GlobalNamespace::__Pattern__Type type;

  static inline ::GlobalNamespace::PatternCollection* New_ctor(::StringW key, ::GlobalNamespace::__Pattern__Type type, ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns,
                                                               bool canDisplayAsCohesiveSet, bool forceExpanded);

  constexpr bool const& __cordl_internal_get__canDisplayAsCohesiveSet_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canDisplayAsCohesiveSet_k__BackingField();

  constexpr bool const& __cordl_internal_get__forceExpanded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__forceExpanded_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*& __cordl_internal_get__patterns_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*> const& __cordl_internal_get__patterns_k__BackingField() const;

  constexpr ::GlobalNamespace::__Pattern__Type const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::GlobalNamespace::__Pattern__Type& __cordl_internal_get__type_k__BackingField();

  constexpr void __cordl_internal_set__canDisplayAsCohesiveSet_k__BackingField(bool value);

  constexpr void __cordl_internal_set__forceExpanded_k__BackingField(bool value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__patterns_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value);

  constexpr void __cordl_internal_set__type_k__BackingField(::GlobalNamespace::__Pattern__Type value);

  /// @brief Method .ctor, addr 0xf3deac, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::GlobalNamespace::__Pattern__Type type, ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns, bool canDisplayAsCohesiveSet,
                    bool forceExpanded);

  /// @brief Method get_canDisplayAsCohesiveSet, addr 0xf3de84, size 0x8, virtual false, abstract: false, final false
  inline bool get_canDisplayAsCohesiveSet();

  /// @brief Method get_forceExpanded, addr 0xf3de98, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceExpanded();

  /// @brief Method get_key, addr 0xf3de54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_patterns, addr 0xf3de74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* get_patterns();

  /// @brief Method get_type, addr 0xf3de64, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Pattern__Type get_type();

  /// @brief Method set_canDisplayAsCohesiveSet, addr 0xf3de8c, size 0xc, virtual false, abstract: false, final false
  inline void set_canDisplayAsCohesiveSet(bool value);

  /// @brief Method set_forceExpanded, addr 0xf3dea0, size 0xc, virtual false, abstract: false, final false
  inline void set_forceExpanded(bool value);

  /// @brief Method set_key, addr 0xf3de5c, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_patterns, addr 0xf3de7c, size 0x8, virtual false, abstract: false, final false
  inline void set_patterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value);

  /// @brief Method set_type, addr 0xf3de6c, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::GlobalNamespace::__Pattern__Type value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PatternCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PatternCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PatternCollection(PatternCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PatternCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PatternCollection(PatternCollection const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__Pattern__Type ____type_k__BackingField;

  /// @brief Field <patterns>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* ____patterns_k__BackingField;

  /// @brief Field <canDisplayAsCohesiveSet>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____canDisplayAsCohesiveSet_k__BackingField;

  /// @brief Field <forceExpanded>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____forceExpanded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PatternCollection, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternCollection, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternCollection, ____type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternCollection, ____patterns_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternCollection, ____canDisplayAsCohesiveSet_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternCollection, ____forceExpanded_k__BackingField) == 0x29, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PatternCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternCollection*, "", "PatternCollection");
