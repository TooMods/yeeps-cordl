#pragma once
#include "Unity/Services/Vivox/zzzz__IChannelSession_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelId_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChatHistoryQueryOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConnectionState_def.hpp"
#include "Unity/Services/Vivox/zzzz__IArchiveQueryResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChannelTextMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ILoginSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IParticipant_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyQueue_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ISessionArchiveMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITranscribedMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__MessageOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_SessionHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_SessionHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_Parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ILoginSession* (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_Parent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_AudioState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ConnectionState (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_AudioState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_TextState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ConnectionState (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_TextState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_ChannelState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ConnectionState (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_ChannelState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_Participants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* (
    ::Unity::Services::Vivox::IChannelSession::*)()>(&::Unity::Services::Vivox::IChannelSession::get_Participants)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_MessageLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* (
    ::Unity::Services::Vivox::IChannelSession::*)()>(&::Unity::Services::Vivox::IChannelSession::get_MessageLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.add_MessageEdited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::IChannelSession::add_MessageEdited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.remove_MessageEdited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::IChannelSession::remove_MessageEdited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.add_MessageDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::IChannelSession::add_MessageDeleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.remove_MessageDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::IChannelSession::remove_MessageDeleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_SessionArchive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* (
    ::Unity::Services::Vivox::IChannelSession::*)()>(&::Unity::Services::Vivox::IChannelSession::get_SessionArchive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_SessionArchiveResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IArchiveQueryResult* (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_SessionArchiveResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_TranscribedLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* (
    ::Unity::Services::Vivox::IChannelSession::*)()>(&::Unity::Services::Vivox::IChannelSession::get_TranscribedLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_IsTransmitting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_IsTransmitting)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_IsSessionBeingTranscribed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_IsSessionBeingTranscribed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.get_Channel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ChannelId* (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::get_Channel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.ConnectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::IChannelSession::*)(bool, bool, bool, ::System::AsyncCallback*, ::StringW)>(&::Unity::Services::Vivox::IChannelSession::ConnectAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.SendChannelMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::Unity::Services::Vivox::MessageOptions*)>(&::Unity::Services::Vivox::IChannelSession::SendChannelMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::IChannelSession::*)(bool, bool, bool, ::StringW, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::IChannelSession::BeginConnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndConnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.DisconnectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::IChannelSession::*)()>(
    &::Unity::Services::Vivox::IChannelSession::DisconnectAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::IChannelSession::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::IChannelSession::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSetAudioConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::IChannelSession::*)(bool, bool, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::IChannelSession::BeginSetAudioConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndSetAudioConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndSetAudioConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSetTextConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::IChannelSession::*)(bool, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::IChannelSession::BeginSetTextConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndSetTextConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndSetTextConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSendText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::Unity::Services::Vivox::MessageOptions*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::IChannelSession::BeginSendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSendText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::IChannelSession::BeginSendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndSendText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndSendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSessionArchiveQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::IChannelSession::*)(::System::Nullable_1<::System::DateTime>, ::System::Nullable_1<::System::DateTime>, ::StringW, ::Unity::Services::Vivox::AccountId*, uint32_t,
                                                  ::StringW, ::StringW, int32_t, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::IChannelSession::BeginSessionArchiveQuery)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndSessionArchiveQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndSessionArchiveQuery)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.GetChannelTextMessageHistoryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>* (
        ::Unity::Services::Vivox::IChannelSession::*)(int32_t, ::Unity::Services::Vivox::ChatHistoryQueryOptions*, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::IChannelSession::GetChannelTextMessageHistoryAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.GetConnectToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChannelSession::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Unity::Services::Vivox::IChannelSession::GetConnectToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.GetConnectToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::System::TimeSpan)>(
    &::Unity::Services::Vivox::IChannelSession::GetConnectToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.Set3DPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Services::Vivox::IChannelSession::Set3DPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.BeginSetChannelTranscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::IChannelSession::*)(bool, ::StringW, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::IChannelSession::BeginSetChannelTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EndSetChannelTranscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::IChannelSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::IChannelSession::EndSetChannelTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.GetTranscriptionToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChannelSession::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Unity::Services::Vivox::IChannelSession::GetTranscriptionToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.GetTranscriptionToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::System::TimeSpan)>(
    &::Unity::Services::Vivox::IChannelSession::GetTranscriptionToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.SetVolumeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::IChannelSession::*)(int32_t)>(
    &::Unity::Services::Vivox::IChannelSession::SetVolumeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.EditChannelTextMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::IChannelSession::*)(::StringW, ::StringW)>(
    &::Unity::Services::Vivox::IChannelSession::EditChannelTextMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChannelSession.DeleteChannelTextMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::IChannelSession::*)(::StringW)>(
    &::Unity::Services::Vivox::IChannelSession::DeleteChannelTextMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 42));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
constexpr Unity::Services::Vivox::IChannelSession::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*
Unity::Services::Vivox::IChannelSession::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__ChannelId__() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::IChannelSession::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::IChannelSession::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Vivox::IChannelSession::get_SessionHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ILoginSession* Unity::Services::Vivox::IChannelSession::get_Parent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ILoginSession*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::IChannelSession::get_AudioState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ConnectionState, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::IChannelSession::get_TextState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ConnectionState, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::IChannelSession::get_ChannelState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ConnectionState, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* Unity::Services::Vivox::IChannelSession::get_Participants() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* Unity::Services::Vivox::IChannelSession::get_MessageLog() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::IChannelSession::add_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::IChannelSession::remove_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::IChannelSession::add_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::IChannelSession::remove_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* Unity::Services::Vivox::IChannelSession::get_SessionArchive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IArchiveQueryResult* Unity::Services::Vivox::IChannelSession::get_SessionArchiveResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IArchiveQueryResult*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* Unity::Services::Vivox::IChannelSession::get_TranscribedLog() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>*, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::IChannelSession::get_IsTransmitting() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::IChannelSession::get_IsSessionBeingTranscribed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ChannelId* Unity::Services::Vivox::IChannelSession::get_Channel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ChannelId*, false>(this, ___internal_method);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
/// @param accessToken: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::ConnectAsync(bool connectAudio, bool connectText, bool switchTransmission, ::System::AsyncCallback* callback,
                                                                                               ::StringW accessToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, connectAudio, connectText, switchTransmission, callback, accessToken);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::SendChannelMessageAsync(::StringW message, ::Unity::Services::Vivox::MessageOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, message, options);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginConnect(bool connectAudio, bool connectText, bool switchTransmission, ::StringW accessToken,
                                                                                     ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, connectAudio, connectText, switchTransmission, accessToken, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndConnect(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::DisconnectAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::Disconnect(::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSetAudioConnected(bool value, bool switchTransmission, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, value, switchTransmission, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndSetAudioConnected(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSetTextConnected(bool value, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, value, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndSetTextConnected(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSendText(::StringW message, ::Unity::Services::Vivox::MessageOptions* options, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, message, options, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSendText(::StringW language, ::StringW message, ::StringW applicationStanzaNamespace, ::StringW applicationStanzaBody,
                                                                                      ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, language, message, applicationStanzaNamespace, applicationStanzaBody, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndSendText(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSessionArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd,
                                                                                                 ::StringW searchText, ::Unity::Services::Vivox::AccountId* userId, uint32_t max, ::StringW afterId,
                                                                                                 ::StringW beforeId, int32_t firstMessageIndex, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, timeStart, timeEnd, searchText, userId, max, afterId, beforeId, firstMessageIndex, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndSessionArchiveQuery(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
/// @param requestSize: int32_t (default: static_cast<int32_t>(0xa))
/// @param chatHistoryQueryOptions: ::Unity::Services::Vivox::ChatHistoryQueryOptions* (default: nullptr)
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
Unity::Services::Vivox::IChannelSession::GetChannelTextMessageHistoryAsync(int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
                                                                           ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*, false>(
      this, ___internal_method, requestSize, chatHistoryQueryOptions, callback);
}
/// @param tokenExpirationDuration: ::System::Nullable_1<::System::TimeSpan> (default: {})
inline ::StringW Unity::Services::Vivox::IChannelSession::GetConnectToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenExpirationDuration);
}
inline ::StringW Unity::Services::Vivox::IChannelSession::GetConnectToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenSigningKey, tokenExpirationDuration);
}
inline void Unity::Services::Vivox::IChannelSession::Set3DPosition(::UnityEngine::Vector3 speakerPos, ::UnityEngine::Vector3 listenerPos, ::UnityEngine::Vector3 listenerAtOrient,
                                                                   ::UnityEngine::Vector3 listenerUpOrient) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, speakerPos, listenerPos, listenerAtOrient, listenerUpOrient);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::IChannelSession::BeginSetChannelTranscription(bool value, ::StringW accessToken, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, value, accessToken, callback);
}
inline void Unity::Services::Vivox::IChannelSession::EndSetChannelTranscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
/// @param tokenExpirationDuration: ::System::Nullable_1<::System::TimeSpan> (default: {})
inline ::StringW Unity::Services::Vivox::IChannelSession::GetTranscriptionToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenExpirationDuration);
}
inline ::StringW Unity::Services::Vivox::IChannelSession::GetTranscriptionToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenSigningKey, tokenExpirationDuration);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::SetVolumeAsync(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::EditChannelTextMessageAsync(::StringW messageId, ::StringW newMessage) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messageId, newMessage);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::IChannelSession::DeleteChannelTextMessageAsync(::StringW messageId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChannelSession*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messageId);
}
