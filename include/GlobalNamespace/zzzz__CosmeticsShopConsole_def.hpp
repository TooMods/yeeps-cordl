#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsShopConsole)
namespace GlobalNamespace {
class CosmeticsDisplay;
}
namespace GlobalNamespace {
class CosmeticsShopConsoleGroup;
}
namespace GlobalNamespace {
class CosmeticsShopThoughtBubble;
}
namespace GlobalNamespace {
class CosmeticsStoreInstance;
}
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
struct RotationItem;
}
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
class __CosmeticsShopConsole____c;
}
namespace GlobalNamespace {
class __CosmeticsShopConsole____c__DisplayClass40_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
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
class CosmeticsShopConsole;
}
namespace GlobalNamespace {
class __CosmeticsShopConsole____c;
}
namespace GlobalNamespace {
class __CosmeticsShopConsole____c__DisplayClass40_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsShopConsole);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsShopConsole____c);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopConsole::<>c*
class CORDL_TYPE __CosmeticsShopConsole____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__CosmeticsShopConsole____c* __9;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__30_0, put = setStaticF___9__30_0))::System::Comparison_1<::GlobalNamespace::RotationItem>* __9__30_0;

  static inline ::GlobalNamespace::__CosmeticsShopConsole____c* New_ctor();

  /// @brief Method <OnStoreRotationUpdated>b__30_0, addr 0x27678bc, size 0x2c, virtual false, abstract: false, final false
  inline int32_t _OnStoreRotationUpdated_b__30_0(::GlobalNamespace::RotationItem a, ::GlobalNamespace::RotationItem b);

  /// @brief Method .ctor, addr 0x27678b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__CosmeticsShopConsole____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::RotationItem>* getStaticF___9__30_0();

  static inline void setStaticF___9(::GlobalNamespace::__CosmeticsShopConsole____c* value);

  static inline void setStaticF___9__30_0(::System::Comparison_1<::GlobalNamespace::RotationItem>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsShopConsole____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopConsole____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsShopConsole____c(__CosmeticsShopConsole____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopConsole____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsShopConsole____c(__CosmeticsShopConsole____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsShopConsole____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopConsole::<>c__DisplayClass40_0*
class CORDL_TYPE __CosmeticsShopConsole____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::CosmeticsShopConsole> __4__this;

  /// @brief Field curItemIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_curItemIndex, put = __cordl_internal_set_curItemIndex)) int32_t curItemIndex;

  /// @brief Field thoughtBubble, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubble, put = __cordl_internal_set_thoughtBubble))::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> thoughtBubble;

  static inline ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0* New_ctor();

  /// @brief Method <LoadThoughtBubbles>b__0, addr 0x27678e8, size 0x20, virtual false, abstract: false, final false
  inline void _LoadThoughtBubbles_b__0(::GlobalNamespace::ThoughtBubble* bubble);

  /// @brief Method <LoadThoughtBubbles>b__1, addr 0x2767908, size 0x30, virtual false, abstract: false, final false
  inline void _LoadThoughtBubbles_b__1(bool newHovered);

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsole>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_curItemIndex() const;

  constexpr int32_t& __cordl_internal_get_curItemIndex();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> const& __cordl_internal_get_thoughtBubble() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>& __cordl_internal_get_thoughtBubble();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CosmeticsShopConsole> value);

  constexpr void __cordl_internal_set_curItemIndex(int32_t value);

  constexpr void __cordl_internal_set_thoughtBubble(::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> value);

  /// @brief Method .ctor, addr 0x2767610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsShopConsole____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopConsole____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsShopConsole____c__DisplayClass40_0(__CosmeticsShopConsole____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsShopConsole____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsShopConsole____c__DisplayClass40_0(__CosmeticsShopConsole____c__DisplayClass40_0 const&) = delete;

  /// @brief Field curItemIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___curItemIndex;

  /// @brief Field thoughtBubble, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> ___thoughtBubble;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsShopConsole> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0, ___curItemIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0, ___thoughtBubble) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsShopConsole
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsShopConsole*
class CORDL_TYPE CosmeticsShopConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__CosmeticsShopConsole____c;

  using __c__DisplayClass40_0 = ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0;

  /// @brief Field activeContainer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field cosmeticsDisplay, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsDisplay, put = __cordl_internal_set_cosmeticsDisplay))::UnityW<::GlobalNamespace::CosmeticsDisplay> cosmeticsDisplay;

  /// @brief Field cosmeticsShopThoughtBubblePrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsShopThoughtBubblePrefab,
                      put = __cordl_internal_set_cosmeticsShopThoughtBubblePrefab))::UnityW<::UnityEngine::GameObject> cosmeticsShopThoughtBubblePrefab;

  /// @brief Field curPreviewCycleItemIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_curPreviewCycleItemIndex, put = __cordl_internal_set_curPreviewCycleItemIndex)) int32_t curPreviewCycleItemIndex;

  /// @brief Field group, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_group, put = __cordl_internal_set_group))::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> group;

  /// @brief Field hardcodedItemKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hardcodedItemKeys, put = __cordl_internal_set_hardcodedItemKeys))::ArrayW<::StringW, ::Array<::StringW>*> hardcodedItemKeys;

  /// @brief Field hasMultipleItems, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hasMultipleItems, put = __cordl_internal_set_hasMultipleItems)) bool hasMultipleItems;

  /// @brief Field indexInGroup, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_indexInGroup, put = __cordl_internal_set_indexInGroup)) int32_t indexInGroup;

  /// @brief Field isActive, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isCyclingPreviews, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isCyclingPreviews, put = __cordl_internal_set_isCyclingPreviews)) bool isCyclingPreviews;

  /// @brief Field isRegisteredForCosmeticsModeCallbacks, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForCosmeticsModeCallbacks, put = __cordl_internal_set_isRegisteredForCosmeticsModeCallbacks)) bool isRegisteredForCosmeticsModeCallbacks;

  /// @brief Field isRegisteredForStoreRotationCallbacks, offset 0x8e, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForStoreRotationCallbacks, put = __cordl_internal_set_isRegisteredForStoreRotationCallbacks)) bool isRegisteredForStoreRotationCallbacks;

  /// @brief Field items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* items;

  /// @brief Field layoutContainer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutContainer, put = __cordl_internal_set_layoutContainer))::UnityW<::UnityEngine::Transform> layoutContainer;

  /// @brief Field layoutMaxSupportedCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_layoutMaxSupportedCount, put = __cordl_internal_set_layoutMaxSupportedCount)) int32_t layoutMaxSupportedCount;

  /// @brief Field layoutPositions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutPositions, put = __cordl_internal_set_layoutPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> layoutPositions;

  /// @brief Field nextPreviewCycleTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_nextPreviewCycleTime, put = __cordl_internal_set_nextPreviewCycleTime)) float_t nextPreviewCycleTime;

  /// @brief Field poolKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_poolKey, put = __cordl_internal_set_poolKey))::StringW poolKey;

  /// @brief Field previewCycleStartTime, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_previewCycleStartTime, put = __cordl_internal_set_previewCycleStartTime)) float_t previewCycleStartTime;

  /// @brief Field queuedItemIndexToPreview, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_queuedItemIndexToPreview, put = __cordl_internal_set_queuedItemIndexToPreview)) int32_t queuedItemIndexToPreview;

  /// @brief Field queuedItemPreviewSendTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_queuedItemPreviewSendTime, put = __cordl_internal_set_queuedItemPreviewSendTime)) float_t queuedItemPreviewSendTime;

  /// @brief Field storeInstance, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_storeInstance, put = __cordl_internal_set_storeInstance))::GlobalNamespace::CosmeticsStoreInstance* storeInstance;

  /// @brief Field thoughtBubbleContainer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubbleContainer, put = __cordl_internal_set_thoughtBubbleContainer))::UnityW<::UnityEngine::Transform> thoughtBubbleContainer;

  /// @brief Field thoughtBubbleRotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_thoughtBubbleRotation, put = setStaticF_thoughtBubbleRotation))::UnityEngine::Quaternion thoughtBubbleRotation;

  /// @brief Field thoughtBubbles, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubbles,
                      put = __cordl_internal_set_thoughtBubbles))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>* thoughtBubbles;

  /// @brief Method ClearThoughtBubbles, addr 0x27673a0, size 0x150, virtual false, abstract: false, final false
  inline void ClearThoughtBubbles();

  /// @brief Method DoPreviewCycle, addr 0x27662c8, size 0x68, virtual false, abstract: false, final false
  inline void DoPreviewCycle();

  /// @brief Method LoadLayout, addr 0x2767508, size 0x108, virtual false, abstract: false, final false
  inline void LoadLayout();

  /// @brief Method LoadThoughtBubbles, addr 0x2766330, size 0x804, virtual false, abstract: false, final false
  inline void LoadThoughtBubbles(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* items);

  static inline ::GlobalNamespace::CosmeticsShopConsole* New_ctor();

  /// @brief Method OnCosmeticsModeUpdated, addr 0x27674f0, size 0x18, virtual false, abstract: false, final false
  inline void OnCosmeticsModeUpdated(bool newCosmeticsMode);

  /// @brief Method OnDisable, addr 0x27671c8, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnReceivePreviewItem, addr 0x2766d7c, size 0xa0, virtual false, abstract: false, final false
  inline void OnReceivePreviewItem(int32_t itemIndex);

  /// @brief Method OnStoreRotationUpdated, addr 0x2765f88, size 0x22c, virtual false, abstract: false, final false
  inline void OnStoreRotationUpdated(::GlobalNamespace::GlobalRotation newStoreRotation);

  /// @brief Method OnThoughtBubbleHovered, addr 0x27676dc, size 0x100, virtual false, abstract: false, final false
  inline void OnThoughtBubbleHovered(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t itemIndex);

  /// @brief Method PreviewItem, addr 0x2766e1c, size 0x3ac, virtual false, abstract: false, final false
  inline void PreviewItem(::GlobalNamespace::RotationItem item);

  /// @brief Method PreviewItem, addr 0x2766c50, size 0x12c, virtual false, abstract: false, final false
  inline void PreviewItem(int32_t itemIndex);

  /// @brief Method SetActive, addr 0x2766278, size 0x50, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetGroup, addr 0x2765a28, size 0xc, virtual false, abstract: false, final false
  inline void SetGroup(::GlobalNamespace::CosmeticsShopConsoleGroup* group, int32_t indexInGroup);

  /// @brief Method SetItems, addr 0x2765da8, size 0xbc, virtual false, abstract: false, final false
  inline void SetItems(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* newItems);

  /// @brief Method Start, addr 0x2765a34, size 0x374, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2766b34, size 0x11c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& __cordl_internal_get_cosmeticsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& __cordl_internal_get_cosmeticsDisplay();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cosmeticsShopThoughtBubblePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cosmeticsShopThoughtBubblePrefab();

  constexpr int32_t const& __cordl_internal_get_curPreviewCycleItemIndex() const;

  constexpr int32_t& __cordl_internal_get_curPreviewCycleItemIndex();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> const& __cordl_internal_get_group() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>& __cordl_internal_get_group();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_hardcodedItemKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_hardcodedItemKeys();

  constexpr bool const& __cordl_internal_get_hasMultipleItems() const;

  constexpr bool& __cordl_internal_get_hasMultipleItems();

  constexpr int32_t const& __cordl_internal_get_indexInGroup() const;

  constexpr int32_t& __cordl_internal_get_indexInGroup();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isCyclingPreviews() const;

  constexpr bool& __cordl_internal_get_isCyclingPreviews();

  constexpr bool const& __cordl_internal_get_isRegisteredForCosmeticsModeCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForCosmeticsModeCallbacks();

  constexpr bool const& __cordl_internal_get_isRegisteredForStoreRotationCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForStoreRotationCallbacks();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*& __cordl_internal_get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*> const& __cordl_internal_get_items() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_layoutContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_layoutContainer();

  constexpr int32_t const& __cordl_internal_get_layoutMaxSupportedCount() const;

  constexpr int32_t& __cordl_internal_get_layoutMaxSupportedCount();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_layoutPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_layoutPositions();

  constexpr float_t const& __cordl_internal_get_nextPreviewCycleTime() const;

  constexpr float_t& __cordl_internal_get_nextPreviewCycleTime();

  constexpr ::StringW const& __cordl_internal_get_poolKey() const;

  constexpr ::StringW& __cordl_internal_get_poolKey();

  constexpr float_t const& __cordl_internal_get_previewCycleStartTime() const;

  constexpr float_t& __cordl_internal_get_previewCycleStartTime();

  constexpr int32_t const& __cordl_internal_get_queuedItemIndexToPreview() const;

  constexpr int32_t& __cordl_internal_get_queuedItemIndexToPreview();

  constexpr float_t const& __cordl_internal_get_queuedItemPreviewSendTime() const;

  constexpr float_t& __cordl_internal_get_queuedItemPreviewSendTime();

  constexpr ::GlobalNamespace::CosmeticsStoreInstance*& __cordl_internal_get_storeInstance();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticsStoreInstance*> const& __cordl_internal_get_storeInstance() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_thoughtBubbleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_thoughtBubbleContainer();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>*& __cordl_internal_get_thoughtBubbles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>*> const& __cordl_internal_get_thoughtBubbles() const;

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value);

  constexpr void __cordl_internal_set_cosmeticsShopThoughtBubblePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_curPreviewCycleItemIndex(int32_t value);

  constexpr void __cordl_internal_set_group(::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> value);

  constexpr void __cordl_internal_set_hardcodedItemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_hasMultipleItems(bool value);

  constexpr void __cordl_internal_set_indexInGroup(int32_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isCyclingPreviews(bool value);

  constexpr void __cordl_internal_set_isRegisteredForCosmeticsModeCallbacks(bool value);

  constexpr void __cordl_internal_set_isRegisteredForStoreRotationCallbacks(bool value);

  constexpr void __cordl_internal_set_items(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* value);

  constexpr void __cordl_internal_set_layoutContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_layoutMaxSupportedCount(int32_t value);

  constexpr void __cordl_internal_set_layoutPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_nextPreviewCycleTime(float_t value);

  constexpr void __cordl_internal_set_poolKey(::StringW value);

  constexpr void __cordl_internal_set_previewCycleStartTime(float_t value);

  constexpr void __cordl_internal_set_queuedItemIndexToPreview(int32_t value);

  constexpr void __cordl_internal_set_queuedItemPreviewSendTime(float_t value);

  constexpr void __cordl_internal_set_storeInstance(::GlobalNamespace::CosmeticsStoreInstance* value);

  constexpr void __cordl_internal_set_thoughtBubbleContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_thoughtBubbles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>* value);

  /// @brief Method .ctor, addr 0x27677dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF_thoughtBubbleRotation();

  static inline void setStaticF_thoughtBubbleRotation(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsShopConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsShopConsole(CosmeticsShopConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsShopConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsShopConsole(CosmeticsShopConsole const&) = delete;

  /// @brief Field poolKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___poolKey;

  /// @brief Field hardcodedItemKeys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___hardcodedItemKeys;

  /// @brief Field items, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* ___items;

  /// @brief Field hasMultipleItems, offset: 0x30, size: 0x1, def value: None
  bool ___hasMultipleItems;

  /// @brief Field queuedItemIndexToPreview, offset: 0x34, size: 0x4, def value: None
  int32_t ___queuedItemIndexToPreview;

  /// @brief Field queuedItemPreviewSendTime, offset: 0x38, size: 0x4, def value: None
  float_t ___queuedItemPreviewSendTime;

  /// @brief Field curPreviewCycleItemIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___curPreviewCycleItemIndex;

  /// @brief Field isCyclingPreviews, offset: 0x40, size: 0x1, def value: None
  bool ___isCyclingPreviews;

  /// @brief Field previewCycleStartTime, offset: 0x44, size: 0x4, def value: None
  float_t ___previewCycleStartTime;

  /// @brief Field nextPreviewCycleTime, offset: 0x48, size: 0x4, def value: None
  float_t ___nextPreviewCycleTime;

  /// @brief Field cosmeticsDisplay, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsDisplay> ___cosmeticsDisplay;

  /// @brief Field cosmeticsShopThoughtBubblePrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___cosmeticsShopThoughtBubblePrefab;

  /// @brief Field thoughtBubbleContainer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___thoughtBubbleContainer;

  /// @brief Field thoughtBubbles, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>* ___thoughtBubbles;

  /// @brief Field activeContainer, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field layoutContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___layoutContainer;

  /// @brief Field layoutPositions, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___layoutPositions;

  /// @brief Field layoutMaxSupportedCount, offset: 0x88, size: 0x4, def value: None
  int32_t ___layoutMaxSupportedCount;

  /// @brief Field isActive, offset: 0x8c, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegisteredForCosmeticsModeCallbacks, offset: 0x8d, size: 0x1, def value: None
  bool ___isRegisteredForCosmeticsModeCallbacks;

  /// @brief Field isRegisteredForStoreRotationCallbacks, offset: 0x8e, size: 0x1, def value: None
  bool ___isRegisteredForStoreRotationCallbacks;

  /// @brief Field storeInstance, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticsStoreInstance* ___storeInstance;

  /// @brief Field group, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> ___group;

  /// @brief Field indexInGroup, offset: 0xa0, size: 0x4, def value: None
  int32_t ___indexInGroup;

  /// @brief Field itemPreviewDelay offset 0xffffffff size 0x4
  static constexpr float_t itemPreviewDelay{ 0.25 };

  /// @brief Field previewCycleDuration offset 0xffffffff size 0x4
  static constexpr float_t previewCycleDuration{ 15.0 };

  /// @brief Field previewStartDelay offset 0xffffffff size 0x4
  static constexpr float_t previewStartDelay{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsShopConsole, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___poolKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___hardcodedItemKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___items) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___hasMultipleItems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___queuedItemIndexToPreview) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___queuedItemPreviewSendTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___curPreviewCycleItemIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___isCyclingPreviews) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___previewCycleStartTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___nextPreviewCycleTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___cosmeticsDisplay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___cosmeticsShopThoughtBubblePrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___thoughtBubbleContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___thoughtBubbles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___activeContainer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___layoutContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___layoutPositions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___layoutMaxSupportedCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___isActive) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___isRegisteredForCosmeticsModeCallbacks) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___isRegisteredForStoreRotationCallbacks) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___storeInstance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___group) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsShopConsole, ___indexInGroup) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsShopConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsShopConsole*, "", "CosmeticsShopConsole");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsShopConsole____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsShopConsole____c*, "", "CosmeticsShopConsole/<>c");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*, "", "CosmeticsShopConsole/<>c__DisplayClass40_0");
