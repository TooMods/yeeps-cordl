#pragma once
#include "Unity/Services/Vivox/zzzz__ILoginSession_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
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
#include "System/zzzz__Uri_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelId_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChatHistoryQueryOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConnectionRecoveryState_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConversationQueryOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAccountArchiveMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__IArchiveQueryResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChannelSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IDirectedMessageResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__IDirectedTextMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__IFailedDirectedTextMessage_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IPresenceSubscription_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyHashSet_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyQueue_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ITextToSpeech_def.hpp"
#include "Unity/Services/Vivox/zzzz__LoginState_def.hpp"
#include "Unity/Services/Vivox/zzzz__MessageOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__ParticipantPropertyUpdateFrequency_def.hpp"
#include "Unity/Services/Vivox/zzzz__Presence_def.hpp"
#include "Unity/Services/Vivox/zzzz__SubscriptionMode_def.hpp"
#include "Unity/Services/Vivox/zzzz__TransmissionMode_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxConversation_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_ChannelSessions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* (::Unity::Services::Vivox::ILoginSession::*)()>(
        &::Unity::Services::Vivox::ILoginSession::get_ChannelSessions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_PresenceSubscriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_PresenceSubscriptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_BlockedSubscriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_BlockedSubscriptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_AllowedSubscriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_AllowedSubscriptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_IncomingSubscriptionRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_IncomingSubscriptionRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_CrossMutedCommunications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_CrossMutedCommunications)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_DirectedMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_DirectedMessages)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_FailedDirectedMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_FailedDirectedMessages)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.add_DirectedMessageEdited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::ILoginSession::add_DirectedMessageEdited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.remove_DirectedMessageEdited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::ILoginSession::remove_DirectedMessageEdited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.add_DirectedMessageDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::ILoginSession::add_DirectedMessageDeleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.remove_DirectedMessageDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(
    ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*)>(&::Unity::Services::Vivox::ILoginSession::remove_DirectedMessageDeleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_AccountArchive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_AccountArchive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_AccountArchiveResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IArchiveQueryResult* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_AccountArchiveResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_DirectedMessageResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IDirectedMessageResult* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_DirectedMessageResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::LoginState (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_TransmissionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::TransmissionMode (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_TransmissionType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_TransmittingChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* (
    ::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::get_TransmittingChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_IsInjectingAudio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_IsInjectingAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_Presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::Presence (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_Presence)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.set_Presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::Presence)>(
    &::Unity::Services::Vivox::ILoginSession::set_Presence)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_LoginSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_LoginSessionId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_ParticipantPropertyFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_ParticipantPropertyFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.set_ParticipantPropertyFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency)>(
    &::Unity::Services::Vivox::ILoginSession::set_ParticipantPropertyFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_TTS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ITextToSpeech* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_TTS)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.get_RecoveryState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ConnectionRecoveryState (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::get_RecoveryState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.LoginAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::SubscriptionMode, ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, ::StringW, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ILoginSession::LoginAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SendDirectedMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::StringW, ::Unity::Services::Vivox::MessageOptions*)>(
        &::Unity::Services::Vivox::ILoginSession::SendDirectedMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginLogin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::StringW, ::Unity::Services::Vivox::SubscriptionMode, ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ILoginSession::BeginLogin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginLogin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::System::Uri*, ::StringW, ::Unity::Services::Vivox::SubscriptionMode,
                                                                                     ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                                                     ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*,
                                                                                     ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::ILoginSession::BeginLogin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginLogin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::System::Uri*, ::StringW, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginLogin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndLogin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndLogin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginAccountSetLoginProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::ILoginSession::BeginAccountSetLoginProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndAccountSetLoginProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndAccountSetLoginProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.GetChannelSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IChannelSession* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ChannelId*)>(&::Unity::Services::Vivox::ILoginSession::GetChannelSession)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.DeleteChannelSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ChannelId*)>(
    &::Unity::Services::Vivox::ILoginSession::DeleteChannelSession)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.DeleteChannelSessionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ChannelId*)>(
    &::Unity::Services::Vivox::ILoginSession::DeleteChannelSessionAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginAddBlockedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginAddBlockedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndAddBlockedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndAddBlockedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginRemoveBlockedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginRemoveBlockedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndRemoveBlockedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndRemoveBlockedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginAddAllowedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginAddAllowedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndAddAllowedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndAddAllowedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginRemoveAllowedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginRemoveAllowedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndRemoveAllowedSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndRemoveAllowedSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginAddPresenceSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginAddPresenceSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndAddPresenceSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IPresenceSubscription* (
    ::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(&::Unity::Services::Vivox::ILoginSession::EndAddPresenceSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginRemovePresenceSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BeginRemovePresenceSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndRemovePresenceSubscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndRemovePresenceSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginSendDirectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::ILoginSession::BeginSendDirectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginSendDirectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, ::StringW, ::Unity::Services::Vivox::MessageOptions*, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ILoginSession::BeginSendDirectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndSendDirectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndSendDirectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EditDirectTextMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(::StringW, ::StringW)>(
    &::Unity::Services::Vivox::ILoginSession::EditDirectTextMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.DeleteDirectTextMessageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(::StringW)>(
    &::Unity::Services::Vivox::ILoginSession::DeleteDirectTextMessageAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.GetConversationsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>* (
        ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::ConversationQueryOptions*)>(&::Unity::Services::Vivox::ILoginSession::GetConversationsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BeginAccountArchiveQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::System::Nullable_1<::System::DateTime>, ::System::Nullable_1<::System::DateTime>, ::StringW, ::Unity::Services::Vivox::AccountId*,
                                                ::Unity::Services::Vivox::ChannelId*, uint32_t, ::StringW, ::StringW, int32_t, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ILoginSession::BeginAccountArchiveQuery)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.EndAccountArchiveQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::ILoginSession::EndAccountArchiveQuery)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.GetDirectTextMessageHistoryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>* (
        ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, int32_t, ::Unity::Services::Vivox::ChatHistoryQueryOptions*, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::ILoginSession::GetDirectTextMessageHistoryAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetMessageAsReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::VivoxMessage*, ::System::Nullable_1<::System::DateTime>)>(&::Unity::Services::Vivox::ILoginSession::SetMessageAsReadAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetTransmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(
    ::Unity::Services::Vivox::TransmissionMode, ::Unity::Services::Vivox::ChannelId*)>(&::Unity::Services::Vivox::ILoginSession::SetTransmissionMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetTransmissionModeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::TransmissionMode, ::Unity::Services::Vivox::ChannelId*)>(
        &::Unity::Services::Vivox::ILoginSession::SetTransmissionModeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetAutoVADAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(bool)>(
    &::Unity::Services::Vivox::ILoginSession::SetAutoVADAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetVADPropertiesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Services::Vivox::ILoginSession::SetVADPropertiesAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.Logout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::Logout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.LogoutAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::ILoginSession::*)()>(
    &::Unity::Services::Vivox::ILoginSession::LogoutAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.GetLoginToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ILoginSession::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Unity::Services::Vivox::ILoginSession::GetLoginToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.GetLoginToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::ILoginSession::*)(::StringW, ::System::TimeSpan)>(
    &::Unity::Services::Vivox::ILoginSession::GetLoginToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.StartAudioInjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)(::StringW)>(
    &::Unity::Services::Vivox::ILoginSession::StartAudioInjection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.StopAudioInjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ILoginSession::*)()>(&::Unity::Services::Vivox::ILoginSession::StopAudioInjection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.BlockPlayerAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, bool, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::BlockPlayerAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetCrossMutedCommunications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Services::Vivox::ILoginSession::*)(::Unity::Services::Vivox::AccountId*, bool, ::System::AsyncCallback*)>(&::Unity::Services::Vivox::ILoginSession::SetCrossMutedCommunications)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.SetCrossMutedCommunications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::System::Collections::Generic::List_1<::Unity::Services::Vivox::AccountId*>*, bool, ::System::AsyncCallback*)>(
        &::Unity::Services::Vivox::ILoginSession::SetCrossMutedCommunications)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ILoginSession.ClearCrossMutedCommunications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::ILoginSession::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::ILoginSession::ClearCrossMutedCommunications)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 72));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
constexpr Unity::Services::Vivox::ILoginSession::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
Unity::Services::Vivox::ILoginSession::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::ILoginSession::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::ILoginSession::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* Unity::Services::Vivox::ILoginSession::get_ChannelSessions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>*, false>(
      this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>*
Unity::Services::Vivox::ILoginSession::get_PresenceSubscriptions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>*, false>(
      this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* Unity::Services::Vivox::ILoginSession::get_BlockedSubscriptions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* Unity::Services::Vivox::ILoginSession::get_AllowedSubscriptions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* Unity::Services::Vivox::ILoginSession::get_IncomingSubscriptionRequests() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* Unity::Services::Vivox::ILoginSession::get_CrossMutedCommunications() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* Unity::Services::Vivox::ILoginSession::get_DirectedMessages() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* Unity::Services::Vivox::ILoginSession::get_FailedDirectedMessages() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ILoginSession::add_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::ILoginSession::remove_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::ILoginSession::add_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::ILoginSession::remove_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* Unity::Services::Vivox::ILoginSession::get_AccountArchive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IArchiveQueryResult* Unity::Services::Vivox::ILoginSession::get_AccountArchiveResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IArchiveQueryResult*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IDirectedMessageResult* Unity::Services::Vivox::ILoginSession::get_DirectedMessageResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IDirectedMessageResult*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::LoginState Unity::Services::Vivox::ILoginSession::get_State() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::LoginState, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::TransmissionMode Unity::Services::Vivox::ILoginSession::get_TransmissionType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::TransmissionMode, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* Unity::Services::Vivox::ILoginSession::get_TransmittingChannels() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>*, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::ILoginSession::get_IsInjectingAudio() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::Presence Unity::Services::Vivox::ILoginSession::get_Presence() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Presence, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ILoginSession::set_Presence(::Unity::Services::Vivox::Presence value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::ILoginSession::get_LoginSessionId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ILoginSession::get_ParticipantPropertyFrequency() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ILoginSession::set_ParticipantPropertyFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::ITextToSpeech* Unity::Services::Vivox::ILoginSession::get_TTS() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ITextToSpeech*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ILoginSession::get_RecoveryState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ConnectionRecoveryState, false>(this, ___internal_method);
}
/// @param subscriptionMode: ::Unity::Services::Vivox::SubscriptionMode (default: static_cast<int32_t>(0x0))
/// @param presenceSubscriptions: ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (default: nullptr)
/// @param blockedPresenceSubscriptions: ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (default: nullptr)
/// @param allowedPresenceSubscriptions: ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* (default: nullptr)
/// @param accessToken: ::StringW (default: nullptr)
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::LoginAsync(
    ::Unity::Services::Vivox::SubscriptionMode subscriptionMode, ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
    ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
    ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::StringW accessToken, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, subscriptionMode, presenceSubscriptions, blockedPresenceSubscriptions,
                                                                                       allowedPresenceSubscriptions, accessToken, callback);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::SendDirectedMessageAsync(::Unity::Services::Vivox::AccountId* accountId, ::StringW message,
                                                                                                         ::Unity::Services::Vivox::MessageOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, accountId, message, options);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginLogin(::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions,
                                                                                 ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accessToken, subscriptionMode, presenceSubscriptions, blockedPresenceSubscriptions,
                                                                             allowedPresenceSubscriptions, callback);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginLogin(::System::Uri* server, ::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                                                                 ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions,
                                                                                 ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, server, accessToken, subscriptionMode, presenceSubscriptions, blockedPresenceSubscriptions,
                                                                             allowedPresenceSubscriptions, callback);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginLogin(::System::Uri* server, ::StringW accessToken, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, server, accessToken, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndLogin(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginAccountSetLoginProperties(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency participantPropertyFrequency,
                                                                                                     ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, participantPropertyFrequency, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndAccountSetLoginProperties(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Unity::Services::Vivox::IChannelSession* Unity::Services::Vivox::ILoginSession::GetChannelSession(::Unity::Services::Vivox::ChannelId* channelId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IChannelSession*, false>(this, ___internal_method, channelId);
}
inline void Unity::Services::Vivox::ILoginSession::DeleteChannelSession(::Unity::Services::Vivox::ChannelId* channelId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelId);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::DeleteChannelSessionAsync(::Unity::Services::Vivox::ChannelId* channelId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, channelId);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginAddBlockedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndAddBlockedSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginRemoveBlockedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndRemoveBlockedSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginAddAllowedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndAddAllowedSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginRemoveAllowedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndRemoveAllowedSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginAddPresenceSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline ::Unity::Services::Vivox::IPresenceSubscription* Unity::Services::Vivox::ILoginSession::EndAddPresenceSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IPresenceSubscription*, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginRemovePresenceSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndRemovePresenceSubscription(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* accountId, ::StringW language, ::StringW message,
                                                                                               ::StringW applicationStanzaNamespace, ::StringW applicationStanzaBody,
                                                                                               ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, language, message, applicationStanzaNamespace, applicationStanzaBody, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* accountId, ::StringW message,
                                                                                               ::Unity::Services::Vivox::MessageOptions* options, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, message, options, callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndSendDirectedMessage(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::EditDirectTextMessageAsync(::StringW messageId, ::StringW newMessage) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messageId, newMessage);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::DeleteDirectTextMessageAsync(::StringW messageId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messageId);
}
/// @param options: ::Unity::Services::Vivox::ConversationQueryOptions* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*
Unity::Services::Vivox::ILoginSession::GetConversationsAsync(::Unity::Services::Vivox::ConversationQueryOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*, false>(
      this, ___internal_method, options);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::BeginAccountArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd,
                                                                                               ::StringW searchText, ::Unity::Services::Vivox::AccountId* userId,
                                                                                               ::Unity::Services::Vivox::ChannelId* channel, uint32_t max, ::StringW afterId, ::StringW beforeId,
                                                                                               int32_t firstMessageIndex, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, timeStart, timeEnd, searchText, userId, channel, max, afterId, beforeId, firstMessageIndex,
                                                                             callback);
}
inline void Unity::Services::Vivox::ILoginSession::EndAccountArchiveQuery(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
/// @param recipient: ::Unity::Services::Vivox::AccountId* (default: nullptr)
/// @param requestSize: int32_t (default: static_cast<int32_t>(0xa))
/// @param chatHistoryQueryOptions: ::Unity::Services::Vivox::ChatHistoryQueryOptions* (default: nullptr)
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
Unity::Services::Vivox::ILoginSession::GetDirectTextMessageHistoryAsync(::Unity::Services::Vivox::AccountId* recipient, int32_t requestSize,
                                                                        ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*, false>(
      this, ___internal_method, recipient, requestSize, chatHistoryQueryOptions, callback);
}
/// @param seenAt: ::System::Nullable_1<::System::DateTime> (default: {})
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::SetMessageAsReadAsync(::Unity::Services::Vivox::VivoxMessage* message,
                                                                                                      ::System::Nullable_1<::System::DateTime> seenAt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, message, seenAt);
}
/// @param singleChannel: ::Unity::Services::Vivox::ChannelId* (default: nullptr)
inline void Unity::Services::Vivox::ILoginSession::SetTransmissionMode(::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, singleChannel);
}
/// @param singleChannel: ::Unity::Services::Vivox::ChannelId* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::SetTransmissionModeAsync(::Unity::Services::Vivox::TransmissionMode mode,
                                                                                                         ::Unity::Services::Vivox::ChannelId* singleChannel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, mode, singleChannel);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::SetAutoVADAsync(bool onOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, onOff);
}
/// @param hangover: int32_t (default: static_cast<int32_t>(0x7d0))
/// @param noiseFloor: int32_t (default: static_cast<int32_t>(0x240))
/// @param sensitivity: int32_t (default: static_cast<int32_t>(0x2b))
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::SetVADPropertiesAsync(int32_t hangover, int32_t noiseFloor, int32_t sensitivity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hangover, noiseFloor, sensitivity);
}
inline void Unity::Services::Vivox::ILoginSession::Logout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::LogoutAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
/// @param tokenExpirationDuration: ::System::Nullable_1<::System::TimeSpan> (default: {})
inline ::StringW Unity::Services::Vivox::ILoginSession::GetLoginToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenExpirationDuration);
}
inline ::StringW Unity::Services::Vivox::ILoginSession::GetLoginToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tokenSigningKey, tokenExpirationDuration);
}
inline void Unity::Services::Vivox::ILoginSession::StartAudioInjection(::StringW audioFilePath) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioFilePath);
}
inline void Unity::Services::Vivox::ILoginSession::StopAudioInjection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param callback: ::System::AsyncCallback* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::ILoginSession::BlockPlayerAsync(::Unity::Services::Vivox::AccountId* accountId, bool blockStatus, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, accountId, blockStatus, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::SetCrossMutedCommunications(::Unity::Services::Vivox::AccountId* accountId, bool muted, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountId, muted, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::SetCrossMutedCommunications(::System::Collections::Generic::List_1<::Unity::Services::Vivox::AccountId*>* accountIdSet,
                                                                                                  bool muted, ::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountIdSet, muted, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::ILoginSession::ClearCrossMutedCommunications(::System::AsyncCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ILoginSession*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback);
}
