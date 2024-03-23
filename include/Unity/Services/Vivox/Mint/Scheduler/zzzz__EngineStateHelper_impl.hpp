#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Scheduler/zzzz__EngineStateHelper_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17013d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper*>::get(), "Init",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper::setStaticF_IsPlaying(bool value) {
  ::cordl_internals::setStaticField<bool, "IsPlaying", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper*>::get>(
      std::forward<bool>(value));
}
inline bool Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper::getStaticF_IsPlaying() {
  return ::cordl_internals::getStaticField<bool, "IsPlaying", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper*>::get>();
}
inline void Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper::EngineStateHelper() {}
