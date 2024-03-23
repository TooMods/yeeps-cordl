#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PatternThoughtBubble_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TechWebThoughtBubble)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
class __TechWebThoughtBubble__OnIsOwnedUpdated;
}
namespace GlobalNamespace {
class __TechWebThoughtBubble____c__DisplayClass49_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TechWebThoughtBubble;
}
namespace GlobalNamespace {
class __TechWebThoughtBubble__OnIsOwnedUpdated;
}
namespace GlobalNamespace {
class __TechWebThoughtBubble____c__DisplayClass49_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TechWebThoughtBubble);
MARK_REF_PTR_T(::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0);
// Type: ::OnIsOwnedUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWebThoughtBubble::OnIsOwnedUpdated*
class CORDL_TYPE __TechWebThoughtBubble__OnIsOwnedUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x105d300, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsOwned, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x105d388, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x105d2e8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsOwned);

  static inline ::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x105d224, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TechWebThoughtBubble__OnIsOwnedUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TechWebThoughtBubble__OnIsOwnedUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TechWebThoughtBubble__OnIsOwnedUpdated(__TechWebThoughtBubble__OnIsOwnedUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TechWebThoughtBubble__OnIsOwnedUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TechWebThoughtBubble__OnIsOwnedUpdated(__TechWebThoughtBubble__OnIsOwnedUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWebThoughtBubble::<>c__DisplayClass49_0*
class CORDL_TYPE __TechWebThoughtBubble____c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::TechWebThoughtBubble> __4__this;

  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0* New_ctor();

  /// @brief Method <TryPurchase>b__0, addr 0x105d39c, size 0xa0, virtual false, abstract: false, final false
  inline void _TryPurchase_b__0(int32_t cost, int32_t currencyValueIndex);

  /// @brief Method <TryPurchase>b__1, addr 0x105d43c, size 0x144, virtual false, abstract: false, final false
  inline void _TryPurchase_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TechWebThoughtBubble> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0x105d394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TechWebThoughtBubble____c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TechWebThoughtBubble____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TechWebThoughtBubble____c__DisplayClass49_0(__TechWebThoughtBubble____c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TechWebThoughtBubble____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TechWebThoughtBubble____c__DisplayClass49_0(__TechWebThoughtBubble____c__DisplayClass49_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TechWebThoughtBubble> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0, ___accountData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TechWebThoughtBubble
// SizeInfo { instance_size: 584, native_size: -1, calculated_instance_size: 584, calculated_native_size: 584, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWebThoughtBubble*
class CORDL_TYPE TechWebThoughtBubble : public ::GlobalNamespace::PatternThoughtBubble {
public:
  // Declarations
  using OnIsOwnedUpdated = ::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated;

  using __c__DisplayClass49_0 = ::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0;

  /// @brief Field <connections>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__connections_k__BackingField,
                      put = __cordl_internal_set__connections_k__BackingField))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* _connections_k__BackingField;

  /// @brief Field <isOwned>k__BackingField, offset 0x219, size 0x1
  __declspec(property(get = __cordl_internal_get__isOwned_k__BackingField, put = __cordl_internal_set__isOwned_k__BackingField)) bool _isOwned_k__BackingField;

  /// @brief Field <isReachable>k__BackingField, offset 0x218, size 0x1
  __declspec(property(get = __cordl_internal_get__isReachable_k__BackingField, put = __cordl_internal_set__isReachable_k__BackingField)) bool _isReachable_k__BackingField;

  /// @brief Field <webPosition>k__BackingField, offset 0x224, size 0xc
  __declspec(property(get = __cordl_internal_get__webPosition_k__BackingField, put = __cordl_internal_set__webPosition_k__BackingField))::UnityEngine::Vector3 _webPosition_k__BackingField;

  __declspec(property(get = get_connections, put = set_connections))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* connections;

  /// @brief Field curPriceTag, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_curPriceTag, put = __cordl_internal_set_curPriceTag))::UnityW<::GlobalNamespace::PriceTag> curPriceTag;

  /// @brief Field isForceReachable, offset 0x220, size 0x1
  __declspec(property(get = __cordl_internal_get_isForceReachable, put = __cordl_internal_set_isForceReachable)) bool isForceReachable;

  __declspec(property(get = get_isOwned, put = set_isOwned)) bool isOwned;

  __declspec(property(get = get_isReachable, put = set_isReachable)) bool isReachable;

  /// @brief Field isReigsteredToPatternManager, offset 0x230, size 0x1
  __declspec(property(get = __cordl_internal_get_isReigsteredToPatternManager, put = __cordl_internal_set_isReigsteredToPatternManager)) bool isReigsteredToPatternManager;

  /// @brief Field lastCreativeWarningPromptTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_lastCreativeWarningPromptTime, put = setStaticF_lastCreativeWarningPromptTime)) float_t lastCreativeWarningPromptTime;

  /// @brief Field longDistanceConnections, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_longDistanceConnections,
                      put = __cordl_internal_set_longDistanceConnections))::ArrayW<::UnityW<::GlobalNamespace::TechWebThoughtBubble>,
                                                                                   ::Array<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> longDistanceConnections;

  /// @brief Field onIsOwnedUpdatedCallbacks, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsOwnedUpdatedCallbacks,
                      put = __cordl_internal_set_onIsOwnedUpdatedCallbacks))::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated* onIsOwnedUpdatedCallbacks;

  /// @brief Field patternKey, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_patternKey, put = __cordl_internal_set_patternKey))::StringW patternKey;

  /// @brief Field price, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get_price, put = __cordl_internal_set_price)) int32_t price;

  /// @brief Field priceDivision, offset 0x1f8, size 0x4
  __declspec(property(get = __cordl_internal_get_priceDivision, put = __cordl_internal_set_priceDivision)) int32_t priceDivision;

  /// @brief Field statusIcon, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_statusIcon, put = __cordl_internal_set_statusIcon))::UnityW<::UnityEngine::UI::Image> statusIcon;

  __declspec(property(get = get_webPosition, put = set_webPosition))::UnityEngine::Vector3 webPosition;

  /// @brief Method AddConnections, addr 0xf4b7b4, size 0xc0, virtual false, abstract: false, final false
  inline void AddConnections(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* closeConnections,
                             ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* longConnections);

  /// @brief Method AddLongConnection, addr 0xf4b6c4, size 0xf0, virtual false, abstract: false, final false
  inline void AddLongConnection(::GlobalNamespace::TechWebThoughtBubble* longConnection);

  /// @brief Method DebugTryPurchase, addr 0xf50a00, size 0x84, virtual false, abstract: false, final false
  inline void DebugTryPurchase();

  /// @brief Method DestroySelf, addr 0xf50200, size 0x2c, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method ForceReachable, addr 0xf4bbe8, size 0x1c, virtual false, abstract: false, final false
  inline void ForceReachable();

  static inline ::GlobalNamespace::TechWebThoughtBubble* New_ctor();

  /// @brief Method OnConnectionsComplete, addr 0xf4b97c, size 0x26c, virtual false, abstract: false, final false
  inline void OnConnectionsComplete(::UnityEngine::Quaternion localRotation);

  /// @brief Method OnDisableAdditions, addr 0xf5010c, size 0xf4, virtual true, abstract: false, final false
  inline void OnDisableAdditions();

  /// @brief Method OnEnableAdditions, addr 0xf5000c, size 0x100, virtual true, abstract: false, final false
  inline void OnEnableAdditions();

  /// @brief Method OnOwnedPatternsUpdated, addr 0xf5022c, size 0x2c, virtual false, abstract: false, final false
  inline void OnOwnedPatternsUpdated();

  /// @brief Method OnPriceTagSelected, addr 0xf508e8, size 0x118, virtual false, abstract: false, final false
  inline void OnPriceTagSelected();

  /// @brief Method RefreshIsReachable, addr 0xf5027c, size 0x1ac, virtual false, abstract: false, final false
  inline void RefreshIsReachable(bool neighborBecameOwned);

  /// @brief Method RefreshPriceTag, addr 0xf50428, size 0x14c, virtual false, abstract: false, final false
  inline void RefreshPriceTag();

  /// @brief Method SetHasHoveredPriceTag, addr 0xf508dc, size 0xc, virtual false, abstract: false, final false
  inline void SetHasHoveredPriceTag(bool newHasHoveredPriceTag);

  /// @brief Method SetHasPriceTag, addr 0xf505a4, size 0x338, virtual false, abstract: false, final false
  inline void SetHasPriceTag(bool newHasPriceTag);

  /// @brief Method SetOwned, addr 0xf4fd9c, size 0x270, virtual false, abstract: false, final false
  inline void SetOwned(bool newIsOwned);

  /// @brief Method SetPrice, addr 0xf4b6a8, size 0x1c, virtual false, abstract: false, final false
  inline void SetPrice(int32_t price);

  /// @brief Method SetReachable, addr 0xf50258, size 0x24, virtual false, abstract: false, final false
  inline void SetReachable(bool newIsReachable);

  /// @brief Method SetWebPosition, addr 0xf4b698, size 0x10, virtual false, abstract: false, final false
  inline void SetWebPosition(::UnityEngine::Vector3 webPosition);

  /// @brief Method ShouldBeInteractable, addr 0xf50574, size 0x20, virtual true, abstract: false, final false
  inline bool ShouldBeInteractable();

  /// @brief Method TriggerCraft, addr 0xf50594, size 0x10, virtual true, abstract: false, final false
  inline void TriggerCraft();

  /// @brief Method TryPurchase, addr 0xf50a84, size 0x214, virtual false, abstract: false, final false
  inline void TryPurchase();

  /// @brief Method TryRefund, addr 0xf50c98, size 0xc8, virtual false, abstract: false, final false
  inline void TryRefund();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*& __cordl_internal_get__connections_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> const&
  __cordl_internal_get__connections_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__isOwned_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOwned_k__BackingField();

  constexpr bool const& __cordl_internal_get__isReachable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isReachable_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__webPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__webPosition_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::PriceTag> const& __cordl_internal_get_curPriceTag() const;

  constexpr ::UnityW<::GlobalNamespace::PriceTag>& __cordl_internal_get_curPriceTag();

  constexpr bool const& __cordl_internal_get_isForceReachable() const;

  constexpr bool& __cordl_internal_get_isForceReachable();

  constexpr bool const& __cordl_internal_get_isReigsteredToPatternManager() const;

  constexpr bool& __cordl_internal_get_isReigsteredToPatternManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TechWebThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> const& __cordl_internal_get_longDistanceConnections() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TechWebThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*>& __cordl_internal_get_longDistanceConnections();

  constexpr ::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated*& __cordl_internal_get_onIsOwnedUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated*> const& __cordl_internal_get_onIsOwnedUpdatedCallbacks() const;

  constexpr ::StringW const& __cordl_internal_get_patternKey() const;

  constexpr ::StringW& __cordl_internal_get_patternKey();

  constexpr int32_t const& __cordl_internal_get_price() const;

  constexpr int32_t& __cordl_internal_get_price();

  constexpr int32_t const& __cordl_internal_get_priceDivision() const;

  constexpr int32_t& __cordl_internal_get_priceDivision();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_statusIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_statusIcon();

  constexpr void __cordl_internal_set__connections_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* value);

  constexpr void __cordl_internal_set__isOwned_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isReachable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__webPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value);

  constexpr void __cordl_internal_set_isForceReachable(bool value);

  constexpr void __cordl_internal_set_isReigsteredToPatternManager(bool value);

  constexpr void __cordl_internal_set_longDistanceConnections(::ArrayW<::UnityW<::GlobalNamespace::TechWebThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> value);

  constexpr void __cordl_internal_set_onIsOwnedUpdatedCallbacks(::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated* value);

  constexpr void __cordl_internal_set_patternKey(::StringW value);

  constexpr void __cordl_internal_set_price(int32_t value);

  constexpr void __cordl_internal_set_priceDivision(int32_t value);

  constexpr void __cordl_internal_set_statusIcon(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0xf50d60, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_lastCreativeWarningPromptTime();

  /// @brief Method get_connections, addr 0xf4fd44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* get_connections();

  /// @brief Method get_isOwned, addr 0xf4fd68, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOwned();

  /// @brief Method get_isReachable, addr 0xf4fd54, size 0x8, virtual false, abstract: false, final false
  inline bool get_isReachable();

  /// @brief Method get_webPosition, addr 0xf4fd7c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_webPosition();

  static inline void setStaticF_lastCreativeWarningPromptTime(float_t value);

  /// @brief Method set_connections, addr 0xf4fd4c, size 0x8, virtual false, abstract: false, final false
  inline void set_connections(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* value);

  /// @brief Method set_isOwned, addr 0xf4fd70, size 0xc, virtual false, abstract: false, final false
  inline void set_isOwned(bool value);

  /// @brief Method set_isReachable, addr 0xf4fd5c, size 0xc, virtual false, abstract: false, final false
  inline void set_isReachable(bool value);

  /// @brief Method set_webPosition, addr 0xf4fd8c, size 0x10, virtual false, abstract: false, final false
  inline void set_webPosition(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TechWebThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TechWebThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TechWebThoughtBubble(TechWebThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TechWebThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TechWebThoughtBubble(TechWebThoughtBubble const&) = delete;

  /// @brief Field patternKey, offset: 0x1f0, size: 0x8, def value: None
  ::StringW ___patternKey;

  /// @brief Field priceDivision, offset: 0x1f8, size: 0x4, def value: None
  int32_t ___priceDivision;

  /// @brief Field longDistanceConnections, offset: 0x200, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TechWebThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> ___longDistanceConnections;

  /// @brief Field statusIcon, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___statusIcon;

  /// @brief Field <connections>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* ____connections_k__BackingField;

  /// @brief Field <isReachable>k__BackingField, offset: 0x218, size: 0x1, def value: None
  bool ____isReachable_k__BackingField;

  /// @brief Field <isOwned>k__BackingField, offset: 0x219, size: 0x1, def value: None
  bool ____isOwned_k__BackingField;

  /// @brief Field price, offset: 0x21c, size: 0x4, def value: None
  int32_t ___price;

  /// @brief Field isForceReachable, offset: 0x220, size: 0x1, def value: None
  bool ___isForceReachable;

  /// @brief Field <webPosition>k__BackingField, offset: 0x224, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____webPosition_k__BackingField;

  /// @brief Field isReigsteredToPatternManager, offset: 0x230, size: 0x1, def value: None
  bool ___isReigsteredToPatternManager;

  /// @brief Field onIsOwnedUpdatedCallbacks, offset: 0x238, size: 0x8, def value: None
  ::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated* ___onIsOwnedUpdatedCallbacks;

  /// @brief Field curPriceTag, offset: 0x240, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PriceTag> ___curPriceTag;

  /// @brief Field bubbleRadius offset 0xffffffff size 0x4
  static constexpr float_t bubbleRadius{ 0.075 };

  /// @brief Field creativeWarningPromptCooldown offset 0xffffffff size 0x4
  static constexpr float_t creativeWarningPromptCooldown{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TechWebThoughtBubble, 0x248>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___patternKey) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___priceDivision) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___longDistanceConnections) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___statusIcon) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ____connections_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ____isReachable_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ____isOwned_k__BackingField) == 0x219, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___price) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___isForceReachable) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ____webPosition_k__BackingField) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___isReigsteredToPatternManager) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___onIsOwnedUpdatedCallbacks) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebThoughtBubble, ___curPriceTag) == 0x240, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TechWebThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TechWebThoughtBubble*, "", "TechWebThoughtBubble");
NEED_NO_BOX(::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TechWebThoughtBubble__OnIsOwnedUpdated*, "", "TechWebThoughtBubble/OnIsOwnedUpdated");
NEED_NO_BOX(::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TechWebThoughtBubble____c__DisplayClass49_0*, "", "TechWebThoughtBubble/<>c__DisplayClass49_0");
