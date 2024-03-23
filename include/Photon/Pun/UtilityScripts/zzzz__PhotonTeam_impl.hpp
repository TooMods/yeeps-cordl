#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeam_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeam.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Pun::UtilityScripts::PhotonTeam::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeam::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1ec2ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeam._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeam::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ec2f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_set_Code(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Code = value;
}
inline ::StringW Photon::Pun::UtilityScripts::PhotonTeam::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PhotonTeam* Photon::Pun::UtilityScripts::PhotonTeam::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::PhotonTeam*>());
}
inline void Photon::Pun::UtilityScripts::PhotonTeam::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonTeam::PhotonTeam() {}
