#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocation_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d41890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_set_Action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_InvocationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvocationTime;
}
constexpr ::System::DateTime const& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_InvocationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvocationTime;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_set_InvocationTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvocationTime = value;
}
constexpr int64_t& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_ActionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionId;
}
constexpr int64_t const& Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_get_ActionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionId;
}
constexpr void Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::__cordl_internal_set_ActionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ActionId = value;
}
inline ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>());
}
inline void Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation::ScheduledInvocation() {}
