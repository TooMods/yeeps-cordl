#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceListenerCollection)
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
namespace System::Diagnostics {
class TraceListener;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListenerCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceListenerCollection);
// Type: System.Diagnostics::TraceListenerCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::TraceListenerCollection*
class CORDL_TYPE TraceListenerCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::Diagnostics::TraceListener* Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list))::System::Collections::ArrayList* list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x12b6ac4, size 0x138, virtual false, abstract: false, final false
  inline int32_t Add(::System::Diagnostics::TraceListener* listener);

  /// @brief Method AddRange, addr 0x12b7bc8, size 0xb4, virtual false, abstract: false, final false
  inline void AddRange(::ArrayW<::System::Diagnostics::TraceListener*, ::Array<::System::Diagnostics::TraceListener*>*> value);

  /// @brief Method Clear, addr 0x12b7c7c, size 0x60, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method GetEnumerator, addr 0x12b6d14, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method InitializeListener, addr 0x12b7ad4, size 0xf4, virtual false, abstract: false, final false
  inline void InitializeListener(::System::Diagnostics::TraceListener* listener);

  static inline ::System::Diagnostics::TraceListenerCollection* New_ctor();

  /// @brief Method RemoveAt, addr 0x12b7cdc, size 0x120, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x12b8474, size 0x130, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x12b846c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x12b8468, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IList.Add, addr 0x12b7f40, size 0x1e4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains, addr 0x12b8124, size 0x24, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x12b8148, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x12b816c, size 0x1dc, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x12b8348, size 0x120, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x12b7f38, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x12b7f30, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x12b7dfc, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x12b7e20, size 0x110, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_list(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x12b6928, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x12b7ab0, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x12b7a18, size 0x98, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceListener* get_Item(int32_t i);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceListenerCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceListenerCollection(TraceListenerCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceListenerCollection(TraceListenerCollection const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceListenerCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListenerCollection, ___list) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceListenerCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceListenerCollection*, "System.Diagnostics", "TraceListenerCollection");
