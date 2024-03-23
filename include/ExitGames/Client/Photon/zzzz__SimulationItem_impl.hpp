#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SimulationItem_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SimulationItem::*)()>(&::ExitGames::Client::Photon::SimulationItem::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2780c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem.get_Delay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::SimulationItem::*)()>(
    &::ExitGames::Client::Photon::SimulationItem::get_Delay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), "get_Delay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SimulationItem.set_Delay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SimulationItem::*)(int32_t)>(
    &::ExitGames::Client::Photon::SimulationItem::set_Delay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), "set_Delay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_stopw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopw;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_stopw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopw;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_stopw(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_TimeToExecute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimeToExecute;
}
constexpr int32_t const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_TimeToExecute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimeToExecute;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_TimeToExecute(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TimeToExecute = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_DelayedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get_DelayedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedData;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set_DelayedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DelayedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get__Delay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Delay_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::SimulationItem::__cordl_internal_get__Delay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Delay_k__BackingField;
}
constexpr void ExitGames::Client::Photon::SimulationItem::__cordl_internal_set__Delay_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Delay_k__BackingField = value;
}
inline ::ExitGames::Client::Photon::SimulationItem* ExitGames::Client::Photon::SimulationItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::SimulationItem*>());
}
inline void ExitGames::Client::Photon::SimulationItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::SimulationItem::get_Delay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), "get_Delay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SimulationItem::set_Delay(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SimulationItem*>::get(), "set_Delay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SimulationItem::SimulationItem() {}
