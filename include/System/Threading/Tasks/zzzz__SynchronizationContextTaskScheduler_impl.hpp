#pragma once
#include "System/Threading/Tasks/zzzz__TaskScheduler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::*)()>(
    &::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xedefec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c.__cctor_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::*)(::System::Object*)>(
    &::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::__cctor_b__8_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xedeff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get(), "<.cctor>b__8_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::setStaticF___9(::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get>(
      std::forward<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>(value));
}
inline ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get>();
}
inline ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>());
}
inline void System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::__cctor_b__8_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*>::get(), "<.cctor>b__8_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c::__SynchronizationContextTaskScheduler____c() {}
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)()>(
    &::System::Threading::Tasks::SynchronizationContextTaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xedebc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler.QueueTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::SynchronizationContextTaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xededf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::SynchronizationContextTaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xedee7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_get_m_synchronizationContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_synchronizationContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const&
System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_get_m_synchronizationContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_synchronizationContext;
}
constexpr void System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_set_m_synchronizationContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_synchronizationContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::SynchronizationContextTaskScheduler::getStaticF_s_postCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get>();
}
inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler* System::Threading::Tasks::SynchronizationContextTaskScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>());
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::SynchronizationContextTaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextTaskScheduler::SynchronizationContextTaskScheduler() {}
