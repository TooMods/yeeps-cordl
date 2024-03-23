#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingList_1)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System::ComponentModel {
class AddingNewEventHandler;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::ComponentModel {
class ICancelAddNew;
}
namespace System::ComponentModel {
class IRaiseItemChangedEvents;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::ComponentModel {
struct ListChangedType;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
template <typename T> class BindingList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::ComponentModel::BindingList_1);
// Type: System.ComponentModel::BindingList`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.ComponentModel::BindingList`1<T>*
class CORDL_TYPE BindingList_1 : public ::System::Collections::ObjectModel::Collection_1<T> {
public:
  // Declarations
  __declspec(property(get = get_AddingNewHandled)) bool AddingNewHandled;

  __declspec(property(get = get_AllowEdit, put = set_AllowEdit)) bool AllowEdit;

  __declspec(property(get = get_AllowNew, put = set_AllowNew)) bool AllowNew;

  __declspec(property(get = get_AllowRemove, put = set_AllowRemove)) bool AllowRemove;

  __declspec(property(get = get_IsSortedCore)) bool IsSortedCore;

  __declspec(property(get = get_ItemTypeHasDefaultConstructor)) bool ItemTypeHasDefaultConstructor;

  __declspec(property(get = get_RaiseListChangedEvents, put = set_RaiseListChangedEvents)) bool RaiseListChangedEvents;

  __declspec(property(get = get_SortDirectionCore))::System::ComponentModel::ListSortDirection SortDirectionCore;

  __declspec(property(get = get_SortPropertyCore))::System::ComponentModel::PropertyDescriptor* SortPropertyCore;

  __declspec(property(get = get_SupportsChangeNotificationCore)) bool SupportsChangeNotificationCore;

  __declspec(property(get = get_SupportsSearchingCore)) bool SupportsSearchingCore;

  __declspec(property(get = get_SupportsSortingCore)) bool SupportsSortingCore;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowEdit)) bool System_ComponentModel_IBindingList_AllowEdit;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowNew)) bool System_ComponentModel_IBindingList_AllowNew;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowRemove)) bool System_ComponentModel_IBindingList_AllowRemove;

  __declspec(property(get = System_ComponentModel_IBindingList_get_IsSorted)) bool System_ComponentModel_IBindingList_IsSorted;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortDirection))::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_SortDirection;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortProperty))::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_SortProperty;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool System_ComponentModel_IBindingList_SupportsChangeNotification;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSearching)) bool System_ComponentModel_IBindingList_SupportsSearching;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSorting)) bool System_ComponentModel_IBindingList_SupportsSorting;

  __declspec(property(get = System_ComponentModel_IRaiseItemChangedEvents_get_RaisesItemChangedEvents)) bool System_ComponentModel_IRaiseItemChangedEvents_RaisesItemChangedEvents;

  /// @brief Field _itemTypeProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__itemTypeProperties, put = __cordl_internal_set__itemTypeProperties))::System::ComponentModel::PropertyDescriptorCollection* _itemTypeProperties;

  /// @brief Field _lastChangeIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastChangeIndex, put = __cordl_internal_set__lastChangeIndex)) int32_t _lastChangeIndex;

  /// @brief Field _onAddingNew, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__onAddingNew, put = __cordl_internal_set__onAddingNew))::System::ComponentModel::AddingNewEventHandler* _onAddingNew;

  /// @brief Field _onListChanged, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onListChanged, put = __cordl_internal_set__onListChanged))::System::ComponentModel::ListChangedEventHandler* _onListChanged;

  /// @brief Field _propertyChangedEventHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyChangedEventHandler,
                      put = __cordl_internal_set__propertyChangedEventHandler))::System::ComponentModel::PropertyChangedEventHandler* _propertyChangedEventHandler;

  /// @brief Field addNewPos, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_addNewPos, put = __cordl_internal_set_addNewPos)) int32_t addNewPos;

  /// @brief Field allowEdit, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_allowEdit, put = __cordl_internal_set_allowEdit)) bool allowEdit;

  /// @brief Field allowNew, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_allowNew, put = __cordl_internal_set_allowNew)) bool allowNew;

  /// @brief Field allowRemove, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_allowRemove, put = __cordl_internal_set_allowRemove)) bool allowRemove;

  /// @brief Field raiseItemChangedEvents, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_raiseItemChangedEvents, put = __cordl_internal_set_raiseItemChangedEvents)) bool raiseItemChangedEvents;

  /// @brief Field raiseListChangedEvents, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_raiseListChangedEvents, put = __cordl_internal_set_raiseListChangedEvents)) bool raiseListChangedEvents;

  /// @brief Field userSetAllowNew, offset 0x47, size 0x1
  __declspec(property(get = __cordl_internal_get_userSetAllowNew, put = __cordl_internal_set_userSetAllowNew)) bool userSetAllowNew;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IBindingList"
  constexpr operator ::System::ComponentModel::IBindingList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ICancelAddNew"
  constexpr operator ::System::ComponentModel::ICancelAddNew*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IRaiseItemChangedEvents"
  constexpr operator ::System::ComponentModel::IRaiseItemChangedEvents*() noexcept;

  /// @brief Method AddNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T AddNew();

  /// @brief Method AddNewCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* AddNewCore();

  /// @brief Method ApplySortCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplySortCore(::System::ComponentModel::PropertyDescriptor* prop, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method CancelNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CancelNew(int32_t itemIndex);

  /// @brief Method Child_PropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Child_PropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);

  /// @brief Method ClearItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method EndNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndNew(int32_t itemIndex);

  /// @brief Method FindCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t FindCore(::System::ComponentModel::PropertyDescriptor* prop, ::System::Object* key);

  /// @brief Method FireAddingNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* FireAddingNew();

  /// @brief Method FireListChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FireListChanged(::System::ComponentModel::ListChangedType type, int32_t index);

  /// @brief Method HookPropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HookPropertyChanged(T item);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InsertItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InsertItem(int32_t index, T item);

  static inline ::System::ComponentModel::BindingList_1<T>* New_ctor();

  static inline ::System::ComponentModel::BindingList_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>* list);

  /// @brief Method OnAddingNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAddingNew(::System::ComponentModel::AddingNewEventArgs* e);

  /// @brief Method OnListChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method RemoveItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveItem(int32_t index);

  /// @brief Method RemoveSortCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveSortCore();

  /// @brief Method ResetBindings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetBindings();

  /// @brief Method ResetItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetItem(int32_t position);

  /// @brief Method SetItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, T item);

  /// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* prop);

  /// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_IBindingList_AddNew();

  /// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* prop, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method System.ComponentModel.IBindingList.Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* prop, ::System::Object* key);

  /// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* prop);

  /// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveSort();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowEdit();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowNew();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowRemove();

  /// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_IsSorted();

  /// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection();

  /// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSearching();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSorting();

  /// @brief Method System.ComponentModel.IRaiseItemChangedEvents.get_RaisesItemChangedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IRaiseItemChangedEvents_get_RaisesItemChangedEvents();

  /// @brief Method UnhookPropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnhookPropertyChanged(T item);

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__itemTypeProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& __cordl_internal_get__itemTypeProperties() const;

  constexpr int32_t const& __cordl_internal_get__lastChangeIndex() const;

  constexpr int32_t& __cordl_internal_get__lastChangeIndex();

  constexpr ::System::ComponentModel::AddingNewEventHandler*& __cordl_internal_get__onAddingNew();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AddingNewEventHandler*> const& __cordl_internal_get__onAddingNew() const;

  constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get__onListChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ListChangedEventHandler*> const& __cordl_internal_get__onListChanged() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get__propertyChangedEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get__propertyChangedEventHandler() const;

  constexpr int32_t const& __cordl_internal_get_addNewPos() const;

  constexpr int32_t& __cordl_internal_get_addNewPos();

  constexpr bool const& __cordl_internal_get_allowEdit() const;

  constexpr bool& __cordl_internal_get_allowEdit();

  constexpr bool const& __cordl_internal_get_allowNew() const;

  constexpr bool& __cordl_internal_get_allowNew();

  constexpr bool const& __cordl_internal_get_allowRemove() const;

  constexpr bool& __cordl_internal_get_allowRemove();

  constexpr bool const& __cordl_internal_get_raiseItemChangedEvents() const;

  constexpr bool& __cordl_internal_get_raiseItemChangedEvents();

  constexpr bool const& __cordl_internal_get_raiseListChangedEvents() const;

  constexpr bool& __cordl_internal_get_raiseListChangedEvents();

  constexpr bool const& __cordl_internal_get_userSetAllowNew() const;

  constexpr bool& __cordl_internal_get_userSetAllowNew();

  constexpr void __cordl_internal_set__itemTypeProperties(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr void __cordl_internal_set__lastChangeIndex(int32_t value);

  constexpr void __cordl_internal_set__onAddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  constexpr void __cordl_internal_set__onListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  constexpr void __cordl_internal_set__propertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set_addNewPos(int32_t value);

  constexpr void __cordl_internal_set_allowEdit(bool value);

  constexpr void __cordl_internal_set_allowNew(bool value);

  constexpr void __cordl_internal_set_allowRemove(bool value);

  constexpr void __cordl_internal_set_raiseItemChangedEvents(bool value);

  constexpr void __cordl_internal_set_raiseListChangedEvents(bool value);

  constexpr void __cordl_internal_set_userSetAllowNew(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<T>* list);

  /// @brief Method add_AddingNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method add_ListChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  /// @brief Method get_AddingNewHandled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_AddingNewHandled();

  /// @brief Method get_AllowEdit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_AllowEdit();

  /// @brief Method get_AllowNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_AllowNew();

  /// @brief Method get_AllowRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_AllowRemove();

  /// @brief Method get_IsSortedCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsSortedCore();

  /// @brief Method get_ItemTypeHasDefaultConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_ItemTypeHasDefaultConstructor();

  /// @brief Method get_RaiseListChangedEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_RaiseListChangedEvents();

  /// @brief Method get_SortDirectionCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ListSortDirection get_SortDirectionCore();

  /// @brief Method get_SortPropertyCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_SortPropertyCore();

  /// @brief Method get_SupportsChangeNotificationCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsChangeNotificationCore();

  /// @brief Method get_SupportsSearchingCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsSearchingCore();

  /// @brief Method get_SupportsSortingCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsSortingCore();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::ComponentModel::IBindingList"
  constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

  /// @brief Convert to "::System::ComponentModel::ICancelAddNew"
  constexpr ::System::ComponentModel::ICancelAddNew* i___System__ComponentModel__ICancelAddNew() noexcept;

  /// @brief Convert to "::System::ComponentModel::IRaiseItemChangedEvents"
  constexpr ::System::ComponentModel::IRaiseItemChangedEvents* i___System__ComponentModel__IRaiseItemChangedEvents() noexcept;

  /// @brief Method remove_AddingNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method remove_ListChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  /// @brief Method set_AllowEdit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_AllowEdit(bool value);

  /// @brief Method set_AllowNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_AllowNew(bool value);

  /// @brief Method set_AllowRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_AllowRemove(bool value);

  /// @brief Method set_RaiseListChangedEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_RaiseListChangedEvents(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingList_1(BindingList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingList_1(BindingList_1 const&) = delete;

  /// @brief Field addNewPos, offset: 0x18, size: 0x4, def value: None
  int32_t ___addNewPos;

  /// @brief Field raiseListChangedEvents, offset: 0x1c, size: 0x1, def value: None
  bool ___raiseListChangedEvents;

  /// @brief Field raiseItemChangedEvents, offset: 0x1d, size: 0x1, def value: None
  bool ___raiseItemChangedEvents;

  /// @brief Field _itemTypeProperties, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____itemTypeProperties;

  /// @brief Field _propertyChangedEventHandler, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ____propertyChangedEventHandler;

  /// @brief Field _onAddingNew, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::AddingNewEventHandler* ____onAddingNew;

  /// @brief Field _onListChanged, offset: 0x38, size: 0x8, def value: None
  ::System::ComponentModel::ListChangedEventHandler* ____onListChanged;

  /// @brief Field _lastChangeIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastChangeIndex;

  /// @brief Field allowNew, offset: 0x44, size: 0x1, def value: None
  bool ___allowNew;

  /// @brief Field allowEdit, offset: 0x45, size: 0x1, def value: None
  bool ___allowEdit;

  /// @brief Field allowRemove, offset: 0x46, size: 0x1, def value: None
  bool ___allowRemove;

  /// @brief Field userSetAllowNew, offset: 0x47, size: 0x1, def value: None
  bool ___userSetAllowNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::ComponentModel::BindingList_1, "System.ComponentModel", "BindingList`1");
