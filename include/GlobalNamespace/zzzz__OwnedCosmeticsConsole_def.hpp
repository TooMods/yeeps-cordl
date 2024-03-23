#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnedCosmeticsConsole)
namespace GlobalNamespace {
class AvatarMirror;
}
namespace GlobalNamespace {
class CosmeticFilter;
}
namespace GlobalNamespace {
class OwnedCosmeticsDisplay;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __OwnedCosmeticsConsole____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __OwnedCosmeticsConsole____c__DisplayClass19_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OwnedCosmeticsConsole;
}
namespace GlobalNamespace {
class __OwnedCosmeticsConsole____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __OwnedCosmeticsConsole____c__DisplayClass19_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OwnedCosmeticsConsole);
MARK_REF_PTR_T(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1);
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OwnedCosmeticsConsole::<>c__DisplayClass19_0*
class CORDL_TYPE __OwnedCosmeticsConsole____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> __4__this;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0* New_ctor();

  /// @brief Method <Initialize>b__0, addr 0x154f704, size 0x24, virtual false, abstract: false, final false
  inline void _Initialize_b__0();

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x154e810, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OwnedCosmeticsConsole____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OwnedCosmeticsConsole____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OwnedCosmeticsConsole____c__DisplayClass19_0(__OwnedCosmeticsConsole____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OwnedCosmeticsConsole____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OwnedCosmeticsConsole____c__DisplayClass19_0(__OwnedCosmeticsConsole____c__DisplayClass19_0 const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass19_1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OwnedCosmeticsConsole::<>c__DisplayClass19_1*
class CORDL_TYPE __OwnedCosmeticsConsole____c__DisplayClass19_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> __4__this;

  /// @brief Field cosmeticFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticFilter, put = __cordl_internal_set_cosmeticFilter))::GlobalNamespace::CosmeticFilter* cosmeticFilter;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1* New_ctor();

  /// @brief Method <Initialize>b__1, addr 0x154f728, size 0x24, virtual false, abstract: false, final false
  inline void _Initialize_b__1();

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::CosmeticFilter*& __cordl_internal_get_cosmeticFilter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticFilter*> const& __cordl_internal_get_cosmeticFilter() const;

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> value);

  constexpr void __cordl_internal_set_cosmeticFilter(::GlobalNamespace::CosmeticFilter* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x154e818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OwnedCosmeticsConsole____c__DisplayClass19_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OwnedCosmeticsConsole____c__DisplayClass19_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OwnedCosmeticsConsole____c__DisplayClass19_1(__OwnedCosmeticsConsole____c__DisplayClass19_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OwnedCosmeticsConsole____c__DisplayClass19_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OwnedCosmeticsConsole____c__DisplayClass19_1(__OwnedCosmeticsConsole____c__DisplayClass19_1 const&) = delete;

  /// @brief Field cosmeticFilter, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticFilter* ___cosmeticFilter;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OwnedCosmeticsConsole> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1, ___cosmeticFilter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OwnedCosmeticsConsole
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OwnedCosmeticsConsole*
class CORDL_TYPE OwnedCosmeticsConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0;

  using __c__DisplayClass19_1 = ::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1;

  /// @brief Field activeZoneCenter, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_activeZoneCenter, put = __cordl_internal_set_activeZoneCenter))::UnityEngine::Vector3 activeZoneCenter;

  /// @brief Field activeZoneHalfExtents, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_activeZoneHalfExtents, put = __cordl_internal_set_activeZoneHalfExtents))::UnityEngine::Vector3 activeZoneHalfExtents;

  /// @brief Field avatarMirror, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarMirror, put = __cordl_internal_set_avatarMirror))::UnityW<::GlobalNamespace::AvatarMirror> avatarMirror;

  /// @brief Field filterBar, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_filterBar, put = __cordl_internal_set_filterBar))::UnityW<::UnityEngine::GameObject> filterBar;

  /// @brief Field filterButtonContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_filterButtonContainer, put = __cordl_internal_set_filterButtonContainer))::UnityW<::UnityEngine::Transform> filterButtonContainer;

  /// @brief Field filterButtons, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get_filterButtons,
               put = __cordl_internal_set_filterButtons))::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> filterButtons;

  /// @brief Field filterKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_filterKeys, put = __cordl_internal_set_filterKeys))::ArrayW<::StringW, ::Array<::StringW>*> filterKeys;

  /// @brief Field inverseRotation, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_inverseRotation, put = __cordl_internal_set_inverseRotation))::UnityEngine::Quaternion inverseRotation;

  /// @brief Field isActive, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isDockActive, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_isDockActive, put = __cordl_internal_set_isDockActive)) bool isDockActive;

  /// @brief Field isMirrorActive, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_isMirrorActive, put = __cordl_internal_set_isMirrorActive)) bool isMirrorActive;

  /// @brief Field isUsedByMasterPlayer, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isUsedByMasterPlayer, put = __cordl_internal_set_isUsedByMasterPlayer)) bool isUsedByMasterPlayer;

  /// @brief Field nextOccupyingUserCheckTime, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_nextOccupyingUserCheckTime, put = __cordl_internal_set_nextOccupyingUserCheckTime)) float_t nextOccupyingUserCheckTime;

  /// @brief Field occupyingUserID, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_occupyingUserID, put = __cordl_internal_set_occupyingUserID))::StringW occupyingUserID;

  /// @brief Field ownedCosmeticsDisplay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ownedCosmeticsDisplay, put = __cordl_internal_set_ownedCosmeticsDisplay))::UnityW<::GlobalNamespace::OwnedCosmeticsDisplay> ownedCosmeticsDisplay;

  /// @brief Field selectedFilter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_selectedFilter, put = setStaticF_selectedFilter))::GlobalNamespace::CosmeticFilter* selectedFilter;

  /// @brief Field selectedFilterIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_selectedFilterIndex, put = setStaticF_selectedFilterIndex)) int32_t selectedFilterIndex;

  /// @brief Field switchFilterSoundKey, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_switchFilterSoundKey, put = __cordl_internal_set_switchFilterSoundKey))::StringW switchFilterSoundKey;

  /// @brief Method CalculateOccupyingUser, addr 0x154eb44, size 0x404, virtual false, abstract: false, final false
  inline ::StringW CalculateOccupyingUser();

  /// @brief Method Initialize, addr 0x154e1d0, size 0x640, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method IsPlayerWithinZone, addr 0x154f2a8, size 0xdc, virtual false, abstract: false, final false
  inline bool IsPlayerWithinZone(::GlobalNamespace::Player* player);

  static inline ::GlobalNamespace::OwnedCosmeticsConsole* New_ctor();

  /// @brief Method OnFilterButtonPressed, addr 0x154e890, size 0xe8, virtual false, abstract: false, final false
  inline void OnFilterButtonPressed(int32_t index, ::GlobalNamespace::CosmeticFilter* filter);

  /// @brief Method RefreshDockActive, addr 0x154f13c, size 0xec, virtual false, abstract: false, final false
  inline void RefreshDockActive(bool forceSet);

  /// @brief Method RefreshMirrorActive, addr 0x154f0d0, size 0x6c, virtual false, abstract: false, final false
  inline void RefreshMirrorActive(bool forceSet);

  /// @brief Method SetActive, addr 0x154eaa4, size 0xa0, virtual false, abstract: false, final false
  inline void SetActive(bool newActive, bool forceSet);

  /// @brief Method SetOccupyingUserID, addr 0x154ef48, size 0x188, virtual false, abstract: false, final false
  inline void SetOccupyingUserID(::StringW newOccupyingUserID);

  /// @brief Method SetSelectedFilterIndex, addr 0x154e820, size 0x70, virtual false, abstract: false, final false
  inline void SetSelectedFilterIndex(int32_t index);

  /// @brief Method Update, addr 0x154f228, size 0x80, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_activeZoneCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_activeZoneCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_activeZoneHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_activeZoneHalfExtents();

  constexpr ::UnityW<::GlobalNamespace::AvatarMirror> const& __cordl_internal_get_avatarMirror() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarMirror>& __cordl_internal_get_avatarMirror();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_filterBar() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_filterBar();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_filterButtonContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_filterButtonContainer();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> const& __cordl_internal_get_filterButtons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*>& __cordl_internal_get_filterButtons();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_filterKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_filterKeys();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_inverseRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_inverseRotation();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isDockActive() const;

  constexpr bool& __cordl_internal_get_isDockActive();

  constexpr bool const& __cordl_internal_get_isMirrorActive() const;

  constexpr bool& __cordl_internal_get_isMirrorActive();

  constexpr bool const& __cordl_internal_get_isUsedByMasterPlayer() const;

  constexpr bool& __cordl_internal_get_isUsedByMasterPlayer();

  constexpr float_t const& __cordl_internal_get_nextOccupyingUserCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextOccupyingUserCheckTime();

  constexpr ::StringW const& __cordl_internal_get_occupyingUserID() const;

  constexpr ::StringW& __cordl_internal_get_occupyingUserID();

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsDisplay> const& __cordl_internal_get_ownedCosmeticsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::OwnedCosmeticsDisplay>& __cordl_internal_get_ownedCosmeticsDisplay();

  constexpr ::StringW const& __cordl_internal_get_switchFilterSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_switchFilterSoundKey();

  constexpr void __cordl_internal_set_activeZoneCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_activeZoneHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_avatarMirror(::UnityW<::GlobalNamespace::AvatarMirror> value);

  constexpr void __cordl_internal_set_filterBar(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_filterButtonContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_filterButtons(::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> value);

  constexpr void __cordl_internal_set_filterKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_inverseRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isDockActive(bool value);

  constexpr void __cordl_internal_set_isMirrorActive(bool value);

  constexpr void __cordl_internal_set_isUsedByMasterPlayer(bool value);

  constexpr void __cordl_internal_set_nextOccupyingUserCheckTime(float_t value);

  constexpr void __cordl_internal_set_occupyingUserID(::StringW value);

  constexpr void __cordl_internal_set_ownedCosmeticsDisplay(::UnityW<::GlobalNamespace::OwnedCosmeticsDisplay> value);

  constexpr void __cordl_internal_set_switchFilterSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x154f6ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::CosmeticFilter* getStaticF_selectedFilter();

  static inline int32_t getStaticF_selectedFilterIndex();

  static inline void setStaticF_selectedFilter(::GlobalNamespace::CosmeticFilter* value);

  static inline void setStaticF_selectedFilterIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnedCosmeticsConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OwnedCosmeticsConsole(OwnedCosmeticsConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OwnedCosmeticsConsole(OwnedCosmeticsConsole const&) = delete;

  /// @brief Field avatarMirror, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarMirror> ___avatarMirror;

  /// @brief Field ownedCosmeticsDisplay, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OwnedCosmeticsDisplay> ___ownedCosmeticsDisplay;

  /// @brief Field filterKeys, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___filterKeys;

  /// @brief Field filterBar, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___filterBar;

  /// @brief Field filterButtonContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___filterButtonContainer;

  /// @brief Field filterButtons, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> ___filterButtons;

  /// @brief Field activeZoneCenter, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___activeZoneCenter;

  /// @brief Field activeZoneHalfExtents, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___activeZoneHalfExtents;

  /// @brief Field inverseRotation, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___inverseRotation;

  /// @brief Field nextOccupyingUserCheckTime, offset: 0x70, size: 0x4, def value: None
  float_t ___nextOccupyingUserCheckTime;

  /// @brief Field switchFilterSoundKey, offset: 0x78, size: 0x8, def value: None
  ::StringW ___switchFilterSoundKey;

  /// @brief Field isActive, offset: 0x80, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isDockActive, offset: 0x81, size: 0x1, def value: None
  bool ___isDockActive;

  /// @brief Field isMirrorActive, offset: 0x82, size: 0x1, def value: None
  bool ___isMirrorActive;

  /// @brief Field occupyingUserID, offset: 0x88, size: 0x8, def value: None
  ::StringW ___occupyingUserID;

  /// @brief Field isUsedByMasterPlayer, offset: 0x90, size: 0x1, def value: None
  bool ___isUsedByMasterPlayer;

  /// @brief Field timeBetweenOccupyingUserChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenOccupyingUserChecks{ 0.25 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OwnedCosmeticsConsole, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___avatarMirror) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___ownedCosmeticsDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___filterKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___filterBar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___filterButtonContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___filterButtons) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___activeZoneCenter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___activeZoneHalfExtents) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___inverseRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___nextOccupyingUserCheckTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___switchFilterSoundKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___isActive) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___isDockActive) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___isMirrorActive) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___occupyingUserID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsole, ___isUsedByMasterPlayer) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OwnedCosmeticsConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnedCosmeticsConsole*, "", "OwnedCosmeticsConsole");
NEED_NO_BOX(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_0*, "", "OwnedCosmeticsConsole/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OwnedCosmeticsConsole____c__DisplayClass19_1*, "", "OwnedCosmeticsConsole/<>c__DisplayClass19_1");
