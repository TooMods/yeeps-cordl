#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStream_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableEventStream_2)
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEnumerableEventStream_2;
}
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamDecoder;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEventStream_2;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class __EnumerableEventStream_2___GetEnumerator_d__7;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class __EnumerableEventStream_2____c__DisplayClass7_0;
}
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamEventReceivedArgs_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class EnumerableEventStream_2;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class __EnumerableEventStream_2___GetEnumerator_d__7;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class __EnumerableEventStream_2____c__DisplayClass7_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::EnumerableEventStream`2::<>c__DisplayClass7_0<T,TE>*
class CORDL_TYPE __EnumerableEventStream_2____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field events, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_events, put = __cordl_internal_set_events))::System::Collections::Generic::Queue_1<T>* events;

  static inline ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>* New_ctor();

  /// @brief Method <GetEnumerator>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _GetEnumerator_b__0(::System::Object* sender, ::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>* args);

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_events();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& __cordl_internal_get_events() const;

  constexpr void __cordl_internal_set_events(::System::Collections::Generic::Queue_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumerableEventStream_2____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumerableEventStream_2____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumerableEventStream_2____c__DisplayClass7_0(__EnumerableEventStream_2____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumerableEventStream_2____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumerableEventStream_2____c__DisplayClass7_0(__EnumerableEventStream_2____c__DisplayClass7_0 const&) = delete;

  /// @brief Field events, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ___events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
// Type: ::<GetEnumerator>d__7
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::EnumerableEventStream`2::<GetEnumerator>d__7<T,TE>*
class CORDL_TYPE __EnumerableEventStream_2___GetEnumerator_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* __4__this;

  /// @brief Field <>8__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1))::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>* __8__1;

  /// @brief Field <buffer>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer_5__2, put = __cordl_internal_set__buffer_5__2))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

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

  constexpr ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*> const& __cordl_internal_get___4__this() const;

  constexpr ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*& __cordl_internal_get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*> const& __cordl_internal_get___8__1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer_5__2() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* value);

  constexpr void __cordl_internal_set___8__1(::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>* value);

  constexpr void __cordl_internal_set__buffer_5__2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumerableEventStream_2___GetEnumerator_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumerableEventStream_2___GetEnumerator_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumerableEventStream_2___GetEnumerator_d__7(__EnumerableEventStream_2___GetEnumerator_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumerableEventStream_2___GetEnumerator_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumerableEventStream_2___GetEnumerator_d__7(__EnumerableEventStream_2___GetEnumerator_d__7 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* _____4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>* _____8__1;

  /// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
// Type: Amazon.Runtime.EventStreams.Internal::EnumerableEventStream`2
// SizeInfo { instance_size: 64, native_size: 58, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::EnumerableEventStream`2<T,TE>*
class CORDL_TYPE EnumerableEventStream_2 : public ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE> {
public:
  // Declarations
  using _GetEnumerator_d__7 = ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>;

  using __c__DisplayClass7_0 = ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>;

  __declspec(property(get = get_IsEnumerated, put = set_IsEnumerated)) bool IsEnumerated;

  /// @brief Field <IsEnumerated>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEnumerated_k__BackingField, put = __cordl_internal_set__IsEnumerated_k__BackingField)) bool _IsEnumerated_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T,TE>"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  static inline ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* New_ctor(::System::IO::Stream* stream);

  static inline ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* New_ctor(::System::IO::Stream* stream,
                                                                                                    ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder);

  /// @brief Method StartProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartProcessing();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get__IsEnumerated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEnumerated_k__BackingField();

  constexpr void __cordl_internal_set__IsEnumerated_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder);

  /// @brief Method get_IsEnumerated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEnumerated();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T,TE>"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>* i___Amazon__Runtime__EventStreams__Internal__IEnumerableEventStream_2_T_TE_() noexcept;

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>* i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_IsEnumerated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_IsEnumerated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableEventStream_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerableEventStream_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableEventStream_2(EnumerableEventStream_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableEventStream_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableEventStream_2(EnumerableEventStream_2 const&) = delete;

  /// @brief Field <IsEnumerated>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____IsEnumerated_k__BackingField;

  /// @brief Field MutuallyExclusiveExceptionMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString MutuallyExclusiveExceptionMessage{
    u"Stream has already begun processing. Event-driven and Enumerable traversals of the stream are mutually exclusive. You can either use the event driven or enumerable interface, but not both."
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2, "Amazon.Runtime.EventStreams.Internal", "EnumerableEventStream`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7, "Amazon.Runtime.EventStreams.Internal",
                                     "EnumerableEventStream`2/<GetEnumerator>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0, "Amazon.Runtime.EventStreams.Internal",
                                     "EnumerableEventStream`2/<>c__DisplayClass7_0");
