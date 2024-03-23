#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ParameterValue_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterCollection)
namespace Amazon::Runtime::Internal {
class __ParameterCollection___GetParametersEnumerable_d__5;
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
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime::Internal {
class __ParameterCollection___GetParametersEnumerable_d__5;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ParameterCollection);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5);
// Type: ::<GetParametersEnumerable>d__5
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::ParameterCollection::<GetParametersEnumerable>d__5*
class CORDL_TYPE __ParameterCollection___GetParametersEnumerable_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current))::System::Collections::Generic::KeyValuePair_2<
      ::StringW, ::StringW> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::Internal::ParameterCollection* __4__this;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x30
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> __7__wrap1;

  /// @brief Field <>7__wrap3, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap3;

  /// @brief Field <>7__wrap4, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap4, put = __cordl_internal_set___7__wrap4))::System::Collections::Generic::__List_1__Enumerator<double_t> __7__wrap4;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <name>5__3, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__name_5__3, put = __cordl_internal_set__name_5__3))::StringW _name_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23dc0f4, size 0x64c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator, addr 0x23dc8d8, size 0xa4, virtual true, abstract:
  /// false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current, addr 0x23dc830, size 0xc, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x23dc97c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23dc83c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23dc87c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23dc008, size 0xec, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>& __cordl_internal_get___2__current();

  constexpr ::Amazon::Runtime::Internal::ParameterCollection*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParameterCollection*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*>& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __cordl_internal_get___7__wrap3();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<double_t> const& __cordl_internal_get___7__wrap4() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<double_t>& __cordl_internal_get___7__wrap4();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::StringW const& __cordl_internal_get__name_5__3() const;

  constexpr ::StringW& __cordl_internal_get__name_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::Internal::ParameterCollection* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::__List_1__Enumerator<double_t> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__name_5__3(::StringW value);

  /// @brief Method <>m__Finally1, addr 0x23dc7e0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x23dc740, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x23dc790, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x23dbfd4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParameterCollection___GetParametersEnumerable_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ParameterCollection___GetParametersEnumerable_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParameterCollection___GetParametersEnumerable_d__5(__ParameterCollection___GetParametersEnumerable_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParameterCollection___GetParametersEnumerable_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParameterCollection___GetParametersEnumerable_d__5(__ParameterCollection___GetParametersEnumerable_d__5 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ParameterCollection* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x30, def value: None
  ::System::Collections::Generic::__SortedDictionary_2__Enumerator<::StringW, ::Amazon::Runtime::ParameterValue*> _____7__wrap1;

  /// @brief Field <name>5__3, offset: 0x68, size: 0x8, def value: None
  ::StringW ____name_5__3;

  /// @brief Field <>7__wrap3, offset: 0x70, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x88, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<double_t> _____7__wrap4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, 0xa0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, ____name_5__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____7__wrap3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5, _____7__wrap4) == 0x88, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::ParameterCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ParameterCollection*
class CORDL_TYPE ParameterCollection : public ::System::Collections::Generic::SortedDictionary_2<::StringW, ::Amazon::Runtime::ParameterValue*> {
public:
  // Declarations
  using _GetParametersEnumerable_d__5 = ::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5;

  /// @brief Method Add, addr 0x23d9468, size 0x94, virtual false, abstract: false, final false
  inline void Add(::StringW key, ::StringW value);

  /// @brief Method Add, addr 0x23dbde8, size 0x94, virtual false, abstract: false, final false
  inline void Add(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values);

  /// @brief Method Add, addr 0x23dbe7c, size 0x94, virtual false, abstract: false, final false
  inline void Add(::StringW key, ::System::Collections::Generic::List_1<double_t>* values);

  /// @brief Method GetParametersEnumerable, addr 0x23dbf5c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* GetParametersEnumerable();

  /// @brief Method GetSortedParametersList, addr 0x23dbf10, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* GetSortedParametersList();

  static inline ::Amazon::Runtime::Internal::ParameterCollection* New_ctor();

  /// @brief Method .ctor, addr 0x23d5ad4, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterCollection(ParameterCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterCollection(ParameterCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ParameterCollection, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ParameterCollection);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ParameterCollection*, "Amazon.Runtime.Internal", "ParameterCollection");
NEED_NO_BOX(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__ParameterCollection___GetParametersEnumerable_d__5*, "Amazon.Runtime.Internal", "ParameterCollection/<GetParametersEnumerable>d__5");
