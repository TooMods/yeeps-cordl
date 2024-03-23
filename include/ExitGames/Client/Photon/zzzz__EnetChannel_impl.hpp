#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetChannel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)(uint8_t, int32_t)>(
    &::ExitGames::Client::Photon::EnetChannel::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2774034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.ContainsUnreliableSequenceNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(
    &::ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27741f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "ContainsUnreliableSequenceNumber",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.FetchUnreliableSequenceNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(
    &::ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2774248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "FetchUnreliableSequenceNumber",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.ContainsReliableSequenceNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(
    &::ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27742a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "ContainsReliableSequenceNumber",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.FetchReliableSequenceNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(
    &::ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27742f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "FetchReliableSequenceNumber",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.TryGetFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t, bool, ByRef<::ExitGames::Client::Photon::NCommand*>)>(
    &::ExitGames::Client::Photon::EnetChannel::TryGetFragment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2774350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "TryGetFragment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::NCommand*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.RemoveFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)(int32_t, bool)>(
    &::ExitGames::Client::Photon::EnetChannel::RemoveFragment)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27743c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "RemoveFragment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.clearAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)()>(&::ExitGames::Client::Photon::EnetChannel::clearAll)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2774438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "clearAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.QueueIncomingReliableUnsequenced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27745b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "QueueIncomingReliableUnsequenced", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_ChannelNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelNumber;
}
constexpr uint8_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_ChannelNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_ChannelNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ChannelNumber = value;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableCommandsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingReliableCommandsList;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableCommandsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingReliableCommandsList;
}
constexpr void
ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingReliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incomingReliableCommandsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableCommandsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnreliableCommandsList;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableCommandsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnreliableCommandsList;
}
constexpr void
ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnreliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incomingUnreliableCommandsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedCommandsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedCommandsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedCommandsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnsequencedCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incomingUnsequencedCommandsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedFragments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedFragments;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedFragments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedFragments;
}
constexpr void
ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnsequencedFragments(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incomingUnsequencedFragments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableCommandsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableCommandsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableCommandsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outgoingReliableCommandsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableCommandsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnreliableCommandsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableCommandsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnreliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingUnreliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outgoingUnreliableCommandsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingReliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnreliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingUnreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingUnreliableSequenceNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingUnreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableUnsequencedNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableUnsequencedNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableUnsequencedNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingReliableUnsequencedNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableUnsequencedNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingReliableUnsequencedNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableUnsequencedNumbersCompletelyReceived;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableUnsequencedNumbersCompletelyReceived;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_reliableUnsequencedNumbersCompletelyReceived(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reliableUnsequencedNumbersCompletelyReceived = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableUnsequencedNumbersReceived;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableUnsequencedNumbersReceived;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_reliableUnsequencedNumbersReceived(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reliableUnsequencedNumbersReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_highestReceivedAck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highestReceivedAck;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_highestReceivedAck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highestReceivedAck;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_highestReceivedAck(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highestReceivedAck = value;
}
inline ::ExitGames::Client::Photon::EnetChannel* ExitGames::Client::Photon::EnetChannel::New_ctor(uint8_t channelNumber, int32_t commandBufferSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::EnetChannel*>(channelNumber, commandBufferSize));
}
inline void ExitGames::Client::Photon::EnetChannel::_ctor(uint8_t channelNumber, int32_t commandBufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelNumber, commandBufferSize);
}
inline bool ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber(int32_t unreliableSequenceNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "ContainsUnreliableSequenceNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unreliableSequenceNumber);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber(int32_t unreliableSequenceNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "FetchUnreliableSequenceNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*, false>(this, ___internal_method, unreliableSequenceNumber);
}
inline bool ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber(int32_t reliableSequenceNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "ContainsReliableSequenceNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reliableSequenceNumber);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber(int32_t reliableSequenceNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "FetchReliableSequenceNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*, false>(this, ___internal_method, reliableSequenceNumber);
}
inline bool ExitGames::Client::Photon::EnetChannel::TryGetFragment(int32_t reliableSequenceNumber, bool isSequenced, ByRef<::ExitGames::Client::Photon::NCommand*> fragment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "TryGetFragment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::NCommand*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reliableSequenceNumber, isSequenced, fragment);
}
inline void ExitGames::Client::Photon::EnetChannel::RemoveFragment(int32_t reliableSequenceNumber, bool isSequenced) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "RemoveFragment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reliableSequenceNumber, isSequenced);
}
inline void ExitGames::Client::Photon::EnetChannel::clearAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "clearAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced(::ExitGames::Client::Photon::NCommand* command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetChannel*>::get(), "QueueIncomingReliableUnsequenced", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, command);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EnetChannel::EnetChannel() {}
