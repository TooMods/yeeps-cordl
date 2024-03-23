#pragma once
#include "ExitGames/Client/Photon/zzzz__PeerBase_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetChannel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommandPool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_QueuedIncomingCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::get_QueuedIncomingCommandsCount)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x277473c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_QueuedOutgoingCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::get_QueuedOutgoingCommandsCount)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x27748cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_SentReliableCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::get_SentReliableCommandsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2774af4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2774b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.IsTransportEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::IsTransportEncrypted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2774f68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::Reset)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x2774f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ApplyRandomizedSequenceNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::ApplyRandomizedSequenceNumbers)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2775690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                               "ApplyRandomizedSequenceNumbers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.GetChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::EnetChannel* (::ExitGames::Client::Photon::EnetPeer::*)(uint8_t)>(
    &::ExitGames::Client::Photon::EnetPeer::GetChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x277584c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "GetChannel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*)>(
    &::ExitGames::Client::Photon::EnetPeer::Connect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27758a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.OnConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::OnConnect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2775954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2775cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.StopConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::StopConnection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27768f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.FetchServerTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27769e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.DispatchIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x2777004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.GetFragmentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::GetFragmentLength)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2778700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                               "GetFragmentLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CalculatePacketSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::CalculatePacketSize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x277882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CalculatePacketSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CalculateInitialOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(
    &::ExitGames::Client::Photon::EnetPeer::CalculateInitialOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27788fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                               "CalculateInitialOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendAcksOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x277893c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendOutgoingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0x1108;
  constexpr static std::size_t addrs = 0x2779934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.EnqueuePhotonMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::EnetPeer::EnqueuePhotonMessage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x277ac28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CreateAndEnqueueCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(
    &::ExitGames::Client::Photon::EnetPeer::CreateAndEnqueueCommand)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2776c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CreateAndEnqueueCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeAckToBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SerializeAckToBuffer)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x27791e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                               "SerializeAckToBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeToBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)(
    ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*)>(&::ExitGames::Client::Photon::EnetPeer::SerializeToBuffer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x277aa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SerializeToBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeCommandToBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, bool)>(
    &::ExitGames::Client::Photon::EnetPeer::SerializeCommandToBuffer)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2779484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SerializeCommandToBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::SendData)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x27795cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendToSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::SendToSocket)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x277b860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendToSocket", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendDataEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::SendDataEncrypted)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x277b628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendDataEncrypted", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueSentCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, bool)>(
    &::ExitGames::Client::Photon::EnetPeer::QueueSentCommand)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x277b3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueSentCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingReliableCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::EnetPeer::QueueOutgoingReliableCommand)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2775b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingReliableCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingUnreliableCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::EnetPeer::QueueOutgoingUnreliableCommand)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x277ac94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingUnreliableCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingAcknowledgement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::QueueOutgoingAcknowledgement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x277bdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingAcknowledgement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ReceiveIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ExitGames::Client::Photon::EnetPeer::ReceiveIncomingCommands)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x277c024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::EnetPeer::ExecuteCommand)> {
  constexpr static std::size_t size = 0xd6c;
  constexpr static std::size_t addrs = 0x2777914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "ExecuteCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueIncomingCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(
    &::ExitGames::Client::Photon::EnetPeer::QueueIncomingCommand)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x277d090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueIncomingCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.RemoveSentReliableCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetPeer::*)(int32_t, int32_t, bool)>(
    &::ExitGames::Client::Photon::EnetPeer::RemoveSentReliableCommand)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x277cba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "RemoveSentReliableCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CommandListToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::EnetPeer::*)(
    ::ArrayW<::ExitGames::Client::Photon::NCommand*, ::Array<::ExitGames::Client::Photon::NCommand*>*>)>(&::ExitGames::Client::Photon::EnetPeer::CommandListToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x277ddf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CommandListToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ExitGames::Client::Photon::NCommand*, ::Array<::ExitGames::Client::Photon::NCommand*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer._ExecuteCommand_b__66_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::_ExecuteCommand_b__66_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x277dff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                               "<ExecuteCommand>b__66_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::NCommandPool*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_nCommandPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nCommandPool;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NCommandPool*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_nCommandPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nCommandPool;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_nCommandPool(::ExitGames::Client::Photon::NCommandPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nCommandPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sentReliableCommands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sentReliableCommands;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sentReliableCommands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sentReliableCommands;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_sentReliableCommands(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sentReliableCommands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::StreamBuffer*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingAcknowledgementsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingAcknowledgementsPool;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::StreamBuffer*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingAcknowledgementsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingAcknowledgementsPool;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_outgoingAcknowledgementsPool(::ExitGames::Client::Photon::StreamBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outgoingAcknowledgementsPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_unsequencedWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsequencedWindow;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_unsequencedWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsequencedWindow;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_unsequencedWindow(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsequencedWindow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingUnsequencedGroupNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingUnsequencedGroupNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingUnsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_outgoingUnsequencedGroupNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingUnsequencedGroupNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_incomingUnsequencedGroupNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_incomingUnsequencedGroupNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingUnsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_incomingUnsequencedGroupNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingUnsequencedGroupNumber = value;
}
constexpr uint8_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpCommandCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpCommandCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpCommandCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpCommandCount;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpCommandCount(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___udpCommandCount = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpBuffer;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___udpBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBufferIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpBufferIndex;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBufferIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___udpBufferIndex;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpBufferIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___udpBufferIndex = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_bufferForEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferForEncryption;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_bufferForEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferForEncryption;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_bufferForEncryption(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufferForEncryption)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandBufferSize;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandBufferSize;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_commandBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandBufferSize = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_challenge(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___challenge = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsRepeated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableCommandsRepeated;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsRepeated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableCommandsRepeated;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_reliableCommandsRepeated(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reliableCommandsRepeated = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableCommandsSent;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reliableCommandsSent;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_reliableCommandsSent(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reliableCommandsSent = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_serverSentTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_serverSentTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSentTime;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_serverSentTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverSentTime = value;
}
constexpr bool& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_datagramEncryptedConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagramEncryptedConnection;
}
constexpr bool const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_datagramEncryptedConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagramEncryptedConnection;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_datagramEncryptedConnection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___datagramEncryptedConnection = value;
}
constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelArray;
}
constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> const&
ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelArray;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_channelArray(::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___channelArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandsToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandsToRemove;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandsToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandsToRemove;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_commandsToRemove(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___commandsToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLength;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLength;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentLength = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthDatagramEncrypt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLengthDatagramEncrypt;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthDatagramEncrypt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLengthDatagramEncrypt;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLengthDatagramEncrypt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentLengthDatagramEncrypt = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthMtuValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLengthMtuValue;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthMtuValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentLengthMtuValue;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLengthMtuValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentLengthMtuValue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_CommandQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommandQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*> const&
ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_CommandQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommandQueue;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_CommandQueue(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CommandQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void ExitGames::Client::Photon::EnetPeer::setStaticF_udpHeader0xF3(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "udpHeader0xF3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::EnetPeer::getStaticF_udpHeader0xF3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "udpHeader0xF3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get>();
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_QueuedIncomingCommandsCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_QueuedOutgoingCommandsCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_SentReliableCommandsCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::EnetPeer* ExitGames::Client::Photon::EnetPeer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::EnetPeer*>());
}
inline void ExitGames::Client::Photon::EnetPeer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::IsTransportEncrypted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::ApplyRandomizedSequenceNumbers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                             "ApplyRandomizedSequenceNumbers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::EnetChannel* ExitGames::Client::Photon::EnetPeer::GetChannel(uint8_t channelNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "GetChannel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EnetChannel*, false>(this, ___internal_method, channelNumber);
}
inline bool ExitGames::Client::Photon::EnetPeer::Connect(::StringW ipport, ::StringW proxyServerAddress, ::StringW appID, ::System::Object* photonToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ipport, proxyServerAddress, appID, photonToken);
}
inline void ExitGames::Client::Photon::EnetPeer::OnConnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::StopConnection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::FetchServerTimestamp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::DispatchIncomingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::GetFragmentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "GetFragmentLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::CalculatePacketSize(int32_t inSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CalculatePacketSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inSize);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::CalculateInitialOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                             "CalculateInitialOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::SendAcksOnly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::SendOutgoingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer* opBytes, ::ExitGames::Client::Photon::SendOptions sendParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opBytes, sendParams);
}
inline bool ExitGames::Client::Photon::EnetPeer::CreateAndEnqueueCommand(uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channelNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CreateAndEnqueueCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, commandType, payload, channelNumber);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::SerializeAckToBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                             "SerializeAckToBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::SerializeToBuffer(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* commandList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SerializeToBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, commandList);
}
/// @param commandIsInSentQueue: bool (default: false)
inline bool ExitGames::Client::Photon::EnetPeer::SerializeCommandToBuffer(::ExitGames::Client::Photon::NCommand* command, bool commandIsInSentQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SerializeCommandToBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, command, commandIsInSentQueue);
}
inline void ExitGames::Client::Photon::EnetPeer::SendData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::EnetPeer::SendToSocket(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendToSocket", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::EnetPeer::SendDataEncrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "SendDataEncrypted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length);
}
/// @param commandIsAlreadyInSentQueue: bool (default: false)
inline void ExitGames::Client::Photon::EnetPeer::QueueSentCommand(::ExitGames::Client::Photon::NCommand* command, bool commandIsAlreadyInSentQueue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueSentCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command, commandIsAlreadyInSentQueue);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingReliableCommand(::ExitGames::Client::Photon::NCommand* command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingReliableCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingUnreliableCommand(::ExitGames::Client::Photon::NCommand* command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingUnreliableCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingAcknowledgement(::ExitGames::Client::Photon::NCommand* readCommand, int32_t sendTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueOutgoingAcknowledgement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readCommand, sendTime);
}
inline void ExitGames::Client::Photon::EnetPeer::ReceiveIncomingCommands(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, int32_t inDataLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBuff, inDataLength);
}
inline void ExitGames::Client::Photon::EnetPeer::ExecuteCommand(::ExitGames::Client::Photon::NCommand* command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "ExecuteCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline bool ExitGames::Client::Photon::EnetPeer::QueueIncomingCommand(::ExitGames::Client::Photon::NCommand* command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "QueueIncomingCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, command);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetPeer::RemoveSentReliableCommand(int32_t ackReceivedReliableSequenceNumber, int32_t ackReceivedChannel,
                                                                                                             bool isUnsequenced) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "RemoveSentReliableCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*, false>(this, ___internal_method, ackReceivedReliableSequenceNumber, ackReceivedChannel, isUnsequenced);
}
inline ::StringW ExitGames::Client::Photon::EnetPeer::CommandListToString(::ArrayW<::ExitGames::Client::Photon::NCommand*, ::Array<::ExitGames::Client::Photon::NCommand*>*> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(), "CommandListToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ExitGames::Client::Photon::NCommand*, ::Array<::ExitGames::Client::Photon::NCommand*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, list);
}
inline void ExitGames::Client::Photon::EnetPeer::_ExecuteCommand_b__66_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::EnetPeer*>::get(),
                                                                             "<ExecuteCommand>b__66_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EnetPeer::EnetPeer() {}
