#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/zzzz__UnityThreadUtils_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::UnityThreadUtils.get_UnityThreadScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(
    &::Unity::Services::Core::UnityThreadUtils::get_UnityThreadScheduler)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23bb360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                               "get_UnityThreadScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityThreadUtils.set_UnityThreadScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskScheduler*)>(
    &::Unity::Services::Core::UnityThreadUtils::set_UnityThreadScheduler)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23bb3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(), "set_UnityThreadScheduler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityThreadUtils.CaptureUnityThreadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::UnityThreadUtils::CaptureUnityThreadInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23bb3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                               "CaptureUnityThreadInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityThreadUtils.get_IsRunningOnUnityThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Services::Core::UnityThreadUtils::get_IsRunningOnUnityThread)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23baa54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                               "get_IsRunningOnUnityThread", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::UnityThreadUtils::setStaticF_s_UnityThreadId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_UnityThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get>(std::forward<int32_t>(value));
}
inline int32_t Unity::Services::Core::UnityThreadUtils::getStaticF_s_UnityThreadId() {
  return ::cordl_internals::getStaticField<int32_t, "s_UnityThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get>();
}
inline void Unity::Services::Core::UnityThreadUtils::setStaticF__UnityThreadScheduler_k__BackingField(::System::Threading::Tasks::TaskScheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "<UnityThreadScheduler>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get>(
      std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Core::UnityThreadUtils::getStaticF__UnityThreadScheduler_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "<UnityThreadScheduler>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get>();
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Core::UnityThreadUtils::get_UnityThreadScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                             "get_UnityThreadScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::UnityThreadUtils::set_UnityThreadScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(), "set_UnityThreadScheduler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Services::Core::UnityThreadUtils::CaptureUnityThreadInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                             "CaptureUnityThreadInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Unity::Services::Core::UnityThreadUtils::get_IsRunningOnUnityThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityThreadUtils*>::get(),
                                                                             "get_IsRunningOnUnityThread", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::UnityThreadUtils::UnityThreadUtils() {}
