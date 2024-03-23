#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ParameterValue_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParametersDictionaryFacade)
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime::Internal {
class __ParametersDictionaryFacade___GetEnumerator_d__23;
}
namespace Amazon::Runtime {
class ParameterValue;
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
namespace Amazon::Runtime::Internal {
class ParametersDictionaryFacade;
}
namespace Amazon::Runtime::Internal {
class __ParametersDictionaryFacade___GetEnumerator_d__23;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ParametersDictionaryFacade);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23);
// Type: ::<GetEnumerator>d__23
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::ParametersDictionaryFacade::<GetEnumerator>d__23*
class CORDL_TYPE __ParametersDictionaryFacade___GetEnumerator_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current))::System::Collections::Generic::KeyValuePair_2<
      ::StringW, ::StringW> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::Internal::ParametersDictionaryFacade* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23da180, size 0x208, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current, addr 0x23da3d8, size 0xc, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23da3e4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23da424, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23da164, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>& __cordl_internal_get___2__current();

  constexpr ::Amazon::Runtime::Internal::ParametersDictionaryFacade*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParametersDictionaryFacade*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*>& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::Internal::ParametersDictionaryFacade* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> value);

  /// @brief Method <>m__Finally1, addr 0x23da388, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x23da0e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParametersDictionaryFacade___GetEnumerator_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ParametersDictionaryFacade___GetEnumerator_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParametersDictionaryFacade___GetEnumerator_d__23(__ParametersDictionaryFacade___GetEnumerator_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParametersDictionaryFacade___GetEnumerator_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParametersDictionaryFacade___GetEnumerator_d__23(__ParametersDictionaryFacade___GetEnumerator_d__23 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ParametersDictionaryFacade* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x30, def value: None
  ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::ParametersDictionaryFacade
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ParametersDictionaryFacade*
class CORDL_TYPE ParametersDictionaryFacade : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__23 = ::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::StringW Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<::StringW>* Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<::StringW>* Values;

  /// @brief Field _parameterCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterCollection, put = __cordl_internal_set__parameterCollection))::Amazon::Runtime::Internal::ParameterCollection* _parameterCollection;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x23d9b88, size 0xb0, virtual true, abstract: false, final true
  inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> item);

  /// @brief Method Add, addr 0x23d9450, size 0x18, virtual true, abstract: false, final true
  inline void Add(::StringW key, ::StringW value);

  /// @brief Method Clear, addr 0x23da114, size 0x50, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x23d98b8, size 0xb0, virtual true, abstract: false, final true
  inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> item);

  /// @brief Method ContainsKey, addr 0x23d954c, size 0x58, virtual true, abstract: false, final true
  inline bool ContainsKey(::StringW key);

  /// @brief Method CopyTo, addr 0x23d9c38, size 0x3a4, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*> array,
                     int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x23d9fdc, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* GetEnumerator();

  static inline ::Amazon::Runtime::Internal::ParametersDictionaryFacade* New_ctor(::Amazon::Runtime::Internal::ParameterCollection* collection);

  /// @brief Method ParameterValueToString, addr 0x23d9084, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW ParameterValueToString(::Amazon::Runtime::ParameterValue* pv);

  /// @brief Method Remove, addr 0x23d9820, size 0x98, virtual true, abstract: false, final true
  inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> item);

  /// @brief Method Remove, addr 0x23d95a4, size 0x58, virtual true, abstract: false, final true
  inline bool Remove(::StringW key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x23da110, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x23d978c, size 0x94, virtual true, abstract: false, final true
  inline bool TryGetValue(::StringW key, ByRef<::StringW> value);

  /// @brief Method UpdateParameterValue, addr 0x23d9260, size 0x1f0, virtual false, abstract: false, final false
  static inline void UpdateParameterValue(::Amazon::Runtime::ParameterValue* pv, ::StringW newValue);

  constexpr ::Amazon::Runtime::Internal::ParameterCollection*& __cordl_internal_get__parameterCollection();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParameterCollection*> const& __cordl_internal_get__parameterCollection() const;

  constexpr void __cordl_internal_set__parameterCollection(::Amazon::Runtime::Internal::ParameterCollection* value);

  /// @brief Method .ctor, addr 0x23d5b7c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::ParameterCollection* collection);

  /// @brief Method get_Count, addr 0x23d94fc, size 0x50, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x23da044, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x23d95fc, size 0x5c, virtual true, abstract: false, final true
  inline ::StringW get_Item(::StringW key);

  /// @brief Method get_Keys, addr 0x23d973c, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();

  /// @brief Method get_Values, addr 0x23d9968, size 0x220, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>"
  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* i___System__Collections__Generic__IDictionary_2___StringW___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x23d9658, size 0xe4, virtual true, abstract: false, final true
  inline void set_Item(::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametersDictionaryFacade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParametersDictionaryFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametersDictionaryFacade(ParametersDictionaryFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametersDictionaryFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametersDictionaryFacade(ParametersDictionaryFacade const&) = delete;

  /// @brief Field _parameterCollection, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ParameterCollection* ____parameterCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ParametersDictionaryFacade, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ParametersDictionaryFacade, ____parameterCollection) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ParametersDictionaryFacade);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ParametersDictionaryFacade*, "Amazon.Runtime.Internal", "ParametersDictionaryFacade");
NEED_NO_BOX(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__ParametersDictionaryFacade___GetEnumerator_d__23*, "Amazon.Runtime.Internal", "ParametersDictionaryFacade/<GetEnumerator>d__23");
