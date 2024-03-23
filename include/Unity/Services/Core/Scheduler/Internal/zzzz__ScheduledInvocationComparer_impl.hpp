#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocationComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::*)(
    ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*)>(
    &::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::Compare)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1d42218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d415a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
constexpr Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::operator ::System::Collections::Generic::IComparer_1<
    ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*
Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::i___System__Collections__Generic__IComparer_1___Unity__Services__Core__Scheduler__Internal__ScheduledInvocation__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*>(static_cast<void*>(this));
}
inline int32_t Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::Compare(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* x,
                                                                                                ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer* Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>());
}
inline void Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::ScheduledInvocationComparer() {}
