#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__AsyncHelpers_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__AsyncHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.get_ObjectException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)()>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::get_ObjectException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2448458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                                 "get_ObjectException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.set_ObjectException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)(::System::Exception*)>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::set_ObjectException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2448460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), "set_ObjectException",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2448468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x24484b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.EndMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)()>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::EndMessageLoop)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24485fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                                 "EndMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.BeginMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)()>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::BeginMessageLoop)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x244828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                                 "BeginMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (
    ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)()>(&::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2448688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)()>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24481dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext._EndMessageLoop_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::*)(::System::Object*)>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::_EndMessageLoop_b__9_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), "<EndMessageLoop>b__9_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_done() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___done;
}
constexpr bool const& Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_done() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___done;
}
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_set_done(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___done = value;
}
constexpr ::System::Exception*& Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get__ObjectException_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ObjectException_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get__ObjectException_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ObjectException_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_set__ObjectException_k__BackingField(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ObjectException_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::AutoResetEvent*& Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_pendingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::AutoResetEvent*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_pendingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingObjects;
}
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_set_pendingObjects(::System::Threading::AutoResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pendingObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>*&
Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__cordl_internal_set_objects(
    ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Exception* Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::get_ObjectException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                               "get_ObjectException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::set_ObjectException(::System::Exception* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), "set_ObjectException",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::EndMessageLoop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                               "EndMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::BeginMessageLoop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                               "BeginMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::CreateCopy() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>());
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::_EndMessageLoop_b__9_0(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*>::get(), "<EndMessageLoop>b__9_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext::__AsyncHelpers__ExclusiveSynchronizationContext() {}
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::*)()>(
    &::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x244874c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2448a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0* __4__this,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::*)()>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24481d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0._RunSync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::*)(::System::Object*)>(
    &::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::_RunSync_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2448698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*>::get(), "<RunSync>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_get_workItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workItem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task*>*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_get_workItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workItem;
}
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_set_workItem(::System::Func_1<::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*& Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_get_synch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_get_synch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
constexpr void
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__cordl_internal_set_synch(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0* Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*>());
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::_RunSync_b__0(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*>::get(), "<RunSync>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0::__AsyncHelpers____c__DisplayClass0_0() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>* __4__this,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d() {}
template <typename T> constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_workItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workItem;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_workItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workItem;
}
template <typename T>
constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_set_workItem(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_ret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ret;
}
template <typename T> constexpr T const& Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_ret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ret;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_set_ret(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*&
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_synch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*> const&
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_synch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
template <typename T>
constexpr void
Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_set_synch(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>* Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>*>());
}
template <typename T> inline void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::_RunSync_b__0(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>*>::get(), "<RunSync>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>::__AsyncHelpers____c__DisplayClass1_0_1() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::AsyncHelpers.RunSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(
    &::Amazon::Runtime::Internal::Util::AsyncHelpers::RunSync)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2448010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AsyncHelpers*>::get(), "RunSync", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::AsyncHelpers::RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* workItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AsyncHelpers*>::get(), "RunSync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, workItem);
}
template <typename T> inline T Amazon::Runtime::Internal::Util::AsyncHelpers::RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* workItem) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AsyncHelpers*>::get(), "RunSync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, workItem);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::AsyncHelpers::AsyncHelpers() {}
