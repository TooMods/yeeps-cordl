#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NonAllocDictionary_2)
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__KeyIterator;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__Node;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__PairIterator;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__ValueIterator;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
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
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
template <typename K, typename V> class NonAllocDictionary_2;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__KeyIterator;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__Node;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__PairIterator;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> struct __NonAllocDictionary_2__ValueIterator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ExitGames::Client::Photon::NonAllocDictionary_2);
MARK_GEN_VAL_T(::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator);
MARK_GEN_VAL_T(::ExitGames::Client::Photon::__NonAllocDictionary_2__Node);
MARK_GEN_VAL_T(::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator);
MARK_GEN_VAL_T(::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator);
// Type: ::KeyIterator
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: ::NonAllocDictionary`2::KeyIterator<K,V>
struct CORDL_TYPE __NonAllocDictionary_2__KeyIterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) K Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<K>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V> GetEnumerator();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline K get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
  constexpr ::System::Collections::Generic::IEnumerator_1<K>* i___System__Collections__Generic__IEnumerator_1_K_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NonAllocDictionary_2__KeyIterator();

  // Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*", modifiers:
  // "", def_value: None }]
  constexpr __NonAllocDictionary_2__KeyIterator(int32_t _index, ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept;

  /// @brief Field _index, offset: 0x0, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _dict, offset: 0x8, size: 0x8, def value: None
  ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
// Type: ::ValueIterator
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: ::NonAllocDictionary`2::ValueIterator<K,V>
struct CORDL_TYPE __NonAllocDictionary_2__ValueIterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) V Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<V>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<V>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V> GetEnumerator();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline V get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<V>"
  constexpr ::System::Collections::Generic::IEnumerator_1<V>* i___System__Collections__Generic__IEnumerator_1_V_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NonAllocDictionary_2__ValueIterator();

  // Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*", modifiers:
  // "", def_value: None }]
  constexpr __NonAllocDictionary_2__ValueIterator(int32_t _index, ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept;

  /// @brief Field _index, offset: 0x0, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _dict, offset: 0x8, size: 0x8, def value: None
  ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
// Type: ::PairIterator
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: ::NonAllocDictionary`2::PairIterator<K,V>
struct CORDL_TYPE __NonAllocDictionary_2__PairIterator {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<K, V> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<K, V> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_K_V__();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NonAllocDictionary_2__PairIterator();

  // Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*", modifiers:
  // "", def_value: None }]
  constexpr __NonAllocDictionary_2__PairIterator(int32_t _index, ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept;

  /// @brief Field _index, offset: 0x0, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _dict, offset: 0x8, size: 0x8, def value: None
  ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
// Type: ::Node
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: ::NonAllocDictionary`2::Node<K,V>
struct CORDL_TYPE __NonAllocDictionary_2__Node {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NonAllocDictionary_2__Node();

  // Ctor Parameters [CppParam { name: "Used", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hash", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Key", ty: "K", modifiers: "", def_value: None }, CppParam { name: "Val", ty: "V", modifiers: "", def_value: None }]
  constexpr __NonAllocDictionary_2__Node(bool Used, int32_t Next, uint32_t Hash, K Key, V Val) noexcept;

  /// @brief Field Used, offset: 0x0, size: 0x1, def value: None
  bool Used;

  /// @brief Field Next, offset: 0x4, size: 0x4, def value: None
  int32_t Next;

  /// @brief Field Hash, offset: 0x8, size: 0x4, def value: None
  uint32_t Hash;

  /// @brief Field Key, offset: 0x10, size: 0x8, def value: None
  K Key;

  /// @brief Field Val, offset: 0x18, size: 0x8, def value: None
  V Val;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::NonAllocDictionary`2
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::NonAllocDictionary`2<K,V>*
class CORDL_TYPE NonAllocDictionary_2 : public ::System::Object {
public:
  // Declarations
  using KeyIterator = ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>;

  using Node = ::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>;

  using PairIterator = ::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>;

  using ValueIterator = ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>;

  __declspec(property(get = get_Capacity)) uint32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) V Item[];

  __declspec(property(get = get_Keys))::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V> Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_K_V__get_Keys))::System::Collections::Generic::ICollection_1<K>* System_Collections_Generic_IDictionary_K_V__Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_K_V__get_Values))::System::Collections::Generic::ICollection_1<V>* System_Collections_Generic_IDictionary_K_V__Values;

  __declspec(property(get = get_Values))::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V> Values;

  /// @brief Field _buckets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets))::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _capacity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__capacity, put = __cordl_internal_set__capacity)) uint32_t _capacity;

  /// @brief Field _freeCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__freeCount, put = __cordl_internal_set__freeCount)) int32_t _freeCount;

  /// @brief Field _freeHead, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__freeHead, put = __cordl_internal_set__freeHead)) int32_t _freeHead;

  /// @brief Field _nodes, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__nodes,
      put = __cordl_internal_set__nodes))::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> _nodes;

  /// @brief Field _primeTableUInt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__primeTableUInt, put = setStaticF__primeTableUInt))::ArrayW<uint32_t, ::Array<uint32_t>*> _primeTableUInt;

  /// @brief Field _usedCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__usedCount, put = __cordl_internal_set__usedCount)) int32_t _usedCount;

  /// @brief Field isReadOnly, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field keys, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::Generic::ICollection_1<K>* keys;

  /// @brief Field values, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::System::Collections::Generic::ICollection_1<V>* values;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<K,V>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<K, V>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(::System::Collections::Generic::KeyValuePair_2<K, V> item);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(K key, V val);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(::System::Collections::Generic::KeyValuePair_2<K, V> item);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(K key);

  /// @brief Method Expand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Expand();

  /// @brief Method FindNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindNode(K key);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V> GetEnumerator();

  /// @brief Method GetNextPrime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline uint32_t GetNextPrime(uint32_t value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(K key, V val);

  /// @brief Method IsPrimeFromList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsPrimeFromList(uint32_t value);

  static inline ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* New_ctor(uint32_t capacity);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(::System::Collections::Generic::KeyValuePair_2<K, V> item);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(K key);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(K key, V val);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<K,V>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_K_V___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*> array, int32_t index);

  /// @brief Method System.Collections.Generic.IDictionary<K,V>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<K>* System_Collections_Generic_IDictionary_K_V__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<K,V>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<V>* System_Collections_Generic_IDictionary_K_V__get_Values();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(K key, ByRef<V> val);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__buckets();

  constexpr uint32_t const& __cordl_internal_get__capacity() const;

  constexpr uint32_t& __cordl_internal_get__capacity();

  constexpr int32_t const& __cordl_internal_get__freeCount() const;

  constexpr int32_t& __cordl_internal_get__freeCount();

  constexpr int32_t const& __cordl_internal_get__freeHead() const;

  constexpr int32_t& __cordl_internal_get__freeHead();

  constexpr ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> const&
  __cordl_internal_get__nodes() const;

  constexpr ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*>& __cordl_internal_get__nodes();

  constexpr int32_t const& __cordl_internal_get__usedCount() const;

  constexpr int32_t& __cordl_internal_get__usedCount();

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr ::System::Collections::Generic::ICollection_1<K>*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<K>*> const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::Generic::ICollection_1<V>*& __cordl_internal_get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<V>*> const& __cordl_internal_get_values() const;

  constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__capacity(uint32_t value);

  constexpr void __cordl_internal_set__freeCount(int32_t value);

  constexpr void __cordl_internal_set__freeHead(int32_t value);

  constexpr void
  __cordl_internal_set__nodes(::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> value);

  constexpr void __cordl_internal_set__usedCount(int32_t value);

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_keys(::System::Collections::Generic::ICollection_1<K>* value);

  constexpr void __cordl_internal_set_values(::System::Collections::Generic::ICollection_1<V>* value);

  /// @brief Method Assert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(uint32_t capacity);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF__primeTableUInt();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline V get_Item(K key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V> get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V> get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<K,V>"
  constexpr ::System::Collections::Generic::IDictionary_2<K, V>* i___System__Collections__Generic__IDictionary_2_K_V_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF__primeTableUInt(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(K key, V value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonAllocDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonAllocDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonAllocDictionary_2(NonAllocDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonAllocDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonAllocDictionary_2(NonAllocDictionary_2 const&) = delete;

  /// @brief Field _freeHead, offset: 0x10, size: 0x4, def value: None
  int32_t ____freeHead;

  /// @brief Field _freeCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____freeCount;

  /// @brief Field _usedCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____usedCount;

  /// @brief Field _capacity, offset: 0x1c, size: 0x4, def value: None
  uint32_t ____capacity;

  /// @brief Field _buckets, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _nodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> ____nodes;

  /// @brief Field isReadOnly, offset: 0x30, size: 0x1, def value: None
  bool ___isReadOnly;

  /// @brief Field keys, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<K>* ___keys;

  /// @brief Field values, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<V>* ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ExitGames::Client::Photon::NonAllocDictionary_2, "ExitGames.Client.Photon", "NonAllocDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator, "ExitGames.Client.Photon", "NonAllocDictionary`2/KeyIterator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::ExitGames::Client::Photon::__NonAllocDictionary_2__Node, "ExitGames.Client.Photon", "NonAllocDictionary`2/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator, "ExitGames.Client.Photon", "NonAllocDictionary`2/PairIterator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator, "ExitGames.Client.Photon", "NonAllocDictionary`2/ValueIterator");
