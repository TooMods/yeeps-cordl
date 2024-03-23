#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ATM_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATM)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class PurchaseCurrencyItem;
}
namespace GlobalNamespace {
struct __ATM__Location;
}
namespace GlobalNamespace {
class __ATM____c;
}
namespace GlobalNamespace {
class __ATM____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __AccountManager__OnCurrencyAddedFailure;
}
namespace GlobalNamespace {
class __IAPManager__OnPurchaseFailure;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ATM__Location;
}
namespace GlobalNamespace {
class ATM;
}
namespace GlobalNamespace {
class __ATM____c;
}
namespace GlobalNamespace {
class __ATM____c__DisplayClass13_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ATM__Location);
MARK_REF_PTR_T(::GlobalNamespace::ATM);
MARK_REF_PTR_T(::GlobalNamespace::__ATM____c);
MARK_REF_PTR_T(::GlobalNamespace::__ATM____c__DisplayClass13_0);
// Type: ::Location
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ATM::Location
struct CORDL_TYPE __ATM__Location {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ATM__Location_Unwrapped
  enum struct ____ATM__Location_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_cosmeticsStore = static_cast<int32_t>(0x1),
    __E_techWeb = static_cast<int32_t>(0x2),
    __E_lobby = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ATM__Location_Unwrapped() const noexcept {
    return static_cast<____ATM__Location_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ATM__Location();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ATM__Location(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field cosmeticsStore value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ATM__Location const cosmeticsStore;

  /// @brief Field lobby value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ATM__Location const lobby;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ATM__Location const none;

  /// @brief Field techWeb value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ATM__Location const techWeb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ATM__Location, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ATM__Location, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ATM::<>c*
class CORDL_TYPE __ATM____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ATM____c* __9;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::GlobalNamespace::__IAPManager__OnPurchaseFailure* __9__12_1;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1))::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* __9__13_1;

  static inline ::GlobalNamespace::__ATM____c* New_ctor();

  /// @brief Method <OnAddCurrencyButtonPressed>b__12_1, addr 0x1540c1c, size 0x4, virtual false, abstract: false, final false
  inline void _OnAddCurrencyButtonPressed_b__12_1();

  /// @brief Method <OnResetCurrencyButtonPressed>b__13_1, addr 0x1540c20, size 0x120, virtual false, abstract: false, final false
  inline void _OnResetCurrencyButtonPressed_b__13_1(::StringW error);

  /// @brief Method .ctor, addr 0x1540c14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ATM____c* getStaticF___9();

  static inline ::GlobalNamespace::__IAPManager__OnPurchaseFailure* getStaticF___9__12_1();

  static inline ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* getStaticF___9__13_1();

  static inline void setStaticF___9(::GlobalNamespace::__ATM____c* value);

  static inline void setStaticF___9__12_1(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value);

  static inline void setStaticF___9__13_1(::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ATM____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ATM____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ATM____c(__ATM____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ATM____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ATM____c(__ATM____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ATM____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ATM::<>c__DisplayClass13_0*
class CORDL_TYPE __ATM____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ATM> __4__this;

  /// @brief Field accountData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__ATM____c__DisplayClass13_0* New_ctor();

  /// @brief Method <OnResetCurrencyButtonPressed>b__0, addr 0x1540f2c, size 0xe0, virtual false, abstract: false, final false
  inline void _OnResetCurrencyButtonPressed_b__0(int32_t newAmount);

  constexpr ::UnityW<::GlobalNamespace::ATM> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ATM>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ATM> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0x1540a80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ATM____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ATM____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ATM____c__DisplayClass13_0(__ATM____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ATM____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ATM____c__DisplayClass13_0(__ATM____c__DisplayClass13_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ATM> _____4__this;

  /// @brief Field accountData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ATM____c__DisplayClass13_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ATM____c__DisplayClass13_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ATM____c__DisplayClass13_0, ___accountData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ATM
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ATM*
class CORDL_TYPE ATM : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Location = ::GlobalNamespace::__ATM__Location;

  using __c = ::GlobalNamespace::__ATM____c;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__ATM____c__DisplayClass13_0;

  /// @brief Field activeContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field dispensePoint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_dispensePoint, put = __cordl_internal_set_dispensePoint))::UnityW<::UnityEngine::Transform> dispensePoint;

  /// @brief Field dispenseSoundKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dispenseSoundKey, put = __cordl_internal_set_dispenseSoundKey))::StringW dispenseSoundKey;

  /// @brief Field location, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location))::GlobalNamespace::__ATM__Location location;

  /// @brief Field purchaseCurrencyItems, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_purchaseCurrencyItems,
      put = __cordl_internal_set_purchaseCurrencyItems))::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> purchaseCurrencyItems;

  /// @brief Field resetCurrencyButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_resetCurrencyButton, put = __cordl_internal_set_resetCurrencyButton))::UnityW<::UnityEngine::GameObject> resetCurrencyButton;

  /// @brief Method DestroySelf, addr 0x1540310, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  static inline ::GlobalNamespace::ATM* New_ctor();

  /// @brief Method OnAddCurrencyButtonPressed, addr 0x1540568, size 0x21c, virtual false, abstract: false, final false
  inline void OnAddCurrencyButtonPressed(::StringW IAPKey);

  /// @brief Method OnDisable, addr 0x1540120, size 0x1f0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x153fef0, size 0x218, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnResetCurrencyButtonPressed, addr 0x15408c0, size 0x1c0, virtual false, abstract: false, final false
  inline void OnResetCurrencyButtonPressed();

  /// @brief Method SetActive, addr 0x1540108, size 0x18, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method Start, addr 0x154037c, size 0x1ec, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <OnAddCurrencyButtonPressed>b__12_0, addr 0x1540a90, size 0x120, virtual false, abstract: false, final false
  inline void _OnAddCurrencyButtonPressed_b__12_0(int32_t amountAdded);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dispensePoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dispensePoint();

  constexpr ::StringW const& __cordl_internal_get_dispenseSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_dispenseSoundKey();

  constexpr ::GlobalNamespace::__ATM__Location const& __cordl_internal_get_location() const;

  constexpr ::GlobalNamespace::__ATM__Location& __cordl_internal_get_location();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> const& __cordl_internal_get_purchaseCurrencyItems() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*>& __cordl_internal_get_purchaseCurrencyItems();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_resetCurrencyButton() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_resetCurrencyButton();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_dispensePoint(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_dispenseSoundKey(::StringW value);

  constexpr void __cordl_internal_set_location(::GlobalNamespace::__ATM__Location value);

  constexpr void __cordl_internal_set_purchaseCurrencyItems(::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> value);

  constexpr void __cordl_internal_set_resetCurrencyButton(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x1540a88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATM();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ATM", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ATM(ATM&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ATM", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ATM(ATM const&) = delete;

  /// @brief Field location, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__ATM__Location ___location;

  /// @brief Field activeContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field dispensePoint, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___dispensePoint;

  /// @brief Field purchaseCurrencyItems, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> ___purchaseCurrencyItems;

  /// @brief Field resetCurrencyButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___resetCurrencyButton;

  /// @brief Field dispenseSoundKey, offset: 0x40, size: 0x8, def value: None
  ::StringW ___dispenseSoundKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ATM, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___activeContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___dispensePoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___purchaseCurrencyItems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___resetCurrencyButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM, ___dispenseSoundKey) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ATM__Location, "", "ATM/Location");
NEED_NO_BOX(::GlobalNamespace::ATM);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ATM*, "", "ATM");
NEED_NO_BOX(::GlobalNamespace::__ATM____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ATM____c*, "", "ATM/<>c");
NEED_NO_BOX(::GlobalNamespace::__ATM____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ATM____c__DisplayClass13_0*, "", "ATM/<>c__DisplayClass13_0");
