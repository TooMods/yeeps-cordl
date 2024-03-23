#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Scheduler/zzzz__ThreadHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper.get_SynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(
    &::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x170142c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                               "get_SynchronizationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper.get_TaskScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(
    &::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_TaskScheduler)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1701474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                               "get_TaskScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper.get_MainThreadId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_MainThreadId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17014bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                               "get_MainThreadId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1701504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::setStaticF__unitySynchronizationContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_unitySynchronizationContext",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>(
      std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::getStaticF__unitySynchronizationContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_unitySynchronizationContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>();
}
inline void Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::setStaticF__taskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "_taskScheduler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>(
      std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::getStaticF__taskScheduler() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "_taskScheduler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>();
}
inline void Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::setStaticF__mainThreadId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::getStaticF__mainThreadId() {
  return ::cordl_internals::getStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get>();
}
inline ::System::Threading::SynchronizationContext* Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_SynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                             "get_SynchronizationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_TaskScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                             "get_TaskScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*, false>(nullptr, ___internal_method);
}
inline int32_t Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::get_MainThreadId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                             "get_MainThreadId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper::ThreadHelper() {}
