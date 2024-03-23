#pragma once
#include "Photon/Realtime/zzzz__EventCaching_impl.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::RaiseEventOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RaiseEventOptions::*)()>(&::Photon::Realtime::RaiseEventOptions::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2247cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RaiseEventOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::EventCaching& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_CachingOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CachingOption;
}
constexpr ::Photon::Realtime::EventCaching const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_CachingOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CachingOption;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_CachingOption(::Photon::Realtime::EventCaching value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CachingOption = value;
}
constexpr uint8_t& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_InterestGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterestGroup;
}
constexpr uint8_t const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_InterestGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterestGroup;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_InterestGroup(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterestGroup = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_TargetActors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetActors;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_TargetActors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetActors;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_TargetActors(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetActors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ReceiverGroup& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Receivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Receivers;
}
constexpr ::Photon::Realtime::ReceiverGroup const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Receivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Receivers;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_Receivers(::Photon::Realtime::ReceiverGroup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Receivers = value;
}
constexpr uint8_t& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_SequenceChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceChannel;
}
constexpr uint8_t const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_SequenceChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceChannel;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_SequenceChannel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SequenceChannel = value;
}
constexpr ::Photon::Realtime::WebFlags*& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::WebFlags*> const& Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr void Photon::Realtime::RaiseEventOptions::__cordl_internal_set_Flags(::Photon::Realtime::WebFlags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Flags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Realtime::RaiseEventOptions::setStaticF_Default(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RaiseEventOptions*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Realtime::RaiseEventOptions::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RaiseEventOptions*>::get>();
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Realtime::RaiseEventOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::RaiseEventOptions*>());
}
inline void Photon::Realtime::RaiseEventOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RaiseEventOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RaiseEventOptions::RaiseEventOptions() {}
