#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScrollingPatternLayout_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnedCosmeticsDisplay)
namespace GlobalNamespace {
class CosmeticFilter;
}
namespace GlobalNamespace {
class ItemDespawnZone;
}
namespace GlobalNamespace {
class ScrollingPatternLayout;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__SaveState;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OwnedCosmeticsDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OwnedCosmeticsDisplay);
// Type: ::OwnedCosmeticsDisplay
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OwnedCosmeticsDisplay*
class CORDL_TYPE OwnedCosmeticsDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cosmeticsDespawnZone, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsDespawnZone, put = __cordl_internal_set_cosmeticsDespawnZone))::UnityW<::GlobalNamespace::ItemDespawnZone> cosmeticsDespawnZone;

  /// @brief Field curFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_curFilter, put = __cordl_internal_set_curFilter))::GlobalNamespace::CosmeticFilter* curFilter;

  /// @brief Field filteredSaveStates, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_filteredSaveStates,
      put = setStaticF_filteredSaveStates))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticFilter*, ::GlobalNamespace::__ScrollingPatternLayout__SaveState>* filteredSaveStates;

  /// @brief Field flowAnchor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_flowAnchor, put = __cordl_internal_set_flowAnchor))::UnityW<::UnityEngine::Transform> flowAnchor;

  /// @brief Field flowCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_flowCurve, put = __cordl_internal_set_flowCurve))::UnityEngine::AnimationCurve* flowCurve;

  /// @brief Field flowDirection, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_flowDirection, put = __cordl_internal_set_flowDirection))::UnityEngine::Vector3 flowDirection;

  /// @brief Field flowDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_flowDuration, put = __cordl_internal_set_flowDuration)) float_t flowDuration;

  /// @brief Field flowDurationVariance, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_flowDurationVariance, put = __cordl_internal_set_flowDurationVariance)) float_t flowDurationVariance;

  /// @brief Field isActive, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isRegisteredForOwnedPatternsUpdatedCallbacks, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForOwnedPatternsUpdatedCallbacks,
                      put = __cordl_internal_set_isRegisteredForOwnedPatternsUpdatedCallbacks)) bool isRegisteredForOwnedPatternsUpdatedCallbacks;

  /// @brief Field lastOwnedPatternCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_lastOwnedPatternCount, put = __cordl_internal_set_lastOwnedPatternCount)) int32_t lastOwnedPatternCount;

  /// @brief Field patternLayout, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_patternLayout, put = __cordl_internal_set_patternLayout))::UnityW<::GlobalNamespace::ScrollingPatternLayout> patternLayout;

  /// @brief Field permittedPatternTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_permittedPatternTypes,
                             put = setStaticF_permittedPatternTypes))::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedPatternTypes;

  /// @brief Field unfilteredSaveState, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_unfilteredSaveState, put = setStaticF_unfilteredSaveState))::GlobalNamespace::__ScrollingPatternLayout__SaveState unfilteredSaveState;

  static inline ::GlobalNamespace::OwnedCosmeticsDisplay* New_ctor();

  /// @brief Method OnDisable, addr 0x154fb48, size 0xf0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnOwnedPatternsUpdated, addr 0x154fd94, size 0x10, virtual false, abstract: false, final false
  inline void OnOwnedPatternsUpdated();

  /// @brief Method RefreshPatternLayout, addr 0x154fc38, size 0x15c, virtual false, abstract: false, final false
  inline void RefreshPatternLayout();

  /// @brief Method SetActive, addr 0x154f384, size 0x328, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetFilter, addr 0x154e978, size 0x12c, virtual false, abstract: false, final false
  inline void SetFilter(::GlobalNamespace::CosmeticFilter* filter, bool isSync);

  /// @brief Method Start, addr 0x154fb08, size 0x40, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& __cordl_internal_get_cosmeticsDespawnZone() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& __cordl_internal_get_cosmeticsDespawnZone();

  constexpr ::GlobalNamespace::CosmeticFilter*& __cordl_internal_get_curFilter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticFilter*> const& __cordl_internal_get_curFilter() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_flowAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_flowAnchor();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_flowCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_flowCurve() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_flowDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_flowDirection();

  constexpr float_t const& __cordl_internal_get_flowDuration() const;

  constexpr float_t& __cordl_internal_get_flowDuration();

  constexpr float_t const& __cordl_internal_get_flowDurationVariance() const;

  constexpr float_t& __cordl_internal_get_flowDurationVariance();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isRegisteredForOwnedPatternsUpdatedCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForOwnedPatternsUpdatedCallbacks();

  constexpr int32_t const& __cordl_internal_get_lastOwnedPatternCount() const;

  constexpr int32_t& __cordl_internal_get_lastOwnedPatternCount();

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout> const& __cordl_internal_get_patternLayout() const;

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout>& __cordl_internal_get_patternLayout();

  constexpr void __cordl_internal_set_cosmeticsDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value);

  constexpr void __cordl_internal_set_curFilter(::GlobalNamespace::CosmeticFilter* value);

  constexpr void __cordl_internal_set_flowAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_flowCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_flowDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_flowDuration(float_t value);

  constexpr void __cordl_internal_set_flowDurationVariance(float_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isRegisteredForOwnedPatternsUpdatedCallbacks(bool value);

  constexpr void __cordl_internal_set_lastOwnedPatternCount(int32_t value);

  constexpr void __cordl_internal_set_patternLayout(::UnityW<::GlobalNamespace::ScrollingPatternLayout> value);

  /// @brief Method .ctor, addr 0x154fda4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticFilter*, ::GlobalNamespace::__ScrollingPatternLayout__SaveState>* getStaticF_filteredSaveStates();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* getStaticF_permittedPatternTypes();

  static inline ::GlobalNamespace::__ScrollingPatternLayout__SaveState getStaticF_unfilteredSaveState();

  static inline void setStaticF_filteredSaveStates(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticFilter*, ::GlobalNamespace::__ScrollingPatternLayout__SaveState>* value);

  static inline void setStaticF_permittedPatternTypes(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* value);

  static inline void setStaticF_unfilteredSaveState(::GlobalNamespace::__ScrollingPatternLayout__SaveState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnedCosmeticsDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OwnedCosmeticsDisplay(OwnedCosmeticsDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OwnedCosmeticsDisplay(OwnedCosmeticsDisplay const&) = delete;

  /// @brief Field patternLayout, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScrollingPatternLayout> ___patternLayout;

  /// @brief Field flowAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___flowAnchor;

  /// @brief Field flowDirection, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___flowDirection;

  /// @brief Field flowCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___flowCurve;

  /// @brief Field flowDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___flowDuration;

  /// @brief Field flowDurationVariance, offset: 0x44, size: 0x4, def value: None
  float_t ___flowDurationVariance;

  /// @brief Field cosmeticsDespawnZone, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ItemDespawnZone> ___cosmeticsDespawnZone;

  /// @brief Field isActive, offset: 0x50, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegisteredForOwnedPatternsUpdatedCallbacks, offset: 0x51, size: 0x1, def value: None
  bool ___isRegisteredForOwnedPatternsUpdatedCallbacks;

  /// @brief Field lastOwnedPatternCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___lastOwnedPatternCount;

  /// @brief Field curFilter, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticFilter* ___curFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OwnedCosmeticsDisplay, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___patternLayout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___flowAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___flowDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___flowCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___flowDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___flowDurationVariance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___cosmeticsDespawnZone) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___isActive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___isRegisteredForOwnedPatternsUpdatedCallbacks) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___lastOwnedPatternCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsDisplay, ___curFilter) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OwnedCosmeticsDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnedCosmeticsDisplay*, "", "OwnedCosmeticsDisplay");
