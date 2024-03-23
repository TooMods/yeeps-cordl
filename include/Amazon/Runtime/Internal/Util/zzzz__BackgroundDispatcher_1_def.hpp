#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundDispatcher_1)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class Thread;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename T> class BackgroundDispatcher_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1);
// Type: Amazon.Runtime.Internal.Util::BackgroundDispatcher`1
// SizeInfo { instance_size: 64, native_size: 58, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::BackgroundDispatcher`1<T>*
class CORDL_TYPE BackgroundDispatcher_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsRunning, put = set_IsRunning)) bool IsRunning;

  /// @brief Field <IsRunning>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__IsRunning_k__BackingField, put = __cordl_internal_set__IsRunning_k__BackingField)) bool _IsRunning_k__BackingField;

  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::System::Action_1<T>* action;

  /// @brief Field backgroundThread, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundThread, put = __cordl_internal_set_backgroundThread))::System::Threading::Thread* backgroundThread;

  /// @brief Field isDisposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isDisposed, put = __cordl_internal_set_isDisposed)) bool isDisposed;

  /// @brief Field queue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_queue, put = __cordl_internal_set_queue))::System::Collections::Generic::Queue_1<T>* queue;

  /// @brief Field resetEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_resetEvent, put = __cordl_internal_set_resetEvent))::System::Threading::AutoResetEvent* resetEvent;

  /// @brief Field shouldStop, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldStop, put = __cordl_internal_set_shouldStop)) bool shouldStop;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispatch(T data);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleInvoked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleInvoked();

  static inline ::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>* New_ctor(::System::Action_1<T>* action);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Stop();

  constexpr bool const& __cordl_internal_get__IsRunning_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsRunning_k__BackingField();

  constexpr ::System::Action_1<T>*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_action() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get_backgroundThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_backgroundThread() const;

  constexpr bool const& __cordl_internal_get_isDisposed() const;

  constexpr bool& __cordl_internal_get_isDisposed();

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& __cordl_internal_get_queue() const;

  constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_resetEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::AutoResetEvent*> const& __cordl_internal_get_resetEvent() const;

  constexpr bool const& __cordl_internal_get_shouldStop() const;

  constexpr bool& __cordl_internal_get_shouldStop();

  constexpr void __cordl_internal_set__IsRunning_k__BackingField(bool value);

  constexpr void __cordl_internal_set_action(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_backgroundThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set_isDisposed(bool value);

  constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>* value);

  constexpr void __cordl_internal_set_resetEvent(::System::Threading::AutoResetEvent* value);

  constexpr void __cordl_internal_set_shouldStop(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<T>* action);

  /// @brief Method get_IsRunning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_IsRunning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_IsRunning(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundDispatcher_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundDispatcher_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundDispatcher_1(BackgroundDispatcher_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundDispatcher_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundDispatcher_1(BackgroundDispatcher_1 const&) = delete;

  /// @brief Field isDisposed, offset: 0x10, size: 0x1, def value: None
  bool ___isDisposed;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___action;

  /// @brief Field queue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ___queue;

  /// @brief Field backgroundThread, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Thread* ___backgroundThread;

  /// @brief Field resetEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::AutoResetEvent* ___resetEvent;

  /// @brief Field shouldStop, offset: 0x38, size: 0x1, def value: None
  bool ___shouldStop;

  /// @brief Field <IsRunning>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____IsRunning_k__BackingField;

  /// @brief Field MAX_QUEUE_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t MAX_QUEUE_SIZE{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1, "Amazon.Runtime.Internal.Util", "BackgroundDispatcher`1");
