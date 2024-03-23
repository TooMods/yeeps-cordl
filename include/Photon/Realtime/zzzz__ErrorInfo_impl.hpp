#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ErrorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ErrorInfo::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Realtime::ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2243b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ErrorInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::ErrorInfo::*)()>(&::Photon::Realtime::ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2244970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfo*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::ErrorInfo::__cordl_internal_get_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr ::StringW const& Photon::Realtime::ErrorInfo::__cordl_internal_get_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr void Photon::Realtime::ErrorInfo::__cordl_internal_set_Info(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::ErrorInfo* Photon::Realtime::ErrorInfo::New_ctor(::ExitGames::Client::Photon::EventData* eventData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::ErrorInfo*>(eventData));
}
inline void Photon::Realtime::ErrorInfo::_ctor(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::StringW Photon::Realtime::ErrorInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ErrorInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ErrorInfo::ErrorInfo() {}
