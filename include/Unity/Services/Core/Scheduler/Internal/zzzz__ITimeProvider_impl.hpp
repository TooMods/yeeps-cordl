#pragma once
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ITimeProvider.get_Now
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Unity::Services::Core::Scheduler::Internal::ITimeProvider::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::ITimeProvider::get_Now)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::DateTime Unity::Services::Core::Scheduler::Internal::ITimeProvider::get_Now() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
