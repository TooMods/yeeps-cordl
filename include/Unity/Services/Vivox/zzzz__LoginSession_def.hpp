#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConnectionRecoveryState_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChatHistoryQueryResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__LoginState_def.hpp"
#include "Unity/Services/Vivox/zzzz__ParticipantPropertyUpdateFrequency_def.hpp"
#include "Unity/Services/Vivox/zzzz__Presence_def.hpp"
#include "Unity/Services/Vivox/zzzz__SubscriptionMode_def.hpp"
#include "Unity/Services/Vivox/zzzz__TransmissionMode_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxConversation_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginSession)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> struct __Queue_1__Enumerator;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
namespace Unity::Services::Vivox {
class AccountArchiveMessage;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class ArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class AsyncNoResult;
}
namespace Unity::Services::Vivox {
template <typename T> class AsyncResult_1;
}
namespace Unity::Services::Vivox {
class ChannelId;
}
namespace Unity::Services::Vivox {
class ChannelSession;
}
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
namespace Unity::Services::Vivox {
class Client;
}
namespace Unity::Services::Vivox {
struct ConnectionRecoveryState;
}
namespace Unity::Services::Vivox {
class ConversationQueryOptions;
}
namespace Unity::Services::Vivox {
class DirectedMessageResult;
}
namespace Unity::Services::Vivox {
class IAccountArchiveMessage;
}
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
class IChatHistoryQueryResult;
}
namespace Unity::Services::Vivox {
class IDirectedMessageResult;
}
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
namespace Unity::Services::Vivox {
class IFailedDirectedTextMessage;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class IPresenceSubscription;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyHashSet_1;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
namespace Unity::Services::Vivox {
class ITextToSpeech;
}
namespace Unity::Services::Vivox {
struct LoginState;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
struct ParticipantPropertyUpdateFrequency;
}
namespace Unity::Services::Vivox {
class PresenceSubscription;
}
namespace Unity::Services::Vivox {
struct Presence;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
namespace Unity::Services::Vivox {
template <typename T> class ReadWriteHashSet_1;
}
namespace Unity::Services::Vivox {
template <typename T> class ReadWriteQueue_1;
}
namespace Unity::Services::Vivox {
struct SubscriptionMode;
}
namespace Unity::Services::Vivox {
struct TransmissionMode;
}
namespace Unity::Services::Vivox {
class VivoxConversation;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace Unity::Services::Vivox {
struct __LoginSession___BlockPlayerAsync_d__145;
}
namespace Unity::Services::Vivox {
struct __LoginSession___CheckConnectionAsync_d__157;
}
namespace Unity::Services::Vivox {
struct __LoginSession___DeleteChannelSessionAsync_d__119;
}
namespace Unity::Services::Vivox {
struct __LoginSession___DeleteDirectTextMessageAsync_d__152;
}
namespace Unity::Services::Vivox {
struct __LoginSession___EditDirectTextMessageAsync_d__151;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetConversationsAsync_d__136;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetDirectTextMessageHistoryAsync_d__135;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetDirectTextMessageHistoryPageAsync_d__134;
}
namespace Unity::Services::Vivox {
struct __LoginSession___LoginAsync_d__103;
}
namespace Unity::Services::Vivox {
struct __LoginSession___LogoutAsync_d__116;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SendDirectedMessageAsync_d__104;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetAllSessionsTransmittingAsync_d__169;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetAutoVADAsync_d__173;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetMessageAsReadAsync_d__133;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetNoSessionTransmittingAsync_d__168;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmissionAsync_d__166;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmissionModeAsync_d__164;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmittingAsync_d__167;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetVADPropertiesAsync_d__174;
}
namespace Unity::Services::Vivox {
struct __LoginSession___WaitDeleteChannelSessionAsync_d__156;
}
namespace Unity::Services::Vivox {
class __LoginSession____c;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass105_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass110_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass114_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass116_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass120_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass121_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass122_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass124_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass126_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass129_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass131_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass133_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass134_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass136_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_1;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_2;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass139_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass141_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass143_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass146_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass147_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass148_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass149_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass150_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass153_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass167_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass168_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass169_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass170_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass171_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass172_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass173_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass174_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass41_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass42_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass88_0;
}
namespace Unity::Services::Vivox {
struct vx_control_communications_operation;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
struct vx_mute_scope;
}
namespace Unity::Services::Vivox {
class vx_req_account_anonymous_login_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_archive_query_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_buddy_delete_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_buddy_set_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_chat_history_query_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_chat_history_set_marker_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_control_communications_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_create_auto_accept_rule_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_create_block_rule_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_delete_auto_accept_rule_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_delete_block_rule_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_get_conversations_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_logout_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_send_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_send_subscription_reply_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_set_login_properties_t;
}
namespace Unity::Services::Vivox {
class vx_req_account_set_presence_t;
}
namespace Unity::Services::Vivox {
class vx_req_aux_set_vad_properties_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_control_audio_injection_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_set_tx_all_sessions_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_set_tx_no_session_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_set_tx_session_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_control_communications_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class LoginSession;
}
namespace Unity::Services::Vivox {
class __LoginSession____c;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass105_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass110_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass114_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass116_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass120_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass121_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass122_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass124_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass126_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass129_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass131_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass133_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass134_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass136_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_1;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass137_2;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass139_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass141_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass143_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass146_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass147_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass148_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass149_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass150_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass153_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass167_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass168_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass169_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass170_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass171_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass172_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass173_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass174_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass41_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass42_0;
}
namespace Unity::Services::Vivox {
class __LoginSession____c__DisplayClass88_0;
}
namespace Unity::Services::Vivox {
struct __LoginSession___BlockPlayerAsync_d__145;
}
namespace Unity::Services::Vivox {
struct __LoginSession___CheckConnectionAsync_d__157;
}
namespace Unity::Services::Vivox {
struct __LoginSession___DeleteChannelSessionAsync_d__119;
}
namespace Unity::Services::Vivox {
struct __LoginSession___DeleteDirectTextMessageAsync_d__152;
}
namespace Unity::Services::Vivox {
struct __LoginSession___EditDirectTextMessageAsync_d__151;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetConversationsAsync_d__136;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetDirectTextMessageHistoryAsync_d__135;
}
namespace Unity::Services::Vivox {
struct __LoginSession___GetDirectTextMessageHistoryPageAsync_d__134;
}
namespace Unity::Services::Vivox {
struct __LoginSession___LoginAsync_d__103;
}
namespace Unity::Services::Vivox {
struct __LoginSession___LogoutAsync_d__116;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SendDirectedMessageAsync_d__104;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetAllSessionsTransmittingAsync_d__169;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetAutoVADAsync_d__173;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetMessageAsReadAsync_d__133;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetNoSessionTransmittingAsync_d__168;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmissionAsync_d__166;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmissionModeAsync_d__164;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetTransmittingAsync_d__167;
}
namespace Unity::Services::Vivox {
struct __LoginSession___SetVADPropertiesAsync_d__174;
}
namespace Unity::Services::Vivox {
struct __LoginSession___WaitDeleteChannelSessionAsync_d__156;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::LoginSession);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174);
MARK_VAL_T(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156);
// Type: ::<>c__DisplayClass41_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass41_0*
class CORDL_TYPE __LoginSession____c__DisplayClass41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::Unity::Services::Vivox::AccountArchiveMessage* message;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0* New_ctor();

  /// @brief Method <HandleAccountArchiveMessage>b__0, addr 0x2ca1590, size 0xec, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*
  _HandleAccountArchiveMessage_b__0(::StringW k, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* l);

  constexpr ::Unity::Services::Vivox::AccountArchiveMessage*& __cordl_internal_get_message();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountArchiveMessage*> const& __cordl_internal_get_message() const;

  constexpr void __cordl_internal_set_message(::Unity::Services::Vivox::AccountArchiveMessage* value);

  /// @brief Method .ctor, addr 0x2ca1588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass41_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass41_0(__LoginSession____c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass41_0(__LoginSession____c__DisplayClass41_0 const&) = delete;

  /// @brief Field message, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountArchiveMessage* ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0, ___message) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass42_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass42_0*
class CORDL_TYPE __LoginSession____c__DisplayClass42_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field queryId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queryId, put = __cordl_internal_set_queryId))::StringW queryId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0* New_ctor();

  /// @brief Method <HandleAccountArchiveQueryEnd>b__0, addr 0x2ca1684, size 0x48, virtual false, abstract: false, final false
  inline bool _HandleAccountArchiveQueryEnd_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> r);

  /// @brief Method <HandleAccountArchiveQueryEnd>b__1, addr 0x2ca16cc, size 0x48, virtual false, abstract: false, final false
  inline bool _HandleAccountArchiveQueryEnd_b__1(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*> r);

  constexpr ::StringW const& __cordl_internal_get_queryId() const;

  constexpr ::StringW& __cordl_internal_get_queryId();

  constexpr void __cordl_internal_set_queryId(::StringW value);

  /// @brief Method .ctor, addr 0x2ca167c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass42_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass42_0(__LoginSession____c__DisplayClass42_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass42_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass42_0(__LoginSession____c__DisplayClass42_0 const&) = delete;

  /// @brief Field queryId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___queryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0, ___queryId) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass88_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass88_0*
class CORDL_TYPE __LoginSession____c__DisplayClass88_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_set_presence_t* request;

  /// @brief Field value, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::Unity::Services::Vivox::Presence value;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0* New_ctor();

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_set_presence_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_set_presence_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::Presence const& __cordl_internal_get_value() const;

  constexpr ::Unity::Services::Vivox::Presence& __cordl_internal_get_value();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_set_presence_t* value);

  constexpr void __cordl_internal_set_value(::Unity::Services::Vivox::Presence value);

  /// @brief Method .ctor, addr 0x2ca1714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_Presence>b__0, addr 0x2ca171c, size 0x208, virtual false, abstract: false, final false
  inline void _set_Presence_b__0(::System::IAsyncResult* result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass88_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass88_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass88_0(__LoginSession____c__DisplayClass88_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass88_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass88_0(__LoginSession____c__DisplayClass88_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field value, offset: 0x18, size: 0x10, def value: None
  ::Unity::Services::Vivox::Presence ___value;

  /// @brief Field ar, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_set_presence_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0, ___ar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0, ___request) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LoginAsync>d__103
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<LoginAsync>d__103
struct CORDL_TYPE __LoginSession___LoginAsync_d__103 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca1924, size 0x74c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca2070, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___LoginAsync_d__103();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "presenceSubscriptions", ty:
  // "::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*", modifiers: "", def_value: None }, CppParam { name: "blockedPresenceSubscriptions", ty:
  // "::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*", modifiers: "", def_value: None }, CppParam { name: "allowedPresenceSubscriptions", ty:
  // "::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>*", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::AsyncCallback*", modifiers:
  // "", def_value: None }, CppParam { name: "_tokenFetch_5__2", ty: "::System::Threading::Tasks::Task_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __LoginSession___LoginAsync_d__103(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW accessToken,
                                               ::Unity::Services::Vivox::LoginSession* __4__this,
                                               ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                               ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                               ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::System::AsyncCallback* callback,
                                               ::System::Threading::Tasks::Task_1<::StringW>* _tokenFetch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__2,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field accessToken, offset: 0x20, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field presenceSubscriptions, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions;

  /// @brief Field blockedPresenceSubscriptions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions;

  /// @brief Field allowedPresenceSubscriptions, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions;

  /// @brief Field callback, offset: 0x48, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <tokenFetch>5__2, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::StringW>* _tokenFetch_5__2;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__2;

  /// @brief Field <>u__3, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, 0x70>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, accessToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, presenceSubscriptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, blockedPresenceSubscriptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, allowedPresenceSubscriptions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, callback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, _tokenFetch_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __u__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, __u__3) == 0x68, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SendDirectedMessageAsync>d__104
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SendDirectedMessageAsync>d__104
struct CORDL_TYPE __LoginSession___SendDirectedMessageAsync_d__104 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca207c, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca2348, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SendDirectedMessageAsync_d__104();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "accountId", ty: "::Unity::Services::Vivox::AccountId*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Vivox::MessageOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___SendDirectedMessageAsync_d__104(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::AccountId* accountId, ::StringW message,
                                                             ::Unity::Services::Vivox::MessageOptions* options,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field accountId, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* accountId;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::MessageOptions* options;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, accountId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass105_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass105_0*
class CORDL_TYPE __LoginSession____c__DisplayClass105_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncResult_1<::StringW>* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_chat_history_query_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0* New_ctor();

  /// @brief Method <BeginChatHistoryQuery>b__0, addr 0x2ca235c, size 0x1a0, virtual false, abstract: false, final false
  inline void _BeginChatHistoryQuery_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncResult_1<::StringW>*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncResult_1<::StringW>*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_chat_history_query_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_chat_history_query_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncResult_1<::StringW>* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_chat_history_query_t* value);

  /// @brief Method .ctor, addr 0x2ca2354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass105_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass105_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass105_0(__LoginSession____c__DisplayClass105_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass105_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass105_0(__LoginSession____c__DisplayClass105_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncResult_1<::StringW>* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_chat_history_query_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass110_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass110_0*
class CORDL_TYPE __LoginSession____c__DisplayClass110_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field accessToken, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_accessToken, put = __cordl_internal_set_accessToken))::StringW accessToken;

  /// @brief Field presenceDesired, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_presenceDesired, put = __cordl_internal_set_presenceDesired)) bool presenceDesired;

  /// @brief Field result, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::Unity::Services::Vivox::AsyncNoResult* result;

  /// @brief Field subscriptionMode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_subscriptionMode, put = __cordl_internal_set_subscriptionMode))::Unity::Services::Vivox::SubscriptionMode subscriptionMode;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0* New_ctor();

  /// @brief Method <BeginLogin>b__0, addr 0x2ca2504, size 0x1b0, virtual false, abstract: false, final false
  inline void _BeginLogin_b__0(::System::IAsyncResult* ar2);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_accessToken() const;

  constexpr ::StringW& __cordl_internal_get_accessToken();

  constexpr bool const& __cordl_internal_get_presenceDesired() const;

  constexpr bool& __cordl_internal_get_presenceDesired();

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_result();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_result() const;

  constexpr ::Unity::Services::Vivox::SubscriptionMode const& __cordl_internal_get_subscriptionMode() const;

  constexpr ::Unity::Services::Vivox::SubscriptionMode& __cordl_internal_get_subscriptionMode();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_accessToken(::StringW value);

  constexpr void __cordl_internal_set_presenceDesired(bool value);

  constexpr void __cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_subscriptionMode(::Unity::Services::Vivox::SubscriptionMode value);

  /// @brief Method .ctor, addr 0x2ca24fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass110_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass110_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass110_0(__LoginSession____c__DisplayClass110_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass110_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass110_0(__LoginSession____c__DisplayClass110_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field result, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___result;

  /// @brief Field presenceDesired, offset: 0x20, size: 0x1, def value: None
  bool ___presenceDesired;

  /// @brief Field accessToken, offset: 0x28, size: 0x8, def value: None
  ::StringW ___accessToken;

  /// @brief Field subscriptionMode, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::SubscriptionMode ___subscriptionMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, ___result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, ___presenceDesired) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, ___accessToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0, ___subscriptionMode) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass114_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass114_0*
class CORDL_TYPE __LoginSession____c__DisplayClass114_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_anonymous_login_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0* New_ctor();

  /// @brief Method <Login>b__0, addr 0x2ca26bc, size 0x144, virtual false, abstract: false, final false
  inline void _Login_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_anonymous_login_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_anonymous_login_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_anonymous_login_t* value);

  /// @brief Method .ctor, addr 0x2ca26b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass114_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass114_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass114_0(__LoginSession____c__DisplayClass114_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass114_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass114_0(__LoginSession____c__DisplayClass114_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_anonymous_login_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass116_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass116_0*
class CORDL_TYPE __LoginSession____c__DisplayClass116_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_logout_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0* New_ctor();

  /// @brief Method <LogoutAsync>b__0, addr 0x2ca2808, size 0x184, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _LogoutAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::vx_req_account_logout_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_logout_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_logout_t* value);

  /// @brief Method .ctor, addr 0x2ca2800, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass116_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass116_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass116_0(__LoginSession____c__DisplayClass116_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass116_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass116_0(__LoginSession____c__DisplayClass116_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_logout_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LogoutAsync>d__116
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<LogoutAsync>d__116
struct CORDL_TYPE __LoginSession___LogoutAsync_d__116 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca298c, size 0x398, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca2d24, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___LogoutAsync_d__116();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___LogoutAsync_d__116(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::LoginSession* __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DeleteChannelSessionAsync>d__119
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<DeleteChannelSessionAsync>d__119
struct CORDL_TYPE __LoginSession___DeleteChannelSessionAsync_d__119 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca2d30, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca30ec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___DeleteChannelSessionAsync_d__119();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "channelId", ty: "::Unity::Services::Vivox::ChannelId*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___DeleteChannelSessionAsync_d__119(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::ChannelId* channelId,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field channelId, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* channelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, channelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass120_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass120_0*
class CORDL_TYPE __LoginSession____c__DisplayClass120_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0* New_ctor();

  /// @brief Method <StartAudioInjection>b__1, addr 0x2ca3100, size 0x12c, virtual false, abstract: false, final false
  inline void _StartAudioInjection_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* value);

  /// @brief Method .ctor, addr 0x2ca30f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass120_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass120_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass120_0(__LoginSession____c__DisplayClass120_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass120_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass120_0(__LoginSession____c__DisplayClass120_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c*
class CORDL_TYPE __LoginSession____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::__LoginSession____c* __9;

  /// @brief Field <>9__120_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__120_0, put = setStaticF___9__120_0))::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* __9__120_0;

  /// @brief Field <>9__121_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__121_0, put = setStaticF___9__121_0))::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* __9__121_0;

  /// @brief Field <>9__145_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__145_0, put = setStaticF___9__145_0))::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* __9__145_0;

  /// @brief Field <>9__151_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__151_0, put = setStaticF___9__151_0))::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* __9__151_0;

  /// @brief Field <>9__152_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__152_0, put = setStaticF___9__152_0))::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* __9__152_0;

  static inline ::Unity::Services::Vivox::__LoginSession____c* New_ctor();

  /// @brief Method <BlockPlayerAsync>b__145_0, addr 0x2ca345c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _BlockPlayerAsync_b__145_0(::System::IAsyncResult* ar);

  /// @brief Method <DeleteDirectTextMessageAsync>b__152_0, addr 0x2ca363c, size 0x158, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _DeleteDirectTextMessageAsync_b__152_0(::System::IAsyncResult* ar);

  /// @brief Method <EditDirectTextMessageAsync>b__151_0, addr 0x2ca34e4, size 0x158, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _EditDirectTextMessageAsync_b__151_0(::System::IAsyncResult* ar);

  /// @brief Method <StartAudioInjection>b__120_0, addr 0x2ca3298, size 0xac, virtual false, abstract: false, final false
  inline bool _StartAudioInjection_b__120_0(::Unity::Services::Vivox::IChannelSession* cs);

  /// @brief Method <StopAudioInjection>b__121_0, addr 0x2ca3344, size 0x118, virtual false, abstract: false, final false
  inline bool _StopAudioInjection_b__121_0(::Unity::Services::Vivox::IChannelSession* cs);

  /// @brief Method .ctor, addr 0x2ca3290, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Vivox::__LoginSession____c* getStaticF___9();

  static inline ::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* getStaticF___9__120_0();

  static inline ::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* getStaticF___9__121_0();

  static inline ::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* getStaticF___9__145_0();

  static inline ::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* getStaticF___9__151_0();

  static inline ::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* getStaticF___9__152_0();

  static inline void setStaticF___9(::Unity::Services::Vivox::__LoginSession____c* value);

  static inline void setStaticF___9__120_0(::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* value);

  static inline void setStaticF___9__121_0(::System::Func_2<::Unity::Services::Vivox::IChannelSession*, bool>* value);

  static inline void setStaticF___9__145_0(::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF___9__151_0(::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF___9__152_0(::System::Func_2<::System::IAsyncResult*, ::System::Threading::Tasks::Task*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c(__LoginSession____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c(__LoginSession____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass121_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass121_0*
class CORDL_TYPE __LoginSession____c__DisplayClass121_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0* New_ctor();

  /// @brief Method <StopAudioInjection>b__1, addr 0x2ca379c, size 0x12c, virtual false, abstract: false, final false
  inline void _StopAudioInjection_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* value);

  /// @brief Method .ctor, addr 0x2ca3794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass121_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass121_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass121_0(__LoginSession____c__DisplayClass121_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass121_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass121_0(__LoginSession____c__DisplayClass121_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_control_audio_injection_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass122_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass122_0*
class CORDL_TYPE __LoginSession____c__DisplayClass122_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field participantPropertyFrequency, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_participantPropertyFrequency,
                      put = __cordl_internal_set_participantPropertyFrequency))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency participantPropertyFrequency;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_set_login_properties_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0* New_ctor();

  /// @brief Method <BeginAccountSetLoginProperties>b__0, addr 0x2ca38d0, size 0x15c, virtual false, abstract: false, final false
  inline void _BeginAccountSetLoginProperties_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const& __cordl_internal_get_participantPropertyFrequency() const;

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency& __cordl_internal_get_participantPropertyFrequency();

  constexpr ::Unity::Services::Vivox::vx_req_account_set_login_properties_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_set_login_properties_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_participantPropertyFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_set_login_properties_t* value);

  /// @brief Method .ctor, addr 0x2ca38c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass122_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass122_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass122_0(__LoginSession____c__DisplayClass122_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass122_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass122_0(__LoginSession____c__DisplayClass122_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field participantPropertyFrequency, offset: 0x18, size: 0x4, def value: None
  ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ___participantPropertyFrequency;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_set_login_properties_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0, ___participantPropertyFrequency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass124_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass124_0*
class CORDL_TYPE __LoginSession____c__DisplayClass124_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_create_block_rule_t* request;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0* New_ctor();

  /// @brief Method <BeginAddBlockedSubscription>b__0, addr 0x2ca3a34, size 0x19c, virtual false, abstract: false, final false
  inline void _BeginAddBlockedSubscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_create_block_rule_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_create_block_rule_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_create_block_rule_t* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca3a2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass124_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass124_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass124_0(__LoginSession____c__DisplayClass124_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass124_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass124_0(__LoginSession____c__DisplayClass124_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_create_block_rule_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass126_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass126_0*
class CORDL_TYPE __LoginSession____c__DisplayClass126_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_delete_block_rule_t* request;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0* New_ctor();

  /// @brief Method <BeginRemoveBlockedSubscription>b__0, addr 0x2ca3bd8, size 0x19c, virtual false, abstract: false, final false
  inline void _BeginRemoveBlockedSubscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_delete_block_rule_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_delete_block_rule_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_delete_block_rule_t* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca3bd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass126_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass126_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass126_0(__LoginSession____c__DisplayClass126_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass126_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass126_0(__LoginSession____c__DisplayClass126_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_delete_block_rule_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass129_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass129_0*
class CORDL_TYPE __LoginSession____c__DisplayClass129_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_send_message_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0* New_ctor();

  /// @brief Method <BeginSendDirectedMessage>b__0, addr 0x2ca3d7c, size 0x254, virtual false, abstract: false, final false
  inline void _BeginSendDirectedMessage_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_send_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_send_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_send_message_t* value);

  /// @brief Method .ctor, addr 0x2ca3d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass129_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass129_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass129_0(__LoginSession____c__DisplayClass129_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass129_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass129_0(__LoginSession____c__DisplayClass129_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field ar, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_send_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0, ___ar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass131_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass131_0*
class CORDL_TYPE __LoginSession____c__DisplayClass131_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_archive_query_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0* New_ctor();

  /// @brief Method <BeginAccountArchiveQuery>b__0, addr 0x2ca3fd8, size 0x254, virtual false, abstract: false, final false
  inline void _BeginAccountArchiveQuery_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_archive_query_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_archive_query_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_archive_query_t* value);

  /// @brief Method .ctor, addr 0x2ca3fd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass131_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass131_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass131_0(__LoginSession____c__DisplayClass131_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass131_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass131_0(__LoginSession____c__DisplayClass131_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field ar, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_archive_query_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0, ___ar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass133_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass133_0*
class CORDL_TYPE __LoginSession____c__DisplayClass133_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::Unity::Services::Vivox::VivoxMessage* message;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_chat_history_set_marker_t* request;

  /// @brief Field taskResult, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_taskResult, put = __cordl_internal_set_taskResult))::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskResult;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0* New_ctor();

  /// @brief Method <SetMessageAsReadAsync>b__0, addr 0x2ca4234, size 0x1a0, virtual false, abstract: false, final false
  inline void _SetMessageAsReadAsync_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::VivoxMessage*& __cordl_internal_get_message();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxMessage*> const& __cordl_internal_get_message() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_chat_history_set_marker_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_chat_history_set_marker_t*> const& __cordl_internal_get_request() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_taskResult() const;

  constexpr void __cordl_internal_set_message(::Unity::Services::Vivox::VivoxMessage* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_chat_history_set_marker_t* value);

  constexpr void __cordl_internal_set_taskResult(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x2ca422c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass133_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass133_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass133_0(__LoginSession____c__DisplayClass133_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass133_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass133_0(__LoginSession____c__DisplayClass133_0 const&) = delete;

  /// @brief Field message, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxMessage* ___message;

  /// @brief Field taskResult, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskResult;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_chat_history_set_marker_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0, ___message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0, ___taskResult) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetMessageAsReadAsync>d__133
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetMessageAsReadAsync>d__133
struct CORDL_TYPE __LoginSession___SetMessageAsReadAsync_d__133 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca43d4, size 0x76c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca4b40, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetMessageAsReadAsync_d__133();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::Unity::Services::Vivox::VivoxMessage*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "seenAt", ty:
  // "::System::Nullable_1<::System::DateTime>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetMessageAsReadAsync_d__133(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::VivoxMessage* message,
                                                          ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Nullable_1<::System::DateTime> seenAt,
                                                          ::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field message, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxMessage* message;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field seenAt, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> seenAt;

  /// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0* __8__1;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, 0x58>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, seenAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, __u__2) == 0x50, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass134_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass134_0*
class CORDL_TYPE __LoginSession____c__DisplayClass134_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field queryId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_queryId, put = __cordl_internal_set_queryId))::StringW queryId;

  /// @brief Field taskResult, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_taskResult,
                      put = __cordl_internal_set_taskResult))::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* taskResult;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0* New_ctor();

  /// @brief Method <GetDirectTextMessageHistoryPageAsync>b__0, addr 0x2ca4b54, size 0x200, virtual false, abstract: false, final false
  inline ::StringW _GetDirectTextMessageHistoryPageAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_queryId() const;

  constexpr ::StringW& __cordl_internal_get_queryId();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*& __cordl_internal_get_taskResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*> const& __cordl_internal_get_taskResult() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_queryId(::StringW value);

  constexpr void __cordl_internal_set_taskResult(::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* value);

  /// @brief Method .ctor, addr 0x2ca4b4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass134_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass134_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass134_0(__LoginSession____c__DisplayClass134_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass134_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass134_0(__LoginSession____c__DisplayClass134_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field queryId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___queryId;

  /// @brief Field taskResult, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* ___taskResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0, ___queryId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0, ___taskResult) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetDirectTextMessageHistoryPageAsync>d__134
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<GetDirectTextMessageHistoryPageAsync>d__134
struct CORDL_TYPE __LoginSession___GetDirectTextMessageHistoryPageAsync_d__134 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca4d54, size 0x8b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca5608, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___GetDirectTextMessageHistoryPageAsync_d__134();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "recipient", ty: "::Unity::Services::Vivox::AccountId*", modifiers: "",
  // def_value: None }, CppParam { name: "chatHistoryQueryOptions", ty: "::Unity::Services::Vivox::ChatHistoryQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___GetDirectTextMessageHistoryPageAsync_d__134(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::AccountId* recipient, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, int32_t pageSize,
      ::System::AsyncCallback* callback, ::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field recipient, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* recipient;

  /// @brief Field chatHistoryQueryOptions, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field pageSize, offset: 0x38, size: 0x4, def value: None
  int32_t pageSize;

  /// @brief Field callback, offset: 0x40, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <>8__1, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0* __8__1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, recipient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, chatHistoryQueryOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, pageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __8__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, __u__2) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetDirectTextMessageHistoryAsync>d__135
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<GetDirectTextMessageHistoryAsync>d__135
struct CORDL_TYPE __LoginSession___GetDirectTextMessageHistoryAsync_d__135 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca5660, size 0x870, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca5ed0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___GetDirectTextMessageHistoryAsync_d__135();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None
  // }, CppParam { name: "requestSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None },
  // CppParam { name: "chatHistoryQueryOptions", ty: "::Unity::Services::Vivox::ChatHistoryQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "recipient", ty:
  // "::Unity::Services::Vivox::AccountId*", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name:
  // "_pageSize_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_remainingItemCount_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_allVivoxMessages_5__4", ty: "::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::System::Collections::Generic::__Queue_1__Enumerator<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_itemCount_5__6", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___GetDirectTextMessageHistoryAsync_d__135(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      int32_t requestSize, ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
      ::Unity::Services::Vivox::AccountId* recipient, ::System::AsyncCallback* callback, int32_t _pageSize_5__2, int32_t _remainingItemCount_5__3,
      ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>* _allVivoxMessages_5__4, ::System::Collections::Generic::__Queue_1__Enumerator<int32_t> __7__wrap4,
      int32_t _itemCount_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field requestSize, offset: 0x20, size: 0x4, def value: None
  int32_t requestSize;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field chatHistoryQueryOptions, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field recipient, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* recipient;

  /// @brief Field callback, offset: 0x40, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <pageSize>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t _pageSize_5__2;

  /// @brief Field <remainingItemCount>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t _remainingItemCount_5__3;

  /// @brief Field <allVivoxMessages>5__4, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>* _allVivoxMessages_5__4;

  /// @brief Field <>7__wrap4, offset: 0x58, size: 0x18, def value: None
  ::System::Collections::Generic::__Queue_1__Enumerator<int32_t> __7__wrap4;

  /// @brief Field <itemCount>5__6, offset: 0x70, size: 0x4, def value: None
  int32_t _itemCount_5__6;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, 0x80>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, requestSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, chatHistoryQueryOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, recipient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, _pageSize_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, _remainingItemCount_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, _allVivoxMessages_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, __7__wrap4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, _itemCount_5__6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, __u__1) == 0x78, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass136_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass136_0*
class CORDL_TYPE __LoginSession____c__DisplayClass136_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field conversations, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_conversations,
                      put = __cordl_internal_set_conversations))::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxConversation*>* conversations;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_get_conversations_t* request;

  /// @brief Field taskResult, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskResult, put = __cordl_internal_set_taskResult))::System::Threading::Tasks::TaskCompletionSource_1<
      ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>* taskResult;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0* New_ctor();

  /// @brief Method <GetConversationsAsync>b__0, addr 0x2ca5f30, size 0xc8, virtual false, abstract: false, final false
  inline void _GetConversationsAsync_b__0();

  /// @brief Method <GetConversationsAsync>b__1, addr 0x2ca5ff8, size 0x404, virtual false, abstract: false, final false
  inline void _GetConversationsAsync_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxConversation*>*& __cordl_internal_get_conversations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxConversation*>*> const& __cordl_internal_get_conversations() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_get_conversations_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_get_conversations_t*> const& __cordl_internal_get_request() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*&
  __cordl_internal_get_taskResult();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*> const&
  __cordl_internal_get_taskResult() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_conversations(::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxConversation*>* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_get_conversations_t* value);

  constexpr void
  __cordl_internal_set_taskResult(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>* value);

  /// @brief Method .ctor, addr 0x2ca5f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass136_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass136_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass136_0(__LoginSession____c__DisplayClass136_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass136_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass136_0(__LoginSession____c__DisplayClass136_0 const&) = delete;

  /// @brief Field taskResult, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>* ___taskResult;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field conversations, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxConversation*>* ___conversations;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_get_conversations_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0, ___taskResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0, ___conversations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetConversationsAsync>d__136
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<GetConversationsAsync>d__136
struct CORDL_TYPE __LoginSession___GetConversationsAsync_d__136 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca63fc, size 0x918, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca6d14, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___GetConversationsAsync_d__136();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "queryOptions", ty:
  // "::Unity::Services::Vivox::ConversationQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___GetConversationsAsync_d__136(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __t__builder,
      ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::ConversationQueryOptions* queryOptions, ::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field queryOptions, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ConversationQueryOptions* queryOptions;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, queryOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, __u__2) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass137_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass137_0*
class CORDL_TYPE __LoginSession____c__DisplayClass137_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* New_ctor();

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca6d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass137_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass137_0(__LoginSession____c__DisplayClass137_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass137_0(__LoginSession____c__DisplayClass137_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0, ___ar) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass137_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass137_1*
class CORDL_TYPE __LoginSession____c__DisplayClass137_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* CS$__8__locals1;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_send_subscription_reply_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1* New_ctor();

  /// @brief Method <BeginAddAllowedSubscription>b__0, addr 0x2ca6d7c, size 0x1c8, virtual false, abstract: false, final false
  inline void _BeginAddAllowedSubscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_send_subscription_reply_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_send_subscription_reply_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_send_subscription_reply_t* value);

  /// @brief Method .ctor, addr 0x2ca6d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass137_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass137_1(__LoginSession____c__DisplayClass137_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass137_1(__LoginSession____c__DisplayClass137_1 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_send_subscription_reply_t* ___request;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass137_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass137_2*
class CORDL_TYPE __LoginSession____c__DisplayClass137_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals2, put = __cordl_internal_set_CS$__8__locals2))::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* CS$__8__locals2;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_create_auto_accept_rule_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2* New_ctor();

  /// @brief Method <BeginAddAllowedSubscription>b__1, addr 0x2ca6f4c, size 0x1c8, virtual false, abstract: false, final false
  inline void _BeginAddAllowedSubscription_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0*& __cordl_internal_get_CS$__8__locals2();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0*> const& __cordl_internal_get_CS$__8__locals2() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_create_auto_accept_rule_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_create_auto_accept_rule_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals2(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_create_auto_accept_rule_t* value);

  /// @brief Method .ctor, addr 0x2ca6f44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass137_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass137_2(__LoginSession____c__DisplayClass137_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass137_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass137_2(__LoginSession____c__DisplayClass137_2 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_create_auto_accept_rule_t* ___request;

  /// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0* ___CS$__8__locals2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass139_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass139_0*
class CORDL_TYPE __LoginSession____c__DisplayClass139_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_delete_auto_accept_rule_t* request;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0* New_ctor();

  /// @brief Method <BeginRemoveAllowedSubscription>b__0, addr 0x2ca711c, size 0x19c, virtual false, abstract: false, final false
  inline void _BeginRemoveAllowedSubscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_delete_auto_accept_rule_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_delete_auto_accept_rule_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_delete_auto_accept_rule_t* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca7114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass139_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass139_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass139_0(__LoginSession____c__DisplayClass139_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass139_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass139_0(__LoginSession____c__DisplayClass139_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_delete_auto_accept_rule_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass141_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass141_0*
class CORDL_TYPE __LoginSession____c__DisplayClass141_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>9__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::AsyncCallback* __9__1;

  /// @brief Field <>9__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::System::AsyncCallback* __9__2;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::IPresenceSubscription*>* ar;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_buddy_set_t* request;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0* New_ctor();

  /// @brief Method <BeginAddPresenceSubscription>b__0, addr 0x2ca72c0, size 0x30c, virtual false, abstract: false, final false
  inline void _BeginAddPresenceSubscription_b__0(::System::IAsyncResult* result);

  /// @brief Method <BeginAddPresenceSubscription>b__1, addr 0x2ca7648, size 0x1b8, virtual false, abstract: false, final false
  inline void _BeginAddPresenceSubscription_b__1(::System::IAsyncResult* ar2);

  /// @brief Method <BeginAddPresenceSubscription>b__2, addr 0x2ca7800, size 0x124, virtual false, abstract: false, final false
  inline void _BeginAddPresenceSubscription_b__2(::System::IAsyncResult* ar3);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get___9__1() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get___9__2() const;

  constexpr ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::IPresenceSubscription*>*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::IPresenceSubscription*>*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_buddy_set_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_buddy_set_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set___9__1(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set___9__2(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::IPresenceSubscription*>* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_buddy_set_t* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca72b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass141_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass141_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass141_0(__LoginSession____c__DisplayClass141_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass141_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass141_0(__LoginSession____c__DisplayClass141_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::IPresenceSubscription*>* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_buddy_set_t* ___request;

  /// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
  ::System::AsyncCallback* _____9__2;

  /// @brief Field <>9__1, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, ___request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, _____9__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0, _____9__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass143_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass143_0*
class CORDL_TYPE __LoginSession____c__DisplayClass143_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_buddy_delete_t* request;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::Unity::Services::Vivox::AccountId* userId;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0* New_ctor();

  /// @brief Method <BeginRemovePresenceSubscription>b__0, addr 0x2ca792c, size 0x19c, virtual false, abstract: false, final false
  inline void _BeginRemovePresenceSubscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_buddy_delete_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_buddy_delete_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_userId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_buddy_delete_t* value);

  constexpr void __cordl_internal_set_userId(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method .ctor, addr 0x2ca7924, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass143_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass143_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass143_0(__LoginSession____c__DisplayClass143_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass143_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass143_0(__LoginSession____c__DisplayClass143_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___userId;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_buddy_delete_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0, ___ar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<BlockPlayerAsync>d__145
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<BlockPlayerAsync>d__145
struct CORDL_TYPE __LoginSession___BlockPlayerAsync_d__145 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca7ac8, size 0x338, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca7e00, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___BlockPlayerAsync_d__145();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "accountId", ty: "::Unity::Services::Vivox::AccountId*", modifiers: "", def_value: None }, CppParam { name: "blockStatus", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "callback", ty: "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___BlockPlayerAsync_d__145(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::LoginSession* __4__this,
                                                     ::Unity::Services::Vivox::AccountId* accountId, bool blockStatus, ::System::AsyncCallback* callback,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field accountId, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* accountId;

  /// @brief Field blockStatus, offset: 0x30, size: 0x1, def value: None
  bool blockStatus;

  /// @brief Field callback, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, accountId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, blockStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass146_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass146_0*
class CORDL_TYPE __LoginSession____c__DisplayClass146_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field accountId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountId, put = __cordl_internal_set_accountId))::Unity::Services::Vivox::AccountId* accountId;

  /// @brief Field ar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field muted, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_muted, put = __cordl_internal_set_muted)) bool muted;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0* New_ctor();

  /// @brief Method <SetCrossMutedCommunications>b__0, addr 0x2ca7e14, size 0x1ec, virtual false, abstract: false, final false
  inline void _SetCrossMutedCommunications_b__0(::Unity::Services::Vivox::vx_resp_account_control_communications_t* resp);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get_accountId();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get_accountId() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr bool const& __cordl_internal_get_muted() const;

  constexpr bool& __cordl_internal_get_muted();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_accountId(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_muted(bool value);

  /// @brief Method .ctor, addr 0x2ca7e0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass146_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass146_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass146_0(__LoginSession____c__DisplayClass146_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass146_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass146_0(__LoginSession____c__DisplayClass146_0 const&) = delete;

  /// @brief Field accountId, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ___accountId;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field muted, offset: 0x20, size: 0x1, def value: None
  bool ___muted;

  /// @brief Field ar, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0, ___accountId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0, ___muted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0, ___ar) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass147_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass147_0*
class CORDL_TYPE __LoginSession____c__DisplayClass147_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field muted, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_muted, put = __cordl_internal_set_muted)) bool muted;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0* New_ctor();

  /// @brief Method <SetCrossMutedCommunications>b__0, addr 0x2ca8008, size 0x3d0, virtual false, abstract: false, final false
  inline void _SetCrossMutedCommunications_b__0(::Unity::Services::Vivox::vx_resp_account_control_communications_t* resp);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr bool const& __cordl_internal_get_muted() const;

  constexpr bool& __cordl_internal_get_muted();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_muted(bool value);

  /// @brief Method .ctor, addr 0x2ca8000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass147_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass147_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass147_0(__LoginSession____c__DisplayClass147_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass147_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass147_0(__LoginSession____c__DisplayClass147_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field muted, offset: 0x18, size: 0x1, def value: None
  bool ___muted;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0, ___muted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0, ___ar) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass148_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass148_0*
class CORDL_TYPE __LoginSession____c__DisplayClass148_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field ar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0* New_ctor();

  /// @brief Method <ClearCrossMutedCommunications>b__0, addr 0x2ca83e0, size 0x68, virtual false, abstract: false, final false
  inline void _ClearCrossMutedCommunications_b__0(::Unity::Services::Vivox::vx_resp_account_control_communications_t* resp);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  /// @brief Method .ctor, addr 0x2ca83d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass148_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass148_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass148_0(__LoginSession____c__DisplayClass148_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass148_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass148_0(__LoginSession____c__DisplayClass148_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field ar, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0, ___ar) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass149_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass149_0*
class CORDL_TYPE __LoginSession____c__DisplayClass149_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_delete_message_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0* New_ctor();

  /// @brief Method <BeginDeleteTextMessage>b__0, addr 0x2ca8450, size 0x144, virtual false, abstract: false, final false
  inline void _BeginDeleteTextMessage_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_delete_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_delete_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_delete_message_t* value);

  /// @brief Method .ctor, addr 0x2ca8448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass149_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass149_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass149_0(__LoginSession____c__DisplayClass149_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass149_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass149_0(__LoginSession____c__DisplayClass149_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_delete_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass150_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass150_0*
class CORDL_TYPE __LoginSession____c__DisplayClass150_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_edit_message_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0* New_ctor();

  /// @brief Method <BeginEditTextMessage>b__0, addr 0x2ca859c, size 0x144, virtual false, abstract: false, final false
  inline void _BeginEditTextMessage_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_edit_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_edit_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_edit_message_t* value);

  /// @brief Method .ctor, addr 0x2ca8594, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass150_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass150_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass150_0(__LoginSession____c__DisplayClass150_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass150_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass150_0(__LoginSession____c__DisplayClass150_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_edit_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<EditDirectTextMessageAsync>d__151
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<EditDirectTextMessageAsync>d__151
struct CORDL_TYPE __LoginSession___EditDirectTextMessageAsync_d__151 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca86e0, size 0x390, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca8a70, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___EditDirectTextMessageAsync_d__151();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "newMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___EditDirectTextMessageAsync_d__151(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW messageId,
                                                               ::Unity::Services::Vivox::LoginSession* __4__this, ::StringW newMessage,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field messageId, offset: 0x20, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field newMessage, offset: 0x30, size: 0x8, def value: None
  ::StringW newMessage;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, messageId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, newMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DeleteDirectTextMessageAsync>d__152
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<DeleteDirectTextMessageAsync>d__152
struct CORDL_TYPE __LoginSession___DeleteDirectTextMessageAsync_d__152 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca8a7c, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca8e08, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___DeleteDirectTextMessageAsync_d__152();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __LoginSession___DeleteDirectTextMessageAsync_d__152(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW messageId,
                                                                 ::Unity::Services::Vivox::LoginSession* __4__this,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field messageId, offset: 0x20, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, messageId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass153_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass153_0*
class CORDL_TYPE __LoginSession____c__DisplayClass153_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>* callback;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_account_control_communications_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0* New_ctor();

  /// @brief Method <SendCrossMuteOperationRequest>b__0, addr 0x2ca8e1c, size 0x1dc, virtual false, abstract: false, final false
  inline void _SendCrossMuteOperationRequest_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>*> const& __cordl_internal_get_callback() const;

  constexpr ::Unity::Services::Vivox::vx_req_account_control_communications_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_account_control_communications_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set_callback(::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_account_control_communications_t* value);

  /// @brief Method .ctor, addr 0x2ca8e14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass153_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass153_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass153_0(__LoginSession____c__DisplayClass153_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass153_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass153_0(__LoginSession____c__DisplayClass153_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* _____4__this;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>* ___callback;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_account_control_communications_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0, ___callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<WaitDeleteChannelSessionAsync>d__156
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<WaitDeleteChannelSessionAsync>d__156
struct CORDL_TYPE __LoginSession___WaitDeleteChannelSessionAsync_d__156 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca8ff8, size 0x344, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca933c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___WaitDeleteChannelSessionAsync_d__156();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "channelId", ty: "::Unity::Services::Vivox::ChannelId*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___WaitDeleteChannelSessionAsync_d__156(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::ChannelId* channelId,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field channelId, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* channelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, channelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<CheckConnectionAsync>d__157
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<CheckConnectionAsync>d__157
struct CORDL_TYPE __LoginSession___CheckConnectionAsync_d__157 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca9348, size 0x4a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca97ec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___CheckConnectionAsync_d__157();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "sender", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __LoginSession___CheckConnectionAsync_d__157(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Object* sender,
                                                         ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field sender, offset: 0x28, size: 0x8, def value: None
  ::System::Object* sender;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, sender) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetTransmissionModeAsync>d__164
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetTransmissionModeAsync>d__164
struct CORDL_TYPE __LoginSession___SetTransmissionModeAsync_d__164 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca97f8, size 0x634, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2ca9e2c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetTransmissionModeAsync_d__164();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::Unity::Services::Vivox::TransmissionMode", modifiers: "",
  // def_value: None }, CppParam { name: "singleChannel", ty: "::Unity::Services::Vivox::ChannelId*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::LoginSession*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetTransmissionModeAsync_d__164(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel,
                                                             ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field mode, offset: 0x20, size: 0x4, def value: None
  ::Unity::Services::Vivox::TransmissionMode mode;

  /// @brief Field singleChannel, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* singleChannel;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, singleChannel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetTransmissionAsync>d__166
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetTransmissionAsync>d__166
struct CORDL_TYPE __LoginSession___SetTransmissionAsync_d__166 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2ca9e38, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2caa0fc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetTransmissionAsync_d__166();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetTransmissionAsync_d__166(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass167_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass167_0*
class CORDL_TYPE __LoginSession____c__DisplayClass167_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0* New_ctor();

  /// @brief Method <SetTransmittingAsync>b__0, addr 0x2caa110, size 0x110, virtual false, abstract: false, final false
  inline void _SetTransmittingAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* value);

  /// @brief Method .ctor, addr 0x2caa108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass167_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass167_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass167_0(__LoginSession____c__DisplayClass167_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass167_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass167_0(__LoginSession____c__DisplayClass167_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetTransmittingAsync>d__167
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetTransmittingAsync>d__167
struct CORDL_TYPE __LoginSession___SetTransmittingAsync_d__167 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2caa220, size 0x438, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2caa658, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetTransmittingAsync_d__167();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "channel", ty: "::Unity::Services::Vivox::ChannelId*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetTransmittingAsync_d__167(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::Unity::Services::Vivox::LoginSession* __4__this, ::Unity::Services::Vivox::ChannelId* channel,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field channel, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* channel;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, channel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass168_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass168_0*
class CORDL_TYPE __LoginSession____c__DisplayClass168_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0* New_ctor();

  /// @brief Method <SetNoSessionTransmittingAsync>b__0, addr 0x2caa66c, size 0x110, virtual false, abstract: false, final false
  inline void _SetNoSessionTransmittingAsync_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* value);

  /// @brief Method .ctor, addr 0x2caa664, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass168_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass168_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass168_0(__LoginSession____c__DisplayClass168_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass168_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass168_0(__LoginSession____c__DisplayClass168_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetNoSessionTransmittingAsync>d__168
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetNoSessionTransmittingAsync>d__168
struct CORDL_TYPE __LoginSession___SetNoSessionTransmittingAsync_d__168 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2caa77c, size 0x32c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2caaaa8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetNoSessionTransmittingAsync_d__168();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetNoSessionTransmittingAsync_d__168(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass169_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass169_0*
class CORDL_TYPE __LoginSession____c__DisplayClass169_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0* New_ctor();

  /// @brief Method <SetAllSessionsTransmittingAsync>b__0, addr 0x2caaabc, size 0x110, virtual false, abstract: false, final false
  inline void _SetAllSessionsTransmittingAsync_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* value);

  /// @brief Method .ctor, addr 0x2caaab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass169_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass169_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass169_0(__LoginSession____c__DisplayClass169_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass169_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass169_0(__LoginSession____c__DisplayClass169_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetAllSessionsTransmittingAsync>d__169
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetAllSessionsTransmittingAsync>d__169
struct CORDL_TYPE __LoginSession___SetAllSessionsTransmittingAsync_d__169 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2caabcc, size 0x324, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2caaef0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetAllSessionsTransmittingAsync_d__169();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetAllSessionsTransmittingAsync_d__169(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::Unity::Services::Vivox::LoginSession* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass170_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass170_0*
class CORDL_TYPE __LoginSession____c__DisplayClass170_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0* New_ctor();

  /// @brief Method <SetTransmitting>b__0, addr 0x2caaf04, size 0x110, virtual false, abstract: false, final false
  inline void _SetTransmitting_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* value);

  /// @brief Method .ctor, addr 0x2caaefc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass170_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass170_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass170_0(__LoginSession____c__DisplayClass170_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass170_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass170_0(__LoginSession____c__DisplayClass170_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_session_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass171_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass171_0*
class CORDL_TYPE __LoginSession____c__DisplayClass171_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0* New_ctor();

  /// @brief Method <SetNoSessionTransmitting>b__0, addr 0x2cab01c, size 0x110, virtual false, abstract: false, final false
  inline void _SetNoSessionTransmitting_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* value);

  /// @brief Method .ctor, addr 0x2cab014, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass171_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass171_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass171_0(__LoginSession____c__DisplayClass171_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass171_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass171_0(__LoginSession____c__DisplayClass171_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_no_session_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass172_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass172_0*
class CORDL_TYPE __LoginSession____c__DisplayClass172_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0* New_ctor();

  /// @brief Method <SetAllSessionsTransmitting>b__0, addr 0x2cab134, size 0x110, virtual false, abstract: false, final false
  inline void _SetAllSessionsTransmitting_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* value);

  /// @brief Method .ctor, addr 0x2cab12c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass172_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass172_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass172_0(__LoginSession____c__DisplayClass172_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass172_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass172_0(__LoginSession____c__DisplayClass172_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_set_tx_all_sessions_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass173_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass173_0*
class CORDL_TYPE __LoginSession____c__DisplayClass173_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0* New_ctor();

  /// @brief Method <SetAutoVADAsync>b__0, addr 0x2cab24c, size 0x110, virtual false, abstract: false, final false
  inline void _SetAutoVADAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* value);

  /// @brief Method .ctor, addr 0x2cab244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass173_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass173_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass173_0(__LoginSession____c__DisplayClass173_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass173_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass173_0(__LoginSession____c__DisplayClass173_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetAutoVADAsync>d__173
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetAutoVADAsync>d__173
struct CORDL_TYPE __LoginSession___SetAutoVADAsync_d__173 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2cab35c, size 0x3f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2cab74c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetAutoVADAsync_d__173();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __LoginSession___SetAutoVADAsync_d__173(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::LoginSession* __4__this,
                                                    bool enabled, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field enabled, offset: 0x28, size: 0x1, def value: None
  bool enabled;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, enabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass174_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::LoginSession::<>c__DisplayClass174_0*
class CORDL_TYPE __LoginSession____c__DisplayClass174_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* request;

  static inline ::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0* New_ctor();

  /// @brief Method <SetVADPropertiesAsync>b__0, addr 0x2cab760, size 0x110, virtual false, abstract: false, final false
  inline void _SetVADPropertiesAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* value);

  /// @brief Method .ctor, addr 0x2cab758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession____c__DisplayClass174_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass174_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoginSession____c__DisplayClass174_0(__LoginSession____c__DisplayClass174_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoginSession____c__DisplayClass174_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoginSession____c__DisplayClass174_0(__LoginSession____c__DisplayClass174_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_aux_set_vad_properties_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetVADPropertiesAsync>d__174
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::LoginSession::<SetVADPropertiesAsync>d__174
struct CORDL_TYPE __LoginSession___SetVADPropertiesAsync_d__174 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2cab870, size 0x36c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2cabbdc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoginSession___SetVADPropertiesAsync_d__174();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::LoginSession*", modifiers: "",
  // def_value: None }, CppParam { name: "hangover", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noiseFloor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "sensitivity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LoginSession___SetVADPropertiesAsync_d__174(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                          ::Unity::Services::Vivox::LoginSession* __4__this, int32_t hangover, int32_t noiseFloor, int32_t sensitivity,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* __4__this;

  /// @brief Field hangover, offset: 0x28, size: 0x4, def value: None
  int32_t hangover;

  /// @brief Field noiseFloor, offset: 0x2c, size: 0x4, def value: None
  int32_t noiseFloor;

  /// @brief Field sensitivity, offset: 0x30, size: 0x4, def value: None
  int32_t sensitivity;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, hangover) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, noiseFloor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, sensitivity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::LoginSession
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::LoginSession*
class CORDL_TYPE LoginSession : public ::System::Object {
public:
  // Declarations
  using _BlockPlayerAsync_d__145 = ::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145;

  using _CheckConnectionAsync_d__157 = ::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157;

  using _DeleteChannelSessionAsync_d__119 = ::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119;

  using _DeleteDirectTextMessageAsync_d__152 = ::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152;

  using _EditDirectTextMessageAsync_d__151 = ::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151;

  using _GetConversationsAsync_d__136 = ::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136;

  using _GetDirectTextMessageHistoryAsync_d__135 = ::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135;

  using _GetDirectTextMessageHistoryPageAsync_d__134 = ::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134;

  using _LoginAsync_d__103 = ::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103;

  using _LogoutAsync_d__116 = ::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116;

  using _SendDirectedMessageAsync_d__104 = ::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104;

  using _SetAllSessionsTransmittingAsync_d__169 = ::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169;

  using _SetAutoVADAsync_d__173 = ::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173;

  using _SetMessageAsReadAsync_d__133 = ::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133;

  using _SetNoSessionTransmittingAsync_d__168 = ::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168;

  using _SetTransmissionAsync_d__166 = ::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166;

  using _SetTransmissionModeAsync_d__164 = ::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164;

  using _SetTransmittingAsync_d__167 = ::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167;

  using _SetVADPropertiesAsync_d__174 = ::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174;

  using _WaitDeleteChannelSessionAsync_d__156 = ::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156;

  using __c = ::Unity::Services::Vivox::__LoginSession____c;

  using __c__DisplayClass105_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0;

  using __c__DisplayClass110_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0;

  using __c__DisplayClass114_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0;

  using __c__DisplayClass116_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0;

  using __c__DisplayClass120_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0;

  using __c__DisplayClass121_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0;

  using __c__DisplayClass122_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0;

  using __c__DisplayClass124_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0;

  using __c__DisplayClass126_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0;

  using __c__DisplayClass129_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0;

  using __c__DisplayClass131_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0;

  using __c__DisplayClass133_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0;

  using __c__DisplayClass134_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0;

  using __c__DisplayClass136_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0;

  using __c__DisplayClass137_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0;

  using __c__DisplayClass137_1 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1;

  using __c__DisplayClass137_2 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2;

  using __c__DisplayClass139_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0;

  using __c__DisplayClass141_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0;

  using __c__DisplayClass143_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0;

  using __c__DisplayClass146_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0;

  using __c__DisplayClass147_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0;

  using __c__DisplayClass148_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0;

  using __c__DisplayClass149_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0;

  using __c__DisplayClass150_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0;

  using __c__DisplayClass153_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0;

  using __c__DisplayClass167_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0;

  using __c__DisplayClass168_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0;

  using __c__DisplayClass169_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0;

  using __c__DisplayClass170_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0;

  using __c__DisplayClass171_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0;

  using __c__DisplayClass172_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0;

  using __c__DisplayClass173_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0;

  using __c__DisplayClass174_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0;

  using __c__DisplayClass41_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0;

  using __c__DisplayClass42_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0;

  using __c__DisplayClass88_0 = ::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0;

  __declspec(property(get = get_AccountArchive))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* AccountArchive;

  __declspec(property(get = get_AccountArchiveResult))::Unity::Services::Vivox::IArchiveQueryResult* AccountArchiveResult;

  __declspec(property(get = get_AccountHandle))::StringW AccountHandle;

  __declspec(property(get = get_AllowedSubscriptions))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* AllowedSubscriptions;

  __declspec(property(get = get_BlockedSubscriptions))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* BlockedSubscriptions;

  __declspec(property(get = get_ChannelSessions))::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* ChannelSessions;

  __declspec(property(get = get_CrossMutedCommunications))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* CrossMutedCommunications;

  /// @brief Field DirectedMessageDeleted, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_DirectedMessageDeleted,
                      put = __cordl_internal_set_DirectedMessageDeleted))::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* DirectedMessageDeleted;

  /// @brief Field DirectedMessageEdited, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_DirectedMessageEdited,
                      put = __cordl_internal_set_DirectedMessageEdited))::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* DirectedMessageEdited;

  __declspec(property(get = get_DirectedMessageResult))::Unity::Services::Vivox::IDirectedMessageResult* DirectedMessageResult;

  __declspec(property(get = get_DirectedMessages))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* DirectedMessages;

  __declspec(property(get = get_FailedDirectedMessages))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* FailedDirectedMessages;

  __declspec(property(get = get_IncomingSubscriptionRequests))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* IncomingSubscriptionRequests;

  __declspec(property(get = get_IsInjectingAudio, put = set_IsInjectingAudio)) bool IsInjectingAudio;

  __declspec(property(get = get_Key))::Unity::Services::Vivox::AccountId* Key;

  __declspec(property(get = get_LoginSessionId))::Unity::Services::Vivox::AccountId* LoginSessionId;

  __declspec(property(get = get_ParticipantPropertyFrequency, put = set_ParticipantPropertyFrequency))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ParticipantPropertyFrequency;

  __declspec(property(get = get_Presence, put = set_Presence))::Unity::Services::Vivox::Presence Presence;

  __declspec(property(
      get = get_PresenceSubscriptions))::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>* PresenceSubscriptions;

  /// @brief Field PropertyChanged, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_RecoveryState))::Unity::Services::Vivox::ConnectionRecoveryState RecoveryState;

  __declspec(property(get = get_State, put = set_State))::Unity::Services::Vivox::LoginState State;

  __declspec(property(get = get_TTS))::Unity::Services::Vivox::ITextToSpeech* TTS;

  __declspec(property(get = get_TransmissionType))::Unity::Services::Vivox::TransmissionMode TransmissionType;

  __declspec(property(get = get_TransmittingChannel, put = set_TransmittingChannel))::Unity::Services::Vivox::ChannelId* TransmittingChannel;

  __declspec(property(get = get_TransmittingChannels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* TransmittingChannels;

  /// @brief Field <Key>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::Unity::Services::Vivox::AccountId* _Key_k__BackingField;

  /// @brief Field _accountArchive, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__accountArchive,
                      put = __cordl_internal_set__accountArchive))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* _accountArchive;

  /// @brief Field _accountArchiveResult, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__accountArchiveResult, put = __cordl_internal_set__accountArchiveResult))::Unity::Services::Vivox::ArchiveQueryResult* _accountArchiveResult;

  /// @brief Field _accountHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accountHandle, put = __cordl_internal_set__accountHandle))::StringW _accountHandle;

  /// @brief Field _allowedSubscriptions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__allowedSubscriptions,
                      put = __cordl_internal_set__allowedSubscriptions))::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* _allowedSubscriptions;

  /// @brief Field _blockedSubscriptions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__blockedSubscriptions,
                      put = __cordl_internal_set__blockedSubscriptions))::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* _blockedSubscriptions;

  /// @brief Field _channelSessions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__channelSessions,
                      put = __cordl_internal_set__channelSessions))::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*,
                                                                                                                   ::Unity::Services::Vivox::ChannelSession*>* _channelSessions;

  /// @brief Field _channelsToDelete, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__channelsToDelete,
                      put = __cordl_internal_set__channelsToDelete))::System::Collections::Generic::List_1<::Unity::Services::Vivox::ChannelId*>* _channelsToDelete;

  /// @brief Field _chatHistoryTaskResults, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__chatHistoryTaskResults, put = __cordl_internal_set__chatHistoryTaskResults))::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>* _chatHistoryTaskResults;

  /// @brief Field _client, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Unity::Services::Vivox::Client* _client;

  /// @brief Field _connectionRecoveryState, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionRecoveryState,
                      put = __cordl_internal_set__connectionRecoveryState))::Unity::Services::Vivox::ConnectionRecoveryState _connectionRecoveryState;

  /// @brief Field _crossMutedCommunications, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__crossMutedCommunications,
                      put = __cordl_internal_set__crossMutedCommunications))::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* _crossMutedCommunications;

  /// @brief Field _directedMessageResult, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__directedMessageResult, put = __cordl_internal_set__directedMessageResult))::Unity::Services::Vivox::DirectedMessageResult* _directedMessageResult;

  /// @brief Field _directedMessages, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__directedMessages,
                      put = __cordl_internal_set__directedMessages))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* _directedMessages;

  /// @brief Field _failedDirectedMessages, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__failedDirectedMessages,
                      put = __cordl_internal_set__failedDirectedMessages))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* _failedDirectedMessages;

  /// @brief Field _groupHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__groupHandle, put = __cordl_internal_set__groupHandle))::StringW _groupHandle;

  /// @brief Field _incomingSubscriptionRequests, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__incomingSubscriptionRequests,
                      put = __cordl_internal_set__incomingSubscriptionRequests))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::AccountId*>* _incomingSubscriptionRequests;

  /// @brief Field _internalChatHistoryResults, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__internalChatHistoryResults, put = __cordl_internal_set__internalChatHistoryResults))::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* _internalChatHistoryResults;

  /// @brief Field _isInjectingAudio, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isInjectingAudio, put = __cordl_internal_set__isInjectingAudio)) bool _isInjectingAudio;

  /// @brief Field _loginSessionConnectTaskCompletionSource, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__loginSessionConnectTaskCompletionSource,
                      put = __cordl_internal_set__loginSessionConnectTaskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _loginSessionConnectTaskCompletionSource;

  /// @brief Field _participantPropertyFrequency, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__participantPropertyFrequency,
                      put = __cordl_internal_set__participantPropertyFrequency))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency _participantPropertyFrequency;

  /// @brief Field _presence, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__presence, put = __cordl_internal_set__presence))::Unity::Services::Vivox::Presence _presence;

  /// @brief Field _presenceSubscriptions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__presenceSubscriptions, put = __cordl_internal_set__presenceSubscriptions))::Unity::Services::Vivox::ReadWriteDictionary_3<
      ::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*, ::Unity::Services::Vivox::PresenceSubscription*>* _presenceSubscriptions;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::Unity::Services::Vivox::LoginState _state;

  /// @brief Field _transmissionType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__transmissionType, put = __cordl_internal_set__transmissionType))::Unity::Services::Vivox::TransmissionMode _transmissionType;

  /// @brief Field _transmittingChannel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transmittingChannel, put = __cordl_internal_set__transmittingChannel))::Unity::Services::Vivox::ChannelId* _transmittingChannel;

  /// @brief Field _ttsSubSystem, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__ttsSubSystem, put = __cordl_internal_set__ttsSubSystem))::Unity::Services::Vivox::ITextToSpeech* _ttsSubSystem;

  /// @brief Field lastMessageTime, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_lastMessageTime, put = __cordl_internal_set_lastMessageTime))::System::DateTime lastMessageTime;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ILoginSession"
  constexpr operator ::Unity::Services::Vivox::ILoginSession*() noexcept;

  /// @brief Method AssertLoggedIn, addr 0x2fdc168, size 0xa4, virtual false, abstract: false, final false
  inline void AssertLoggedIn();

  /// @brief Method AssertLoggedOut, addr 0x2fdc250, size 0xa0, virtual false, abstract: false, final false
  inline void AssertLoggedOut();

  /// @brief Method BeginAccountArchiveQuery, addr 0x2fdee78, size 0x4f4, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginAccountArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd, ::StringW searchText,
                                                          ::Unity::Services::Vivox::AccountId* userId, ::Unity::Services::Vivox::ChannelId* channel, uint32_t max, ::StringW afterId,
                                                          ::StringW beforeId, int32_t firstMessageIndex, ::System::AsyncCallback* callback);

  /// @brief Method BeginAccountSetLoginProperties, addr 0x2fde350, size 0x188, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginAccountSetLoginProperties(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency participantPropertyFrequency, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddAllowedSubscription, addr 0x2fdf830, size 0x350, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginAddAllowedSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddBlockedSubscription, addr 0x2fde568, size 0x1e8, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginAddBlockedSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddPresenceSubscription, addr 0x2fdfe78, size 0x22c, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginAddPresenceSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginChatHistoryQuery, addr 0x2fdccbc, size 0x368, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::AsyncResult_1<::StringW>* BeginChatHistoryQuery(int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* queryOptions,
                                                                                   ::System::AsyncCallback* callback);

  /// @brief Method BeginDeleteTextMessage, addr 0x2fe0c48, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginDeleteTextMessage(::StringW messageId, ::System::AsyncCallback* callback);

  /// @brief Method BeginEditTextMessage, addr 0x2fe0e2c, size 0x1f8, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginEditTextMessage(::StringW messageId, ::StringW newText, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x2fdd0a8, size 0x34, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginLogin(::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x2fdd2bc, size 0x28, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginLogin(::System::Uri* server, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x2fdd294, size 0x28, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginLogin(::System::Uri* server, ::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x2fdd0dc, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginLogin(::System::Uri* server, ::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, bool uriServerRequired,
                                            bool presenceDesired, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemoveAllowedSubscription, addr 0x2fdfc10, size 0x1d8, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginRemoveAllowedSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemoveBlockedSubscription, addr 0x2fde7e0, size 0x1d8, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginRemoveBlockedSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemovePresenceSubscription, addr 0x2fe014c, size 0x1e0, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginRemovePresenceSubscription(::Unity::Services::Vivox::AccountId* userId, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendDirectedMessage, addr 0x2fdea80, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* userId, ::StringW language, ::StringW message, ::StringW applicationStanzaNamespace,
                                                          ::StringW applicationStanzaBody, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendDirectedMessage, addr 0x2fdea48, size 0x38, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* userId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options,
                                                          ::System::AsyncCallback* callback);

  /// @brief Method BlockPlayerAsync, addr 0x2fe03bc, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* BlockPlayerAsync(::Unity::Services::Vivox::AccountId* accountId, bool blockStatus, ::System::AsyncCallback* callback);

  /// @brief Method CheckConnectionAsync, addr 0x2fe12b8, size 0x9c, virtual false, abstract: false, final false
  inline void CheckConnectionAsync(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method Cleanup, addr 0x2fdc3e4, size 0x1b0, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ClearAllCurrentTextQueries, addr 0x2fe1354, size 0x324, virtual false, abstract: false, final false
  inline void ClearAllCurrentTextQueries();

  /// @brief Method ClearCrossMutedCommunications, addr 0x2fe0b28, size 0x120, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* ClearCrossMutedCommunications(::System::AsyncCallback* callback);

  /// @brief Method ClearTransmittingChannel, addr 0x2fd2a34, size 0x30, virtual false, abstract: false, final false
  inline void ClearTransmittingChannel(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method DeleteChannelSession, addr 0x2fdd9fc, size 0x1b4, virtual true, abstract: false, final true
  inline void DeleteChannelSession(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method DeleteChannelSessionAsync, addr 0x2fddd64, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteChannelSessionAsync(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method DeleteDirectTextMessageAsync, addr 0x2fe1100, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteDirectTextMessageAsync(::StringW messageId);

  /// @brief Method EditDirectTextMessageAsync, addr 0x2fe1024, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* EditDirectTextMessageAsync(::StringW messageId, ::StringW newMessage);

  /// @brief Method EndAccountArchiveQuery, addr 0x2fdf36c, size 0x90, virtual true, abstract: false, final true
  inline void EndAccountArchiveQuery(::System::IAsyncResult* result);

  /// @brief Method EndAccountSetLoginProperties, addr 0x2fde4d8, size 0x90, virtual true, abstract: false, final true
  inline void EndAccountSetLoginProperties(::System::IAsyncResult* result);

  /// @brief Method EndAddAllowedSubscription, addr 0x2fdfb80, size 0x90, virtual true, abstract: false, final true
  inline void EndAddAllowedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndAddBlockedSubscription, addr 0x2fde750, size 0x90, virtual true, abstract: false, final true
  inline void EndAddBlockedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndAddPresenceSubscription, addr 0x2fe00a4, size 0xa8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IPresenceSubscription* EndAddPresenceSubscription(::System::IAsyncResult* result);

  /// @brief Method EndChatHistoryQuery, addr 0x2fdd024, size 0x84, virtual false, abstract: false, final false
  inline void EndChatHistoryQuery(::System::IAsyncResult* result);

  /// @brief Method EndLogin, addr 0x2fdd2e4, size 0x84, virtual true, abstract: false, final true
  inline void EndLogin(::System::IAsyncResult* result);

  /// @brief Method EndRemoveAllowedSubscription, addr 0x2fdfde8, size 0x90, virtual true, abstract: false, final true
  inline void EndRemoveAllowedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndRemoveBlockedSubscription, addr 0x2fde9b8, size 0x90, virtual true, abstract: false, final true
  inline void EndRemoveBlockedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndRemovePresenceSubscription, addr 0x2fe032c, size 0x90, virtual true, abstract: false, final true
  inline void EndRemovePresenceSubscription(::System::IAsyncResult* result);

  /// @brief Method EndSendDirectedMessage, addr 0x2fded20, size 0x158, virtual true, abstract: false, final true
  inline void EndSendDirectedMessage(::System::IAsyncResult* result);

  /// @brief Method GetChannelSession, addr 0x2fdd894, size 0x168, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IChannelSession* GetChannelSession(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method GetConversationsAsync, addr 0x2fdf734, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*
  GetConversationsAsync(::Unity::Services::Vivox::ConversationQueryOptions* queryOptions);

  /// @brief Method GetDirectTextMessageHistoryAsync, addr 0x2fdf610, size 0x124, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetDirectTextMessageHistoryAsync(::Unity::Services::Vivox::AccountId* recipient, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
                                   ::System::AsyncCallback* callback);

  /// @brief Method GetDirectTextMessageHistoryPageAsync, addr 0x2fdf4f0, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetDirectTextMessageHistoryPageAsync(::Unity::Services::Vivox::AccountId* recipient, int32_t pageSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
                                       ::System::AsyncCallback* callback);

  /// @brief Method GetLoginToken, addr 0x2fdd368, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW GetLoginToken(::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetLoginToken, addr 0x2fdd408, size 0xa8, virtual true, abstract: false, final true
  inline ::StringW GetLoginToken(::StringW key, ::System::TimeSpan expiration);

  /// @brief Method HandleAccountArchiveMessage, addr 0x2fdb184, size 0x458, virtual false, abstract: false, final false
  inline void HandleAccountArchiveMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleAccountArchiveQueryEnd, addr 0x2fdb5dc, size 0x360, virtual false, abstract: false, final false
  inline void HandleAccountArchiveQueryEnd(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleAccountDeleteMessage, addr 0x2fdbdac, size 0x1e0, virtual false, abstract: false, final false
  inline void HandleAccountDeleteMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleAccountEditMessage, addr 0x2fdbbb4, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleAccountEditMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleAccountLoginStateChangeEvt, addr 0x2fdab90, size 0x150, virtual false, abstract: false, final false
  inline void HandleAccountLoginStateChangeEvt(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleAccountSendMessageFailed, addr 0x2fdb980, size 0x178, virtual false, abstract: false, final false
  inline void HandleAccountSendMessageFailed(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleBuddyPresenceEvt, addr 0x2fdace0, size 0x1b4, virtual false, abstract: false, final false
  inline void HandleBuddyPresenceEvt(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleDisconnectRecovery, addr 0x2fdbaf8, size 0xbc, virtual false, abstract: false, final false
  inline void HandleDisconnectRecovery(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleMediaComplete, addr 0x2fdb93c, size 0x44, virtual false, abstract: false, final false
  inline void HandleMediaComplete(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSubscription, addr 0x2fdb08c, size 0xf8, virtual false, abstract: false, final false
  inline void HandleSubscription(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleUserToUserMessage, addr 0x2fdae94, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleUserToUserMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method Instance_EventMessageReceived, addr 0x2fdaa18, size 0x178, virtual false, abstract: false, final false
  inline void Instance_EventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method Login, addr 0x2fdd4b0, size 0x25c, virtual false, abstract: false, final false
  inline void Login(::StringW accessToken, ::StringW connectorHandle, ::Unity::Services::Vivox::AsyncNoResult* ar, ::System::Nullable_1<::Unity::Services::Vivox::SubscriptionMode> mode);

  /// @brief Method LoginAsync, addr 0x2fdcab8, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LoginAsync(::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::StringW accessToken,
                                                      ::System::AsyncCallback* callback);

  /// @brief Method Logout, addr 0x2fdd70c, size 0xc0, virtual true, abstract: false, final true
  inline void Logout();

  /// @brief Method LogoutAsync, addr 0x2fdd7cc, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LogoutAsync();

  static inline ::Unity::Services::Vivox::LoginSession* New_ctor(::Unity::Services::Vivox::Client* client, ::Unity::Services::Vivox::AccountId* accountId);

  /// @brief Method OnAccountDeleteMessage, addr 0x2fdbfb4, size 0x28, virtual true, abstract: false, final false
  inline void OnAccountDeleteMessage(::Unity::Services::Vivox::VivoxMessage* e);

  /// @brief Method OnAccountEditMessage, addr 0x2fdbf8c, size 0x28, virtual true, abstract: false, final false
  inline void OnAccountEditMessage(::Unity::Services::Vivox::VivoxMessage* e);

  /// @brief Method SendCrossMuteOperationRequest, addr 0x2fe05f8, size 0x170, virtual false, abstract: false, final false
  inline void SendCrossMuteOperationRequest(::Unity::Services::Vivox::vx_control_communications_operation controlOp, ::StringW userURIs, ::Unity::Services::Vivox::vx_mute_scope muteScope,
                                            ::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>* callback);

  /// @brief Method SendCrossMuteOperationRequest, addr 0x2fe0894, size 0x294, virtual false, abstract: false, final false
  inline void SendCrossMuteOperationRequest(::Unity::Services::Vivox::vx_control_communications_operation controlOp,
                                            ::System::Collections::Generic::List_1<::Unity::Services::Vivox::AccountId*>* users, ::Unity::Services::Vivox::vx_mute_scope muteScope,
                                            ::System::Action_1<::Unity::Services::Vivox::vx_resp_account_control_communications_t*>* callback);

  /// @brief Method SendDirectedMessageAsync, addr 0x2fdcbcc, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SendDirectedMessageAsync(::Unity::Services::Vivox::AccountId* accountId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method SetAllSessionsTransmitting, addr 0x2fe1aa4, size 0x124, virtual false, abstract: false, final false
  inline void SetAllSessionsTransmitting();

  /// @brief Method SetAllSessionsTransmittingAsync, addr 0x2fe1e34, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetAllSessionsTransmittingAsync();

  /// @brief Method SetAutoVADAsync, addr 0x2fe1efc, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetAutoVADAsync(bool enabled);

  /// @brief Method SetCrossMutedCommunications, addr 0x2fe04b0, size 0x148, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetCrossMutedCommunications(::Unity::Services::Vivox::AccountId* accountId, bool muted, ::System::AsyncCallback* callback);

  /// @brief Method SetCrossMutedCommunications, addr 0x2fe0768, size 0x12c, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetCrossMutedCommunications(::System::Collections::Generic::List_1<::Unity::Services::Vivox::AccountId*>* accountIdSet, bool muted, ::System::AsyncCallback* callback);

  /// @brief Method SetMessageAsReadAsync, addr 0x2fdf3fc, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetMessageAsReadAsync(::Unity::Services::Vivox::VivoxMessage* message, ::System::Nullable_1<::System::DateTime> seenAt);

  /// @brief Method SetNoSessionTransmitting, addr 0x2fe1758, size 0x128, virtual false, abstract: false, final false
  inline void SetNoSessionTransmitting();

  /// @brief Method SetNoSessionTransmittingAsync, addr 0x2fe1d6c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetNoSessionTransmittingAsync();

  /// @brief Method SetTransmission, addr 0x2fd2388, size 0x2c, virtual false, abstract: false, final false
  inline void SetTransmission();

  /// @brief Method SetTransmissionAsync, addr 0x2fe1bc8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetTransmissionAsync();

  /// @brief Method SetTransmissionMode, addr 0x2fd1ed8, size 0x4b0, virtual true, abstract: false, final true
  inline void SetTransmissionMode(::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel);

  /// @brief Method SetTransmissionModeAsync, addr 0x2fe1678, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetTransmissionModeAsync(::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel);

  /// @brief Method SetTransmitting, addr 0x2fe1880, size 0x224, virtual false, abstract: false, final false
  inline void SetTransmitting(::Unity::Services::Vivox::ChannelId* channel);

  /// @brief Method SetTransmittingAsync, addr 0x2fe1c90, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetTransmittingAsync(::Unity::Services::Vivox::ChannelId* channel);

  /// @brief Method SetVADPropertiesAsync, addr 0x2fe1fd8, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetVADPropertiesAsync(int32_t hangover, int32_t noiseFloor, int32_t sensitivity);

  /// @brief Method StartAudioInjection, addr 0x2fdde40, size 0x2a8, virtual true, abstract: false, final true
  inline void StartAudioInjection(::StringW audioFilePath);

  /// @brief Method StopAudioInjection, addr 0x2fde0e8, size 0x268, virtual true, abstract: false, final true
  inline void StopAudioInjection();

  /// @brief Method WaitDeleteChannelSession, addr 0x2fddbb0, size 0x1b4, virtual false, abstract: false, final false
  inline void WaitDeleteChannelSession(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method WaitDeleteChannelSessionAsync, addr 0x2fe11dc, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitDeleteChannelSessionAsync(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method <LoginAsync>b__103_0, addr 0x2fe20c4, size 0xd4, virtual false, abstract: false, final false
  inline void _LoginAsync_b__103_0();

  /// @brief Method <LoginAsync>b__103_1, addr 0x2fe2198, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _LoginAsync_b__103_1(::System::IAsyncResult* ar);

  /// @brief Method <SendDirectedMessageAsync>b__104_0, addr 0x2fe22d8, size 0x1118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _SendDirectedMessageAsync_b__104_0(::System::IAsyncResult* ar);

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_DirectedMessageDeleted();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_DirectedMessageDeleted() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_DirectedMessageEdited();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_DirectedMessageEdited() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Key_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>*& __cordl_internal_get__accountArchive();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>*> const& __cordl_internal_get__accountArchive() const;

  constexpr ::Unity::Services::Vivox::ArchiveQueryResult*& __cordl_internal_get__accountArchiveResult();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ArchiveQueryResult*> const& __cordl_internal_get__accountArchiveResult() const;

  constexpr ::StringW const& __cordl_internal_get__accountHandle() const;

  constexpr ::StringW& __cordl_internal_get__accountHandle();

  constexpr ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*& __cordl_internal_get__allowedSubscriptions();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*> const& __cordl_internal_get__allowedSubscriptions() const;

  constexpr ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*& __cordl_internal_get__blockedSubscriptions();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*> const& __cordl_internal_get__blockedSubscriptions() const;

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*, ::Unity::Services::Vivox::ChannelSession*>*&
  __cordl_internal_get__channelSessions();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*, ::Unity::Services::Vivox::ChannelSession*>*> const&
  __cordl_internal_get__channelSessions() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::ChannelId*>*& __cordl_internal_get__channelsToDelete();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::ChannelId*>*> const& __cordl_internal_get__channelsToDelete() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*&
  __cordl_internal_get__chatHistoryTaskResults();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*> const&
  __cordl_internal_get__chatHistoryTaskResults() const;

  constexpr ::Unity::Services::Vivox::Client*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& __cordl_internal_get__client() const;

  constexpr ::Unity::Services::Vivox::ConnectionRecoveryState const& __cordl_internal_get__connectionRecoveryState() const;

  constexpr ::Unity::Services::Vivox::ConnectionRecoveryState& __cordl_internal_get__connectionRecoveryState();

  constexpr ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*& __cordl_internal_get__crossMutedCommunications();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>*> const& __cordl_internal_get__crossMutedCommunications() const;

  constexpr ::Unity::Services::Vivox::DirectedMessageResult*& __cordl_internal_get__directedMessageResult();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::DirectedMessageResult*> const& __cordl_internal_get__directedMessageResult() const;

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>*& __cordl_internal_get__directedMessages();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>*> const& __cordl_internal_get__directedMessages() const;

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>*& __cordl_internal_get__failedDirectedMessages();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>*> const&
  __cordl_internal_get__failedDirectedMessages() const;

  constexpr ::StringW const& __cordl_internal_get__groupHandle() const;

  constexpr ::StringW& __cordl_internal_get__groupHandle();

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::AccountId*>*& __cordl_internal_get__incomingSubscriptionRequests();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::AccountId*>*> const& __cordl_internal_get__incomingSubscriptionRequests() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*&
  __cordl_internal_get__internalChatHistoryResults();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*> const&
  __cordl_internal_get__internalChatHistoryResults() const;

  constexpr bool const& __cordl_internal_get__isInjectingAudio() const;

  constexpr bool& __cordl_internal_get__isInjectingAudio();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__loginSessionConnectTaskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get__loginSessionConnectTaskCompletionSource() const;

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const& __cordl_internal_get__participantPropertyFrequency() const;

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency& __cordl_internal_get__participantPropertyFrequency();

  constexpr ::Unity::Services::Vivox::Presence const& __cordl_internal_get__presence() const;

  constexpr ::Unity::Services::Vivox::Presence& __cordl_internal_get__presence();

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*, ::Unity::Services::Vivox::PresenceSubscription*>*&
  __cordl_internal_get__presenceSubscriptions();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*, ::Unity::Services::Vivox::PresenceSubscription*>*> const&
  __cordl_internal_get__presenceSubscriptions() const;

  constexpr ::Unity::Services::Vivox::LoginState const& __cordl_internal_get__state() const;

  constexpr ::Unity::Services::Vivox::LoginState& __cordl_internal_get__state();

  constexpr ::Unity::Services::Vivox::TransmissionMode const& __cordl_internal_get__transmissionType() const;

  constexpr ::Unity::Services::Vivox::TransmissionMode& __cordl_internal_get__transmissionType();

  constexpr ::Unity::Services::Vivox::ChannelId*& __cordl_internal_get__transmittingChannel();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelId*> const& __cordl_internal_get__transmittingChannel() const;

  constexpr ::Unity::Services::Vivox::ITextToSpeech*& __cordl_internal_get__ttsSubSystem();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ITextToSpeech*> const& __cordl_internal_get__ttsSubSystem() const;

  constexpr ::System::DateTime const& __cordl_internal_get_lastMessageTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_lastMessageTime();

  constexpr void __cordl_internal_set_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__accountArchive(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* value);

  constexpr void __cordl_internal_set__accountArchiveResult(::Unity::Services::Vivox::ArchiveQueryResult* value);

  constexpr void __cordl_internal_set__accountHandle(::StringW value);

  constexpr void __cordl_internal_set__allowedSubscriptions(::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* value);

  constexpr void __cordl_internal_set__blockedSubscriptions(::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* value);

  constexpr void __cordl_internal_set__channelSessions(
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*, ::Unity::Services::Vivox::ChannelSession*>* value);

  constexpr void __cordl_internal_set__channelsToDelete(::System::Collections::Generic::List_1<::Unity::Services::Vivox::ChannelId*>* value);

  constexpr void __cordl_internal_set__chatHistoryTaskResults(
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>* value);

  constexpr void __cordl_internal_set__client(::Unity::Services::Vivox::Client* value);

  constexpr void __cordl_internal_set__connectionRecoveryState(::Unity::Services::Vivox::ConnectionRecoveryState value);

  constexpr void __cordl_internal_set__crossMutedCommunications(::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* value);

  constexpr void __cordl_internal_set__directedMessageResult(::Unity::Services::Vivox::DirectedMessageResult* value);

  constexpr void __cordl_internal_set__directedMessages(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* value);

  constexpr void __cordl_internal_set__failedDirectedMessages(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* value);

  constexpr void __cordl_internal_set__groupHandle(::StringW value);

  constexpr void __cordl_internal_set__incomingSubscriptionRequests(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::AccountId*>* value);

  constexpr void __cordl_internal_set__internalChatHistoryResults(
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* value);

  constexpr void __cordl_internal_set__isInjectingAudio(bool value);

  constexpr void __cordl_internal_set__loginSessionConnectTaskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__participantPropertyFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  constexpr void __cordl_internal_set__presence(::Unity::Services::Vivox::Presence value);

  constexpr void __cordl_internal_set__presenceSubscriptions(
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*, ::Unity::Services::Vivox::PresenceSubscription*>* value);

  constexpr void __cordl_internal_set__state(::Unity::Services::Vivox::LoginState value);

  constexpr void __cordl_internal_set__transmissionType(::Unity::Services::Vivox::TransmissionMode value);

  constexpr void __cordl_internal_set__transmittingChannel(::Unity::Services::Vivox::ChannelId* value);

  constexpr void __cordl_internal_set__ttsSubSystem(::Unity::Services::Vivox::ITextToSpeech* value);

  constexpr void __cordl_internal_set_lastMessageTime(::System::DateTime value);

  /// @brief Method .ctor, addr 0x2fda4d8, size 0x540, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Client* client, ::Unity::Services::Vivox::AccountId* accountId);

  /// @brief Method add_DirectedMessageDeleted, addr 0x2fdc70c, size 0xb4, virtual true, abstract: false, final true
  inline void add_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageEdited, addr 0x2fdc5ac, size 0xb0, virtual true, abstract: false, final true
  inline void add_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_PropertyChanged, addr 0x2fcf4c0, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_AccountArchive, addr 0x2fdc874, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* get_AccountArchive();

  /// @brief Method get_AccountArchiveResult, addr 0x2fdc87c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IArchiveQueryResult* get_AccountArchiveResult();

  /// @brief Method get_AccountHandle, addr 0x2fdc20c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccountHandle();

  /// @brief Method get_AllowedSubscriptions, addr 0x2fdca98, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_AllowedSubscriptions();

  /// @brief Method get_BlockedSubscriptions, addr 0x2fdca90, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_BlockedSubscriptions();

  /// @brief Method get_ChannelSessions, addr 0x2fdc2f0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* get_ChannelSessions();

  /// @brief Method get_CrossMutedCommunications, addr 0x2fdcaa8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_CrossMutedCommunications();

  /// @brief Method get_DirectedMessageResult, addr 0x2fdc884, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IDirectedMessageResult* get_DirectedMessageResult();

  /// @brief Method get_DirectedMessages, addr 0x2fdc59c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* get_DirectedMessages();

  /// @brief Method get_FailedDirectedMessages, addr 0x2fdc5a4, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* get_FailedDirectedMessages();

  /// @brief Method get_IncomingSubscriptionRequests, addr 0x2fdcaa0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* get_IncomingSubscriptionRequests();

  /// @brief Method get_IsInjectingAudio, addr 0x2fdc594, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsInjectingAudio();

  /// @brief Method get_Key, addr 0x2fdc3d4, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Key();

  /// @brief Method get_LoginSessionId, addr 0x2fcf02c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_LoginSessionId();

  /// @brief Method get_ParticipantPropertyFrequency, addr 0x2fdc224, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency get_ParticipantPropertyFrequency();

  /// @brief Method get_Presence, addr 0x2fdc88c, size 0xc, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Presence get_Presence();

  /// @brief Method get_PresenceSubscriptions, addr 0x2fdca88, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>* get_PresenceSubscriptions();

  /// @brief Method get_RecoveryState, addr 0x2fdc214, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ConnectionRecoveryState get_RecoveryState();

  /// @brief Method get_State, addr 0x2fdc3dc, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::LoginState get_State();

  /// @brief Method get_TTS, addr 0x2fdc21c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ITextToSpeech* get_TTS();

  /// @brief Method get_TransmissionType, addr 0x2fdcab0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::TransmissionMode get_TransmissionType();

  /// @brief Method get_TransmittingChannel, addr 0x2fdc2f8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ChannelId* get_TransmittingChannel();

  /// @brief Method get_TransmittingChannels, addr 0x2fd43b8, size 0x4c4, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* get_TransmittingChannels();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ILoginSession"
  constexpr ::Unity::Services::Vivox::ILoginSession* i___Unity__Services__Vivox__ILoginSession() noexcept;

  /// @brief Method remove_DirectedMessageDeleted, addr 0x2fdc7c0, size 0xb4, virtual true, abstract: false, final true
  inline void remove_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageEdited, addr 0x2fdc65c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_PropertyChanged, addr 0x2fd58cc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_IsInjectingAudio, addr 0x2fdbfdc, size 0xb0, virtual false, abstract: false, final false
  inline void set_IsInjectingAudio(bool value);

  /// @brief Method set_ParticipantPropertyFrequency, addr 0x2fdc22c, size 0x24, virtual true, abstract: false, final true
  inline void set_ParticipantPropertyFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  /// @brief Method set_Presence, addr 0x2fdc898, size 0x1f0, virtual true, abstract: false, final true
  inline void set_Presence(::Unity::Services::Vivox::Presence value);

  /// @brief Method set_State, addr 0x2fdc08c, size 0xdc, virtual false, abstract: false, final false
  inline void set_State(::Unity::Services::Vivox::LoginState value);

  /// @brief Method set_TransmittingChannel, addr 0x2fdc300, size 0xd4, virtual false, abstract: false, final false
  inline void set_TransmittingChannel(::Unity::Services::Vivox::ChannelId* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoginSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoginSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoginSession(LoginSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoginSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoginSession(LoginSession const&) = delete;

  /// @brief Field _accountHandle, offset: 0x10, size: 0x8, def value: None
  ::StringW ____accountHandle;

  /// @brief Field _groupHandle, offset: 0x18, size: 0x8, def value: None
  ::StringW ____groupHandle;

  /// @brief Field _client, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Client* ____client;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::Unity::Services::Vivox::LoginState ____state;

  /// @brief Field _transmissionType, offset: 0x2c, size: 0x4, def value: None
  ::Unity::Services::Vivox::TransmissionMode ____transmissionType;

  /// @brief Field _isInjectingAudio, offset: 0x30, size: 0x1, def value: None
  bool ____isInjectingAudio;

  /// @brief Field _channelSessions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*, ::Unity::Services::Vivox::ChannelSession*>* ____channelSessions;

  /// @brief Field _transmittingChannel, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* ____transmittingChannel;

  /// @brief Field _channelsToDelete, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::ChannelId*>* ____channelsToDelete;

  /// @brief Field _blockedSubscriptions, offset: 0x50, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* ____blockedSubscriptions;

  /// @brief Field _allowedSubscriptions, offset: 0x58, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* ____allowedSubscriptions;

  /// @brief Field _presenceSubscriptions, offset: 0x60, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*, ::Unity::Services::Vivox::PresenceSubscription*>*
      ____presenceSubscriptions;

  /// @brief Field _presence, offset: 0x68, size: 0x10, def value: None
  ::Unity::Services::Vivox::Presence ____presence;

  /// @brief Field _internalChatHistoryResults, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* ____internalChatHistoryResults;

  /// @brief Field _chatHistoryTaskResults, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*
      ____chatHistoryTaskResults;

  /// @brief Field _loginSessionConnectTaskCompletionSource, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____loginSessionConnectTaskCompletionSource;

  /// @brief Field _directedMessages, offset: 0x90, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* ____directedMessages;

  /// @brief Field _failedDirectedMessages, offset: 0x98, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* ____failedDirectedMessages;

  /// @brief Field _accountArchive, offset: 0xa0, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* ____accountArchive;

  /// @brief Field lastMessageTime, offset: 0xa8, size: 0x8, def value: None
  ::System::DateTime ___lastMessageTime;

  /// @brief Field _directedMessageResult, offset: 0xb0, size: 0x8, def value: None
  ::Unity::Services::Vivox::DirectedMessageResult* ____directedMessageResult;

  /// @brief Field _accountArchiveResult, offset: 0xb8, size: 0x8, def value: None
  ::Unity::Services::Vivox::ArchiveQueryResult* ____accountArchiveResult;

  /// @brief Field _connectionRecoveryState, offset: 0xc0, size: 0x4, def value: None
  ::Unity::Services::Vivox::ConnectionRecoveryState ____connectionRecoveryState;

  /// @brief Field _crossMutedCommunications, offset: 0xc8, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteHashSet_1<::Unity::Services::Vivox::AccountId*>* ____crossMutedCommunications;

  /// @brief Field _incomingSubscriptionRequests, offset: 0xd0, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::AccountId*>* ____incomingSubscriptionRequests;

  /// @brief Field _participantPropertyFrequency, offset: 0xd8, size: 0x4, def value: None
  ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ____participantPropertyFrequency;

  /// @brief Field _ttsSubSystem, offset: 0xe0, size: 0x8, def value: None
  ::Unity::Services::Vivox::ITextToSpeech* ____ttsSubSystem;

  /// @brief Field PropertyChanged, offset: 0xe8, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Key_k__BackingField;

  /// @brief Field DirectedMessageEdited, offset: 0xf8, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* ___DirectedMessageEdited;

  /// @brief Field DirectedMessageDeleted, offset: 0x100, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* ___DirectedMessageDeleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::LoginSession, 0x108>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____accountHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____groupHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____transmissionType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____isInjectingAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____channelSessions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____transmittingChannel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____channelsToDelete) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____blockedSubscriptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____allowedSubscriptions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____presenceSubscriptions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____presence) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____internalChatHistoryResults) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____chatHistoryTaskResults) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____loginSessionConnectTaskCompletionSource) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____directedMessages) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____failedDirectedMessages) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____accountArchive) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ___lastMessageTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____directedMessageResult) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____accountArchiveResult) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____connectionRecoveryState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____crossMutedCommunications) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____incomingSubscriptionRequests) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____participantPropertyFrequency) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____ttsSubSystem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ___PropertyChanged) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ____Key_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ___DirectedMessageEdited) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginSession, ___DirectedMessageDeleted) == 0x100, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::LoginSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::LoginSession*, "Unity.Services.Vivox", "LoginSession");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c*, "Unity.Services.Vivox", "LoginSession/<>c");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass105_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass105_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass110_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass110_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass114_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass114_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass116_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass116_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass120_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass120_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass121_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass121_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass122_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass122_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass124_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass124_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass126_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass126_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass129_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass129_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass131_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass131_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass133_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass133_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass134_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass134_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass136_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass136_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass137_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_1*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass137_1");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass137_2*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass137_2");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass139_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass139_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass141_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass141_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass143_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass143_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass146_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass146_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass147_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass147_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass148_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass148_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass149_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass149_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass150_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass150_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass153_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass153_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass167_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass167_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass168_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass168_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass169_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass169_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass170_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass170_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass171_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass171_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass172_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass172_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass173_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass173_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass174_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass174_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass41_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass41_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass42_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass42_0");
NEED_NO_BOX(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession____c__DisplayClass88_0*, "Unity.Services.Vivox", "LoginSession/<>c__DisplayClass88_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___BlockPlayerAsync_d__145, "Unity.Services.Vivox", "LoginSession/<BlockPlayerAsync>d__145");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___CheckConnectionAsync_d__157, "Unity.Services.Vivox", "LoginSession/<CheckConnectionAsync>d__157");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___DeleteChannelSessionAsync_d__119, "Unity.Services.Vivox", "LoginSession/<DeleteChannelSessionAsync>d__119");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___DeleteDirectTextMessageAsync_d__152, "Unity.Services.Vivox", "LoginSession/<DeleteDirectTextMessageAsync>d__152");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___EditDirectTextMessageAsync_d__151, "Unity.Services.Vivox", "LoginSession/<EditDirectTextMessageAsync>d__151");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___GetConversationsAsync_d__136, "Unity.Services.Vivox", "LoginSession/<GetConversationsAsync>d__136");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryAsync_d__135, "Unity.Services.Vivox", "LoginSession/<GetDirectTextMessageHistoryAsync>d__135");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___GetDirectTextMessageHistoryPageAsync_d__134, "Unity.Services.Vivox", "LoginSession/<GetDirectTextMessageHistoryPageAsync>d__134");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___LoginAsync_d__103, "Unity.Services.Vivox", "LoginSession/<LoginAsync>d__103");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___LogoutAsync_d__116, "Unity.Services.Vivox", "LoginSession/<LogoutAsync>d__116");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SendDirectedMessageAsync_d__104, "Unity.Services.Vivox", "LoginSession/<SendDirectedMessageAsync>d__104");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetAllSessionsTransmittingAsync_d__169, "Unity.Services.Vivox", "LoginSession/<SetAllSessionsTransmittingAsync>d__169");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetAutoVADAsync_d__173, "Unity.Services.Vivox", "LoginSession/<SetAutoVADAsync>d__173");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetMessageAsReadAsync_d__133, "Unity.Services.Vivox", "LoginSession/<SetMessageAsReadAsync>d__133");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetNoSessionTransmittingAsync_d__168, "Unity.Services.Vivox", "LoginSession/<SetNoSessionTransmittingAsync>d__168");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetTransmissionAsync_d__166, "Unity.Services.Vivox", "LoginSession/<SetTransmissionAsync>d__166");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetTransmissionModeAsync_d__164, "Unity.Services.Vivox", "LoginSession/<SetTransmissionModeAsync>d__164");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetTransmittingAsync_d__167, "Unity.Services.Vivox", "LoginSession/<SetTransmittingAsync>d__167");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___SetVADPropertiesAsync_d__174, "Unity.Services.Vivox", "LoginSession/<SetVADPropertiesAsync>d__174");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__LoginSession___WaitDeleteChannelSessionAsync_d__156, "Unity.Services.Vivox", "LoginSession/<WaitDeleteChannelSessionAsync>d__156");
