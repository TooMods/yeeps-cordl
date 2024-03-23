#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewManager)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::ComponentModel {
class ITypedList;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManagerListItemTypeDescriptor;
}
namespace System::Data {
class DataViewSettingCollection;
}
namespace System::Data {
class DataView;
}
namespace System {
class Array;
}
namespace System {
class NotSupportedException;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataViewManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewManager);
// Type: System.Data::DataViewManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataViewManager*
class CORDL_TYPE DataViewManager : public ::System::ComponentModel::MarshalByValueComponent {
public:
  // Declarations
  __declspec(property(get = get_DataSet))::System::Data::DataSet* DataSet;

  __declspec(property(get = get_DataViewSettings))::System::Data::DataViewSettingCollection* DataViewSettings;

  /// @brief Field ListChanged, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ListChanged, put = __cordl_internal_set_ListChanged))::System::ComponentModel::ListChangedEventHandler* ListChanged;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowEdit)) bool System_ComponentModel_IBindingList_AllowEdit;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowNew)) bool System_ComponentModel_IBindingList_AllowNew;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowRemove)) bool System_ComponentModel_IBindingList_AllowRemove;

  __declspec(property(get = System_ComponentModel_IBindingList_get_IsSorted)) bool System_ComponentModel_IBindingList_IsSorted;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortDirection))::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_SortDirection;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortProperty))::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_SortProperty;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool System_ComponentModel_IBindingList_SupportsChangeNotification;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSearching)) bool System_ComponentModel_IBindingList_SupportsSearching;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSorting)) bool System_ComponentModel_IBindingList_SupportsSorting;

  /// @brief Field _dataSet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet))::System::Data::DataSet* _dataSet;

  /// @brief Field _dataViewSettingsCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewSettingsCollection,
                      put = __cordl_internal_set__dataViewSettingsCollection))::System::Data::DataViewSettingCollection* _dataViewSettingsCollection;

  /// @brief Field _item, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Data::DataViewManagerListItemTypeDescriptor* _item;

  /// @brief Field _locked, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__locked, put = __cordl_internal_set__locked)) bool _locked;

  /// @brief Field _nViews, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__nViews, put = __cordl_internal_set__nViews)) int32_t _nViews;

  /// @brief Field s_notSupported, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_notSupported, put = setStaticF_s_notSupported))::System::NotSupportedException* s_notSupported;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IBindingList"
  constexpr operator ::System::ComponentModel::IBindingList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ITypedList"
  constexpr operator ::System::ComponentModel::ITypedList*() noexcept;

  /// @brief Method CreateDataView, addr 0x193412c, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Data::DataView* CreateDataView(::System::Data::DataTable* table);

  static inline ::System::Data::DataViewManager* New_ctor(::System::Data::DataSet* dataSet, bool locked);

  /// @brief Method OnListChanged, addr 0x19341d0, size 0xf8, virtual true, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method RelationCollectionChanged, addr 0x19344d8, size 0x210, virtual true, abstract: false, final false
  inline void RelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x1933a40, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x1933a1c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x1933a28, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x1933a24, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1933940, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x1933af4, size 0x28, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x1933b1c, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x1933b44, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x1933b54, size 0x14, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x1933b68, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x1933b90, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x1933bb8, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x1933a38, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x1933a30, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x1933ac4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x1933acc, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0x1933e48, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0x1933be8, size 0x40, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_IBindingList_AddNew();

  /// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0x1933e4c, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method System.ComponentModel.IBindingList.Find, addr 0x1933e8c, size 0x40, virtual true, abstract: false, final true
  inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key);

  /// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0x1933ecc, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0x1933ed0, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveSort();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0x1933c28, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowEdit();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0x1933be0, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowNew();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0x1933c30, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowRemove();

  /// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0x1933c50, size 0x40, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_IsSorted();

  /// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0x1933cd0, size 0x40, virtual true, abstract: false, final true
  inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection();

  /// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0x1933c90, size 0x40, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0x1933c38, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0x1933c40, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSearching();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0x1933c48, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSorting();

  /// @brief Method System.ComponentModel.ITypedList.GetItemProperties, addr 0x1933fbc, size 0x170, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection*
  System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method System.ComponentModel.ITypedList.GetListName, addr 0x1933f10, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method TableCollectionChanged, addr 0x19342c8, size 0x210, virtual true, abstract: false, final false
  inline void TableCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get_ListChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ListChangedEventHandler*> const& __cordl_internal_get_ListChanged() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataViewSettingCollection*& __cordl_internal_get__dataViewSettingsCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewSettingCollection*> const& __cordl_internal_get__dataViewSettingsCollection() const;

  constexpr ::System::Data::DataViewManagerListItemTypeDescriptor*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewManagerListItemTypeDescriptor*> const& __cordl_internal_get__item() const;

  constexpr bool const& __cordl_internal_get__locked() const;

  constexpr bool& __cordl_internal_get__locked();

  constexpr int32_t const& __cordl_internal_get__nViews() const;

  constexpr int32_t& __cordl_internal_get__nViews();

  constexpr void __cordl_internal_set_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dataViewSettingsCollection(::System::Data::DataViewSettingCollection* value);

  constexpr void __cordl_internal_set__item(::System::Data::DataViewManagerListItemTypeDescriptor* value);

  constexpr void __cordl_internal_set__locked(bool value);

  constexpr void __cordl_internal_set__nViews(int32_t value);

  /// @brief Method .ctor, addr 0x19336b0, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, bool locked);

  /// @brief Method add_ListChanged, addr 0x1933d10, size 0x9c, virtual true, abstract: false, final true
  inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  static inline ::System::NotSupportedException* getStaticF_s_notSupported();

  /// @brief Method get_DataSet, addr 0x1933930, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataSet* get_DataSet();

  /// @brief Method get_DataViewSettings, addr 0x1933938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataViewSettingCollection* get_DataViewSettings();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::ComponentModel::IBindingList"
  constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

  /// @brief Convert to "::System::ComponentModel::ITypedList"
  constexpr ::System::ComponentModel::ITypedList* i___System__ComponentModel__ITypedList() noexcept;

  /// @brief Method remove_ListChanged, addr 0x1933dac, size 0x9c, virtual true, abstract: false, final true
  inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  static inline void setStaticF_s_notSupported(::System::NotSupportedException* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewManager(DataViewManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewManager(DataViewManager const&) = delete;

  /// @brief Field _dataViewSettingsCollection, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataViewSettingCollection* ____dataViewSettingsCollection;

  /// @brief Field _dataSet, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _item, offset: 0x30, size: 0x8, def value: None
  ::System::Data::DataViewManagerListItemTypeDescriptor* ____item;

  /// @brief Field _locked, offset: 0x38, size: 0x1, def value: None
  bool ____locked;

  /// @brief Field _nViews, offset: 0x3c, size: 0x4, def value: None
  int32_t ____nViews;

  /// @brief Field ListChanged, offset: 0x40, size: 0x8, def value: None
  ::System::ComponentModel::ListChangedEventHandler* ___ListChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataViewManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____dataViewSettingsCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____dataSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____item) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____locked) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____nViews) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ___ListChanged) == 0x40, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewManager*, "System.Data", "DataViewManager");
