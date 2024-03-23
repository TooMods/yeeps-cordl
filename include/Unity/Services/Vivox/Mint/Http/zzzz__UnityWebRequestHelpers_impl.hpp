#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__UnityWebRequestHelpers_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__UnityWebRequestHelpers_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0._GetAwaiter_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::*)(
    ::UnityEngine::AsyncOperation*)>(&::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1707478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*>::get(), "<GetAwaiter>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*&
Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> const&
Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::__cordl_internal_set_tcs(
    ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0* Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*>());
}
inline void Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*>::get(), "<GetAwaiter>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0::__UnityWebRequestHelpers____c__DisplayClass0_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> (*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers::GetAwaiter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1703328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers.CreateHttpClientResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::Mint::Http::HttpClientResponse* (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
        &::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers::CreateHttpClientResponse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x170736c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers*>::get(), "CreateHttpClientResponse",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>
Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>, false>(nullptr, ___internal_method,
                                                                                                                                                                   asyncOp);
}
inline ::Unity::Services::Vivox::Mint::Http::HttpClientResponse*
Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers::CreateHttpClientResponse(::UnityEngine::Networking::UnityWebRequestAsyncOperation* unityResponse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers*>::get(), "CreateHttpClientResponse",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, false>(nullptr, ___internal_method, unityResponse);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers::UnityWebRequestHelpers() {}
