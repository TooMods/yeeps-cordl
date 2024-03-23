#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::OperationRequest::*)()>(&::ExitGames::Client::Photon::OperationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2861360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::OperationRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_OperationCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OperationCode;
}
constexpr uint8_t const& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_OperationCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OperationCode;
}
constexpr void ExitGames::Client::Photon::OperationRequest::__cordl_internal_set_OperationCode(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OperationCode = value;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary*& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::ParameterDictionary*> const& ExitGames::Client::Photon::OperationRequest::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void ExitGames::Client::Photon::OperationRequest::__cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::OperationRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::OperationRequest*>());
}
inline void ExitGames::Client::Photon::OperationRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::OperationRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::OperationRequest::OperationRequest() {}
