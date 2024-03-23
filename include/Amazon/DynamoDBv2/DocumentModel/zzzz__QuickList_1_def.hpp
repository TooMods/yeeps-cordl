#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuickList_1)
namespace Amazon::DynamoDBv2::DocumentModel {
template <typename T> class __QuickList_1___RemoveFromHead_d__6;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace Amazon::DynamoDBv2::DocumentModel {
template <typename T> class QuickList_1;
}
namespace Amazon::DynamoDBv2::DocumentModel {
template <typename T> class __QuickList_1___RemoveFromHead_d__6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::QuickList_1);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6);
// Type: ::<RemoveFromHead>d__6
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::QuickList`1::<RemoveFromHead>d__6<T>*
class CORDL_TYPE __QuickList_1___RemoveFromHead_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__numberOfItems, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__numberOfItems, put = __cordl_internal_set___3__numberOfItems)) int32_t __3__numberOfItems;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <boundedNumberOfItems>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__boundedNumberOfItems_5__2, put = __cordl_internal_set__boundedNumberOfItems_5__2)) int32_t _boundedNumberOfItems_5__2;

  /// @brief Field <i>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field numberOfItems, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_numberOfItems, put = __cordl_internal_set_numberOfItems)) int32_t numberOfItems;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__numberOfItems() const;

  constexpr int32_t& __cordl_internal_get___3__numberOfItems();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__boundedNumberOfItems_5__2() const;

  constexpr int32_t& __cordl_internal_get__boundedNumberOfItems_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr int32_t const& __cordl_internal_get_numberOfItems() const;

  constexpr int32_t& __cordl_internal_get_numberOfItems();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__numberOfItems(int32_t value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__boundedNumberOfItems_5__2(int32_t value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set_numberOfItems(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickList_1___RemoveFromHead_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QuickList_1___RemoveFromHead_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickList_1___RemoveFromHead_d__6(__QuickList_1___RemoveFromHead_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickList_1___RemoveFromHead_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickList_1___RemoveFromHead_d__6(__QuickList_1___RemoveFromHead_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field numberOfItems, offset: 0x24, size: 0x4, def value: None
  int32_t ___numberOfItems;

  /// @brief Field <>3__numberOfItems, offset: 0x28, size: 0x4, def value: None
  int32_t _____3__numberOfItems;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* _____4__this;

  /// @brief Field <boundedNumberOfItems>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t ____boundedNumberOfItems_5__2;

  /// @brief Field <i>5__3, offset: 0x3c, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::QuickList`1
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::QuickList`1<T>*
class CORDL_TYPE QuickList_1 : public ::System::Object {
public:
  // Declarations
  using _RemoveFromHead_d__6 = ::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_List, put = __cordl_internal_set_List))::System::Collections::Generic::List_1<T>* List;

  /// @brief Field StartIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_StartIndex, put = __cordl_internal_set_StartIndex)) int32_t StartIndex;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::System::Collections::Generic::IEnumerable_1<T>* items);

  /// @brief Method GetItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* GetItems();

  static inline ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* items);

  /// @brief Method RemoveFromHead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<T>* RemoveFromHead(int32_t numberOfItems);

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get_List() const;

  constexpr int32_t const& __cordl_internal_get_StartIndex() const;

  constexpr int32_t& __cordl_internal_get_StartIndex();

  constexpr void __cordl_internal_set_List(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_StartIndex(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* items);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickList_1(QuickList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickList_1(QuickList_1 const&) = delete;

  /// @brief Field List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___List;

  /// @brief Field StartIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___StartIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DocumentModel::QuickList_1, "Amazon.DynamoDBv2.DocumentModel", "QuickList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6, "Amazon.DynamoDBv2.DocumentModel", "QuickList`1/<RemoveFromHead>d__6");
