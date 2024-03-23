#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_2)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
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
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __SortedList_2__Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__KeyList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__SortedListKeyEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__SortedListValueEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__ValueList;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__KeyList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__SortedListKeyEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__SortedListValueEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __SortedList_2__ValueList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __SortedList_2__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedList_2__KeyList);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedList_2__SortedListKeyEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedList_2__SortedListValueEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedList_2__ValueList);
MARK_GEN_VAL_T(::System::Collections::Generic::__SortedList_2__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: ::SortedList`2::Enumerator<TKey,TValue>
struct CORDL_TYPE __SortedList_2__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> Current;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Entry))::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_Entry;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Key))::System::Object* System_Collections_IDictionaryEnumerator_Key;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Value))::System::Object* System_Collections_IDictionaryEnumerator_Value;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*();

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Key();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Value();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList, int32_t getEnumeratorRetType);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList_2__Enumerator();

  // Ctor Parameters [CppParam { name: "_sortedList", ty: "::System::Collections::Generic::SortedList_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "TKey",
  // modifiers: "", def_value: None }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SortedList_2__Enumerator(::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList, TKey _key, TValue _value, int32_t _index, int32_t _version,
                                       int32_t _getEnumeratorRetType) noexcept;

  /// @brief Field _sortedList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _key, offset: 0x8, size: 0x8, def value: None
  TKey _key;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  TValue _value;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _getEnumeratorRetType, offset: 0x20, size: 0x4, def value: None
  int32_t _getEnumeratorRetType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::SortedListKeyEnumerator
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::SortedList`2::SortedListKeyEnumerator<TKey,TValue>*
class CORDL_TYPE __SortedList_2__SortedListKeyEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TKey Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _currentKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentKey, put = __cordl_internal_set__currentKey)) TKey _currentKey;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList))::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Generic::__SortedList_2__SortedListKeyEnumerator<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr TKey const& __cordl_internal_get__currentKey() const;

  constexpr TKey& __cordl_internal_get__currentKey();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedList_2<TKey, TValue>*> const& __cordl_internal_get__sortedList() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentKey(TKey value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* i___System__Collections__Generic__IEnumerator_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList_2__SortedListKeyEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__SortedListKeyEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList_2__SortedListKeyEnumerator(__SortedList_2__SortedListKeyEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__SortedListKeyEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList_2__SortedListKeyEnumerator(__SortedList_2__SortedListKeyEnumerator const&) = delete;

  /// @brief Field _sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____sortedList;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentKey, offset: 0x20, size: 0x8, def value: None
  TKey ____currentKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::SortedListValueEnumerator
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::SortedList`2::SortedListValueEnumerator<TKey,TValue>*
class CORDL_TYPE __SortedList_2__SortedListValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _currentValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentValue, put = __cordl_internal_set__currentValue)) TValue _currentValue;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList))::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Generic::__SortedList_2__SortedListValueEnumerator<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr TValue const& __cordl_internal_get__currentValue() const;

  constexpr TValue& __cordl_internal_get__currentValue();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedList_2<TKey, TValue>*> const& __cordl_internal_get__sortedList() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentValue(TValue value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList_2__SortedListValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__SortedListValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList_2__SortedListValueEnumerator(__SortedList_2__SortedListValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__SortedListValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList_2__SortedListValueEnumerator(__SortedList_2__SortedListValueEnumerator const&) = delete;

  /// @brief Field _sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____sortedList;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentValue, offset: 0x20, size: 0x8, def value: None
  TValue ____currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::KeyList
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::SortedList`2::KeyList<TKey,TValue>*
class CORDL_TYPE __SortedList_2__KeyList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TKey Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dict, put = __cordl_internal_set__dict))::System::Collections::Generic::SortedList_2<TKey, TValue>* _dict;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TKey>"
  constexpr operator ::System::Collections::Generic::IList_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TKey key);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TKey>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(TKey key);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, TKey value);

  static inline ::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedList_2<TKey, TValue>*> const& __cordl_internal_get__dict() const;

  constexpr void __cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr ::System::Collections::Generic::ICollection_1<TKey>* i___System__Collections__Generic__ICollection_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TKey>"
  constexpr ::System::Collections::Generic::IList_1<TKey>* i___System__Collections__Generic__IList_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, TKey value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList_2__KeyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__KeyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList_2__KeyList(__SortedList_2__KeyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__KeyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList_2__KeyList(__SortedList_2__KeyList const&) = delete;

  /// @brief Field _dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::ValueList
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::SortedList`2::ValueList<TKey,TValue>*
class CORDL_TYPE __SortedList_2__ValueList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dict, put = __cordl_internal_set__dict))::System::Collections::Generic::SortedList_2<TKey, TValue>* _dict;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TValue>"
  constexpr operator ::System::Collections::Generic::IList_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TValue key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TValue value);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(TValue value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, TValue value);

  static inline ::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TValue value);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedList_2<TKey, TValue>*> const& __cordl_internal_get__dict() const;

  constexpr void __cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr ::System::Collections::Generic::ICollection_1<TValue>* i___System__Collections__Generic__ICollection_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TValue>"
  constexpr ::System::Collections::Generic::IList_1<TValue>* i___System__Collections__Generic__IList_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList_2__ValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__ValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList_2__ValueList(__SortedList_2__ValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList_2__ValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList_2__ValueList(__SortedList_2__ValueList const&) = delete;

  /// @brief Field _dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: System.Collections.Generic::SortedList`2
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::System.Collections.Generic::SortedList`2<TKey,TValue>*
class CORDL_TYPE SortedList_2 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::__SortedList_2__Enumerator<TKey, TValue>;

  using KeyList = ::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>;

  using SortedListKeyEnumerator = ::System::Collections::Generic::__SortedList_2__SortedListKeyEnumerator<TKey, TValue>;

  using SortedListValueEnumerator = ::System::Collections::Generic::__SortedList_2__SortedListValueEnumerator<TKey, TValue>;

  using ValueList = ::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Comparer))::System::Collections::Generic::IComparer_1<TKey>* Comparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::IList_1<TKey>* Keys;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Keys))::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__Keys;

  __declspec(
      property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Values))::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__Values;

  __declspec(property(
      get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys))::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Keys;

  __declspec(property(get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values))::System::Collections::Generic::IEnumerable_1<
      TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Values;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = get_Values))::System::Collections::Generic::IList_1<TValue>* Values;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer))::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field keyList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyList, put = __cordl_internal_set_keyList))::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>* keyList;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::ArrayW<TKey, ::Array<TKey>*> keys;

  /// @brief Field valueList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueList, put = __cordl_internal_set_valueList))::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>* valueList;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::ArrayW<TValue, ::Array<TValue>*> values;

  /// @brief Field version, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsValue(TValue value);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method GetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey GetKey(int32_t index);

  /// @brief Method GetKeyListHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>* GetKeyListHelper();

  /// @brief Method GetValueListHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>* GetValueListHelper();

  /// @brief Method IndexOfKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOfKey(TKey key);

  /// @brief Method IndexOfValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOfValue(TValue value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, TKey key, TValue value);

  /// @brief Method IsCompatibleKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleKey(::System::Object* key);

  static inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* New_ctor();

  static inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator();

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>*& __cordl_internal_get_keyList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>*> const& __cordl_internal_get_keyList() const;

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __cordl_internal_get_keys();

  constexpr ::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>*& __cordl_internal_get_valueList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>*> const& __cordl_internal_get_valueList() const;

  constexpr ::ArrayW<TValue, ::Array<TValue>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<TValue, ::Array<TValue>*>& __cordl_internal_get_values();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_keyList(::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>* value);

  constexpr void __cordl_internal_set_keys(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr void __cordl_internal_set_valueList(::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>* value);

  constexpr void __cordl_internal_set_values(::ArrayW<TValue, ::Array<TValue>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method get_Comparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IComparer_1<TKey>* get_Comparer();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<TKey>* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<TValue>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2(SortedList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2(SortedList_2 const&) = delete;

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TKey, ::Array<TKey>*> ___keys;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> ___values;

  /// @brief Field _size, offset: 0x20, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field version, offset: 0x24, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  /// @brief Field keyList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::__SortedList_2__KeyList<TKey, TValue>* ___keyList;

  /// @brief Field valueList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::__SortedList_2__ValueList<TKey, TValue>* ___valueList;

  /// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2, "System.Collections.Generic", "SortedList`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedList_2__KeyList, "System.Collections.Generic", "SortedList`2/KeyList");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedList_2__SortedListKeyEnumerator, "System.Collections.Generic", "SortedList`2/SortedListKeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedList_2__SortedListValueEnumerator, "System.Collections.Generic", "SortedList`2/SortedListValueEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedList_2__ValueList, "System.Collections.Generic", "SortedList`2/ValueList");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__SortedList_2__Enumerator, "System.Collections.Generic", "SortedList`2/Enumerator");
