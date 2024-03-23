#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SystemClock_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::UnityEngine::SystemClock.get_now
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)()>(&::UnityEngine::SystemClock::get_now)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2800bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SystemClock*>::get(), "get_now",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::SystemClock::setStaticF_s_Epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_Epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SystemClock*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime UnityEngine::SystemClock::getStaticF_s_Epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_Epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SystemClock*>::get>();
}
inline ::System::DateTime UnityEngine::SystemClock::get_now() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SystemClock*>::get(), "get_now",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::SystemClock::SystemClock() {}
