#pragma once
#include "ExitGames/Client/Photon/zzzz__PeerBase_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__TPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.get_QueuedIncomingCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::TPeer::*)()>(
    &::ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac0ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.get_QueuedOutgoingCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::TPeer::*)()>(
    &::ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac103c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ac1044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.IsTransportEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::IsTransportEncrypted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ac1134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ac1144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*)>(
    &::ExitGames::Client::Photon::TPeer::Connect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ac1208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.OnConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::OnConnect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ac1338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::Disconnect)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ac1508;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.StopConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::StopConnection)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2ac1618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.FetchServerTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2ac1754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueueInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ExitGames::Client::Photon::TPeer::EnqueueInit)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2ac138c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "EnqueueInit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.DispatchIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2ac1ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendOutgoingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2ac225c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendAcksOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ac27a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueuePhotonMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ac2810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueueMessageAsPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(
    ::ExitGames::Client::Photon::DeliveryMode, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2ac1b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "EnqueueMessageAsPayload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeliveryMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendPing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendPing)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2ac1924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "SendPing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::ExitGames::Client::Photon::TPeer::SendData)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2ac2500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "SendData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReceiveIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2ac2838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReadPingResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ac2bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "ReadPingResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReadPingResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ac2cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "ReadPingResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*& ExitGames::Client::Photon::TPeer::__cordl_internal_get_incomingList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*> const&
ExitGames::Client::Photon::TPeer::__cordl_internal_get_incomingList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingList;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_incomingList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incomingList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*& ExitGames::Client::Photon::TPeer::__cordl_internal_get_outgoingStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*> const&
ExitGames::Client::Photon::TPeer::__cordl_internal_get_outgoingStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingStream;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_outgoingStream(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outgoingStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::TPeer::__cordl_internal_get_lastPingResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPingResult;
}
constexpr int32_t const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_lastPingResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPingResult;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_lastPingResult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPingResult = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingRequest;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingRequest;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_pingRequest(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& ExitGames::Client::Photon::TPeer::__cordl_internal_get_DoFraming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DoFraming;
}
constexpr bool const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_DoFraming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DoFraming;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_DoFraming(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DoFraming = value;
}
inline void ExitGames::Client::Photon::TPeer::setStaticF_tcpFramedMessageHead(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "tcpFramedMessageHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::TPeer::getStaticF_tcpFramedMessageHead() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "tcpFramedMessageHead",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get>();
}
inline void ExitGames::Client::Photon::TPeer::setStaticF_tcpMsgHead(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "tcpMsgHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::TPeer::getStaticF_tcpMsgHead() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "tcpMsgHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get>();
}
inline int32_t ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::TPeer* ExitGames::Client::Photon::TPeer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::TPeer*>());
}
inline void ExitGames::Client::Photon::TPeer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::IsTransportEncrypted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::StringW appID, ::System::Object* photonToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serverAddress, proxyServerAddress, appID, photonToken);
}
inline void ExitGames::Client::Photon::TPeer::OnConnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::StopConnection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::FetchServerTimestamp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::EnqueueInit(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "EnqueueInit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline bool ExitGames::Client::Photon::TPeer::DispatchIncomingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::SendOutgoingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::SendAcksOnly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer* opBytes, ::ExitGames::Client::Photon::SendOptions sendParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opBytes, sendParams);
}
inline bool ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload(::ExitGames::Client::Photon::DeliveryMode deliveryMode, ::ExitGames::Client::Photon::StreamBuffer* opMessage, uint8_t channelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "EnqueueMessageAsPayload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeliveryMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, deliveryMode, opMessage, channelId);
}
inline void ExitGames::Client::Photon::TPeer::SendPing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "SendPing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::TPeer::SendData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "SendData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands(::ArrayW<uint8_t, ::Array<uint8_t>*> inbuff, int32_t dataLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inbuff, dataLength);
}
inline void ExitGames::Client::Photon::TPeer::ReadPingResult(::ArrayW<uint8_t, ::Array<uint8_t>*> inbuff) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "ReadPingResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inbuff);
}
inline void ExitGames::Client::Photon::TPeer::ReadPingResult(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::TPeer*>::get(), "ReadPingResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::TPeer::TPeer() {}
