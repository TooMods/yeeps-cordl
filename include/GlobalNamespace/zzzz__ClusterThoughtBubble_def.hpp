#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClusterThoughtBubble)
namespace GlobalNamespace {
class PatternCollection;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnHovered;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ClusterThoughtBubble;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClusterThoughtBubble);
// Type: ::ClusterThoughtBubble
// SizeInfo { instance_size: 496, native_size: -1, calculated_instance_size: 496, calculated_native_size: 496, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ClusterThoughtBubble*
class CORDL_TYPE ClusterThoughtBubble : public ::GlobalNamespace::ThoughtBubble {
public:
  // Declarations
  /// @brief Field <isExpanded>k__BackingField, offset 0x1e0, size 0x1
  __declspec(property(get = __cordl_internal_get__isExpanded_k__BackingField, put = __cordl_internal_set__isExpanded_k__BackingField)) bool _isExpanded_k__BackingField;

  /// @brief Field canvas, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_canvas, put = __cordl_internal_set_canvas))::UnityW<::UnityEngine::GameObject> canvas;

  /// @brief Field clusterText, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_clusterText, put = __cordl_internal_set_clusterText))::UnityW<::UnityEngine::UI::Text> clusterText;

  /// @brief Field customCraftingParameters, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_customCraftingParameters, put = __cordl_internal_set_customCraftingParameters))::GlobalNamespace::__Item__CustomParameters* customCraftingParameters;

  /// @brief Field expandedObject, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_expandedObject, put = __cordl_internal_set_expandedObject))::UnityW<::UnityEngine::Transform> expandedObject;

  __declspec(property(get = get_isExpanded, put = set_isExpanded)) bool isExpanded;

  /// @brief Field patternCollection, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_patternCollection, put = __cordl_internal_set_patternCollection))::GlobalNamespace::PatternCollection* patternCollection;

  /// @brief Field patternObjectContainer, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_patternObjectContainer, put = __cordl_internal_set_patternObjectContainer))::UnityW<::UnityEngine::Transform> patternObjectContainer;

  /// @brief Field previewObjectsContainer, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_previewObjectsContainer, put = __cordl_internal_set_previewObjectsContainer))::UnityW<::UnityEngine::Transform> previewObjectsContainer;

  /// @brief Method GeneratePatternPreviewObjects, addr 0xf4c508, size 0x640, virtual false, abstract: false, final false
  inline void GeneratePatternPreviewObjects();

  /// @brief Method GetPatternCollection, addr 0xf4cb48, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PatternCollection* GetPatternCollection();

  /// @brief Method Initialize, addr 0xf4c4d4, size 0x34, virtual true, abstract: false, final false
  inline void Initialize(::UnityEngine::Vector3 initialLocalPosition, ::UnityEngine::Quaternion localRotation, bool startActive, bool isQuickCraft,
                         ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCrafted, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTapped,
                         ::GlobalNamespace::__ThoughtBubble__OnHovered* onHovered);

  static inline ::GlobalNamespace::ClusterThoughtBubble* New_ctor();

  /// @brief Method OnLateUpdate, addr 0xf4cdd4, size 0x114, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method SetExpanded, addr 0xf4901c, size 0x68, virtual false, abstract: false, final false
  inline void SetExpanded(bool newExpanded, bool instant);

  /// @brief Method SetPatternCollection, addr 0xf48bd8, size 0x10c, virtual false, abstract: false, final false
  inline void SetPatternCollection(::GlobalNamespace::PatternCollection* patternCollection);

  /// @brief Method TriggerCraft, addr 0xf4cb50, size 0x284, virtual true, abstract: false, final false
  inline void TriggerCraft();

  constexpr bool const& __cordl_internal_get__isExpanded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isExpanded_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_clusterText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_clusterText();

  constexpr ::GlobalNamespace::__Item__CustomParameters*& __cordl_internal_get_customCraftingParameters();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__CustomParameters*> const& __cordl_internal_get_customCraftingParameters() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_expandedObject() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_expandedObject();

  constexpr ::GlobalNamespace::PatternCollection*& __cordl_internal_get_patternCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PatternCollection*> const& __cordl_internal_get_patternCollection() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_patternObjectContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_patternObjectContainer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_previewObjectsContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_previewObjectsContainer();

  constexpr void __cordl_internal_set__isExpanded_k__BackingField(bool value);

  constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_clusterText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_customCraftingParameters(::GlobalNamespace::__Item__CustomParameters* value);

  constexpr void __cordl_internal_set_expandedObject(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_patternCollection(::GlobalNamespace::PatternCollection* value);

  constexpr void __cordl_internal_set_patternObjectContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_previewObjectsContainer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0xf4cee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isExpanded, addr 0xf4c4c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isExpanded();

  /// @brief Method set_isExpanded, addr 0xf4c4c8, size 0xc, virtual false, abstract: false, final false
  inline void set_isExpanded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClusterThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClusterThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClusterThoughtBubble(ClusterThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClusterThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClusterThoughtBubble(ClusterThoughtBubble const&) = delete;

  /// @brief Field previewObjectsContainer, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___previewObjectsContainer;

  /// @brief Field patternObjectContainer, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___patternObjectContainer;

  /// @brief Field expandedObject, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___expandedObject;

  /// @brief Field canvas, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___canvas;

  /// @brief Field clusterText, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___clusterText;

  /// @brief Field patternCollection, offset: 0x1d8, size: 0x8, def value: None
  ::GlobalNamespace::PatternCollection* ___patternCollection;

  /// @brief Field <isExpanded>k__BackingField, offset: 0x1e0, size: 0x1, def value: None
  bool ____isExpanded_k__BackingField;

  /// @brief Field customCraftingParameters, offset: 0x1e8, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* ___customCraftingParameters;

  /// @brief Field maxPreviewObjectSpread offset 0xffffffff size 0x4
  static constexpr float_t maxPreviewObjectSpread{ 0.25 };

  /// @brief Field maxPreviewObjects offset 0xffffffff size 0x4
  static constexpr int32_t maxPreviewObjects{ static_cast<int32_t>(0xc) };

  /// @brief Field previewObjectRotationSpeed offset 0xffffffff size 0x4
  static constexpr float_t previewObjectRotationSpeed{ 45.0 };

  /// @brief Field previewObjectSizeRatio offset 0xffffffff size 0x4
  static constexpr float_t previewObjectSizeRatio{ 0.75 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClusterThoughtBubble, 0x1f0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___previewObjectsContainer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___patternObjectContainer) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___expandedObject) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___canvas) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___clusterText) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___patternCollection) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ____isExpanded_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClusterThoughtBubble, ___customCraftingParameters) == 0x1e8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClusterThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClusterThoughtBubble*, "", "ClusterThoughtBubble");
