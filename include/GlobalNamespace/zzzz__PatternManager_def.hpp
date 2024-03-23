#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "GlobalNamespace/zzzz__RandomColorType_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PatternManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class CosmeticFilter;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class PatternCollection;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
struct RandomColorType;
}
namespace GlobalNamespace {
class __AccountManager__OnItemsResetFailure;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
class __PatternManager__OnEnoughPatternsToExpandImaginationUpdated;
}
namespace GlobalNamespace {
class __PatternManager__OnOwnedPatternsUpdated;
}
namespace GlobalNamespace {
struct __PatternManager__PatternDataSet;
}
namespace GlobalNamespace {
struct __PatternManager__PatternData;
}
namespace GlobalNamespace {
class __PatternManager____c;
}
namespace GlobalNamespace {
class __PatternManager____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __PatternManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PatternManager;
}
namespace GlobalNamespace {
class __PatternManager__OnEnoughPatternsToExpandImaginationUpdated;
}
namespace GlobalNamespace {
class __PatternManager__OnOwnedPatternsUpdated;
}
namespace GlobalNamespace {
class __PatternManager____c;
}
namespace GlobalNamespace {
class __PatternManager____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __PatternManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
struct __PatternManager__PatternData;
}
namespace GlobalNamespace {
struct __PatternManager__PatternDataSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PatternManager);
MARK_REF_PTR_T(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PatternManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__PatternManager____c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::__PatternManager____c__DisplayClass33_0);
MARK_VAL_T(::GlobalNamespace::__PatternManager__PatternData);
MARK_VAL_T(::GlobalNamespace::__PatternManager__PatternDataSet);
// Type: ::PatternData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PatternManager::PatternData
struct CORDL_TYPE __PatternManager__PatternData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager__PatternData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "itemKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "customParameters", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam {
  // name: "customColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "stuffingCost", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PatternManager__PatternData(::StringW key, ::StringW displayName, ::StringW itemKey, ::ArrayW<::StringW, ::Array<::StringW>*> customParameters, ::StringW customColorKey,
                                          int32_t stuffingCost) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field displayName, offset: 0x8, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field itemKey, offset: 0x10, size: 0x8, def value: None
  ::StringW itemKey;

  /// @brief Field customParameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> customParameters;

  /// @brief Field customColorKey, offset: 0x20, size: 0x8, def value: None
  ::StringW customColorKey;

  /// @brief Field stuffingCost, offset: 0x28, size: 0x4, def value: None
  int32_t stuffingCost;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager__PatternData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, displayName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, itemKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, customParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, customColorKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternData, stuffingCost) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PatternDataSet
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PatternManager::PatternDataSet
struct CORDL_TYPE __PatternManager__PatternDataSet {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager__PatternDataSet();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::GlobalNamespace::__Pattern__Type", modifiers: "", def_value: None },
  // CppParam { name: "randomColorType", ty: "::GlobalNamespace::RandomColorType", modifiers: "", def_value: None }, CppParam { name: "defaultColorKey", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "forceStuffingCost", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forcedStuffingCost", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "canDisplayAsCohesiveSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceExpanded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "patternDatas", ty:
  // "::ArrayW<::GlobalNamespace::__PatternManager__PatternData,::Array<::GlobalNamespace::__PatternManager__PatternData>*>", modifiers: "", def_value: None }]
  constexpr __PatternManager__PatternDataSet(::StringW key, ::GlobalNamespace::__Pattern__Type type, ::GlobalNamespace::RandomColorType randomColorType, ::StringW defaultColorKey,
                                             bool forceStuffingCost, int32_t forcedStuffingCost, bool canDisplayAsCohesiveSet, bool forceExpanded,
                                             ::ArrayW<::GlobalNamespace::__PatternManager__PatternData, ::Array<::GlobalNamespace::__PatternManager__PatternData>*> patternDatas) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__Pattern__Type type;

  /// @brief Field randomColorType, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::RandomColorType randomColorType;

  /// @brief Field defaultColorKey, offset: 0x10, size: 0x8, def value: None
  ::StringW defaultColorKey;

  /// @brief Field forceStuffingCost, offset: 0x18, size: 0x1, def value: None
  bool forceStuffingCost;

  /// @brief Field forcedStuffingCost, offset: 0x1c, size: 0x4, def value: None
  int32_t forcedStuffingCost;

  /// @brief Field canDisplayAsCohesiveSet, offset: 0x20, size: 0x1, def value: None
  bool canDisplayAsCohesiveSet;

  /// @brief Field forceExpanded, offset: 0x21, size: 0x1, def value: None
  bool forceExpanded;

  /// @brief Field patternDatas, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PatternManager__PatternData, ::Array<::GlobalNamespace::__PatternManager__PatternData>*> patternDatas;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager__PatternDataSet, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, randomColorType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, defaultColorKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, forceStuffingCost) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, forcedStuffingCost) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, canDisplayAsCohesiveSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, forceExpanded) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager__PatternDataSet, patternDatas) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnOwnedPatternsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager::OnOwnedPatternsUpdated*
class CORDL_TYPE __PatternManager__OnOwnedPatternsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf41c54, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf41c74, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf41c40, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf41b84, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager__OnOwnedPatternsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager__OnOwnedPatternsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PatternManager__OnOwnedPatternsUpdated(__PatternManager__OnOwnedPatternsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager__OnOwnedPatternsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PatternManager__OnOwnedPatternsUpdated(__PatternManager__OnOwnedPatternsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnEnoughPatternsToExpandImaginationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager::OnEnoughPatternsToExpandImaginationUpdated*
class CORDL_TYPE __PatternManager__OnEnoughPatternsToExpandImaginationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf41d5c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool hasEnoughPatternsToExpandImagination, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf41de4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf41d44, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool hasEnoughPatternsToExpandImagination);

  static inline ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf41c80, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager__OnEnoughPatternsToExpandImaginationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager__OnEnoughPatternsToExpandImaginationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PatternManager__OnEnoughPatternsToExpandImaginationUpdated(__PatternManager__OnEnoughPatternsToExpandImaginationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager__OnEnoughPatternsToExpandImaginationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PatternManager__OnEnoughPatternsToExpandImaginationUpdated(__PatternManager__OnEnoughPatternsToExpandImaginationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager::<>c*
class CORDL_TYPE __PatternManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PatternManager____c* __9;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__30_0, put = setStaticF___9__30_0))::System::Comparison_1<::GlobalNamespace::Pattern*>* __9__30_0;

  /// @brief Field <>9__32_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__32_1, put = setStaticF___9__32_1))::GlobalNamespace::__AccountManager__OnItemsResetFailure* __9__32_1;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1))::GlobalNamespace::__AccountManager__OnItemsResetFailure* __9__33_1;

  static inline ::GlobalNamespace::__PatternManager____c* New_ctor();

  /// @brief Method <ForceUnlockItems>b__32_1, addr 0xf41e90, size 0x128, virtual false, abstract: false, final false
  inline void _ForceUnlockItems_b__32_1(::StringW errorType);

  /// @brief Method <OnOwnedPatternKeysUpdated>b__30_0, addr 0xf41e5c, size 0x34, virtual false, abstract: false, final false
  inline int32_t _OnOwnedPatternKeysUpdated_b__30_0(::GlobalNamespace::Pattern* a, ::GlobalNamespace::Pattern* b);

  /// @brief Method <ResetAllItemsToDefault>b__33_1, addr 0xf41fb8, size 0x128, virtual false, abstract: false, final false
  inline void _ResetAllItemsToDefault_b__33_1(::StringW errorType);

  /// @brief Method .ctor, addr 0xf41e54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PatternManager____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::Pattern*>* getStaticF___9__30_0();

  static inline ::GlobalNamespace::__AccountManager__OnItemsResetFailure* getStaticF___9__32_1();

  static inline ::GlobalNamespace::__AccountManager__OnItemsResetFailure* getStaticF___9__33_1();

  static inline void setStaticF___9(::GlobalNamespace::__PatternManager____c* value);

  static inline void setStaticF___9__30_0(::System::Comparison_1<::GlobalNamespace::Pattern*>* value);

  static inline void setStaticF___9__32_1(::GlobalNamespace::__AccountManager__OnItemsResetFailure* value);

  static inline void setStaticF___9__33_1(::GlobalNamespace::__AccountManager__OnItemsResetFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PatternManager____c(__PatternManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PatternManager____c(__PatternManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager::<>c__DisplayClass32_0*
class CORDL_TYPE __PatternManager____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__PatternManager____c__DisplayClass32_0* New_ctor();

  /// @brief Method <ForceUnlockItems>b__0, addr 0xf420e0, size 0x1c, virtual false, abstract: false, final false
  inline void _ForceUnlockItems_b__0(::System::Collections::Generic::List_1<::StringW>* newItemKeys);

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0xf3f360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PatternManager____c__DisplayClass32_0(__PatternManager____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PatternManager____c__DisplayClass32_0(__PatternManager____c__DisplayClass32_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager____c__DisplayClass32_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager____c__DisplayClass32_0, ___accountData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager::<>c__DisplayClass33_0*
class CORDL_TYPE __PatternManager____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__PatternManager____c__DisplayClass33_0* New_ctor();

  /// @brief Method <ResetAllItemsToDefault>b__0, addr 0xf420fc, size 0x1c, virtual false, abstract: false, final false
  inline void _ResetAllItemsToDefault_b__0(::System::Collections::Generic::List_1<::StringW>* newPatterns);

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0xf3f588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PatternManager____c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PatternManager____c__DisplayClass33_0(__PatternManager____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PatternManager____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PatternManager____c__DisplayClass33_0(__PatternManager____c__DisplayClass33_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PatternManager____c__DisplayClass33_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PatternManager____c__DisplayClass33_0, ___accountData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PatternManager
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternManager*
class CORDL_TYPE PatternManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PatternManager>> {
public:
  // Declarations
  using OnEnoughPatternsToExpandImaginationUpdated = ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated;

  using OnOwnedPatternsUpdated = ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated;

  using PatternData = ::GlobalNamespace::__PatternManager__PatternData;

  using PatternDataSet = ::GlobalNamespace::__PatternManager__PatternDataSet;

  using __c = ::GlobalNamespace::__PatternManager____c;

  using __c__DisplayClass32_0 = ::GlobalNamespace::__PatternManager____c__DisplayClass32_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::__PatternManager____c__DisplayClass33_0;

  /// @brief Field bubbleActiveMats, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleActiveMats,
                      put = __cordl_internal_set_bubbleActiveMats))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> bubbleActiveMats;

  /// @brief Field bubbleInactiveMats, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleInactiveMats,
                      put = __cordl_internal_set_bubbleInactiveMats))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> bubbleInactiveMats;

  /// @brief Field cosmeticKeyToPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cosmeticKeyToPattern,
                             put = setStaticF_cosmeticKeyToPattern))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* cosmeticKeyToPattern;

  /// @brief Field defaultOwnedPatternKeys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultOwnedPatternKeys,
                      put = __cordl_internal_set_defaultOwnedPatternKeys))::System::Collections::Generic::List_1<::StringW>* defaultOwnedPatternKeys;

  /// @brief Field hasEnoughPatternsToExpandImaginationInCreativeMode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode,
                             put = setStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode)) bool hasEnoughPatternsToExpandImaginationInCreativeMode;

  /// @brief Field hasEnoughPatternsToExpandImaginationInPlayMode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasEnoughPatternsToExpandImaginationInPlayMode,
                             put = setStaticF_hasEnoughPatternsToExpandImaginationInPlayMode)) bool hasEnoughPatternsToExpandImaginationInPlayMode;

  /// @brief Field itemKeyToPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemKeyToPattern,
                             put = setStaticF_itemKeyToPattern))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* itemKeyToPattern;

  /// @brief Field lockedIcon, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_lockedIcon, put = __cordl_internal_set_lockedIcon))::UnityW<::UnityEngine::Sprite> lockedIcon;

  /// @brief Field mapObjectKeyToPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mapObjectKeyToPattern,
                             put = setStaticF_mapObjectKeyToPattern))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* mapObjectKeyToPattern;

  /// @brief Field onEnoughPatternsToExpandImaginationUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onEnoughPatternsToExpandImaginationUpdatedCallbacks, put = __cordl_internal_set_onEnoughPatternsToExpandImaginationUpdatedCallbacks))::
      GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* onEnoughPatternsToExpandImaginationUpdatedCallbacks;

  /// @brief Field onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks, put = setStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks))::
      GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks;

  /// @brief Field onOwnedPatternsUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onOwnedPatternsUpdatedCallbacks,
                      put = __cordl_internal_set_onOwnedPatternsUpdatedCallbacks))::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* onOwnedPatternsUpdatedCallbacks;

  /// @brief Field onOwnedPatternsUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onOwnedPatternsUpdatedPersistantCallbacks,
                             put = setStaticF_onOwnedPatternsUpdatedPersistantCallbacks))::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* onOwnedPatternsUpdatedPersistantCallbacks;

  /// @brief Field ownedIcon, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_ownedIcon, put = __cordl_internal_set_ownedIcon))::UnityW<::UnityEngine::Sprite> ownedIcon;

  /// @brief Field ownedPatterns, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ownedPatterns, put = setStaticF_ownedPatterns))::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* ownedPatterns;

  /// @brief Field patternCollections, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_patternCollections,
                             put = setStaticF_patternCollections))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>* patternCollections;

  /// @brief Field patternDataSets, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_patternDataSets,
               put = __cordl_internal_set_patternDataSets))::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> patternDataSets;

  /// @brief Field patternTypeIcons, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_patternTypeIcons,
                      put = __cordl_internal_set_patternTypeIcons))::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> patternTypeIcons;

  /// @brief Field patternTypeReference, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_patternTypeReference, put = __cordl_internal_set_patternTypeReference))::GlobalNamespace::__Pattern__Type patternTypeReference;

  /// @brief Field patterns, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_patterns, put = setStaticF_patterns))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* patterns;

  /// @brief Field priceTagMeshes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_priceTagMeshes,
                      put = __cordl_internal_set_priceTagMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> priceTagMeshes;

  /// @brief Field priceTagMeshesDigitOffset, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_priceTagMeshesDigitOffset, put = __cordl_internal_set_priceTagMeshesDigitOffset)) int32_t priceTagMeshesDigitOffset;

  /// @brief Field priceTagPrefab, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_priceTagPrefab, put = __cordl_internal_set_priceTagPrefab))::UnityW<::UnityEngine::GameObject> priceTagPrefab;

  /// @brief Field techWebLineActiveMat, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLineActiveMat, put = __cordl_internal_set_techWebLineActiveMat))::UnityW<::UnityEngine::Material> techWebLineActiveMat;

  /// @brief Field techWebLineDottedLong, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLineDottedLong, put = __cordl_internal_set_techWebLineDottedLong))::UnityW<::UnityEngine::Mesh> techWebLineDottedLong;

  /// @brief Field techWebLineDottedShort, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLineDottedShort, put = __cordl_internal_set_techWebLineDottedShort))::UnityW<::UnityEngine::Mesh> techWebLineDottedShort;

  /// @brief Field techWebLineInactiveMat, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLineInactiveMat, put = __cordl_internal_set_techWebLineInactiveMat))::UnityW<::UnityEngine::Material> techWebLineInactiveMat;

  /// @brief Field techWebLinePrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLinePrefab, put = __cordl_internal_set_techWebLinePrefab))::UnityW<::UnityEngine::GameObject> techWebLinePrefab;

  /// @brief Field techWebLineSolid, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebLineSolid, put = __cordl_internal_set_techWebLineSolid))::UnityW<::UnityEngine::Mesh> techWebLineSolid;

  /// @brief Field unlockedIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_unlockedIcon, put = __cordl_internal_set_unlockedIcon))::UnityW<::UnityEngine::Sprite> unlockedIcon;

  /// @brief Method ForceUnlockItems, addr 0xf3ef80, size 0x3e0, virtual false, abstract: false, final false
  static inline void ForceUnlockItems(::System::Collections::Generic::List_1<::StringW>* itemsToUnlock);

  /// @brief Method GetAllPatterns, addr 0xf406b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GetAllPatterns();

  /// @brief Method GetBubbleMaterials, addr 0xf41a58, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetBubbleMaterials(bool isActive);

  /// @brief Method GetCraftablePatterns, addr 0xf40864, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GetCraftablePatterns(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes);

  /// @brief Method GetCraftablePatternsByCollections, addr 0xf40b18, size 0x5bc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::PatternCollection*>*
  GetCraftablePatternsByCollections(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes, ::GlobalNamespace::CosmeticFilter* cosmeticFilter);

  /// @brief Method GetDefaultOwnedItemKeys, addr 0xf3df64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetDefaultOwnedItemKeys();

  /// @brief Method GetOwnedPatterns, addr 0xf40710, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GetOwnedPatterns();

  /// @brief Method GetPatternTypeIcon, addr 0xf41b04, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> GetPatternTypeIcon(::GlobalNamespace::__Pattern__Type type);

  /// @brief Method GetPriceTagMesh, addr 0xf41a94, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetPriceTagMesh(int32_t numDigits);

  /// @brief Method GetTechWebLineMaterial, addr 0xf41a40, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetTechWebLineMaterial(bool isActive);

  /// @brief Method GetTechWebLineMesh, addr 0xf41a70, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetTechWebLineMesh(bool isSolid, bool isLong);

  /// @brief Method GetUnlockStatusIcon, addr 0xf41ae0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> GetUnlockStatusIcon(bool isOwned, bool isReachable);

  /// @brief Method HasEnoughPatternsToExpandImaginationInCurrentMode, addr 0xf3df5c, size 0x8, virtual false, abstract: false, final false
  static inline bool HasEnoughPatternsToExpandImaginationInCurrentMode();

  /// @brief Method InitializePatterns, addr 0xf3f590, size 0x1124, virtual false, abstract: false, final false
  static inline void InitializePatterns();

  /// @brief Method IsPatternOwned, addr 0xf407a4, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsPatternOwned(::GlobalNamespace::Pattern* pattern);

  static inline ::GlobalNamespace::PatternManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0xf3e100, size 0xd4, virtual false, abstract: false, final false
  static inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnOwnedPatternKeysUpdated, addr 0xf3eb0c, size 0x8, virtual false, abstract: false, final false
  static inline void OnOwnedPatternKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newOwnedPatternKeys);

  /// @brief Method OnOwnedPatternKeysUpdated, addr 0xf3e1d4, size 0x938, virtual false, abstract: false, final false
  static inline void OnOwnedPatternKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newOwnedPatternKeys, bool fromLoad);

  /// @brief Method ResetAllItemsToDefault, addr 0xf3f368, size 0x220, virtual false, abstract: false, final false
  static inline void ResetAllItemsToDefault();

  /// @brief Method SetHasEnoughPatternsToExpand, addr 0xf3ec3c, size 0x344, virtual false, abstract: false, final false
  static inline void SetHasEnoughPatternsToExpand(int32_t playModePatternCount, int32_t creativeModePatternCount, bool fromLoad);

  /// @brief Method Start, addr 0xf3df6c, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCraftCosmetic, addr 0xf41794, size 0x2ac, virtual false, abstract: false, final false
  static inline bool TryCraftCosmetic(::GlobalNamespace::__Item__CustomParameters* itemCustomParameters, ::UnityEngine::Vector3 position, ByRef<::GlobalNamespace::Item*> craftedItem);

  /// @brief Method TryCraftItem, addr 0xf413e4, size 0x3b0, virtual false, abstract: false, final false
  static inline bool TryCraftItem(::GlobalNamespace::Pattern* pattern, ::GlobalNamespace::__Item__CustomParameters* itemCustomParameters, ::UnityEngine::Vector3 position,
                                  ByRef<::GlobalNamespace::Item*> craftedItem);

  /// @brief Method TryGetItemPattern, addr 0xf411fc, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryGetItemPattern(::StringW itemKey, ::GlobalNamespace::__Item__CustomParameters* customParameters, ByRef<::GlobalNamespace::Pattern*> pattern);

  /// @brief Method TryGetPattern, addr 0xf3eb14, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetPattern(::StringW key, ByRef<::GlobalNamespace::Pattern*> pattern);

  /// @brief Method TryGetPatternCollection, addr 0xf3eba8, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetPatternCollection(::StringW key, ByRef<::GlobalNamespace::PatternCollection*> patternCollection);

  /// @brief Method TryGetPatternForCosmetic, addr 0xf41168, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetPatternForCosmetic(::StringW cosmeticKey, ByRef<::GlobalNamespace::Pattern*> pattern);

  /// @brief Method TryGetPatternForMapObject, addr 0xf410d4, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetPatternForMapObject(::StringW mapObjectKey, ByRef<::GlobalNamespace::Pattern*> pattern);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_bubbleActiveMats() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_bubbleActiveMats();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_bubbleInactiveMats() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_bubbleInactiveMats();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_defaultOwnedPatternKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_defaultOwnedPatternKeys() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_lockedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_lockedIcon();

  constexpr ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*& __cordl_internal_get_onEnoughPatternsToExpandImaginationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*> const&
  __cordl_internal_get_onEnoughPatternsToExpandImaginationUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*& __cordl_internal_get_onOwnedPatternsUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*> const& __cordl_internal_get_onOwnedPatternsUpdatedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_ownedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_ownedIcon();

  constexpr ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> const& __cordl_internal_get_patternDataSets() const;

  constexpr ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*>& __cordl_internal_get_patternDataSets();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> const& __cordl_internal_get_patternTypeIcons() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*>& __cordl_internal_get_patternTypeIcons();

  constexpr ::GlobalNamespace::__Pattern__Type const& __cordl_internal_get_patternTypeReference() const;

  constexpr ::GlobalNamespace::__Pattern__Type& __cordl_internal_get_patternTypeReference();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_priceTagMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_priceTagMeshes();

  constexpr int32_t const& __cordl_internal_get_priceTagMeshesDigitOffset() const;

  constexpr int32_t& __cordl_internal_get_priceTagMeshesDigitOffset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_priceTagPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_priceTagPrefab();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_techWebLineActiveMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_techWebLineActiveMat();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_techWebLineDottedLong() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_techWebLineDottedLong();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_techWebLineDottedShort() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_techWebLineDottedShort();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_techWebLineInactiveMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_techWebLineInactiveMat();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_techWebLinePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_techWebLinePrefab();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_techWebLineSolid() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_techWebLineSolid();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_unlockedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_unlockedIcon();

  constexpr void __cordl_internal_set_bubbleActiveMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_bubbleInactiveMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_defaultOwnedPatternKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_lockedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_onEnoughPatternsToExpandImaginationUpdatedCallbacks(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* value);

  constexpr void __cordl_internal_set_onOwnedPatternsUpdatedCallbacks(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* value);

  constexpr void __cordl_internal_set_ownedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_patternDataSets(::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> value);

  constexpr void __cordl_internal_set_patternTypeIcons(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> value);

  constexpr void __cordl_internal_set_patternTypeReference(::GlobalNamespace::__Pattern__Type value);

  constexpr void __cordl_internal_set_priceTagMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_priceTagMeshesDigitOffset(int32_t value);

  constexpr void __cordl_internal_set_priceTagPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_techWebLineActiveMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_techWebLineDottedLong(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_techWebLineDottedShort(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_techWebLineInactiveMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_techWebLinePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_techWebLineSolid(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_unlockedIcon(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0xf41b34, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* getStaticF_cosmeticKeyToPattern();

  static inline bool getStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode();

  static inline bool getStaticF_hasEnoughPatternsToExpandImaginationInPlayMode();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* getStaticF_itemKeyToPattern();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* getStaticF_mapObjectKeyToPattern();

  static inline ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* getStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks();

  static inline ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* getStaticF_onOwnedPatternsUpdatedPersistantCallbacks();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* getStaticF_ownedPatterns();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>* getStaticF_patternCollections();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* getStaticF_patterns();

  /// @brief Method get_hasLoadedOwnedPatterns, addr 0xf3df0c, size 0x50, virtual false, abstract: false, final false
  static inline bool get_hasLoadedOwnedPatterns();

  static inline void setStaticF_cosmeticKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value);

  static inline void setStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode(bool value);

  static inline void setStaticF_hasEnoughPatternsToExpandImaginationInPlayMode(bool value);

  static inline void setStaticF_itemKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value);

  static inline void setStaticF_mapObjectKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value);

  static inline void setStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* value);

  static inline void setStaticF_onOwnedPatternsUpdatedPersistantCallbacks(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* value);

  static inline void setStaticF_ownedPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value);

  static inline void setStaticF_patternCollections(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>* value);

  static inline void setStaticF_patterns(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PatternManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PatternManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PatternManager(PatternManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PatternManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PatternManager(PatternManager const&) = delete;

  /// @brief Field patternDataSets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> ___patternDataSets;

  /// @brief Field onOwnedPatternsUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* ___onOwnedPatternsUpdatedCallbacks;

  /// @brief Field onEnoughPatternsToExpandImaginationUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* ___onEnoughPatternsToExpandImaginationUpdatedCallbacks;

  /// @brief Field defaultOwnedPatternKeys, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___defaultOwnedPatternKeys;

  /// @brief Field techWebLineActiveMat, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___techWebLineActiveMat;

  /// @brief Field techWebLineInactiveMat, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___techWebLineInactiveMat;

  /// @brief Field techWebLinePrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___techWebLinePrefab;

  /// @brief Field bubbleActiveMats, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___bubbleActiveMats;

  /// @brief Field bubbleInactiveMats, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___bubbleInactiveMats;

  /// @brief Field techWebLineSolid, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___techWebLineSolid;

  /// @brief Field techWebLineDottedShort, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___techWebLineDottedShort;

  /// @brief Field techWebLineDottedLong, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___techWebLineDottedLong;

  /// @brief Field priceTagPrefab, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___priceTagPrefab;

  /// @brief Field priceTagMeshesDigitOffset, offset: 0x80, size: 0x4, def value: None
  int32_t ___priceTagMeshesDigitOffset;

  /// @brief Field priceTagMeshes, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___priceTagMeshes;

  /// @brief Field lockedIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___lockedIcon;

  /// @brief Field unlockedIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___unlockedIcon;

  /// @brief Field ownedIcon, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___ownedIcon;

  /// @brief Field patternTypeReference, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::__Pattern__Type ___patternTypeReference;

  /// @brief Field patternTypeIcons, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> ___patternTypeIcons;

  /// @brief Field TECH_WEB_POOL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString TECH_WEB_POOL_KEY{ u"techWeb" };

  /// @brief Field cosmeticItemKey offset 0xffffffff size 0x8
  static constexpr ::ConstString cosmeticItemKey{ u"cosmetic" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Patterns: " };

  /// @brief Field mapObjectItemKey offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectItemKey{ u"mapObject" };

  /// @brief Field minPatternsToExpandImagination offset 0xffffffff size 0x4
  static constexpr int32_t minPatternsToExpandImagination{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PatternManager, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___patternDataSets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___onOwnedPatternsUpdatedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___onEnoughPatternsToExpandImaginationUpdatedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___defaultOwnedPatternKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLineActiveMat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLineInactiveMat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLinePrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___bubbleActiveMats) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___bubbleInactiveMats) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLineSolid) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLineDottedShort) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___techWebLineDottedLong) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___priceTagPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___priceTagMeshesDigitOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___priceTagMeshes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___lockedIcon) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___unlockedIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___ownedIcon) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___patternTypeReference) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternManager, ___patternTypeIcons) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PatternManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternManager*, "", "PatternManager");
NEED_NO_BOX(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*, "", "PatternManager/OnEnoughPatternsToExpandImaginationUpdated");
NEED_NO_BOX(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*, "", "PatternManager/OnOwnedPatternsUpdated");
NEED_NO_BOX(::GlobalNamespace::__PatternManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager____c*, "", "PatternManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__PatternManager____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager____c__DisplayClass32_0*, "", "PatternManager/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::__PatternManager____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager____c__DisplayClass33_0*, "", "PatternManager/<>c__DisplayClass33_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager__PatternData, "", "PatternManager/PatternData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PatternManager__PatternDataSet, "", "PatternManager/PatternDataSet");
