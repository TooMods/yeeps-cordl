#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScrollingPatternLayout_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollingPatternLayout)
namespace GlobalNamespace {
class ClusterThoughtBubble;
}
namespace GlobalNamespace {
class CosmeticFilter;
}
namespace GlobalNamespace {
class ImaginationScrollingArrow;
}
namespace GlobalNamespace {
class PatternThoughtBubble;
}
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__Alignment;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__ClusterData;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__SaveState;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScrollingPatternLayout__Alignment;
}
namespace GlobalNamespace {
class ScrollingPatternLayout;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__ClusterData;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__SaveState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScrollingPatternLayout__Alignment);
MARK_REF_PTR_T(::GlobalNamespace::ScrollingPatternLayout);
MARK_VAL_T(::GlobalNamespace::__ScrollingPatternLayout__ClusterData);
MARK_VAL_T(::GlobalNamespace::__ScrollingPatternLayout__SaveState);
// Type: ::ClusterData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScrollingPatternLayout::ClusterData
struct CORDL_TYPE __ScrollingPatternLayout__ClusterData {
public:
  // Declarations
  __declspec(property(get = get_clusterThoughtBubble, put = set_clusterThoughtBubble))::UnityW<::GlobalNamespace::ClusterThoughtBubble> clusterThoughtBubble;

  __declspec(property(get = get_collectionKey, put = set_collectionKey))::StringW collectionKey;

  __declspec(property(get = get_isForceExpanded, put = set_isForceExpanded)) bool isForceExpanded;

  /// @brief Method .ctor, addr 0xf48dc8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ClusterThoughtBubble* clusterThoughtBubble, bool isForceExpanded);

  /// @brief Method get_clusterThoughtBubble, addr 0xf4a2e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ClusterThoughtBubble> get_clusterThoughtBubble();

  /// @brief Method get_collectionKey, addr 0xf4a2d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_collectionKey();

  /// @brief Method get_isForceExpanded, addr 0xf4a2f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isForceExpanded();

  /// @brief Method set_clusterThoughtBubble, addr 0xf4a2f0, size 0x8, virtual false, abstract: false, final false
  inline void set_clusterThoughtBubble(::GlobalNamespace::ClusterThoughtBubble* value);

  /// @brief Method set_collectionKey, addr 0xf4a2e0, size 0x8, virtual false, abstract: false, final false
  inline void set_collectionKey(::StringW value);

  /// @brief Method set_isForceExpanded, addr 0xf4a300, size 0xc, virtual false, abstract: false, final false
  inline void set_isForceExpanded(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollingPatternLayout__ClusterData();

  // Ctor Parameters [CppParam { name: "_collectionKey_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_clusterThoughtBubble_k__BackingField", ty:
  // "::UnityW<::GlobalNamespace::ClusterThoughtBubble>", modifiers: "", def_value: None }, CppParam { name: "_isForceExpanded_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ScrollingPatternLayout__ClusterData(::StringW _collectionKey_k__BackingField, ::UnityW<::GlobalNamespace::ClusterThoughtBubble> _clusterThoughtBubble_k__BackingField,
                                                  bool _isForceExpanded_k__BackingField) noexcept;

  /// @brief Field <collectionKey>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _collectionKey_k__BackingField;

  /// @brief Field <clusterThoughtBubble>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ClusterThoughtBubble> _clusterThoughtBubble_k__BackingField;

  /// @brief Field <isForceExpanded>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _isForceExpanded_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScrollingPatternLayout__ClusterData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__ClusterData, _collectionKey_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__ClusterData, _clusterThoughtBubble_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__ClusterData, _isForceExpanded_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SaveState
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScrollingPatternLayout::SaveState
struct CORDL_TYPE __ScrollingPatternLayout__SaveState {
public:
  // Declarations
  /// @brief Method .ctor, addr 0xf4a294, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t scrollPosition, ::StringW expandedCollection);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollingPatternLayout__SaveState();

  // Ctor Parameters [CppParam { name: "scrollPosition", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "expandedCollection", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __ScrollingPatternLayout__SaveState(float_t scrollPosition, ::StringW expandedCollection) noexcept;

  /// @brief Field scrollPosition, offset: 0x0, size: 0x4, def value: None
  float_t scrollPosition;

  /// @brief Field expandedCollection, offset: 0x8, size: 0x8, def value: None
  ::StringW expandedCollection;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScrollingPatternLayout__SaveState, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__SaveState, scrollPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__SaveState, expandedCollection) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Alignment
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScrollingPatternLayout::Alignment
struct CORDL_TYPE __ScrollingPatternLayout__Alignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollingPatternLayout__Alignment_Unwrapped
  enum struct ____ScrollingPatternLayout__Alignment_Unwrapped : int32_t {
    __E_top = static_cast<int32_t>(0x0),
    __E_center = static_cast<int32_t>(0x1),
    __E_bottom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollingPatternLayout__Alignment_Unwrapped() const noexcept {
    return static_cast<____ScrollingPatternLayout__Alignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollingPatternLayout__Alignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollingPatternLayout__Alignment(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field bottom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ScrollingPatternLayout__Alignment const bottom;

  /// @brief Field center value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScrollingPatternLayout__Alignment const center;

  /// @brief Field top value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScrollingPatternLayout__Alignment const top;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScrollingPatternLayout__Alignment, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScrollingPatternLayout__Alignment, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScrollingPatternLayout
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 236, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScrollingPatternLayout*
class CORDL_TYPE ScrollingPatternLayout : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Alignment = ::GlobalNamespace::__ScrollingPatternLayout__Alignment;

  using ClusterData = ::GlobalNamespace::__ScrollingPatternLayout__ClusterData;

  using SaveState = ::GlobalNamespace::__ScrollingPatternLayout__SaveState;

  /// @brief Field <isOpen>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__isOpen_k__BackingField, put = __cordl_internal_set__isOpen_k__BackingField)) bool _isOpen_k__BackingField;

  /// @brief Field alignmentWhenNotScrollable, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_alignmentWhenNotScrollable,
                      put = __cordl_internal_set_alignmentWhenNotScrollable))::GlobalNamespace::__ScrollingPatternLayout__Alignment alignmentWhenNotScrollable;

  /// @brief Field allowForceExpandAll, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_allowForceExpandAll, put = __cordl_internal_set_allowForceExpandAll)) bool allowForceExpandAll;

  /// @brief Field changePageSoundKey, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_changePageSoundKey, put = __cordl_internal_set_changePageSoundKey))::StringW changePageSoundKey;

  /// @brief Field changePreviewItemSize, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_changePreviewItemSize, put = __cordl_internal_set_changePreviewItemSize)) bool changePreviewItemSize;

  /// @brief Field clusterDatas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_clusterDatas,
                      put = __cordl_internal_set_clusterDatas))::System::Collections::Generic::List_1<::GlobalNamespace::__ScrollingPatternLayout__ClusterData>* clusterDatas;

  /// @brief Field clusterThoughtBubblePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clusterThoughtBubblePrefab, put = __cordl_internal_set_clusterThoughtBubblePrefab))::UnityW<::UnityEngine::GameObject> clusterThoughtBubblePrefab;

  /// @brief Field disableBubbles, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_disableBubbles, put = __cordl_internal_set_disableBubbles)) bool disableBubbles;

  /// @brief Field expandedCollection, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_expandedCollection, put = __cordl_internal_set_expandedCollection))::StringW expandedCollection;

  /// @brief Field hasLoadedThoughtBubbles, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLoadedThoughtBubbles, put = __cordl_internal_set_hasLoadedThoughtBubbles)) bool hasLoadedThoughtBubbles;

  __declspec(property(get = get_isOpen, put = set_isOpen)) bool isOpen;

  /// @brief Field isScrollableInNegativeDirection, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_isScrollableInNegativeDirection, put = __cordl_internal_set_isScrollableInNegativeDirection)) bool isScrollableInNegativeDirection;

  /// @brief Field isScrollableInPositiveDirection, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isScrollableInPositiveDirection, put = __cordl_internal_set_isScrollableInPositiveDirection)) bool isScrollableInPositiveDirection;

  /// @brief Field negativeScrollArrow, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_negativeScrollArrow, put = __cordl_internal_set_negativeScrollArrow))::UnityW<::GlobalNamespace::ImaginationScrollingArrow> negativeScrollArrow;

  /// @brief Field onItemPulledFromBubbleCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemPulledFromBubbleCallback,
                      put = __cordl_internal_set_onItemPulledFromBubbleCallback))::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemPulledFromBubbleCallback;

  /// @brief Field onTappedCallback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_onTappedCallback, put = __cordl_internal_set_onTappedCallback))::GlobalNamespace::__ThoughtBubble__OnTapped* onTappedCallback;

  /// @brief Field patternThoughtBubblesByCollection, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_patternThoughtBubblesByCollection, put = __cordl_internal_set_patternThoughtBubblesByCollection))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*>* patternThoughtBubblesByCollection;

  /// @brief Field positiveScrollArrow, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_positiveScrollArrow, put = __cordl_internal_set_positiveScrollArrow))::UnityW<::GlobalNamespace::ImaginationScrollingArrow> positiveScrollArrow;

  /// @brief Field previewItemSizeMultiplier, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_previewItemSizeMultiplier, put = __cordl_internal_set_previewItemSizeMultiplier)) float_t previewItemSizeMultiplier;

  /// @brief Field rawScrollSum, offset 0xd8, size 0xc
  __declspec(property(get = __cordl_internal_get_rawScrollSum, put = __cordl_internal_set_rawScrollSum))::UnityEngine::Vector3 rawScrollSum;

  /// @brief Field scrollContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollContainer, put = __cordl_internal_set_scrollContainer))::UnityW<::UnityEngine::Transform> scrollContainer;

  /// @brief Field scrollContainerY, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollContainerY, put = __cordl_internal_set_scrollContainerY)) float_t scrollContainerY;

  /// @brief Field scrollRelativeAnchor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollRelativeAnchor, put = __cordl_internal_set_scrollRelativeAnchor))::UnityW<::UnityEngine::Transform> scrollRelativeAnchor;

  /// @brief Field scrollVelocity, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollVelocity, put = __cordl_internal_set_scrollVelocity)) float_t scrollVelocity;

  /// @brief Field shiftCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftCurve, put = __cordl_internal_set_shiftCurve))::UnityEngine::AnimationCurve* shiftCurve;

  /// @brief Field shiftDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_shiftDuration, put = __cordl_internal_set_shiftDuration)) float_t shiftDuration;

  /// @brief Field spatialLayoutBubblesPerRow, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutBubblesPerRow, put = __cordl_internal_set_spatialLayoutBubblesPerRow)) int32_t spatialLayoutBubblesPerRow;

  /// @brief Field spatialLayoutIsScrollable, offset 0xc4, size 0x1
  __declspec(property(get = __cordl_internal_get_spatialLayoutIsScrollable, put = __cordl_internal_set_spatialLayoutIsScrollable)) bool spatialLayoutIsScrollable;

  /// @brief Field spatialLayoutMaxHeight, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutMaxHeight, put = __cordl_internal_set_spatialLayoutMaxHeight)) float_t spatialLayoutMaxHeight;

  /// @brief Field spatialLayoutMaxHeightOverall, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutMaxHeightOverall, put = __cordl_internal_set_spatialLayoutMaxHeightOverall)) float_t spatialLayoutMaxHeightOverall;

  /// @brief Field spatialLayoutMinHeight, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutMinHeight, put = __cordl_internal_set_spatialLayoutMinHeight)) float_t spatialLayoutMinHeight;

  /// @brief Field spatialLayoutMinHeightOverall, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutMinHeightOverall, put = __cordl_internal_set_spatialLayoutMinHeightOverall)) float_t spatialLayoutMinHeightOverall;

  /// @brief Field spatialLayoutSpacing, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialLayoutSpacing, put = __cordl_internal_set_spatialLayoutSpacing)) float_t spatialLayoutSpacing;

  /// @brief Field stopThoughtBubbleBobbing, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_stopThoughtBubbleBobbing, put = __cordl_internal_set_stopThoughtBubbleBobbing)) bool stopThoughtBubbleBobbing;

  /// @brief Field thoughtBubbleLocalRotation, offset 0xa8, size 0xc
  __declspec(property(get = __cordl_internal_get_thoughtBubbleLocalRotation, put = __cordl_internal_set_thoughtBubbleLocalRotation))::UnityEngine::Vector3 thoughtBubbleLocalRotation;

  /// @brief Field thoughtBubblePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubblePrefab, put = __cordl_internal_set_thoughtBubblePrefab))::UnityW<::UnityEngine::GameObject> thoughtBubblePrefab;

  /// @brief Field thoughtBubbles, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubbles,
                      put = __cordl_internal_set_thoughtBubbles))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThoughtBubble>>* thoughtBubbles;

  /// @brief Field viewportHeight, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_viewportHeight, put = __cordl_internal_set_viewportHeight)) float_t viewportHeight;

  /// @brief Method Clear, addr 0xf454cc, size 0x2b0, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearScrollMomentum, addr 0xf49690, size 0x58, virtual false, abstract: false, final false
  inline void ClearScrollMomentum();

  /// @brief Method Close, addr 0xf47a7c, size 0x268, virtual false, abstract: false, final false
  inline void Close(::UnityEngine::Vector3 flowPosition, ::UnityEngine::Vector3 flowVector, ::UnityEngine::AnimationCurve* flowCurve, float_t flowDuration, float_t flowDurationVariance);

  /// @brief Method DoScroll, addr 0xf49aa0, size 0x30, virtual false, abstract: false, final false
  inline void DoScroll(::UnityEngine::Vector3 rawScroll);

  /// @brief Method FlushScrollSum, addr 0xf49ad0, size 0x208, virtual false, abstract: false, final false
  inline void FlushScrollSum();

  /// @brief Method GetDefaultSaveState, addr 0xf4577c, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ScrollingPatternLayout__SaveState GetDefaultSaveState();

  /// @brief Method GetSaveState, addr 0xf47a6c, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ScrollingPatternLayout__SaveState GetSaveState();

  /// @brief Method GetSpatialLayoutPosition, addr 0xf496e8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpatialLayoutPosition(int32_t index);

  /// @brief Method Initialize, addr 0xf44bbc, size 0xfc, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCraftedCallback, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTappedCallback);

  /// @brief Method InteractWithCluster, addr 0xf48e30, size 0x1b4, virtual false, abstract: false, final false
  inline void InteractWithCluster(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method LateUpdate, addr 0xf49cd8, size 0x114, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadThoughtBubbles, addr 0xf480b4, size 0xb24, virtual false, abstract: false, final false
  inline void LoadThoughtBubbles(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* patternTypes, ::GlobalNamespace::CosmeticFilter* cosmeticFilter);

  static inline ::GlobalNamespace::ScrollingPatternLayout* New_ctor();

  /// @brief Method OnClusterTapped, addr 0xf48fe4, size 0x38, virtual false, abstract: false, final false
  inline void OnClusterTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnItemPulledFromBubble, addr 0xf48df4, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemPulledFromBubble(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnItemPulledFromCluster, addr 0xf48e2c, size 0x4, virtual false, abstract: false, final false
  inline void OnItemPulledFromCluster(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnTapped, addr 0xf48e10, size 0x1c, virtual false, abstract: false, final false
  inline void OnTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method Open, addr 0xf46f98, size 0x8d4, virtual false, abstract: false, final false
  inline void Open(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* patternTypes, ::GlobalNamespace::CosmeticFilter* cosmeticFilter,
                   ::GlobalNamespace::__ScrollingPatternLayout__SaveState saveState, ::UnityEngine::Vector3 flowPosition, ::UnityEngine::Vector3 flowVector, ::UnityEngine::AnimationCurve* flowCurve,
                   float_t flowDuration, float_t flowDurationVariance);

  /// @brief Method RefreshBounds, addr 0xf49728, size 0x240, virtual false, abstract: false, final false
  inline void RefreshBounds(int32_t endIndex, int32_t expandedStartIndex);

  /// @brief Method RefreshLayout, addr 0xf49084, size 0x60c, virtual false, abstract: false, final false
  inline void RefreshLayout(bool instant);

  /// @brief Method RefreshScrollable, addr 0xf49968, size 0x138, virtual false, abstract: false, final false
  inline void RefreshScrollable();

  /// @brief Method SetScrollContainerY, addr 0xf49dec, size 0x4a8, virtual false, abstract: false, final false
  inline void SetScrollContainerY(float_t newY);

  constexpr bool const& __cordl_internal_get__isOpen_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOpen_k__BackingField();

  constexpr ::GlobalNamespace::__ScrollingPatternLayout__Alignment const& __cordl_internal_get_alignmentWhenNotScrollable() const;

  constexpr ::GlobalNamespace::__ScrollingPatternLayout__Alignment& __cordl_internal_get_alignmentWhenNotScrollable();

  constexpr bool const& __cordl_internal_get_allowForceExpandAll() const;

  constexpr bool& __cordl_internal_get_allowForceExpandAll();

  constexpr ::StringW const& __cordl_internal_get_changePageSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_changePageSoundKey();

  constexpr bool const& __cordl_internal_get_changePreviewItemSize() const;

  constexpr bool& __cordl_internal_get_changePreviewItemSize();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ScrollingPatternLayout__ClusterData>*& __cordl_internal_get_clusterDatas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ScrollingPatternLayout__ClusterData>*> const& __cordl_internal_get_clusterDatas() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_clusterThoughtBubblePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_clusterThoughtBubblePrefab();

  constexpr bool const& __cordl_internal_get_disableBubbles() const;

  constexpr bool& __cordl_internal_get_disableBubbles();

  constexpr ::StringW const& __cordl_internal_get_expandedCollection() const;

  constexpr ::StringW& __cordl_internal_get_expandedCollection();

  constexpr bool const& __cordl_internal_get_hasLoadedThoughtBubbles() const;

  constexpr bool& __cordl_internal_get_hasLoadedThoughtBubbles();

  constexpr bool const& __cordl_internal_get_isScrollableInNegativeDirection() const;

  constexpr bool& __cordl_internal_get_isScrollableInNegativeDirection();

  constexpr bool const& __cordl_internal_get_isScrollableInPositiveDirection() const;

  constexpr bool& __cordl_internal_get_isScrollableInPositiveDirection();

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> const& __cordl_internal_get_negativeScrollArrow() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow>& __cordl_internal_get_negativeScrollArrow();

  constexpr ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*& __cordl_internal_get_onItemPulledFromBubbleCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*> const& __cordl_internal_get_onItemPulledFromBubbleCallback() const;

  constexpr ::GlobalNamespace::__ThoughtBubble__OnTapped*& __cordl_internal_get_onTappedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnTapped*> const& __cordl_internal_get_onTappedCallback() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*>*&
  __cordl_internal_get_patternThoughtBubblesByCollection();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*>*> const&
  __cordl_internal_get_patternThoughtBubblesByCollection() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> const& __cordl_internal_get_positiveScrollArrow() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow>& __cordl_internal_get_positiveScrollArrow();

  constexpr float_t const& __cordl_internal_get_previewItemSizeMultiplier() const;

  constexpr float_t& __cordl_internal_get_previewItemSizeMultiplier();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rawScrollSum() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rawScrollSum();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scrollContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scrollContainer();

  constexpr float_t const& __cordl_internal_get_scrollContainerY() const;

  constexpr float_t& __cordl_internal_get_scrollContainerY();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scrollRelativeAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scrollRelativeAnchor();

  constexpr float_t const& __cordl_internal_get_scrollVelocity() const;

  constexpr float_t& __cordl_internal_get_scrollVelocity();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shiftCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_shiftCurve() const;

  constexpr float_t const& __cordl_internal_get_shiftDuration() const;

  constexpr float_t& __cordl_internal_get_shiftDuration();

  constexpr int32_t const& __cordl_internal_get_spatialLayoutBubblesPerRow() const;

  constexpr int32_t& __cordl_internal_get_spatialLayoutBubblesPerRow();

  constexpr bool const& __cordl_internal_get_spatialLayoutIsScrollable() const;

  constexpr bool& __cordl_internal_get_spatialLayoutIsScrollable();

  constexpr float_t const& __cordl_internal_get_spatialLayoutMaxHeight() const;

  constexpr float_t& __cordl_internal_get_spatialLayoutMaxHeight();

  constexpr float_t const& __cordl_internal_get_spatialLayoutMaxHeightOverall() const;

  constexpr float_t& __cordl_internal_get_spatialLayoutMaxHeightOverall();

  constexpr float_t const& __cordl_internal_get_spatialLayoutMinHeight() const;

  constexpr float_t& __cordl_internal_get_spatialLayoutMinHeight();

  constexpr float_t const& __cordl_internal_get_spatialLayoutMinHeightOverall() const;

  constexpr float_t& __cordl_internal_get_spatialLayoutMinHeightOverall();

  constexpr float_t const& __cordl_internal_get_spatialLayoutSpacing() const;

  constexpr float_t& __cordl_internal_get_spatialLayoutSpacing();

  constexpr bool const& __cordl_internal_get_stopThoughtBubbleBobbing() const;

  constexpr bool& __cordl_internal_get_stopThoughtBubbleBobbing();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_thoughtBubbleLocalRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_thoughtBubbleLocalRotation();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_thoughtBubblePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_thoughtBubblePrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThoughtBubble>>*& __cordl_internal_get_thoughtBubbles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThoughtBubble>>*> const& __cordl_internal_get_thoughtBubbles() const;

  constexpr float_t const& __cordl_internal_get_viewportHeight() const;

  constexpr float_t& __cordl_internal_get_viewportHeight();

  constexpr void __cordl_internal_set__isOpen_k__BackingField(bool value);

  constexpr void __cordl_internal_set_alignmentWhenNotScrollable(::GlobalNamespace::__ScrollingPatternLayout__Alignment value);

  constexpr void __cordl_internal_set_allowForceExpandAll(bool value);

  constexpr void __cordl_internal_set_changePageSoundKey(::StringW value);

  constexpr void __cordl_internal_set_changePreviewItemSize(bool value);

  constexpr void __cordl_internal_set_clusterDatas(::System::Collections::Generic::List_1<::GlobalNamespace::__ScrollingPatternLayout__ClusterData>* value);

  constexpr void __cordl_internal_set_clusterThoughtBubblePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_disableBubbles(bool value);

  constexpr void __cordl_internal_set_expandedCollection(::StringW value);

  constexpr void __cordl_internal_set_hasLoadedThoughtBubbles(bool value);

  constexpr void __cordl_internal_set_isScrollableInNegativeDirection(bool value);

  constexpr void __cordl_internal_set_isScrollableInPositiveDirection(bool value);

  constexpr void __cordl_internal_set_negativeScrollArrow(::UnityW<::GlobalNamespace::ImaginationScrollingArrow> value);

  constexpr void __cordl_internal_set_onItemPulledFromBubbleCallback(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* value);

  constexpr void __cordl_internal_set_onTappedCallback(::GlobalNamespace::__ThoughtBubble__OnTapped* value);

  constexpr void __cordl_internal_set_patternThoughtBubblesByCollection(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*>* value);

  constexpr void __cordl_internal_set_positiveScrollArrow(::UnityW<::GlobalNamespace::ImaginationScrollingArrow> value);

  constexpr void __cordl_internal_set_previewItemSizeMultiplier(float_t value);

  constexpr void __cordl_internal_set_rawScrollSum(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_scrollContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_scrollContainerY(float_t value);

  constexpr void __cordl_internal_set_scrollRelativeAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_scrollVelocity(float_t value);

  constexpr void __cordl_internal_set_shiftCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_shiftDuration(float_t value);

  constexpr void __cordl_internal_set_spatialLayoutBubblesPerRow(int32_t value);

  constexpr void __cordl_internal_set_spatialLayoutIsScrollable(bool value);

  constexpr void __cordl_internal_set_spatialLayoutMaxHeight(float_t value);

  constexpr void __cordl_internal_set_spatialLayoutMaxHeightOverall(float_t value);

  constexpr void __cordl_internal_set_spatialLayoutMinHeight(float_t value);

  constexpr void __cordl_internal_set_spatialLayoutMinHeightOverall(float_t value);

  constexpr void __cordl_internal_set_spatialLayoutSpacing(float_t value);

  constexpr void __cordl_internal_set_stopThoughtBubbleBobbing(bool value);

  constexpr void __cordl_internal_set_thoughtBubbleLocalRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_thoughtBubblePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_thoughtBubbles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThoughtBubble>>* value);

  constexpr void __cordl_internal_set_viewportHeight(float_t value);

  /// @brief Method .ctor, addr 0xf4a2a0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isOpen, addr 0xf47f44, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOpen();

  /// @brief Method set_isOpen, addr 0xf47f4c, size 0xc, virtual false, abstract: false, final false
  inline void set_isOpen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollingPatternLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollingPatternLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollingPatternLayout(ScrollingPatternLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollingPatternLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollingPatternLayout(ScrollingPatternLayout const&) = delete;

  /// @brief Field thoughtBubblePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___thoughtBubblePrefab;

  /// @brief Field clusterThoughtBubblePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___clusterThoughtBubblePrefab;

  /// @brief Field scrollContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scrollContainer;

  /// @brief Field scrollRelativeAnchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scrollRelativeAnchor;

  /// @brief Field shiftCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___shiftCurve;

  /// @brief Field shiftDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___shiftDuration;

  /// @brief Field stopThoughtBubbleBobbing, offset: 0x44, size: 0x1, def value: None
  bool ___stopThoughtBubbleBobbing;

  /// @brief Field disableBubbles, offset: 0x45, size: 0x1, def value: None
  bool ___disableBubbles;

  /// @brief Field changePreviewItemSize, offset: 0x46, size: 0x1, def value: None
  bool ___changePreviewItemSize;

  /// @brief Field previewItemSizeMultiplier, offset: 0x48, size: 0x4, def value: None
  float_t ___previewItemSizeMultiplier;

  /// @brief Field positiveScrollArrow, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> ___positiveScrollArrow;

  /// @brief Field negativeScrollArrow, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> ___negativeScrollArrow;

  /// @brief Field isScrollableInPositiveDirection, offset: 0x60, size: 0x1, def value: None
  bool ___isScrollableInPositiveDirection;

  /// @brief Field isScrollableInNegativeDirection, offset: 0x61, size: 0x1, def value: None
  bool ___isScrollableInNegativeDirection;

  /// @brief Field <isOpen>k__BackingField, offset: 0x62, size: 0x1, def value: None
  bool ____isOpen_k__BackingField;

  /// @brief Field hasLoadedThoughtBubbles, offset: 0x63, size: 0x1, def value: None
  bool ___hasLoadedThoughtBubbles;

  /// @brief Field thoughtBubbles, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThoughtBubble>>* ___thoughtBubbles;

  /// @brief Field expandedCollection, offset: 0x70, size: 0x8, def value: None
  ::StringW ___expandedCollection;

  /// @brief Field allowForceExpandAll, offset: 0x78, size: 0x1, def value: None
  bool ___allowForceExpandAll;

  /// @brief Field clusterDatas, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__ScrollingPatternLayout__ClusterData>* ___clusterDatas;

  /// @brief Field patternThoughtBubblesByCollection, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*>* ___patternThoughtBubblesByCollection;

  /// @brief Field onItemPulledFromBubbleCallback, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* ___onItemPulledFromBubbleCallback;

  /// @brief Field onTappedCallback, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnTapped* ___onTappedCallback;

  /// @brief Field changePageSoundKey, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___changePageSoundKey;

  /// @brief Field thoughtBubbleLocalRotation, offset: 0xa8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___thoughtBubbleLocalRotation;

  /// @brief Field alignmentWhenNotScrollable, offset: 0xb4, size: 0x4, def value: None
  ::GlobalNamespace::__ScrollingPatternLayout__Alignment ___alignmentWhenNotScrollable;

  /// @brief Field spatialLayoutSpacing, offset: 0xb8, size: 0x4, def value: None
  float_t ___spatialLayoutSpacing;

  /// @brief Field spatialLayoutBubblesPerRow, offset: 0xbc, size: 0x4, def value: None
  int32_t ___spatialLayoutBubblesPerRow;

  /// @brief Field viewportHeight, offset: 0xc0, size: 0x4, def value: None
  float_t ___viewportHeight;

  /// @brief Field spatialLayoutIsScrollable, offset: 0xc4, size: 0x1, def value: None
  bool ___spatialLayoutIsScrollable;

  /// @brief Field spatialLayoutMinHeight, offset: 0xc8, size: 0x4, def value: None
  float_t ___spatialLayoutMinHeight;

  /// @brief Field spatialLayoutMaxHeight, offset: 0xcc, size: 0x4, def value: None
  float_t ___spatialLayoutMaxHeight;

  /// @brief Field spatialLayoutMinHeightOverall, offset: 0xd0, size: 0x4, def value: None
  float_t ___spatialLayoutMinHeightOverall;

  /// @brief Field spatialLayoutMaxHeightOverall, offset: 0xd4, size: 0x4, def value: None
  float_t ___spatialLayoutMaxHeightOverall;

  /// @brief Field rawScrollSum, offset: 0xd8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rawScrollSum;

  /// @brief Field scrollVelocity, offset: 0xe4, size: 0x4, def value: None
  float_t ___scrollVelocity;

  /// @brief Field scrollContainerY, offset: 0xe8, size: 0x4, def value: None
  float_t ___scrollContainerY;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Scrolling Pattern Layout: " };

  /// @brief Field debugScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t debugScrollSpeed{ 7.5 };

  /// @brief Field keepFullPageInViewport offset 0xffffffff size 0x1
  static constexpr bool keepFullPageInViewport{ true };

  /// @brief Field maxAutoScrollVelocity offset 0xffffffff size 0x4
  static constexpr float_t maxAutoScrollVelocity{ 1.15 };

  /// @brief Field maxPatternCountForForceExpand offset 0xffffffff size 0x4
  static constexpr int32_t maxPatternCountForForceExpand{ static_cast<int32_t>(0x1) };

  /// @brief Field maxTotalPatternAccountForForceExpandAll offset 0xffffffff size 0x4
  static constexpr int32_t maxTotalPatternAccountForForceExpandAll{ static_cast<int32_t>(0x10) };

  /// @brief Field minScrollVelocity offset 0xffffffff size 0x4
  static constexpr float_t minScrollVelocity{ 0.01 };

  /// @brief Field scrollAccelerationRatio offset 0xffffffff size 0x4
  static constexpr float_t scrollAccelerationRatio{ 0.2 };

  /// @brief Field scrollDeccelerationRatio offset 0xffffffff size 0x4
  static constexpr float_t scrollDeccelerationRatio{ 0.05 };

  /// @brief Field viewPortPadding offset 0xffffffff size 0x4
  static constexpr float_t viewPortPadding{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScrollingPatternLayout, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___thoughtBubblePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___clusterThoughtBubblePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___scrollContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___scrollRelativeAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___shiftCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___shiftDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___stopThoughtBubbleBobbing) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___disableBubbles) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___changePreviewItemSize) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___previewItemSizeMultiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___positiveScrollArrow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___negativeScrollArrow) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___isScrollableInPositiveDirection) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___isScrollableInNegativeDirection) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ____isOpen_k__BackingField) == 0x62, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___hasLoadedThoughtBubbles) == 0x63, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___thoughtBubbles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___expandedCollection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___allowForceExpandAll) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___clusterDatas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___patternThoughtBubblesByCollection) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___onItemPulledFromBubbleCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___onTappedCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___changePageSoundKey) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___thoughtBubbleLocalRotation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___alignmentWhenNotScrollable) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutSpacing) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutBubblesPerRow) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___viewportHeight) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutIsScrollable) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutMinHeight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutMaxHeight) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutMinHeightOverall) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___spatialLayoutMaxHeightOverall) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___rawScrollSum) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___scrollVelocity) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScrollingPatternLayout, ___scrollContainerY) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScrollingPatternLayout__Alignment, "", "ScrollingPatternLayout/Alignment");
NEED_NO_BOX(::GlobalNamespace::ScrollingPatternLayout);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScrollingPatternLayout*, "", "ScrollingPatternLayout");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScrollingPatternLayout__ClusterData, "", "ScrollingPatternLayout/ClusterData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScrollingPatternLayout__SaveState, "", "ScrollingPatternLayout/SaveState");
