#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomsEntranceBlocker)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
class __PrivateRoomsEntranceBlocker____c__DisplayClass20_0;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateRoomsEntranceBlocker;
}
namespace GlobalNamespace {
class __PrivateRoomsEntranceBlocker____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivateRoomsEntranceBlocker);
MARK_REF_PTR_T(::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0);
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomsEntranceBlocker::<>c__DisplayClass20_0*
class CORDL_TYPE __PrivateRoomsEntranceBlocker____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> __4__this;

  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0* New_ctor();

  /// @brief Method <TryPurchase>b__0, addr 0xf1e958, size 0x88, virtual false, abstract: false, final false
  inline void _TryPurchase_b__0(int32_t cost);

  /// @brief Method <TryPurchase>b__1, addr 0xf1e9e0, size 0x1ac, virtual false, abstract: false, final false
  inline void _TryPurchase_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0xf1e728, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomsEntranceBlocker____c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomsEntranceBlocker____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrivateRoomsEntranceBlocker____c__DisplayClass20_0(__PrivateRoomsEntranceBlocker____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomsEntranceBlocker____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrivateRoomsEntranceBlocker____c__DisplayClass20_0(__PrivateRoomsEntranceBlocker____c__DisplayClass20_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0, ___accountData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PrivateRoomsEntranceBlocker
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomsEntranceBlocker*
class CORDL_TYPE PrivateRoomsEntranceBlocker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass20_0 = ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0;

  /// @brief Field activeContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field blockingCollider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_blockingCollider, put = __cordl_internal_set_blockingCollider))::UnityW<::UnityEngine::Collider> blockingCollider;

  /// @brief Field curPriceTag, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curPriceTag, put = __cordl_internal_set_curPriceTag))::UnityW<::GlobalNamespace::PriceTag> curPriceTag;

  /// @brief Field hasUnlockedPrivateRooms, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_hasUnlockedPrivateRooms, put = __cordl_internal_set_hasUnlockedPrivateRooms)) bool hasUnlockedPrivateRooms;

  /// @brief Field isActive, offset 0x47, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isFetchingPrice, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_isFetchingPrice, put = __cordl_internal_set_isFetchingPrice)) bool isFetchingPrice;

  /// @brief Field isTargetingSelf, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_isTargetingSelf, put = __cordl_internal_set_isTargetingSelf)) bool isTargetingSelf;

  /// @brief Field playerWithinHallwayContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_playerWithinHallwayContainer,
                      put = __cordl_internal_set_playerWithinHallwayContainer))::UnityW<::UnityEngine::GameObject> playerWithinHallwayContainer;

  /// @brief Field price, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_price, put = __cordl_internal_set_price)) int32_t price;

  /// @brief Field priceTagAnchor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_priceTagAnchor, put = __cordl_internal_set_priceTagAnchor))::UnityW<::UnityEngine::Transform> priceTagAnchor;

  static inline ::GlobalNamespace::PrivateRoomsEntranceBlocker* New_ctor();

  /// @brief Method OnDisable, addr 0xf1df3c, size 0x190, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf1dce0, size 0x23c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHasUnlockedPrivateRoomsUpdated, addr 0xf1e14c, size 0x20, virtual false, abstract: false, final false
  inline void OnHasUnlockedPrivateRoomsUpdated(bool newHasUnlockedPrivateRooms);

  /// @brief Method OnPrivateRoomTargetAccountIDUpdated, addr 0xf1e0cc, size 0x80, virtual false, abstract: false, final false
  inline void OnPrivateRoomTargetAccountIDUpdated(::StringW newAccountID);

  /// @brief Method RefreshActive, addr 0xf1df1c, size 0x20, virtual false, abstract: false, final false
  inline void RefreshActive();

  /// @brief Method RefreshHasPriceTag, addr 0xf1e370, size 0x20, virtual false, abstract: false, final false
  inline void RefreshHasPriceTag();

  /// @brief Method SetActive, addr 0xf1e16c, size 0x1ec, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetHasPriceTag, addr 0xf1e390, size 0x220, virtual false, abstract: false, final false
  inline void SetHasPriceTag(bool newHasPriceTag);

  /// @brief Method SetIsPlayerWithinHallway, addr 0xf1e358, size 0x18, virtual false, abstract: false, final false
  inline void SetIsPlayerWithinHallway(bool newIsPlayerWithinHallway);

  /// @brief Method TryPurchase, addr 0xf1e5b0, size 0x178, virtual false, abstract: false, final false
  inline void TryPurchase();

  /// @brief Method <SetActive>b__17_0, addr 0xf1e740, size 0xa4, virtual false, abstract: false, final false
  inline void _SetActive_b__17_0(int32_t newPrice);

  /// @brief Method <SetActive>b__17_1, addr 0xf1e7e4, size 0x174, virtual false, abstract: false, final false
  inline void _SetActive_b__17_1(::StringW error);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_blockingCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_blockingCollider();

  constexpr ::UnityW<::GlobalNamespace::PriceTag> const& __cordl_internal_get_curPriceTag() const;

  constexpr ::UnityW<::GlobalNamespace::PriceTag>& __cordl_internal_get_curPriceTag();

  constexpr bool const& __cordl_internal_get_hasUnlockedPrivateRooms() const;

  constexpr bool& __cordl_internal_get_hasUnlockedPrivateRooms();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isFetchingPrice() const;

  constexpr bool& __cordl_internal_get_isFetchingPrice();

  constexpr bool const& __cordl_internal_get_isTargetingSelf() const;

  constexpr bool& __cordl_internal_get_isTargetingSelf();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerWithinHallwayContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerWithinHallwayContainer();

  constexpr int32_t const& __cordl_internal_get_price() const;

  constexpr int32_t& __cordl_internal_get_price();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_priceTagAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_priceTagAnchor();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_blockingCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value);

  constexpr void __cordl_internal_set_hasUnlockedPrivateRooms(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isFetchingPrice(bool value);

  constexpr void __cordl_internal_set_isTargetingSelf(bool value);

  constexpr void __cordl_internal_set_playerWithinHallwayContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_price(int32_t value);

  constexpr void __cordl_internal_set_priceTagAnchor(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0xf1e730, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomsEntranceBlocker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomsEntranceBlocker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateRoomsEntranceBlocker(PrivateRoomsEntranceBlocker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomsEntranceBlocker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateRoomsEntranceBlocker(PrivateRoomsEntranceBlocker const&) = delete;

  /// @brief Field blockingCollider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___blockingCollider;

  /// @brief Field activeContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field playerWithinHallwayContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___playerWithinHallwayContainer;

  /// @brief Field priceTagAnchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___priceTagAnchor;

  /// @brief Field curPriceTag, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PriceTag> ___curPriceTag;

  /// @brief Field price, offset: 0x40, size: 0x4, def value: None
  int32_t ___price;

  /// @brief Field isFetchingPrice, offset: 0x44, size: 0x1, def value: None
  bool ___isFetchingPrice;

  /// @brief Field isTargetingSelf, offset: 0x45, size: 0x1, def value: None
  bool ___isTargetingSelf;

  /// @brief Field hasUnlockedPrivateRooms, offset: 0x46, size: 0x1, def value: None
  bool ___hasUnlockedPrivateRooms;

  /// @brief Field isActive, offset: 0x47, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Private Rooms Entrance Blocker: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomsEntranceBlocker, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___blockingCollider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___activeContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___playerWithinHallwayContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___priceTagAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___curPriceTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___price) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___isFetchingPrice) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___isTargetingSelf) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___hasUnlockedPrivateRooms) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomsEntranceBlocker, ___isActive) == 0x47, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivateRoomsEntranceBlocker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomsEntranceBlocker*, "", "PrivateRoomsEntranceBlocker");
NEED_NO_BOX(::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*, "", "PrivateRoomsEntranceBlocker/<>c__DisplayClass20_0");
