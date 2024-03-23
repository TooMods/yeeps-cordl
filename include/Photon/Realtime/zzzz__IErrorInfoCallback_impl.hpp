#pragma once
#include "Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IErrorInfoCallback.OnErrorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IErrorInfoCallback::*)(::Photon::Realtime::ErrorInfo*)>(
    &::Photon::Realtime::IErrorInfoCallback::OnErrorInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IErrorInfoCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IErrorInfoCallback*>::get(), 0));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IErrorInfoCallback::OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IErrorInfoCallback*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorInfo);
}
