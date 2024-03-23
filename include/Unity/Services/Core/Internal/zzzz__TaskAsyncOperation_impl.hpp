#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__TaskAsyncOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__TaskAsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__TaskAsyncOperation____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__TaskAsyncOperation____c::*)()>(
    &::Unity::Services::Core::Internal::__TaskAsyncOperation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266a80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__TaskAsyncOperation____c.__ctor_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__TaskAsyncOperation____c::*)(
    ::System::Threading::Tasks::Task*, ::System::Object*)>(&::Unity::Services::Core::Internal::__TaskAsyncOperation____c::__ctor_b__10_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x266a814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get(), "<.ctor>b__10_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::__TaskAsyncOperation____c::setStaticF___9(::Unity::Services::Core::Internal::__TaskAsyncOperation____c* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get>(
      std::forward<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>(value));
}
inline ::Unity::Services::Core::Internal::__TaskAsyncOperation____c* Unity::Services::Core::Internal::__TaskAsyncOperation____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get>();
}
inline void Unity::Services::Core::Internal::__TaskAsyncOperation____c::setStaticF___9__10_0(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get>(
      std::forward<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(value));
}
inline ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* Unity::Services::Core::Internal::__TaskAsyncOperation____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get>();
}
inline ::Unity::Services::Core::Internal::__TaskAsyncOperation____c* Unity::Services::Core::Internal::__TaskAsyncOperation____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>());
}
inline void Unity::Services::Core::Internal::__TaskAsyncOperation____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__TaskAsyncOperation____c::__ctor_b__10_0(::System::Threading::Tasks::Task* t, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation____c*>::get(), "<.ctor>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, state);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__TaskAsyncOperation____c::__TaskAsyncOperation____c() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::get_IsCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x266a488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.get_Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::AsyncOperationStatus (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::get_Status)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x266a4a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.get_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::get_Exception)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x266a50c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x266a520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::AsyncOperationBase* (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::GetAwaiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x266a524;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::TaskAsyncOperation::*)(::System::Threading::Tasks::Task*)>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x266a528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::TaskAsyncOperation* (*)(::System::Action*)>(
    &::Unity::Services::Core::Internal::TaskAsyncOperation::Run)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x266a70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), "Run",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.SetScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::Internal::TaskAsyncOperation::SetScheduler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x266a698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                                               "SetScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr Unity::Services::Core::Internal::TaskAsyncOperation::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Unity::Services::Core::Internal::TaskAsyncOperation::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::Task*& Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_get_m_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_get_m_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Task;
}
constexpr void Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_set_m_Task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::setStaticF_Scheduler(::System::Threading::Tasks::TaskScheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "Scheduler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get>(
      std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Core::Internal::TaskAsyncOperation::getStaticF_Scheduler() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "Scheduler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get>();
}
inline bool Unity::Services::Core::Internal::TaskAsyncOperation::get_IsCompleted() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::TaskAsyncOperation::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationStatus, false>(this, ___internal_method);
}
inline ::System::Exception* Unity::Services::Core::Internal::TaskAsyncOperation::get_Exception() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::GetResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::AsyncOperationBase* Unity::Services::Core::Internal::TaskAsyncOperation::GetAwaiter() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationBase*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::TaskAsyncOperation* Unity::Services::Core::Internal::TaskAsyncOperation::New_ctor(::System::Threading::Tasks::Task* task) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::TaskAsyncOperation*>(task));
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::Unity::Services::Core::Internal::TaskAsyncOperation* Unity::Services::Core::Internal::TaskAsyncOperation::Run(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(), "Run",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::TaskAsyncOperation*, false>(nullptr, ___internal_method, action);
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::SetScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                                                             "SetScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::TaskAsyncOperation::TaskAsyncOperation() {}
