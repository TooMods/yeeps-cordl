#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "GlobalNamespace/zzzz__RandomColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pattern)
namespace GlobalNamespace {
class PatternCollection;
}
namespace GlobalNamespace {
struct RandomColorType;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __PatternManager__PatternDataSet;
}
namespace GlobalNamespace {
struct __PatternManager__PatternData;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
class Pattern;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Pattern__Type);
MARK_REF_PTR_T(::GlobalNamespace::Pattern);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Pattern::Type
struct CORDL_TYPE __Pattern__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Pattern__Type_Unwrapped
  enum struct ____Pattern__Type_Unwrapped : int32_t {
    __E_stuffed = static_cast<int32_t>(0x0),
    __E_creative = static_cast<int32_t>(0x1),
    __E_cosmetic = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Pattern__Type_Unwrapped() const noexcept {
    return static_cast<____Pattern__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Pattern__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Pattern__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field cosmetic value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Pattern__Type const cosmetic;

  /// @brief Field creative value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Pattern__Type const creative;

  /// @brief Field stuffed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Pattern__Type const stuffed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Pattern__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Pattern__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pattern
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Pattern*
class CORDL_TYPE Pattern : public ::System::Object {
public:
  // Declarations
  using Type = ::GlobalNamespace::__Pattern__Type;

  /// @brief Field <customParameters>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__customParameters_k__BackingField,
                      put = __cordl_internal_set__customParameters_k__BackingField))::GlobalNamespace::__Item__CustomParameters* _customParameters_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <itemKey>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__itemKey_k__BackingField, put = __cordl_internal_set__itemKey_k__BackingField))::StringW _itemKey_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <patternCollection>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__patternCollection_k__BackingField,
                      put = __cordl_internal_set__patternCollection_k__BackingField))::GlobalNamespace::PatternCollection* _patternCollection_k__BackingField;

  /// @brief Field <randomColorType>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__randomColorType_k__BackingField,
                      put = __cordl_internal_set__randomColorType_k__BackingField))::GlobalNamespace::RandomColorType _randomColorType_k__BackingField;

  /// @brief Field <sortIndex>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__sortIndex_k__BackingField, put = __cordl_internal_set__sortIndex_k__BackingField)) int32_t _sortIndex_k__BackingField;

  /// @brief Field <stuffingCost>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__stuffingCost_k__BackingField, put = __cordl_internal_set__stuffingCost_k__BackingField)) int32_t _stuffingCost_k__BackingField;

  /// @brief Field <type>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField))::GlobalNamespace::__Pattern__Type _type_k__BackingField;

  __declspec(property(get = get_customParameters, put = set_customParameters))::GlobalNamespace::__Item__CustomParameters* customParameters;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_itemKey, put = set_itemKey))::StringW itemKey;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_patternCollection, put = set_patternCollection))::GlobalNamespace::PatternCollection* patternCollection;

  __declspec(property(get = get_randomColorType, put = set_randomColorType))::GlobalNamespace::RandomColorType randomColorType;

  __declspec(property(get = get_sortIndex, put = set_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_stuffingCost, put = set_stuffingCost)) int32_t stuffingCost;

  __declspec(property(get = get_type, put = set_type))::GlobalNamespace::__Pattern__Type type;

  static inline ::GlobalNamespace::Pattern* New_ctor(::GlobalNamespace::PatternCollection* patternCollection, int32_t sortIndex, ::StringW key, ::StringW displayName, ::StringW itemKey,
                                                     ::GlobalNamespace::__Item__CustomParameters* customParameters, ::GlobalNamespace::RandomColorType randomColorType,
                                                     ::GlobalNamespace::__Pattern__Type type, int32_t stuffingCost);

  /// @brief Method TryConstruct, addr 0xf3d528, size 0x92c, virtual false, abstract: false, final false
  static inline bool TryConstruct(::GlobalNamespace::__PatternManager__PatternData patternData, ::GlobalNamespace::__PatternManager__PatternDataSet patternDataSet,
                                  ::GlobalNamespace::PatternCollection* patternCollection, ::StringW cosmeticColorKey, ByRef<int32_t> sortIndex,
                                  ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*> patterns);

  constexpr ::GlobalNamespace::__Item__CustomParameters*& __cordl_internal_get__customParameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__CustomParameters*> const& __cordl_internal_get__customParameters_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__itemKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__itemKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::GlobalNamespace::PatternCollection*& __cordl_internal_get__patternCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PatternCollection*> const& __cordl_internal_get__patternCollection_k__BackingField() const;

  constexpr ::GlobalNamespace::RandomColorType const& __cordl_internal_get__randomColorType_k__BackingField() const;

  constexpr ::GlobalNamespace::RandomColorType& __cordl_internal_get__randomColorType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__sortIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__sortIndex_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__stuffingCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__stuffingCost_k__BackingField();

  constexpr ::GlobalNamespace::__Pattern__Type const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::GlobalNamespace::__Pattern__Type& __cordl_internal_get__type_k__BackingField();

  constexpr void __cordl_internal_set__customParameters_k__BackingField(::GlobalNamespace::__Item__CustomParameters* value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__itemKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__patternCollection_k__BackingField(::GlobalNamespace::PatternCollection* value);

  constexpr void __cordl_internal_set__randomColorType_k__BackingField(::GlobalNamespace::RandomColorType value);

  constexpr void __cordl_internal_set__sortIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__stuffingCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__type_k__BackingField(::GlobalNamespace::__Pattern__Type value);

  /// @brief Method .ctor, addr 0xf3d4ac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PatternCollection* patternCollection, int32_t sortIndex, ::StringW key, ::StringW displayName, ::StringW itemKey,
                    ::GlobalNamespace::__Item__CustomParameters* customParameters, ::GlobalNamespace::RandomColorType randomColorType, ::GlobalNamespace::__Pattern__Type type, int32_t stuffingCost);

  /// @brief Method get_customParameters, addr 0xf3d46c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* get_customParameters();

  /// @brief Method get_displayName, addr 0xf3d44c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_itemKey, addr 0xf3d45c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_itemKey();

  /// @brief Method get_key, addr 0xf3d43c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_patternCollection, addr 0xf3d41c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PatternCollection* get_patternCollection();

  /// @brief Method get_randomColorType, addr 0xf3d47c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RandomColorType get_randomColorType();

  /// @brief Method get_sortIndex, addr 0xf3d42c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sortIndex();

  /// @brief Method get_stuffingCost, addr 0xf3d49c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stuffingCost();

  /// @brief Method get_type, addr 0xf3d48c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Pattern__Type get_type();

  /// @brief Method set_customParameters, addr 0xf3d474, size 0x8, virtual false, abstract: false, final false
  inline void set_customParameters(::GlobalNamespace::__Item__CustomParameters* value);

  /// @brief Method set_displayName, addr 0xf3d454, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_itemKey, addr 0xf3d464, size 0x8, virtual false, abstract: false, final false
  inline void set_itemKey(::StringW value);

  /// @brief Method set_key, addr 0xf3d444, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_patternCollection, addr 0xf3d424, size 0x8, virtual false, abstract: false, final false
  inline void set_patternCollection(::GlobalNamespace::PatternCollection* value);

  /// @brief Method set_randomColorType, addr 0xf3d484, size 0x8, virtual false, abstract: false, final false
  inline void set_randomColorType(::GlobalNamespace::RandomColorType value);

  /// @brief Method set_sortIndex, addr 0xf3d434, size 0x8, virtual false, abstract: false, final false
  inline void set_sortIndex(int32_t value);

  /// @brief Method set_stuffingCost, addr 0xf3d4a4, size 0x8, virtual false, abstract: false, final false
  inline void set_stuffingCost(int32_t value);

  /// @brief Method set_type, addr 0xf3d494, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::GlobalNamespace::__Pattern__Type value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pattern();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pattern", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pattern(Pattern&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pattern", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pattern(Pattern const&) = delete;

  /// @brief Field <patternCollection>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PatternCollection* ____patternCollection_k__BackingField;

  /// @brief Field <sortIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____sortIndex_k__BackingField;

  /// @brief Field <key>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <itemKey>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____itemKey_k__BackingField;

  /// @brief Field <customParameters>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* ____customParameters_k__BackingField;

  /// @brief Field <randomColorType>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::RandomColorType ____randomColorType_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__Pattern__Type ____type_k__BackingField;

  /// @brief Field <stuffingCost>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____stuffingCost_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Pattern, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____patternCollection_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____sortIndex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____key_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____displayName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____itemKey_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____customParameters_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____randomColorType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____type_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pattern, ____stuffingCost_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Pattern__Type, "", "Pattern/Type");
NEED_NO_BOX(::GlobalNamespace::Pattern);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Pattern*, "", "Pattern");
