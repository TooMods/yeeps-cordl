#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__UtcTimeProvider_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider.get_Now
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::get_Now)> {
  constexpr static std::size_t size = 0x4dee0;
  constexpr static std::size_t addrs = 0x1d42284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*>::get(), "get_Now",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::*)()>(
    &::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d4135c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Scheduler::Internal::ITimeProvider"
constexpr Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::operator ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*() noexcept {
  return static_cast<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Scheduler::Internal::ITimeProvider"
constexpr ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*
Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::i___Unity__Services__Core__Scheduler__Internal__ITimeProvider() noexcept {
  return static_cast<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*>(static_cast<void*>(this));
}
inline ::System::DateTime Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::get_Now() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*>::get(), "get_Now",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider* Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*>());
}
inline void Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider::UtcTimeProvider() {}
