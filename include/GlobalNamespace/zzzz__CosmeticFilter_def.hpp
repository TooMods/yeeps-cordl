#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CosmeticFilter)
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticFilterData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticFilter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticFilter);
// Type: ::CosmeticFilter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticFilter*
class CORDL_TYPE CosmeticFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field <icon>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__icon_k__BackingField, put = __cordl_internal_set__icon_k__BackingField))::UnityW<::UnityEngine::Sprite> _icon_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <manequinPrefab>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__manequinPrefab_k__BackingField,
                      put = __cordl_internal_set__manequinPrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _manequinPrefab_k__BackingField;

  /// @brief Field <restrictive>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__restrictive_k__BackingField, put = __cordl_internal_set__restrictive_k__BackingField)) bool _restrictive_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__zones_k__BackingField,
                      put = __cordl_internal_set__zones_k__BackingField))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* _zones_k__BackingField;

  __declspec(property(get = get_icon, put = set_icon))::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_manequinPrefab, put = set_manequinPrefab))::UnityW<::UnityEngine::GameObject> manequinPrefab;

  __declspec(property(get = get_restrictive, put = set_restrictive)) bool restrictive;

  __declspec(property(get = get_zones, put = set_zones))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* zones;

  /// @brief Method IsAllowed, addr 0x27619f0, size 0x1c8, virtual false, abstract: false, final false
  inline bool IsAllowed(::GlobalNamespace::Pattern* pattern);

  static inline ::GlobalNamespace::CosmeticFilter* New_ctor(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData data);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__manequinPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__manequinPrefab_k__BackingField();

  constexpr bool const& __cordl_internal_get__restrictive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__restrictive_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*& __cordl_internal_get__zones_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get__zones_k__BackingField() const;

  constexpr void __cordl_internal_set__icon_k__BackingField(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__manequinPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__restrictive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__zones_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

  /// @brief Method .ctor, addr 0x27619a0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData data);

  /// @brief Method get_icon, addr 0x2761980, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_key, addr 0x276194c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_manequinPrefab, addr 0x2761990, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_manequinPrefab();

  /// @brief Method get_restrictive, addr 0x276196c, size 0x8, virtual false, abstract: false, final false
  inline bool get_restrictive();

  /// @brief Method get_zones, addr 0x276195c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* get_zones();

  /// @brief Method set_icon, addr 0x2761988, size 0x8, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::Sprite* value);

  /// @brief Method set_key, addr 0x2761954, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_manequinPrefab, addr 0x2761998, size 0x8, virtual false, abstract: false, final false
  inline void set_manequinPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_restrictive, addr 0x2761974, size 0xc, virtual false, abstract: false, final false
  inline void set_restrictive(bool value);

  /// @brief Method set_zones, addr 0x2761964, size 0x8, virtual false, abstract: false, final false
  inline void set_zones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticFilter(CosmeticFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticFilter(CosmeticFilter const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* ____zones_k__BackingField;

  /// @brief Field <restrictive>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____restrictive_k__BackingField;

  /// @brief Field <icon>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon_k__BackingField;

  /// @brief Field <manequinPrefab>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____manequinPrefab_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticFilter, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFilter, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFilter, ____zones_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFilter, ____restrictive_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFilter, ____icon_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFilter, ____manequinPrefab_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticFilter*, "", "CosmeticFilter");
