#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__StopwatchExtensions_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::StopwatchExtensions.Restart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::Stopwatch*)>(&::Unity::XR::CoreUtils::StopwatchExtensions::Restart)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2874b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::StopwatchExtensions*>::get(), "Restart", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::StopwatchExtensions::Restart(::System::Diagnostics::Stopwatch* stopwatch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::StopwatchExtensions*>::get(), "Restart", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stopwatch);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::StopwatchExtensions::StopwatchExtensions() {}
