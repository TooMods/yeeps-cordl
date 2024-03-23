#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityWebRequestUtils_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityWebRequestUtils_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::*)()>(
    &::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2672318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0._GetTextAsync_g__CompleteFetchTaskOnRequestCompleted_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::*)(
    ::UnityEngine::AsyncOperation*)>(&::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::_GetTextAsync_g__CompleteFetchTaskOnRequestCompleted_0)> {
  constexpr static std::size_t size = 0x4cc70;
  constexpr static std::size_t addrs = 0x2672320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0*>::get(),
                                                 "<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::__cordl_internal_get_completionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*> const&
Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::__cordl_internal_get_completionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionSource;
}
constexpr void
Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::__cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0* Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0*>());
}
inline void Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::_GetTextAsync_g__CompleteFetchTaskOnRequestCompleted_0(::UnityEngine::AsyncOperation* rawOperation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0*>::get(),
                                               "<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawOperation);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__UnityWebRequestUtils____c__DisplayClass2_0::__UnityWebRequestUtils____c__DisplayClass2_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityWebRequestUtils.HasSucceeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::Unity::Services::Core::Internal::UnityWebRequestUtils::HasSucceeded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26721c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityWebRequestUtils*>::get(), "HasSucceeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityWebRequestUtils.GetTextAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::StringW)>(
    &::Unity::Services::Core::Internal::UnityWebRequestUtils::GetTextAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26721e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityWebRequestUtils*>::get(), "GetTextAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::Services::Core::Internal::UnityWebRequestUtils::HasSucceeded(::UnityEngine::Networking::UnityWebRequest* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityWebRequestUtils*>::get(), "HasSucceeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, self);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Core::Internal::UnityWebRequestUtils::GetTextAsync(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityWebRequestUtils*>::get(), "GetTextAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(nullptr, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::UnityWebRequestUtils::UnityWebRequestUtils() {}
