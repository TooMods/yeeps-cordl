#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ActionScheduler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ITimeProvider_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_1_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocation_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1d412f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)(
    ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*)>(&::Unity::Services::Core::Scheduler::Internal::ActionScheduler::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1d41364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler.ScheduleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)(::System::Action*, double_t)>(
    &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::ScheduleAction)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x1d415ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "ScheduleAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler.CancelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)(int64_t)>(
    &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::CancelAction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1d41898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "CancelAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler.ExecuteExpiredActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::ExecuteExpiredActions)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x1d41a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "ExecuteExpiredActions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler.UpdateCurrentPlayerLoopWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystem>*, ::UnityEngine::LowLevel::PlayerLoopSystem)>(
        &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::UpdateCurrentPlayerLoopWith)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1d41fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "UpdateCurrentPlayerLoopWith",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystem>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LowLevel::PlayerLoopSystem>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ActionScheduler.JoinPlayerLoopSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ActionScheduler::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ActionScheduler::JoinPlayerLoopSystem)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x1d42054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "JoinPlayerLoopSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Scheduler::Internal::IActionScheduler"
constexpr Unity::Services::Core::Scheduler::Internal::ActionScheduler::operator ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*() noexcept {
  return static_cast<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Scheduler::Internal::IActionScheduler"
constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*
Unity::Services::Core::Scheduler::Internal::ActionScheduler::i___Unity__Services__Core__Scheduler__Internal__IActionScheduler() noexcept {
  return static_cast<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Scheduler::Internal::ActionScheduler::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Scheduler::Internal::ActionScheduler::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_SchedulerLoopSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SchedulerLoopSystem;
}
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem const& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_SchedulerLoopSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SchedulerLoopSystem;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_SchedulerLoopSystem(::UnityEngine::LowLevel::PlayerLoopSystem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SchedulerLoopSystem = value;
}
constexpr ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_TimeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*> const&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_TimeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeProvider;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_TimeProvider(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TimeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_Lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_Lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lock;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_Lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_ScheduledActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledActions;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_ScheduledActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledActions;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_ScheduledActions(
    ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScheduledActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_IdScheduledInvocationMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IdScheduledInvocationMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_IdScheduledInvocationMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IdScheduledInvocationMap;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_IdScheduledInvocationMap(
    ::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IdScheduledInvocationMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_ExpiredActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpiredActions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_ExpiredActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpiredActions;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_ExpiredActions(
    ::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExpiredActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_NextId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextId;
}
constexpr int64_t const& Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_get_m_NextId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextId;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ActionScheduler::__cordl_internal_set_m_NextId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextId = value;
}
inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* Unity::Services::Core::Scheduler::Internal::ActionScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>());
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*
Unity::Services::Core::Scheduler::Internal::ActionScheduler::New_ctor(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* timeProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>(timeProvider));
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::_ctor(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* timeProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider);
}
/// @param delaySeconds: double_t (default: 0.0)
inline int64_t Unity::Services::Core::Scheduler::Internal::ActionScheduler::ScheduleAction(::System::Action* action, double_t delaySeconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "ScheduleAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, action, delaySeconds);
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::CancelAction(int64_t actionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "CancelAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionId);
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::ExecuteExpiredActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "ExecuteExpiredActions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::UpdateCurrentPlayerLoopWith(::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList,
                                                                                                     ::UnityEngine::LowLevel::PlayerLoopSystem currentPlayerLoop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "UpdateCurrentPlayerLoopWith",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystem>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LowLevel::PlayerLoopSystem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, subSystemList, currentPlayerLoop);
}
inline void Unity::Services::Core::Scheduler::Internal::ActionScheduler::JoinPlayerLoopSystem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get(), "JoinPlayerLoopSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::ActionScheduler::ActionScheduler() {}
