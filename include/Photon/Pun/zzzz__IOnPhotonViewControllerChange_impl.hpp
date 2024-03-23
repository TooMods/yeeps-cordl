#pragma once
#include "Photon/Pun/zzzz__IOnPhotonViewControllerChange_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IOnPhotonViewControllerChange.OnControllerChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::IOnPhotonViewControllerChange::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::IOnPhotonViewControllerChange::OnControllerChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IOnPhotonViewControllerChange*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IOnPhotonViewControllerChange*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr Photon::Pun::IOnPhotonViewControllerChange::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
  return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* Photon::Pun::IOnPhotonViewControllerChange::i___Photon__Pun__IPhotonViewCallback() noexcept {
  return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
inline void Photon::Pun::IOnPhotonViewControllerChange::OnControllerChange(::Photon::Realtime::Player* newController, ::Photon::Realtime::Player* previousController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IOnPhotonViewControllerChange*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newController, previousController);
}
