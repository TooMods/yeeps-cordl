#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d42210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap* Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap*>());
}
inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap::MinimumBinaryHeap() {}
