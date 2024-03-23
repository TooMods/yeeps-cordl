#pragma once
#include "Photon/Realtime/zzzz__IErrorInfoCallback_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__ErrorInfoCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ErrorInfoCallbacksContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(
    &::Photon::Realtime::ErrorInfoCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22397b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfoCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ErrorInfoCallbacksContainer.OnErrorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Photon::Realtime::ErrorInfo*)>(
    &::Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2243bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfoCallbacksContainer*>::get(), "OnErrorInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ErrorInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
constexpr Photon::Realtime::ErrorInfoCallbacksContainer::operator ::Photon::Realtime::IErrorInfoCallback*() noexcept {
  return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
constexpr ::Photon::Realtime::IErrorInfoCallback* Photon::Realtime::ErrorInfoCallbacksContainer::i___Photon__Realtime__IErrorInfoCallback() noexcept {
  return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::ErrorInfoCallbacksContainer* Photon::Realtime::ErrorInfoCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::ErrorInfoCallbacksContainer*>(client));
}
inline void Photon::Realtime::ErrorInfoCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfoCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfoCallbacksContainer*>::get(), "OnErrorInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ErrorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorInfo);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ErrorInfoCallbacksContainer::ErrorInfoCallbacksContainer() {}
