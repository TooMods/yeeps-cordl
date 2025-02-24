#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocument;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIDocument);
// Type: UnityEngine.UIElements::UIDocument
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIDocument*
class CORDL_TYPE UIDocument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_firstChildInserIndex)) int32_t firstChildInserIndex;

  /// @brief Field m_ChildrenContent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContent, put = __cordl_internal_set_m_ChildrenContent))::UnityEngine::UIElements::UIDocumentList* m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContentCopy,
                      put = __cordl_internal_set_m_ChildrenContentCopy))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* m_ChildrenContentCopy;

  /// @brief Field m_FirstChildInsertIndex, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstChildInsertIndex, put = __cordl_internal_set_m_FirstChildInsertIndex)) int32_t m_FirstChildInsertIndex;

  /// @brief Field m_PanelSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelSettings, put = __cordl_internal_set_m_PanelSettings))::UnityW<::UnityEngine::UIElements::PanelSettings> m_PanelSettings;

  /// @brief Field m_ParentUI, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentUI, put = __cordl_internal_set_m_ParentUI))::UnityW<::UnityEngine::UIElements::UIDocument> m_ParentUI;

  /// @brief Field m_PreviousPanelSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPanelSettings,
                      put = __cordl_internal_set_m_PreviousPanelSettings))::UnityW<::UnityEngine::UIElements::PanelSettings> m_PreviousPanelSettings;

  /// @brief Field m_RootVisualElement, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootVisualElement, put = __cordl_internal_set_m_RootVisualElement))::UnityEngine::UIElements::VisualElement* m_RootVisualElement;

  /// @brief Field m_SortingOrder, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingOrder, put = __cordl_internal_set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_UIDocumentCreationIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIDocumentCreationIndex, put = __cordl_internal_set_m_UIDocumentCreationIndex)) int32_t m_UIDocumentCreationIndex;

  __declspec(property(get = get_panelSettings, put = set_panelSettings))::UnityW<::UnityEngine::UIElements::PanelSettings> panelSettings;

  __declspec(property(get = get_parentUI, put = set_parentUI))::UnityW<::UnityEngine::UIElements::UIDocument> parentUI;

  __declspec(property(get = get_rootVisualElement))::UnityEngine::UIElements::VisualElement* rootVisualElement;

  /// @brief Field s_CurrentUIDocumentCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CurrentUIDocumentCounter, put = setStaticF_s_CurrentUIDocumentCounter)) int32_t s_CurrentUIDocumentCounter;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  /// @brief Field sourceAsset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceAsset, put = __cordl_internal_set_sourceAsset))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  /// @brief Method AddChildAndInsertContentToVisualTree, addr 0x27b693c, size 0x90, virtual false, abstract: false, final false
  inline void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method AddRootVisualElementToTree, addr 0x27b64c0, size 0xd4, virtual false, abstract: false, final false
  inline void AddRootVisualElementToTree();

  /// @brief Method ApplySortingOrder, addr 0x27b64bc, size 0x4, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method Awake, addr 0x27b6604, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FindUIDocumentParent, addr 0x27b6768, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> FindUIDocumentParent();

  static inline ::UnityEngine::UIElements::UIDocument* New_ctor();

  /// @brief Method OnDisable, addr 0x27b6b34, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x27b6698, size 0xc0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformChildrenChanged, addr 0x27b6b54, size 0x210, virtual false, abstract: false, final false
  inline void OnTransformChildrenChanged();

  /// @brief Method OnTransformParentChanged, addr 0x27b6e08, size 0x4, virtual false, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method ReactToHierarchyChanged, addr 0x27b6d64, size 0xa4, virtual false, abstract: false, final false
  inline void ReactToHierarchyChanged();

  /// @brief Method RecreateUI, addr 0x27b6090, size 0x404, virtual false, abstract: false, final false
  inline void RecreateUI();

  /// @brief Method RemoveChild, addr 0x27b6758, size 0x10, virtual false, abstract: false, final false
  inline void RemoveChild(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method RemoveFromHierarchy, addr 0x27b69cc, size 0xcc, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method Reset, addr 0x27b6838, size 0x104, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetupFromHierarchy, addr 0x27b6608, size 0x90, virtual false, abstract: false, final false
  inline void SetupFromHierarchy();

  /// @brief Method SetupRootClassList, addr 0x27b6a98, size 0x9c, virtual false, abstract: false, final false
  inline void SetupRootClassList();

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __cordl_internal_get_m_ChildrenContent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIDocumentList*> const& __cordl_internal_get_m_ChildrenContent() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& __cordl_internal_get_m_ChildrenContentCopy();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*> const& __cordl_internal_get_m_ChildrenContentCopy() const;

  constexpr int32_t const& __cordl_internal_get_m_FirstChildInsertIndex() const;

  constexpr int32_t& __cordl_internal_get_m_FirstChildInsertIndex();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PanelSettings();

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& __cordl_internal_get_m_ParentUI() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& __cordl_internal_get_m_ParentUI();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PreviousPanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PreviousPanelSettings();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RootVisualElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_RootVisualElement() const;

  constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

  constexpr float_t& __cordl_internal_get_m_SortingOrder();

  constexpr int32_t const& __cordl_internal_get_m_UIDocumentCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UIDocumentCreationIndex();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_sourceAsset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_sourceAsset();

  constexpr void __cordl_internal_set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr void __cordl_internal_set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value);

  constexpr void __cordl_internal_set_m_FirstChildInsertIndex(int32_t value);

  constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_ParentUI(::UnityW<::UnityEngine::UIElements::UIDocument> value);

  constexpr void __cordl_internal_set_m_PreviousPanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_SortingOrder(float_t value);

  constexpr void __cordl_internal_set_m_UIDocumentCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_sourceAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x27b6594, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_CurrentUIDocumentCounter();

  /// @brief Method get_firstChildInserIndex, addr 0x27b6494, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_firstChildInserIndex();

  /// @brief Method get_panelSettings, addr 0x27b5cbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings();

  /// @brief Method get_parentUI, addr 0x27b6070, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> get_parentUI();

  /// @brief Method get_rootVisualElement, addr 0x27b58e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootVisualElement();

  /// @brief Method get_sortingOrder, addr 0x27b649c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method get_visualTreeAsset, addr 0x27b6080, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  static inline void setStaticF_s_CurrentUIDocumentCounter(int32_t value);

  /// @brief Method set_panelSettings, addr 0x27b5cc4, size 0x29c, virtual false, abstract: false, final false
  inline void set_panelSettings(::UnityEngine::UIElements::PanelSettings* value);

  /// @brief Method set_parentUI, addr 0x27b6078, size 0x8, virtual false, abstract: false, final false
  inline void set_parentUI(::UnityEngine::UIElements::UIDocument* value);

  /// @brief Method set_sortingOrder, addr 0x27b64a4, size 0x18, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method set_visualTreeAsset, addr 0x27b6088, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIDocument(UIDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIDocument(UIDocument const&) = delete;

  /// @brief Field m_UIDocumentCreationIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_UIDocumentCreationIndex;

  /// @brief Field m_PanelSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PanelSettings;

  /// @brief Field m_PreviousPanelSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PreviousPanelSettings;

  /// @brief Field m_ParentUI, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIDocument> ___m_ParentUI;

  /// @brief Field m_ChildrenContent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocumentList* ___m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* ___m_ChildrenContentCopy;

  /// @brief Field sourceAsset, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___sourceAsset;

  /// @brief Field m_RootVisualElement, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RootVisualElement;

  /// @brief Field m_FirstChildInsertIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_FirstChildInsertIndex;

  /// @brief Field m_SortingOrder, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_SortingOrder;

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  /// @brief Field k_RootStyleClassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootStyleClassName{ u"unity-ui-document__root" };

  /// @brief Field k_VisualElementNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VisualElementNameSuffix{ u"-container" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocument, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_UIDocumentCreationIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PanelSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PreviousPanelSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ParentUI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContentCopy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___sourceAsset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RootVisualElement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_FirstChildInsertIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_SortingOrder) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIDocument);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocument*, "UnityEngine.UIElements", "UIDocument");
