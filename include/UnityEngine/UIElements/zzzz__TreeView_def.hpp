#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeView)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class ITreeViewItem;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __TreeView__TreeViewItemWrapper;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __TreeView___GetAllItems_d__64;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeView;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __TreeView___GetAllItems_d__64;
}
namespace UnityEngine::UIElements {
struct __TreeView__TreeViewItemWrapper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeView__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64);
MARK_VAL_T(::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeView::UxmlTraits*
class CORDL_TYPE __TreeView__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ItemHeight, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemHeight, put = __cordl_internal_set_m_ItemHeight))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_ItemHeight;

  /// @brief Field m_SelectionType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectionType,
                      put = __cordl_internal_set_m_SelectionType))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* m_SelectionType;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowAlternatingRowBackgrounds, put = __cordl_internal_set_m_ShowAlternatingRowBackgrounds))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<
      ::UnityEngine::UIElements::AlternatingRowBackground>* m_ShowAlternatingRowBackgrounds;

  /// @brief Field m_ShowBorder, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowBorder, put = __cordl_internal_set_m_ShowBorder))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBorder;

  /// @brief Method Init, addr 0x27bd818, size 0x260, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TreeView__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_ItemHeight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_ItemHeight() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*& __cordl_internal_get_m_SelectionType();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> const&
  __cordl_internal_get_m_SelectionType() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*& __cordl_internal_get_m_ShowAlternatingRowBackgrounds();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> const&
  __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBorder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowBorder() const;

  constexpr void __cordl_internal_set_m_ItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* value);

  constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* value);

  constexpr void __cordl_internal_set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x27bda78, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeView__UxmlTraits(__TreeView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeView__UxmlTraits(__TreeView__UxmlTraits const&) = delete;

  /// @brief Field m_ItemHeight, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_ItemHeight;

  /// @brief Field m_ShowBorder, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowBorder;

  /// @brief Field m_SelectionType, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* ___m_SelectionType;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* ___m_ShowAlternatingRowBackgrounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__UxmlTraits, ___m_ItemHeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__UxmlTraits, ___m_ShowBorder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__UxmlTraits, ___m_SelectionType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__UxmlTraits, ___m_ShowAlternatingRowBackgrounds) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TreeView
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TreeView*
class CORDL_TYPE TreeView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using TreeViewItemWrapper = ::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper;

  using UxmlFactory = ::UnityEngine::UIElements::__TreeView__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__TreeView__UxmlTraits;

  using _GetAllItems_d__64 = ::UnityEngine::UIElements::__TreeView___GetAllItems_d__64;

  /// @brief Field <unbindItem>k__BackingField, offset 0x3d8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__unbindItem_k__BackingField,
      put = __cordl_internal_set__unbindItem_k__BackingField))::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* _unbindItem_k__BackingField;

  __declspec(property(put = set_itemHeight)) int32_t itemHeight;

  /// @brief Field m_BindItem, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindItem,
                      put = __cordl_internal_set_m_BindItem))::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* m_BindItem;

  /// @brief Field m_ExpandedItemIds, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpandedItemIds, put = __cordl_internal_set_m_ExpandedItemIds))::System::Collections::Generic::List_1<int32_t>* m_ExpandedItemIds;

  /// @brief Field m_ItemWrappers, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemWrappers,
                      put = __cordl_internal_set_m_ItemWrappers))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>* m_ItemWrappers;

  /// @brief Field m_ListView, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListView, put = __cordl_internal_set_m_ListView))::UnityEngine::UIElements::ListView* m_ListView;

  /// @brief Field m_MakeItem, offset 0x3b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeItem, put = __cordl_internal_set_m_MakeItem))::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  /// @brief Field m_RootItems, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootItems, put = __cordl_internal_set_m_RootItems))::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>* m_RootItems;

  /// @brief Field m_ScrollView, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollView, put = __cordl_internal_set_m_ScrollView))::UnityEngine::UIElements::ScrollView* m_ScrollView;

  /// @brief Field m_SelectedItems, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedItems,
                      put = __cordl_internal_set_m_SelectedItems))::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>* m_SelectedItems;

  /// @brief Field onItemsChosen, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemsChosen,
                      put = __cordl_internal_set_onItemsChosen))::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* onItemsChosen;

  /// @brief Field onSelectionChange, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_onSelectionChange,
                      put = __cordl_internal_set_onSelectionChange))::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* onSelectionChange;

  /// @brief Field s_ItemContentContainerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemContentContainerName, put = setStaticF_s_ItemContentContainerName))::StringW s_ItemContentContainerName;

  /// @brief Field s_ItemIndentName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemIndentName, put = setStaticF_s_ItemIndentName))::StringW s_ItemIndentName;

  /// @brief Field s_ItemIndentsContainerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemIndentsContainerName, put = setStaticF_s_ItemIndentsContainerName))::StringW s_ItemIndentsContainerName;

  /// @brief Field s_ItemName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemName, put = setStaticF_s_ItemName))::StringW s_ItemName;

  /// @brief Field s_ItemToggleName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemToggleName, put = setStaticF_s_ItemToggleName))::StringW s_ItemToggleName;

  /// @brief Field s_ListViewName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ListViewName, put = setStaticF_s_ListViewName))::StringW s_ListViewName;

  __declspec(property(put = set_selectionType))::UnityEngine::UIElements::SelectionType selectionType;

  __declspec(property(put = set_showAlternatingRowBackgrounds))::UnityEngine::UIElements::AlternatingRowBackground showAlternatingRowBackgrounds;

  __declspec(property(put = set_showBorder)) bool showBorder;

  __declspec(property(get = get_unbindItem))::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* unbindItem;

  /// @brief Method BindTreeItem, addr 0x27bcaa8, size 0x35c, virtual false, abstract: false, final false
  inline void BindTreeItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method CollapseItemByIndex, addr 0x27bb1b8, size 0x24c, virtual false, abstract: false, final false
  inline void CollapseItemByIndex(int32_t index);

  /// @brief Method CreateWrappers, addr 0x27bcf18, size 0x520, virtual false, abstract: false, final false
  inline void CreateWrappers(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* treeViewItems, int32_t depth,
                             ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>*> wrappers);

  /// @brief Method ExpandItemByIndex, addr 0x27baeb0, size 0x308, virtual false, abstract: false, final false
  inline void ExpandItemByIndex(int32_t index);

  /// @brief Method GetAllItems, addr 0x27bacb0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*
  GetAllItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* rootItems);

  /// @brief Method GetItemId, addr 0x27bce04, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetItemId(int32_t index);

  /// @brief Method IsExpandedByIndex, addr 0x27bae14, size 0x9c, virtual false, abstract: false, final false
  inline bool IsExpandedByIndex(int32_t index);

  /// @brief Method ListViewRefresh, addr 0x27bac34, size 0x1c, virtual false, abstract: false, final false
  inline void ListViewRefresh();

  /// @brief Method MakeTreeItem, addr 0x27bc4ac, size 0x4e0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeTreeItem();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor();

  /// @brief Method OnCustomStyleResolved, addr 0x27bd5bc, size 0x150, virtual false, abstract: false, final false
  inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method OnItemMouseUp, addr 0x27bbcb0, size 0x7fc, virtual false, abstract: false, final false
  inline void OnItemMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method OnItemsChosen, addr 0x27bb404, size 0x420, virtual false, abstract: false, final false
  inline void OnItemsChosen(::System::Collections::Generic::IEnumerable_1<::System::Object*>* chosenItems);

  /// @brief Method OnKeyDown, addr 0x27bad58, size 0xbc, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnSelectionChange, addr 0x27bb824, size 0x454, virtual false, abstract: false, final false
  inline void OnSelectionChange(::System::Collections::Generic::IEnumerable_1<::System::Object*>* selectedListItems);

  /// @brief Method OnTreeViewMouseUp, addr 0x27bbc78, size 0x38, virtual false, abstract: false, final false
  inline void OnTreeViewMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method OnViewDataReady, addr 0x27bac74, size 0x3c, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method Rebuild, addr 0x27bac50, size 0x24, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method RefreshItems, addr 0x27bab88, size 0x24, virtual false, abstract: false, final false
  inline void RefreshItems();

  /// @brief Method RegenerateWrappers, addr 0x27babac, size 0x88, virtual false, abstract: false, final false
  inline void RegenerateWrappers();

  /// @brief Method ToggleExpandedState, addr 0x27bd438, size 0x184, virtual false, abstract: false, final false
  inline void ToggleExpandedState(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method UnbindTreeItem, addr 0x27bc98c, size 0x11c, virtual false, abstract: false, final false
  inline void UnbindTreeItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get__unbindItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>*> const&
  __cordl_internal_get__unbindItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get_m_BindItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>*> const&
  __cordl_internal_get_m_BindItem() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ExpandedItemIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_ExpandedItemIds() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>*& __cordl_internal_get_m_ItemWrappers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>*> const& __cordl_internal_get_m_ItemWrappers() const;

  constexpr ::UnityEngine::UIElements::ListView*& __cordl_internal_get_m_ListView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListView*> const& __cordl_internal_get_m_ListView() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_MakeItem() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get_m_RootItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*> const& __cordl_internal_get_m_RootItems() const;

  constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_m_ScrollView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& __cordl_internal_get_m_ScrollView() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get_m_SelectedItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*> const& __cordl_internal_get_m_SelectedItems() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*& __cordl_internal_get_onItemsChosen();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> const&
  __cordl_internal_get_onItemsChosen() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*& __cordl_internal_get_onSelectionChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> const&
  __cordl_internal_get_onSelectionChange() const;

  constexpr void __cordl_internal_set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_ItemWrappers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>* value);

  constexpr void __cordl_internal_set_m_ListView(::UnityEngine::UIElements::ListView* value);

  constexpr void __cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_RootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  constexpr void __cordl_internal_set_m_SelectedItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* value);

  constexpr void __cordl_internal_set_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* value);

  /// @brief Method .ctor, addr 0x27ba634, size 0x554, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_ItemContentContainerName();

  static inline ::StringW getStaticF_s_ItemIndentName();

  static inline ::StringW getStaticF_s_ItemIndentsContainerName();

  static inline ::StringW getStaticF_s_ItemName();

  static inline ::StringW getStaticF_s_ItemToggleName();

  static inline ::StringW getStaticF_s_ListViewName();

  /// @brief Method get_unbindItem, addr 0x27ba5b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* get_unbindItem();

  static inline void setStaticF_s_ItemContentContainerName(::StringW value);

  static inline void setStaticF_s_ItemIndentName(::StringW value);

  static inline void setStaticF_s_ItemIndentsContainerName(::StringW value);

  static inline void setStaticF_s_ItemName(::StringW value);

  static inline void setStaticF_s_ItemToggleName(::StringW value);

  static inline void setStaticF_s_ListViewName(::StringW value);

  /// @brief Method set_itemHeight, addr 0x27ba5bc, size 0x20, virtual false, abstract: false, final false
  inline void set_itemHeight(int32_t value);

  /// @brief Method set_selectionType, addr 0x27ba5fc, size 0x1c, virtual false, abstract: false, final false
  inline void set_selectionType(::UnityEngine::UIElements::SelectionType value);

  /// @brief Method set_showAlternatingRowBackgrounds, addr 0x27ba618, size 0x1c, virtual false, abstract: false, final false
  inline void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground value);

  /// @brief Method set_showBorder, addr 0x27ba5dc, size 0x20, virtual false, abstract: false, final false
  inline void set_showBorder(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeView(TreeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeView(TreeView const&) = delete;

  /// @brief Field m_MakeItem, offset: 0x3b0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field onItemsChosen, offset: 0x3b8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* ___onItemsChosen;

  /// @brief Field onSelectionChange, offset: 0x3c0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* ___onSelectionChange;

  /// @brief Field m_SelectedItems, offset: 0x3c8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>* ___m_SelectedItems;

  /// @brief Field m_BindItem, offset: 0x3d0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* ___m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset: 0x3d8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ITreeViewItem*>* ____unbindItem_k__BackingField;

  /// @brief Field m_RootItems, offset: 0x3e0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>* ___m_RootItems;

  /// @brief Field m_ExpandedItemIds, offset: 0x3e8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_ExpandedItemIds;

  /// @brief Field m_ItemWrappers, offset: 0x3f0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper>* ___m_ItemWrappers;

  /// @brief Field m_ListView, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ListView* ___m_ListView;

  /// @brief Field m_ScrollView, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___m_ScrollView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView, 0x408>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_MakeItem) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___onItemsChosen) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___onSelectionChange) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_SelectedItems) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_BindItem) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ____unbindItem_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_RootItems) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_ExpandedItemIds) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_ItemWrappers) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_ListView) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_ScrollView) == 0x400, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeView::UxmlFactory*
class CORDL_TYPE __TreeView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TreeView*, ::UnityEngine::UIElements::__TreeView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TreeView__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x27b1d20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeView__UxmlFactory(__TreeView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeView__UxmlFactory(__TreeView__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TreeViewItemWrapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::TreeView::TreeViewItemWrapper
struct CORDL_TYPE __TreeView__TreeViewItemWrapper {
public:
  // Declarations
  __declspec(property(get = get_id)) int32_t id;

  /// @brief Method get_id, addr 0x27bce78, size 0xa0, virtual false, abstract: false, final false
  inline int32_t get_id();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView__TreeViewItemWrapper();

  // Ctor Parameters [CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item", ty: "::UnityEngine::UIElements::ITreeViewItem*", modifiers: "", def_value:
  // None }]
  constexpr __TreeView__TreeViewItemWrapper(int32_t depth, ::UnityEngine::UIElements::ITreeViewItem* item) noexcept;

  /// @brief Field depth, offset: 0x0, size: 0x4, def value: None
  int32_t depth;

  /// @brief Field item, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITreeViewItem* item;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper, depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper, item) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<GetAllItems>d__64
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeView::<GetAllItems>d__64*
class CORDL_TYPE __TreeView___GetAllItems_d__64 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current))::UnityEngine::UIElements::
      ITreeViewItem* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::UIElements::ITreeViewItem* __2__current;

  /// @brief Field <>3__rootItems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__rootItems,
                      put = __cordl_internal_set___3__rootItems))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* __3__rootItems;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <currentItem>5__4, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__currentItem_5__4, put = __cordl_internal_set__currentItem_5__4))::UnityEngine::UIElements::ITreeViewItem* _currentItem_5__4;

  /// @brief Field <currentIterator>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__currentIterator_5__2,
                      put = __cordl_internal_set__currentIterator_5__2))::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* _currentIterator_5__2;

  /// @brief Field <hasNext>5__3, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__hasNext_5__3, put = __cordl_internal_set__hasNext_5__3)) bool _hasNext_5__3;

  /// @brief Field <iteratorStack>5__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__iteratorStack_5__1, put = __cordl_internal_set__iteratorStack_5__1))::System::Collections::Generic::Stack_1<
      ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>* _iteratorStack_5__1;

  /// @brief Field rootItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rootItems, put = __cordl_internal_set_rootItems))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* rootItems;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x27bdc84, size 0x3f8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::__TreeView___GetAllItems_d__64* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.ITreeViewItem>.GetEnumerator, addr 0x27be0cc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_ITreeViewItem__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.ITreeViewItem>.get_Current, addr 0x27be07c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::ITreeViewItem* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x27be16c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27be084, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27be0c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x27bdc80, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::UIElements::ITreeViewItem*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITreeViewItem*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get___3__rootItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*> const& __cordl_internal_get___3__rootItems() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityEngine::UIElements::ITreeViewItem*& __cordl_internal_get__currentItem_5__4();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITreeViewItem*> const& __cordl_internal_get__currentItem_5__4() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get__currentIterator_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*> const& __cordl_internal_get__currentIterator_5__2() const;

  constexpr bool const& __cordl_internal_get__hasNext_5__3() const;

  constexpr bool& __cordl_internal_get__hasNext_5__3();

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*& __cordl_internal_get__iteratorStack_5__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> const&
  __cordl_internal_get__iteratorStack_5__1() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*& __cordl_internal_get_rootItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*> const& __cordl_internal_get_rootItems() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::UIElements::ITreeViewItem* value);

  constexpr void __cordl_internal_set___3__rootItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__currentItem_5__4(::UnityEngine::UIElements::ITreeViewItem* value);

  constexpr void __cordl_internal_set__currentIterator_5__2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* value);

  constexpr void __cordl_internal_set__hasNext_5__3(bool value);

  constexpr void __cordl_internal_set__iteratorStack_5__1(::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>* value);

  constexpr void __cordl_internal_set_rootItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* value);

  /// @brief Method .ctor, addr 0x27bad14, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__ITreeViewItem__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__ITreeViewItem__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView___GetAllItems_d__64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeView___GetAllItems_d__64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeView___GetAllItems_d__64(__TreeView___GetAllItems_d__64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeView___GetAllItems_d__64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeView___GetAllItems_d__64(__TreeView___GetAllItems_d__64 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITreeViewItem* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field rootItems, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* ___rootItems;

  /// @brief Field <>3__rootItems, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* _____3__rootItems;

  /// @brief Field <iteratorStack>5__1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>* ____iteratorStack_5__1;

  /// @brief Field <currentIterator>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* ____currentIterator_5__2;

  /// @brief Field <hasNext>5__3, offset: 0x48, size: 0x1, def value: None
  bool ____hasNext_5__3;

  /// @brief Field <currentItem>5__4, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITreeViewItem* ____currentItem_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, ___rootItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, _____3__rootItems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, ____iteratorStack_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, ____currentIterator_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, ____hasNext_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64, ____currentItem_5__4) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView*, "UnityEngine.UIElements", "TreeView");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView__UxmlFactory*, "UnityEngine.UIElements", "TreeView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView__UxmlTraits*, "UnityEngine.UIElements", "TreeView/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView___GetAllItems_d__64*, "UnityEngine.UIElements", "TreeView/<GetAllItems>d__64");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView__TreeViewItemWrapper, "UnityEngine.UIElements", "TreeView/TreeViewItemWrapper");
