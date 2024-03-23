#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashSetList_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class ISet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Collections {
template <typename T> class HashSetList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Collections::HashSetList_1);
// Type: Unity.XR.CoreUtils.Collections::HashSetList`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Collections::HashSetList`1<T>*
class CORDL_TYPE HashSetList_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  /// @brief Field m_InternalHashSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalHashSet, put = __cordl_internal_set_m_InternalHashSet))::System::Collections::Generic::HashSet_1<T>* m_InternalHashSet;

  /// @brief Field m_InternalList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalList, put = __cordl_internal_set_m_InternalList))::System::Collections::Generic::List_1<T>* m_InternalList;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
  constexpr operator ::System::Collections::Generic::ISet_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(T item);

  /// @brief Method AsList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* AsList();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__List_1__Enumerator<T> GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  static inline ::Unity::XR::CoreUtils::Collections::HashSetList_1<T>* New_ctor(int32_t capacity);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method RefreshList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RefreshList();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_T__Add(T item);

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_m_InternalHashSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get_m_InternalHashSet() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_InternalList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get_m_InternalList() const;

  constexpr void __cordl_internal_set_m_InternalHashSet(::System::Collections::Generic::HashSet_1<T>* value);

  constexpr void __cordl_internal_set_m_InternalList(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
  constexpr ::System::Collections::Generic::ISet_1<T>* i___System__Collections__Generic__ISet_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSetList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetList_1(HashSetList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetList_1(HashSetList_1 const&) = delete;

  /// @brief Field m_InternalList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_InternalList;

  /// @brief Field m_InternalHashSet, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ___m_InternalHashSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Collections::HashSetList_1, "Unity.XR.CoreUtils.Collections", "HashSetList`1");
