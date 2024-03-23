#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePipeline)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
class __RuntimePipeline___EnumerateHandlers_d__21;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IPipelineHandler;
}
namespace Amazon::Runtime {
class IResponseContext;
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
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class RuntimePipeline;
}
namespace Amazon::Runtime::Internal {
class __RuntimePipeline___EnumerateHandlers_d__21;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::RuntimePipeline);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21);
// Type: ::<EnumerateHandlers>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::RuntimePipeline::<EnumerateHandlers>d__21*
class CORDL_TYPE __RuntimePipeline___EnumerateHandlers_d__21 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Amazon_Runtime_IPipelineHandler__get_Current))::Amazon::Runtime::
      IPipelineHandler* System_Collections_Generic_IEnumerator_Amazon_Runtime_IPipelineHandler__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::Runtime::IPipelineHandler* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::Internal::RuntimePipeline* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <handler>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__handler_5__2, put = __cordl_internal_set__handler_5__2))::Amazon::Runtime::IPipelineHandler* _handler_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::IPipelineHandler*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::IPipelineHandler*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::IPipelineHandler*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::IPipelineHandler*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23f0c20, size 0xf4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Amazon.Runtime.IPipelineHandler>.GetEnumerator, addr 0x23f0d64, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::IPipelineHandler*>* System_Collections_Generic_IEnumerable_Amazon_Runtime_IPipelineHandler__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Amazon.Runtime.IPipelineHandler>.get_Current, addr 0x23f0d14, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPipelineHandler* System_Collections_Generic_IEnumerator_Amazon_Runtime_IPipelineHandler__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x23f0e08, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23f0d1c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23f0d5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23f0c1c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::Runtime::IPipelineHandler*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& __cordl_internal_get___2__current() const;

  constexpr ::Amazon::Runtime::Internal::RuntimePipeline*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::RuntimePipeline*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Amazon::Runtime::IPipelineHandler*& __cordl_internal_get__handler_5__2();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& __cordl_internal_get__handler_5__2() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::Runtime::IPipelineHandler* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::Internal::RuntimePipeline* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__handler_5__2(::Amazon::Runtime::IPipelineHandler* value);

  /// @brief Method .ctor, addr 0x23f0a2c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::IPipelineHandler*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::IPipelineHandler*>* i___System__Collections__Generic__IEnumerable_1___Amazon__Runtime__IPipelineHandler__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::IPipelineHandler*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::IPipelineHandler*>* i___System__Collections__Generic__IEnumerator_1___Amazon__Runtime__IPipelineHandler__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePipeline___EnumerateHandlers_d__21();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePipeline___EnumerateHandlers_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePipeline___EnumerateHandlers_d__21(__RuntimePipeline___EnumerateHandlers_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePipeline___EnumerateHandlers_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePipeline___EnumerateHandlers_d__21(__RuntimePipeline___EnumerateHandlers_d__21 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::IPipelineHandler* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::RuntimePipeline* _____4__this;

  /// @brief Field <handler>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IPipelineHandler* ____handler_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21, ____handler_5__2) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::RuntimePipeline
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::RuntimePipeline*
class CORDL_TYPE RuntimePipeline : public ::System::Object {
public:
  // Declarations
  using _EnumerateHandlers_d__21 = ::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21;

  __declspec(property(get = get_Handler))::Amazon::Runtime::IPipelineHandler* Handler;

  __declspec(property(get = get_Handlers))::System::Collections::Generic::List_1<::Amazon::Runtime::IPipelineHandler*>* Handlers;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _handler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::Amazon::Runtime::IPipelineHandler* _handler;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::ILogger* _logger;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddHandler, addr 0x23f00d4, size 0x194, virtual false, abstract: false, final false
  inline void AddHandler(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method AddHandlerAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddHandlerAfter(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method AddHandlerBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddHandlerBefore(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method Dispose, addr 0x23f0a60, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x23f0acc, size 0x150, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateHandlers, addr 0x23f09b4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::IPipelineHandler*>* EnumerateHandlers();

  /// @brief Method GetInnermostHandler, addr 0x23f054c, size 0x110, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::IPipelineHandler* GetInnermostHandler(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method InsertHandler, addr 0x23f0710, size 0x258, virtual false, abstract: false, final false
  static inline void InsertHandler(::Amazon::Runtime::IPipelineHandler* handler, ::Amazon::Runtime::IPipelineHandler* current);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23f03a4, size 0x124, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::IResponseContext* InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::RuntimePipeline* New_ctor(::Amazon::Runtime::IPipelineHandler* handler);

  static inline ::Amazon::Runtime::Internal::RuntimePipeline* New_ctor(::Amazon::Runtime::IPipelineHandler* handler, ::Amazon::Runtime::Internal::Util::ILogger* logger);

  static inline ::Amazon::Runtime::Internal::RuntimePipeline* New_ctor(::System::Collections::Generic::IList_1<::Amazon::Runtime::IPipelineHandler*>* handlers);

  static inline ::Amazon::Runtime::Internal::RuntimePipeline* New_ctor(::System::Collections::Generic::IList_1<::Amazon::Runtime::IPipelineHandler*>* handlers,
                                                                       ::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method RemoveHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveHandler();

  /// @brief Method ReplaceHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ReplaceHandler(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method SetHandlerProperties, addr 0x23f065c, size 0xb4, virtual false, abstract: false, final false
  inline void SetHandlerProperties(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method ThrowIfDisposed, addr 0x23f04c8, size 0x84, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::Amazon::Runtime::IPipelineHandler*& __cordl_internal_get__handler();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& __cordl_internal_get__handler() const;

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__handler(::Amazon::Runtime::IPipelineHandler* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method .ctor, addr 0x23efab8, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IPipelineHandler* handler);

  /// @brief Method .ctor, addr 0x23f0268, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IPipelineHandler* handler, ::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method .ctor, addr 0x23efc4c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::Amazon::Runtime::IPipelineHandler*>* handlers);

  /// @brief Method .ctor, addr 0x23efd10, size 0x3c4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::Amazon::Runtime::IPipelineHandler*>* handlers, ::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method get_Handler, addr 0x23efab0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::IPipelineHandler* get_Handler();

  /// @brief Method get_Handlers, addr 0x23f0968, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::IPipelineHandler*>* get_Handlers();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePipeline(RuntimePipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePipeline(RuntimePipeline const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ____logger;

  /// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IPipelineHandler* ____handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::RuntimePipeline, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipeline, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipeline, ____logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipeline, ____handler) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::RuntimePipeline);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::RuntimePipeline*, "Amazon.Runtime.Internal", "RuntimePipeline");
NEED_NO_BOX(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__RuntimePipeline___EnumerateHandlers_d__21*, "Amazon.Runtime.Internal", "RuntimePipeline/<EnumerateHandlers>d__21");
