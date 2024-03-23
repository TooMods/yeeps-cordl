#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::DisconnectMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::DisconnectMessage::*)()>(&::ExitGames::Client::Photon::DisconnectMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286164c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DisconnectMessage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int16_t& ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_Code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr int16_t const& ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_Code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr void ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_set_Code(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Code = value;
}
constexpr ::StringW& ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_DebugMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugMessage;
}
constexpr ::StringW const& ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_DebugMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugMessage;
}
constexpr void ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_set_DebugMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DebugMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*& ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*> const&
ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void ExitGames::Client::Photon::DisconnectMessage::__cordl_internal_set_Parameters(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::DisconnectMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::DisconnectMessage*>());
}
inline void ExitGames::Client::Photon::DisconnectMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DisconnectMessage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DisconnectMessage::DisconnectMessage() {}
