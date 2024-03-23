#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListSortDescriptionCollection)
namespace System::Collections {
class ArrayList;
}
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
class ListSortDescription;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ListSortDescriptionCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListSortDescriptionCollection);
// Type: System.ComponentModel::ListSortDescriptionCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ListSortDescriptionCollection*
class CORDL_TYPE ListSortDescriptionCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item))::System::ComponentModel::ListSortDescription* Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Field _sorts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sorts, put = __cordl_internal_set__sorts))::System::Collections::ArrayList* _sorts;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Contains, addr 0x1afc504, size 0xac, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x1afc77c, size 0x24, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method IndexOf, addr 0x1afc5b0, size 0xac, virtual true, abstract: false, final true
  inline int32_t IndexOf(::System::Object* value);

  static inline ::System::ComponentModel::ListSortDescriptionCollection* New_ctor();

  static inline ::System::ComponentModel::ListSortDescriptionCollection*
  New_ctor(::ArrayW<::System::ComponentModel::ListSortDescription*, ::Array<::System::ComponentModel::ListSortDescription*>*> sorts);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x1afc770, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x1afc778, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1afc7a0, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x1afc464, size 0x50, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x1afc4b4, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Insert, addr 0x1afc65c, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x1afc6ac, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x1afc6fc, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x1afc400, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x1afc408, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x1afc410, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x1afc414, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__sorts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__sorts() const;

  constexpr void __cordl_internal_set__sorts(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x1afc1e4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1afc24c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::ComponentModel::ListSortDescription*, ::Array<::System::ComponentModel::ListSortDescription*>*> sorts);

  /// @brief Method get_Count, addr 0x1afc74c, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x1afc318, size 0x98, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ListSortDescription* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x1afc3b0, size 0x50, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::ComponentModel::ListSortDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListSortDescriptionCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListSortDescriptionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListSortDescriptionCollection(ListSortDescriptionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListSortDescriptionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListSortDescriptionCollection(ListSortDescriptionCollection const&) = delete;

  /// @brief Field _sorts, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____sorts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListSortDescriptionCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ListSortDescriptionCollection, ____sorts) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListSortDescriptionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListSortDescriptionCollection*, "System.ComponentModel", "ListSortDescriptionCollection");
