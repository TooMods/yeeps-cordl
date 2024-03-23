#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomsExpansionBlocker)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
class ThemeDisplay;
}
namespace GlobalNamespace {
class __PrivateRoomsExpansionBlocker____c__DisplayClass18_0;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateRoomsExpansionBlocker;
}
namespace GlobalNamespace {
class __PrivateRoomsExpansionBlocker____c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivateRoomsExpansionBlocker);
MARK_REF_PTR_T(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0);
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomsExpansionBlocker::<>c__DisplayClass18_0*
class CORDL_TYPE __PrivateRoomsExpansionBlocker____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> __4__this;

  /// @brief Field accountData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  /// @brief Field roomMapKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roomMapKey, put = __cordl_internal_set_roomMapKey))::StringW roomMapKey;

  /// @brief Field themeKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_themeKey, put = __cordl_internal_set_themeKey))::StringW themeKey;

  static inline ::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0* New_ctor();

  /// @brief Method <TryPurchase>b__0, addr 0xf2008c, size 0x100, virtual false, abstract: false, final false
  inline void _TryPurchase_b__0(int32_t cost);

  /// @brief Method <TryPurchase>b__1, addr 0xf2018c, size 0x1a0, virtual false, abstract: false, final false
  inline void _TryPurchase_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr ::StringW const& __cordl_internal_get_roomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_roomMapKey();

  constexpr ::StringW const& __cordl_internal_get_themeKey() const;

  constexpr ::StringW& __cordl_internal_get_themeKey();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  constexpr void __cordl_internal_set_roomMapKey(::StringW value);

  constexpr void __cordl_internal_set_themeKey(::StringW value);

  /// @brief Method .ctor, addr 0xf1fde4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomsExpansionBlocker____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomsExpansionBlocker____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrivateRoomsExpansionBlocker____c__DisplayClass18_0(__PrivateRoomsExpansionBlocker____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomsExpansionBlocker____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrivateRoomsExpansionBlocker____c__DisplayClass18_0(__PrivateRoomsExpansionBlocker____c__DisplayClass18_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> _____4__this;

  /// @brief Field accountData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field roomMapKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___roomMapKey;

  /// @brief Field themeKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___themeKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0, ___accountData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0, ___roomMapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0, ___themeKey) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PrivateRoomsExpansionBlocker
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomsExpansionBlocker*
class CORDL_TYPE PrivateRoomsExpansionBlocker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0;

  /// @brief Field hasThemeRotation, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_hasThemeRotation, put = __cordl_internal_set_hasThemeRotation)) bool hasThemeRotation;

  /// @brief Field isFetchingThemeRotation, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_isFetchingThemeRotation, put = __cordl_internal_set_isFetchingThemeRotation)) bool isFetchingThemeRotation;

  /// @brief Field isPlayerWithinHallway, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isPlayerWithinHallway, put = __cordl_internal_set_isPlayerWithinHallway)) bool isPlayerWithinHallway;

  /// @brief Field isTryingToPurchase, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isTryingToPurchase, put = __cordl_internal_set_isTryingToPurchase)) bool isTryingToPurchase;

  /// @brief Field playerWithinHallwayContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerWithinHallwayContainer,
                      put = __cordl_internal_set_playerWithinHallwayContainer))::UnityW<::UnityEngine::GameObject> playerWithinHallwayContainer;

  /// @brief Field spacingBetweenThemeDisplays, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_spacingBetweenThemeDisplays, put = __cordl_internal_set_spacingBetweenThemeDisplays)) float_t spacingBetweenThemeDisplays;

  /// @brief Field themeDisplayContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_themeDisplayContainer, put = __cordl_internal_set_themeDisplayContainer))::UnityW<::UnityEngine::Transform> themeDisplayContainer;

  /// @brief Field themeDisplayPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_themeDisplayPrefab, put = __cordl_internal_set_themeDisplayPrefab))::UnityW<::UnityEngine::GameObject> themeDisplayPrefab;

  /// @brief Field themeDisplays, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_themeDisplays,
                      put = __cordl_internal_set_themeDisplays))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThemeDisplay>>* themeDisplays;

  /// @brief Field themeRotation, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get_themeRotation, put = __cordl_internal_set_themeRotation))::GlobalNamespace::GlobalRotation themeRotation;

  /// @brief Field travelDirection, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_travelDirection, put = __cordl_internal_set_travelDirection))::GlobalNamespace::__RoomManager__TravelDirection travelDirection;

  /// @brief Method ClearThemeDisplays, addr 0xf1f054, size 0x194, virtual false, abstract: false, final false
  inline void ClearThemeDisplays();

  /// @brief Method GenerateThemeDisplays, addr 0xf1ed40, size 0x314, virtual false, abstract: false, final false
  inline void GenerateThemeDisplays();

  /// @brief Method Initialize, addr 0xf1eb8c, size 0x8, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__RoomManager__TravelDirection travelDirection);

  static inline ::GlobalNamespace::PrivateRoomsExpansionBlocker* New_ctor();

  /// @brief Method SetHasPriceTag, addr 0xf1f1e8, size 0x154, virtual false, abstract: false, final false
  inline void SetHasPriceTag(bool newHasPriceTag);

  /// @brief Method SetIsPlayerWithinHallway, addr 0xf1ebb4, size 0x18c, virtual false, abstract: false, final false
  inline void SetIsPlayerWithinHallway(bool newIsPlayerWithinHallway);

  /// @brief Method SetLayer, addr 0xf1eb94, size 0x20, virtual false, abstract: false, final false
  inline void SetLayer(int32_t layer);

  /// @brief Method TryPurchase, addr 0xf1fa04, size 0x3e0, virtual false, abstract: false, final false
  inline void TryPurchase(::StringW themeKey, int32_t expectedPrice);

  /// @brief Method <SetIsPlayerWithinHallway>b__13_0, addr 0xf1fe74, size 0xa4, virtual false, abstract: false, final false
  inline void _SetIsPlayerWithinHallway_b__13_0(::GlobalNamespace::GlobalRotation themeRoation);

  /// @brief Method <SetIsPlayerWithinHallway>b__13_1, addr 0xf1ff18, size 0x174, virtual false, abstract: false, final false
  inline void _SetIsPlayerWithinHallway_b__13_1(::StringW error);

  constexpr bool const& __cordl_internal_get_hasThemeRotation() const;

  constexpr bool& __cordl_internal_get_hasThemeRotation();

  constexpr bool const& __cordl_internal_get_isFetchingThemeRotation() const;

  constexpr bool& __cordl_internal_get_isFetchingThemeRotation();

  constexpr bool const& __cordl_internal_get_isPlayerWithinHallway() const;

  constexpr bool& __cordl_internal_get_isPlayerWithinHallway();

  constexpr bool const& __cordl_internal_get_isTryingToPurchase() const;

  constexpr bool& __cordl_internal_get_isTryingToPurchase();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerWithinHallwayContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerWithinHallwayContainer();

  constexpr float_t const& __cordl_internal_get_spacingBetweenThemeDisplays() const;

  constexpr float_t& __cordl_internal_get_spacingBetweenThemeDisplays();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_themeDisplayContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_themeDisplayContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_themeDisplayPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_themeDisplayPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThemeDisplay>>*& __cordl_internal_get_themeDisplays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThemeDisplay>>*> const& __cordl_internal_get_themeDisplays() const;

  constexpr ::GlobalNamespace::GlobalRotation const& __cordl_internal_get_themeRotation() const;

  constexpr ::GlobalNamespace::GlobalRotation& __cordl_internal_get_themeRotation();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_travelDirection() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_travelDirection();

  constexpr void __cordl_internal_set_hasThemeRotation(bool value);

  constexpr void __cordl_internal_set_isFetchingThemeRotation(bool value);

  constexpr void __cordl_internal_set_isPlayerWithinHallway(bool value);

  constexpr void __cordl_internal_set_isTryingToPurchase(bool value);

  constexpr void __cordl_internal_set_playerWithinHallwayContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_spacingBetweenThemeDisplays(float_t value);

  constexpr void __cordl_internal_set_themeDisplayContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_themeDisplayPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_themeDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThemeDisplay>>* value);

  constexpr void __cordl_internal_set_themeRotation(::GlobalNamespace::GlobalRotation value);

  constexpr void __cordl_internal_set_travelDirection(::GlobalNamespace::__RoomManager__TravelDirection value);

  /// @brief Method .ctor, addr 0xf1fdec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomsExpansionBlocker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomsExpansionBlocker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateRoomsExpansionBlocker(PrivateRoomsExpansionBlocker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomsExpansionBlocker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateRoomsExpansionBlocker(PrivateRoomsExpansionBlocker const&) = delete;

  /// @brief Field playerWithinHallwayContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___playerWithinHallwayContainer;

  /// @brief Field themeDisplayContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___themeDisplayContainer;

  /// @brief Field themeDisplayPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___themeDisplayPrefab;

  /// @brief Field themeDisplays, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThemeDisplay>>* ___themeDisplays;

  /// @brief Field spacingBetweenThemeDisplays, offset: 0x38, size: 0x4, def value: None
  float_t ___spacingBetweenThemeDisplays;

  /// @brief Field isFetchingThemeRotation, offset: 0x3c, size: 0x1, def value: None
  bool ___isFetchingThemeRotation;

  /// @brief Field hasThemeRotation, offset: 0x3d, size: 0x1, def value: None
  bool ___hasThemeRotation;

  /// @brief Field themeRotation, offset: 0x40, size: 0x28, def value: None
  ::GlobalNamespace::GlobalRotation ___themeRotation;

  /// @brief Field isPlayerWithinHallway, offset: 0x68, size: 0x1, def value: None
  bool ___isPlayerWithinHallway;

  /// @brief Field travelDirection, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___travelDirection;

  /// @brief Field isTryingToPurchase, offset: 0x70, size: 0x1, def value: None
  bool ___isTryingToPurchase;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Private Rooms Expansion Blocker: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomsExpansionBlocker, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___playerWithinHallwayContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___themeDisplayContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___themeDisplayPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___themeDisplays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___spacingBetweenThemeDisplays) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___isFetchingThemeRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___hasThemeRotation) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___themeRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___isPlayerWithinHallway) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___travelDirection) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsExpansionBlocker, ___isTryingToPurchase) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivateRoomsExpansionBlocker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomsExpansionBlocker*, "", "PrivateRoomsExpansionBlocker");
NEED_NO_BOX(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomsExpansionBlocker____c__DisplayClass18_0*, "", "PrivateRoomsExpansionBlocker/<>c__DisplayClass18_0");
