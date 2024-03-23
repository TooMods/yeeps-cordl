#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsShopThoughtBubble)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
class __CosmeticsShopThoughtBubble____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
class __PriceTag__OnHovered;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsShopThoughtBubble;
}
namespace GlobalNamespace {
class __CosmeticsShopThoughtBubble____c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsShopThoughtBubble);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0);
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopThoughtBubble::<>c__DisplayClass30_0*
class CORDL_TYPE __CosmeticsShopThoughtBubble____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> __4__this;

  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0* New_ctor();

  /// @brief Method <TryPurchase>b__0, addr 0xf4e16c, size 0xf8, virtual false, abstract: false, final false
  inline void _TryPurchase_b__0(int32_t cost, int32_t currencyValueIndex);

  /// @brief Method <TryPurchase>b__1, addr 0xf4e264, size 0x14c, virtual false, abstract: false, final false
  inline void _TryPurchase_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0xf4e09c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsShopThoughtBubble____c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopThoughtBubble____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsShopThoughtBubble____c__DisplayClass30_0(__CosmeticsShopThoughtBubble____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopThoughtBubble____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsShopThoughtBubble____c__DisplayClass30_0(__CosmeticsShopThoughtBubble____c__DisplayClass30_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0, ___accountData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsShopThoughtBubble
// SizeInfo { instance_size: 504, native_size: -1, calculated_instance_size: 504, calculated_native_size: 504, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopThoughtBubble*
class CORDL_TYPE CosmeticsShopThoughtBubble : public ::GlobalNamespace::ThoughtBubble {
public:
  // Declarations
  using __c__DisplayClass30_0 = ::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0;

  /// @brief Field <isOwned>k__BackingField, offset 0x1d8, size 0x1
  __declspec(property(get = __cordl_internal_get__isOwned_k__BackingField, put = __cordl_internal_set__isOwned_k__BackingField)) bool _isOwned_k__BackingField;

  /// @brief Field curPriceTag, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_curPriceTag, put = __cordl_internal_set_curPriceTag))::UnityW<::GlobalNamespace::PriceTag> curPriceTag;

  __declspec(property(get = get_isOwned, put = set_isOwned)) bool isOwned;

  /// @brief Field isReigsteredToPatternManager, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_isReigsteredToPatternManager, put = __cordl_internal_set_isReigsteredToPatternManager)) bool isReigsteredToPatternManager;

  /// @brief Field itemCustomParameters, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemCustomParameters, put = __cordl_internal_set_itemCustomParameters))::GlobalNamespace::__Item__CustomParameters* itemCustomParameters;

  /// @brief Field itemKey, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemKey, put = __cordl_internal_set_itemKey))::StringW itemKey;

  /// @brief Field onPriceTagHoveredCallback, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_onPriceTagHoveredCallback, put = __cordl_internal_set_onPriceTagHoveredCallback))::GlobalNamespace::__PriceTag__OnHovered* onPriceTagHoveredCallback;

  /// @brief Field patterns, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_patterns, put = __cordl_internal_set_patterns))::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns;

  /// @brief Field poolKey, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_poolKey, put = __cordl_internal_set_poolKey))::StringW poolKey;

  /// @brief Field price, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_price, put = __cordl_internal_set_price)) int32_t price;

  /// @brief Method DebugTryPurchase, addr 0xf4de48, size 0x84, virtual false, abstract: false, final false
  inline void DebugTryPurchase();

  /// @brief Method DestroySelf, addr 0xf4da74, size 0x2c, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method GeneratePreviewObject, addr 0xf4d0bc, size 0x3ac, virtual false, abstract: false, final false
  inline void GeneratePreviewObject();

  /// @brief Method GetPatterns, addr 0xf4d5b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GetPatterns();

  static inline ::GlobalNamespace::CosmeticsShopThoughtBubble* New_ctor();

  /// @brief Method OnDisableAdditions, addr 0xf4d97c, size 0xf8, virtual true, abstract: false, final false
  inline void OnDisableAdditions();

  /// @brief Method OnEnableAdditions, addr 0xf4d878, size 0x104, virtual true, abstract: false, final false
  inline void OnEnableAdditions();

  /// @brief Method OnLateUpdate, addr 0xf4d5c0, size 0x10c, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method OnOwnedPatternsUpdated, addr 0xf4d468, size 0x150, virtual false, abstract: false, final false
  inline void OnOwnedPatternsUpdated();

  /// @brief Method OnPriceTagHovered, addr 0xf4de28, size 0x20, virtual false, abstract: false, final false
  inline void OnPriceTagHovered(bool newHovered);

  /// @brief Method RefreshPriceTag, addr 0xf4db40, size 0x10, virtual false, abstract: false, final false
  inline void RefreshPriceTag();

  /// @brief Method SetHasPriceTag, addr 0xf4db68, size 0x2c0, virtual false, abstract: false, final false
  inline void SetHasPriceTag(bool newHasPriceTag);

  /// @brief Method SetOwned, addr 0xf4daa0, size 0xa0, virtual false, abstract: false, final false
  inline void SetOwned(bool newIsOwned);

  /// @brief Method SetPurchaseData, addr 0xf4cf04, size 0x1b8, virtual false, abstract: false, final false
  inline void SetPurchaseData(int32_t price, ::StringW poolKey, ::StringW itemKey, ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns,
                              ::GlobalNamespace::__PriceTag__OnHovered* onPriceTagHovered);

  /// @brief Method ShouldBeInteractable, addr 0xf4db50, size 0x18, virtual true, abstract: false, final false
  inline bool ShouldBeInteractable();

  /// @brief Method TriggerCraft, addr 0xf4d6cc, size 0x20, virtual true, abstract: false, final false
  inline void TriggerCraft();

  /// @brief Method TryCraftItem, addr 0xf4d6ec, size 0x18c, virtual false, abstract: false, final false
  inline bool TryCraftItem(bool isRightHandGrab, ByRef<::GlobalNamespace::Item*> craftedItem);

  /// @brief Method TryPurchase, addr 0xf4decc, size 0x1d0, virtual false, abstract: false, final false
  inline void TryPurchase();

  /// @brief Method TryRefund, addr 0xf4e0a4, size 0xc0, virtual false, abstract: false, final false
  inline void TryRefund();

  constexpr bool const& __cordl_internal_get__isOwned_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOwned_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::PriceTag> const& __cordl_internal_get_curPriceTag() const;

  constexpr ::UnityW<::GlobalNamespace::PriceTag>& __cordl_internal_get_curPriceTag();

  constexpr bool const& __cordl_internal_get_isReigsteredToPatternManager() const;

  constexpr bool& __cordl_internal_get_isReigsteredToPatternManager();

  constexpr ::GlobalNamespace::__Item__CustomParameters*& __cordl_internal_get_itemCustomParameters();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__CustomParameters*> const& __cordl_internal_get_itemCustomParameters() const;

  constexpr ::StringW const& __cordl_internal_get_itemKey() const;

  constexpr ::StringW& __cordl_internal_get_itemKey();

  constexpr ::GlobalNamespace::__PriceTag__OnHovered*& __cordl_internal_get_onPriceTagHoveredCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PriceTag__OnHovered*> const& __cordl_internal_get_onPriceTagHoveredCallback() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*& __cordl_internal_get_patterns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*> const& __cordl_internal_get_patterns() const;

  constexpr ::StringW const& __cordl_internal_get_poolKey() const;

  constexpr ::StringW& __cordl_internal_get_poolKey();

  constexpr int32_t const& __cordl_internal_get_price() const;

  constexpr int32_t& __cordl_internal_get_price();

  constexpr void __cordl_internal_set__isOwned_k__BackingField(bool value);

  constexpr void __cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value);

  constexpr void __cordl_internal_set_isReigsteredToPatternManager(bool value);

  constexpr void __cordl_internal_set_itemCustomParameters(::GlobalNamespace::__Item__CustomParameters* value);

  constexpr void __cordl_internal_set_itemKey(::StringW value);

  constexpr void __cordl_internal_set_onPriceTagHoveredCallback(::GlobalNamespace::__PriceTag__OnHovered* value);

  constexpr void __cordl_internal_set_patterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value);

  constexpr void __cordl_internal_set_poolKey(::StringW value);

  constexpr void __cordl_internal_set_price(int32_t value);

  /// @brief Method .ctor, addr 0xf4e164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isOwned, addr 0xf4cef0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOwned();

  /// @brief Method set_isOwned, addr 0xf4cef8, size 0xc, virtual false, abstract: false, final false
  inline void set_isOwned(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsShopThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsShopThoughtBubble(CosmeticsShopThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsShopThoughtBubble(CosmeticsShopThoughtBubble const&) = delete;

  /// @brief Field price, offset: 0x1b0, size: 0x4, def value: None
  int32_t ___price;

  /// @brief Field poolKey, offset: 0x1b8, size: 0x8, def value: None
  ::StringW ___poolKey;

  /// @brief Field itemKey, offset: 0x1c0, size: 0x8, def value: None
  ::StringW ___itemKey;

  /// @brief Field patterns, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* ___patterns;

  /// @brief Field itemCustomParameters, offset: 0x1d0, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* ___itemCustomParameters;

  /// @brief Field <isOwned>k__BackingField, offset: 0x1d8, size: 0x1, def value: None
  bool ____isOwned_k__BackingField;

  /// @brief Field onPriceTagHoveredCallback, offset: 0x1e0, size: 0x8, def value: None
  ::GlobalNamespace::__PriceTag__OnHovered* ___onPriceTagHoveredCallback;

  /// @brief Field isReigsteredToPatternManager, offset: 0x1e8, size: 0x1, def value: None
  bool ___isReigsteredToPatternManager;

  /// @brief Field curPriceTag, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PriceTag> ___curPriceTag;

  /// @brief Field previewItemKey offset 0xffffffff size 0x8
  static constexpr ::ConstString previewItemKey{ u"cosmetic" };

  /// @brief Field previewObjectRotationSpeed offset 0xffffffff size 0x4
  static constexpr float_t previewObjectRotationSpeed{ 45.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsShopThoughtBubble, 0x1f8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___price) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___poolKey) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___itemKey) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___patterns) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___itemCustomParameters) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ____isOwned_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___onPriceTagHoveredCallback) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___isReigsteredToPatternManager) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopThoughtBubble, ___curPriceTag) == 0x1f0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsShopThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsShopThoughtBubble*, "", "CosmeticsShopThoughtBubble");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsShopThoughtBubble____c__DisplayClass30_0*, "", "CosmeticsShopThoughtBubble/<>c__DisplayClass30_0");
