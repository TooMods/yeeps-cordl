#pragma once
#include "Unity/Services/Core/Threading/Internal/zzzz__IUnityThreadUtils_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils.get_IsRunningOnUnityThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::*)()>(
    &::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::get_IsRunningOnUnityThread)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils.PostAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::*)(::System::Action*)>(&::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils.PostAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::*)(::System::Action_1<::System::Object*>*, ::System::Object*)>(
        &::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::*)(::System::Action*)>(
    &::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Threading::Internal::IUnityThreadUtils::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline bool Unity::Services::Core::Threading::Internal::IUnityThreadUtils::get_IsRunningOnUnityThread() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync(::System::Action* action) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync(::System::Action_1<::System::Object*>* action, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, state);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync(::System::Func_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, action);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::PostAsync(::System::Func_2<::System::Object*, T>* action, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, action, state);
}
inline void Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send(::System::Action* action) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send(::System::Action_1<::System::Object*>* action, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, state);
}
template <typename T> inline T Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send(::System::Func_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, action);
}
template <typename T> inline T Unity::Services::Core::Threading::Internal::IUnityThreadUtils::Send(::System::Func_2<::System::Object*, T>* action, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, action, state);
}
