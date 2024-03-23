#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PunEvent_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PunEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PunEvent::*)()>(&::Photon::Pun::PunEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27548bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PunEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Photon::Pun::PunEvent* Photon::Pun::PunEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PunEvent*>());
}
inline void Photon::Pun::PunEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PunEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PunEvent::PunEvent() {}
