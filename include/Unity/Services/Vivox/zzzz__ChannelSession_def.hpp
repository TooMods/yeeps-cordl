#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConnectionState_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChatHistoryQueryResult_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelSession)
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
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
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
class ChannelParticipant;
}
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
namespace Unity::Services::Vivox {
struct ConnectionState;
}
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
class IChannelTextMessage;
}
namespace Unity::Services::Vivox {
class IChatHistoryQueryResult;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class IParticipant;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
namespace Unity::Services::Vivox {
class ISessionArchiveMessage;
}
namespace Unity::Services::Vivox {
class ITranscribedMessage;
}
namespace Unity::Services::Vivox {
class LoginSession;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
namespace Unity::Services::Vivox {
template <typename T> class ReadWriteQueue_1;
}
namespace Unity::Services::Vivox {
class SessionArchiveMessage;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___ConnectAsync_d__43;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___DeleteChannelTextMessageAsync_d__77;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___DisconnectAsync_d__47;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___EditChannelTextMessageAsync_d__78;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___GetChannelTextMessageHistoryAsync_d__112;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___SendChannelMessageAsync_d__44;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___SetVolumeAsync_d__42;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass105_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass109_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass111_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass115_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass39_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass40_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass42_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass45_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass48_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_1;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_2;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_1;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_2;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass75_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass79_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass81_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass93_0;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_archive_query_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_chat_history_query_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_media_connect_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_media_disconnect_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_send_message_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_set_3d_position_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_set_local_render_volume_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_text_connect_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_text_disconnect_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_transcription_control_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_add_session_t;
}
namespace Unity::Services::Vivox {
class vx_req_sessiongroup_remove_session_t;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ChannelSession;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass105_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass109_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass111_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass115_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass39_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass40_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass42_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass45_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass48_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_1;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass49_2;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_1;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass51_2;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass75_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass79_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass81_0;
}
namespace Unity::Services::Vivox {
class __ChannelSession____c__DisplayClass93_0;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___ConnectAsync_d__43;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___DeleteChannelTextMessageAsync_d__77;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___DisconnectAsync_d__47;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___EditChannelTextMessageAsync_d__78;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___GetChannelTextMessageHistoryAsync_d__112;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___SendChannelMessageAsync_d__44;
}
namespace Unity::Services::Vivox {
struct __ChannelSession___SetVolumeAsync_d__42;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChannelSession);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44);
MARK_VAL_T(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42);
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass39_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::Unity::Services::Vivox::SessionArchiveMessage* message;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0* New_ctor();

  /// @brief Method <HandleSessionArchiveMessage>b__0, addr 0x2fd5fb8, size 0xec, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*
  _HandleSessionArchiveMessage_b__0(::StringW k, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* l);

  constexpr ::Unity::Services::Vivox::SessionArchiveMessage*& __cordl_internal_get_message();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::SessionArchiveMessage*> const& __cordl_internal_get_message() const;

  constexpr void __cordl_internal_set_message(::Unity::Services::Vivox::SessionArchiveMessage* value);

  /// @brief Method .ctor, addr 0x2fd1768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass39_0(__ChannelSession____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass39_0(__ChannelSession____c__DisplayClass39_0 const&) = delete;

  /// @brief Field message, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::SessionArchiveMessage* ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0, ___message) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass40_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field queryId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queryId, put = __cordl_internal_set_queryId))::StringW queryId;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0* New_ctor();

  /// @brief Method <HandleSessionArchiveQueryEnd>b__0, addr 0x2fd60a4, size 0x48, virtual false, abstract: false, final false
  inline bool _HandleSessionArchiveQueryEnd_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> r);

  /// @brief Method <HandleSessionArchiveQueryEnd>b__1, addr 0x2fd60ec, size 0x48, virtual false, abstract: false, final false
  inline bool _HandleSessionArchiveQueryEnd_b__1(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*> r);

  constexpr ::StringW const& __cordl_internal_get_queryId() const;

  constexpr ::StringW& __cordl_internal_get_queryId();

  constexpr void __cordl_internal_set_queryId(::StringW value);

  /// @brief Method .ctor, addr 0x2fd1770, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass40_0(__ChannelSession____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass40_0(__ChannelSession____c__DisplayClass40_0 const&) = delete;

  /// @brief Field queryId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___queryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0, ___queryId) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass42_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass42_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass42_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_set_local_render_volume_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0* New_ctor();

  /// @brief Method <SetVolumeAsync>b__0, addr 0x2fd613c, size 0x188, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _SetVolumeAsync_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_session_set_local_render_volume_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_local_render_volume_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_local_render_volume_t* value);

  /// @brief Method .ctor, addr 0x2fd6134, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass42_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass42_0(__ChannelSession____c__DisplayClass42_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass42_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass42_0(__ChannelSession____c__DisplayClass42_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_set_local_render_volume_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetVolumeAsync>d__42
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<SetVolumeAsync>d__42
struct CORDL_TYPE __ChannelSession___SetVolumeAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd62c4, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd6704, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___SetVolumeAsync_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "",
  // def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___SetVolumeAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::ChannelSession* __4__this,
                                                    int32_t value, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field value, offset: 0x28, size: 0x4, def value: None
  int32_t value;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<ConnectAsync>d__43
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<ConnectAsync>d__43
struct CORDL_TYPE __ChannelSession___ConnectAsync_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd6710, size 0x8bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd6fcc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___ConnectAsync_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "",
  // def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "connectAudio", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "connectText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "switchTransmission", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "callback", ty:
  // "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "_tokenFetch_5__2", ty: "::System::Threading::Tasks::Task_1<::StringW>*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___ConnectAsync_d__43(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::ChannelSession* __4__this,
                                                  ::StringW accessToken, bool connectAudio, bool connectText, bool switchTransmission, ::System::AsyncCallback* callback,
                                                  ::System::Threading::Tasks::Task_1<::StringW>* _tokenFetch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__2,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field accessToken, offset: 0x28, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field connectAudio, offset: 0x30, size: 0x1, def value: None
  bool connectAudio;

  /// @brief Field connectText, offset: 0x31, size: 0x1, def value: None
  bool connectText;

  /// @brief Field switchTransmission, offset: 0x32, size: 0x1, def value: None
  bool switchTransmission;

  /// @brief Field callback, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <tokenFetch>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::StringW>* _tokenFetch_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, accessToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, connectAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, connectText) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, switchTransmission) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, _tokenFetch_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, __u__3) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SendChannelMessageAsync>d__44
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<SendChannelMessageAsync>d__44
struct CORDL_TYPE __ChannelSession___SendChannelMessageAsync_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd6fd8, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd729c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___SendChannelMessageAsync_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "",
  // def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Vivox::MessageOptions*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___SendChannelMessageAsync_d__44(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::ChannelSession* __4__this, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field options, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::MessageOptions* options;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, options) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass45_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass45_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_add_session_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0* New_ctor();

  /// @brief Method <BeginConnect>b__0, addr 0x2fd72a8, size 0x174, virtual false, abstract: false, final false
  inline void _BeginConnect_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::ChannelSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_add_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_add_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_add_session_t* value);

  /// @brief Method .ctor, addr 0x2fd1ed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass45_0(__ChannelSession____c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass45_0(__ChannelSession____c__DisplayClass45_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_add_session_t* ___request;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0, ___request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DisconnectAsync>d__47
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<DisconnectAsync>d__47
struct CORDL_TYPE __ChannelSession___DisconnectAsync_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd741c, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd7790, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___DisconnectAsync_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___DisconnectAsync_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::ChannelSession* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass48_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass48_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_sessiongroup_remove_session_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0* New_ctor();

  /// @brief Method <Disconnect>b__0, addr 0x2fd779c, size 0x144, virtual false, abstract: false, final false
  inline void _Disconnect_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_sessiongroup_remove_session_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_sessiongroup_remove_session_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_sessiongroup_remove_session_t* value);

  /// @brief Method .ctor, addr 0x2fd26d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass48_0(__ChannelSession____c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass48_0(__ChannelSession____c__DisplayClass48_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_sessiongroup_remove_session_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass49_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* New_ctor();

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  /// @brief Method .ctor, addr 0x2fd2a14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass49_0(__ChannelSession____c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass49_0(__ChannelSession____c__DisplayClass49_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0, ___ar) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass49_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass49_1*
class CORDL_TYPE __ChannelSession____c__DisplayClass49_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* CS$__8__locals1;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_media_connect_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1* New_ctor();

  /// @brief Method <BeginSetAudioConnected>b__0, addr 0x2fd78e0, size 0x160, virtual false, abstract: false, final false
  inline void _BeginSetAudioConnected_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_media_connect_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_media_connect_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_media_connect_t* value);

  /// @brief Method .ctor, addr 0x2fd2a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass49_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass49_1(__ChannelSession____c__DisplayClass49_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass49_1(__ChannelSession____c__DisplayClass49_1 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_media_connect_t* ___request;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass49_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass49_2*
class CORDL_TYPE __ChannelSession____c__DisplayClass49_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals2, put = __cordl_internal_set_CS$__8__locals2))::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* CS$__8__locals2;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_media_disconnect_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2* New_ctor();

  /// @brief Method <BeginSetAudioConnected>b__1, addr 0x2fd7a40, size 0x160, virtual false, abstract: false, final false
  inline void _BeginSetAudioConnected_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0*& __cordl_internal_get_CS$__8__locals2();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0*> const& __cordl_internal_get_CS$__8__locals2() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_media_disconnect_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_media_disconnect_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals2(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_media_disconnect_t* value);

  /// @brief Method .ctor, addr 0x2fd2a24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass49_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass49_2(__ChannelSession____c__DisplayClass49_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass49_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass49_2(__ChannelSession____c__DisplayClass49_2 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_media_disconnect_t* ___request;

  /// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0* ___CS$__8__locals2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass51_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass51_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* New_ctor();

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  /// @brief Method .ctor, addr 0x2fd2de0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass51_0(__ChannelSession____c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass51_0(__ChannelSession____c__DisplayClass51_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0, ___ar) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass51_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass51_1*
class CORDL_TYPE __ChannelSession____c__DisplayClass51_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* CS$__8__locals1;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_text_connect_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1* New_ctor();

  /// @brief Method <BeginSetTextConnected>b__0, addr 0x2fd7ba0, size 0x160, virtual false, abstract: false, final false
  inline void _BeginSetTextConnected_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_text_connect_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_text_connect_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_text_connect_t* value);

  /// @brief Method .ctor, addr 0x2fd2de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass51_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass51_1(__ChannelSession____c__DisplayClass51_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass51_1(__ChannelSession____c__DisplayClass51_1 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_text_connect_t* ___request;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass51_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass51_2*
class CORDL_TYPE __ChannelSession____c__DisplayClass51_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals2, put = __cordl_internal_set_CS$__8__locals2))::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* CS$__8__locals2;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_text_disconnect_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2* New_ctor();

  /// @brief Method <BeginSetTextConnected>b__1, addr 0x2fd7d00, size 0x160, virtual false, abstract: false, final false
  inline void _BeginSetTextConnected_b__1(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0*& __cordl_internal_get_CS$__8__locals2();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0*> const& __cordl_internal_get_CS$__8__locals2() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_text_disconnect_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_text_disconnect_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_CS$__8__locals2(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_text_disconnect_t* value);

  /// @brief Method .ctor, addr 0x2fd2df0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass51_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass51_2(__ChannelSession____c__DisplayClass51_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass51_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass51_2(__ChannelSession____c__DisplayClass51_2 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_text_disconnect_t* ___request;

  /// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0* ___CS$__8__locals2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass75_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass75_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass75_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_send_message_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0* New_ctor();

  /// @brief Method <BeginSendText>b__0, addr 0x2fd7e60, size 0x160, virtual false, abstract: false, final false
  inline void _BeginSendText_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_send_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_send_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_send_message_t* value);

  /// @brief Method .ctor, addr 0x2fd31e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass75_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass75_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass75_0(__ChannelSession____c__DisplayClass75_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass75_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass75_0(__ChannelSession____c__DisplayClass75_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_send_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DeleteChannelTextMessageAsync>d__77
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<DeleteChannelTextMessageAsync>d__77
struct CORDL_TYPE __ChannelSession___DeleteChannelTextMessageAsync_d__77 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd7fc0, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd82e8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___DeleteChannelTextMessageAsync_d__77();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___DeleteChannelTextMessageAsync_d__77(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW messageId,
                                                                   ::Unity::Services::Vivox::ChannelSession* __4__this,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field messageId, offset: 0x20, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, messageId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<EditChannelTextMessageAsync>d__78
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<EditChannelTextMessageAsync>d__78
struct CORDL_TYPE __ChannelSession___EditChannelTextMessageAsync_d__78 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd82f4, size 0x394, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd8688, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___EditChannelTextMessageAsync_d__78();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "newText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___EditChannelTextMessageAsync_d__78(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW messageId, ::StringW newText,
                                                                 ::Unity::Services::Vivox::ChannelSession* __4__this,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field messageId, offset: 0x20, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field newText, offset: 0x28, size: 0x8, def value: None
  ::StringW newText;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, messageId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, newText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass79_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass79_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass79_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_delete_message_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0* New_ctor();

  /// @brief Method <BeginDeleteTextMessage>b__0, addr 0x2fd8694, size 0x144, virtual false, abstract: false, final false
  inline void _BeginDeleteTextMessage_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_delete_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_delete_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_delete_message_t* value);

  /// @brief Method .ctor, addr 0x2fd35b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass79_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass79_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass79_0(__ChannelSession____c__DisplayClass79_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass79_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass79_0(__ChannelSession____c__DisplayClass79_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_delete_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass81_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass81_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass81_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_edit_message_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0* New_ctor();

  /// @brief Method <BeginEditTextMessage>b__0, addr 0x2fd87d8, size 0x144, virtual false, abstract: false, final false
  inline void _BeginEditTextMessage_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_edit_message_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_edit_message_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_edit_message_t* value);

  /// @brief Method .ctor, addr 0x2fd37d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass81_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass81_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass81_0(__ChannelSession____c__DisplayClass81_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass81_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass81_0(__ChannelSession____c__DisplayClass81_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_edit_message_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass93_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass93_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass93_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field ar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_archive_query_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0* New_ctor();

  /// @brief Method <BeginSessionArchiveQuery>b__0, addr 0x2fd891c, size 0x250, virtual false, abstract: false, final false
  inline void _BeginSessionArchiveQuery_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::ChannelSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_archive_query_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_archive_query_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_archive_query_t* value);

  /// @brief Method .ctor, addr 0x2fd4034, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass93_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass93_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass93_0(__ChannelSession____c__DisplayClass93_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass93_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass93_0(__ChannelSession____c__DisplayClass93_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* _____4__this;

  /// @brief Field ar, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_archive_query_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0, ___ar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass105_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass105_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass105_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field ar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_transcription_control_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0* New_ctor();

  /// @brief Method <BeginSetChannelTranscription>b__0, addr 0x2fd8b6c, size 0x198, virtual false, abstract: false, final false
  inline void _BeginSetChannelTranscription_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::ChannelSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_transcription_control_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_transcription_control_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelSession* value);

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_transcription_control_t* value);

  /// @brief Method .ctor, addr 0x2fd4aa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass105_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass105_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass105_0(__ChannelSession____c__DisplayClass105_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass105_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass105_0(__ChannelSession____c__DisplayClass105_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_transcription_control_t* ___request;

  /// @brief Field ar, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0, ___request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0, ___ar) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass109_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass109_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass109_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncResult_1<::StringW>* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_chat_history_query_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0* New_ctor();

  /// @brief Method <BeginChatHistoryQuery>b__0, addr 0x2fd8d04, size 0x1a0, virtual false, abstract: false, final false
  inline void _BeginChatHistoryQuery_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncResult_1<::StringW>*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncResult_1<::StringW>*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_chat_history_query_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_chat_history_query_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncResult_1<::StringW>* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_chat_history_query_t* value);

  /// @brief Method .ctor, addr 0x2fd510c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass109_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass109_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass109_0(__ChannelSession____c__DisplayClass109_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass109_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass109_0(__ChannelSession____c__DisplayClass109_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncResult_1<::StringW>* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_chat_history_query_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass111_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass111_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass111_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field queryId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queryId, put = __cordl_internal_set_queryId))::StringW queryId;

  /// @brief Field taskResult, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_taskResult,
                      put = __cordl_internal_set_taskResult))::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* taskResult;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0* New_ctor();

  /// @brief Method <GetChannelTextMessageHistoryPageAsync>b__0, addr 0x2fd8eac, size 0x204, virtual false, abstract: false, final false
  inline ::StringW _GetChannelTextMessageHistoryPageAsync_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::ChannelSession*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_queryId() const;

  constexpr ::StringW& __cordl_internal_get_queryId();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*& __cordl_internal_get_taskResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*> const& __cordl_internal_get_taskResult() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelSession* value);

  constexpr void __cordl_internal_set_queryId(::StringW value);

  constexpr void __cordl_internal_set_taskResult(::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* value);

  /// @brief Method .ctor, addr 0x2fd8ea4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass111_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass111_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass111_0(__ChannelSession____c__DisplayClass111_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass111_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass111_0(__ChannelSession____c__DisplayClass111_0 const&) = delete;

  /// @brief Field queryId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___queryId;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* _____4__this;

  /// @brief Field taskResult, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>* ___taskResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0, ___queryId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0, ___taskResult) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetChannelTextMessageHistoryPageAsync>d__111
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<GetChannelTextMessageHistoryPageAsync>d__111
struct CORDL_TYPE __ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd90b0, size 0x8a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fd99f0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "", def_value: None }, CppParam { name: "chatHistoryQueryOptions", ty:
  // "::Unity::Services::Vivox::ChatHistoryQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback",
  // ty: "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      ::Unity::Services::Vivox::ChannelSession* __4__this, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, int32_t pageSize, ::System::AsyncCallback* callback,
      ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field chatHistoryQueryOptions, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field pageSize, offset: 0x30, size: 0x4, def value: None
  int32_t pageSize;

  /// @brief Field callback, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0* __8__1;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::IChatHistoryQueryResult*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, 0x58>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, chatHistoryQueryOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, pageSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, __u__2) == 0x50, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetChannelTextMessageHistoryAsync>d__112
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::ChannelSession::<GetChannelTextMessageHistoryAsync>d__112
struct CORDL_TYPE __ChannelSession___GetChannelTextMessageHistoryAsync_d__112 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fd9a48, size 0x86c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fda2b4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession___GetChannelTextMessageHistoryAsync_d__112();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None
  // }, CppParam { name: "requestSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::ChannelSession*", modifiers: "", def_value: None
  // }, CppParam { name: "chatHistoryQueryOptions", ty: "::Unity::Services::Vivox::ChatHistoryQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "callback", ty:
  // "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "_pageSize_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_remainingItemCount_5__3", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_allVivoxMessages_5__4", ty: "::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>*", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::__Queue_1__Enumerator<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_itemCount_5__6", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }]
  constexpr __ChannelSession___GetChannelTextMessageHistoryAsync_d__112(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      int32_t requestSize, ::Unity::Services::Vivox::ChannelSession* __4__this, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, ::System::AsyncCallback* callback,
      int32_t _pageSize_5__2, int32_t _remainingItemCount_5__3, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>* _allVivoxMessages_5__4,
      ::System::Collections::Generic::__Queue_1__Enumerator<int32_t> __7__wrap4, int32_t _itemCount_5__6,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field requestSize, offset: 0x20, size: 0x4, def value: None
  int32_t requestSize;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* __4__this;

  /// @brief Field chatHistoryQueryOptions, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field callback, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <pageSize>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _pageSize_5__2;

  /// @brief Field <remainingItemCount>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t _remainingItemCount_5__3;

  /// @brief Field <allVivoxMessages>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxMessage*>* _allVivoxMessages_5__4;

  /// @brief Field <>7__wrap4, offset: 0x50, size: 0x18, def value: None
  ::System::Collections::Generic::__Queue_1__Enumerator<int32_t> __7__wrap4;

  /// @brief Field <itemCount>5__6, offset: 0x68, size: 0x4, def value: None
  int32_t _itemCount_5__6;

  /// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, 0x78>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, requestSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, chatHistoryQueryOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, _pageSize_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, _remainingItemCount_5__3) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, _allVivoxMessages_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, _itemCount_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, __u__1) == 0x70, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass115_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelSession::<>c__DisplayClass115_0*
class CORDL_TYPE __ChannelSession____c__DisplayClass115_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_set_3d_position_t* request;

  static inline ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0* New_ctor();

  /// @brief Method <Set3DPosition>b__0, addr 0x2fda30c, size 0x110, virtual false, abstract: false, final false
  inline void _Set3DPosition_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::vx_req_session_set_3d_position_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_3d_position_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_3d_position_t* value);

  /// @brief Method .ctor, addr 0x2fd57c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelSession____c__DisplayClass115_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass115_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelSession____c__DisplayClass115_0(__ChannelSession____c__DisplayClass115_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelSession____c__DisplayClass115_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelSession____c__DisplayClass115_0(__ChannelSession____c__DisplayClass115_0 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_set_3d_position_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0, ___request) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::ChannelSession
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChannelSession*
class CORDL_TYPE ChannelSession : public ::System::Object {
public:
  // Declarations
  using _ConnectAsync_d__43 = ::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43;

  using _DeleteChannelTextMessageAsync_d__77 = ::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77;

  using _DisconnectAsync_d__47 = ::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47;

  using _EditChannelTextMessageAsync_d__78 = ::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78;

  using _GetChannelTextMessageHistoryAsync_d__112 = ::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112;

  using _GetChannelTextMessageHistoryPageAsync_d__111 = ::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111;

  using _SendChannelMessageAsync_d__44 = ::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44;

  using _SetVolumeAsync_d__42 = ::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42;

  using __c__DisplayClass105_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0;

  using __c__DisplayClass109_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0;

  using __c__DisplayClass111_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0;

  using __c__DisplayClass115_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0;

  using __c__DisplayClass39_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0;

  using __c__DisplayClass40_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0;

  using __c__DisplayClass42_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0;

  using __c__DisplayClass45_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0;

  using __c__DisplayClass48_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0;

  using __c__DisplayClass49_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0;

  using __c__DisplayClass49_1 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1;

  using __c__DisplayClass49_2 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2;

  using __c__DisplayClass51_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0;

  using __c__DisplayClass51_1 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1;

  using __c__DisplayClass51_2 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2;

  using __c__DisplayClass75_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0;

  using __c__DisplayClass79_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0;

  using __c__DisplayClass81_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0;

  using __c__DisplayClass93_0 = ::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0;

  __declspec(property(get = get_AudioState, put = set_AudioState))::Unity::Services::Vivox::ConnectionState AudioState;

  __declspec(property(get = get_Channel))::Unity::Services::Vivox::ChannelId* Channel;

  __declspec(property(get = get_ChannelState, put = set_ChannelState))::Unity::Services::Vivox::ConnectionState ChannelState;

  __declspec(property(get = get_GroupId))::StringW GroupId;

  __declspec(property(get = get_IsSessionBeingTranscribed)) bool IsSessionBeingTranscribed;

  __declspec(property(get = get_IsTransmitting)) bool IsTransmitting;

  __declspec(property(get = get_Key))::Unity::Services::Vivox::ChannelId* Key;

  /// @brief Field MessageDeleted, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_MessageDeleted, put = __cordl_internal_set_MessageDeleted))::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* MessageDeleted;

  /// @brief Field MessageEdited, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_MessageEdited, put = __cordl_internal_set_MessageEdited))::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* MessageEdited;

  __declspec(property(get = get_MessageLog))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* MessageLog;

  __declspec(property(get = get_Parent))::Unity::Services::Vivox::ILoginSession* Parent;

  __declspec(property(get = get_Participants))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* Participants;

  /// @brief Field PropertyChanged, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_SessionArchive))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* SessionArchive;

  __declspec(property(get = get_SessionArchiveResult))::Unity::Services::Vivox::IArchiveQueryResult* SessionArchiveResult;

  __declspec(property(get = get_SessionHandle))::StringW SessionHandle;

  __declspec(property(get = get_TextState, put = set_TextState))::Unity::Services::Vivox::ConnectionState TextState;

  __declspec(property(get = get_TranscribedLog))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* TranscribedLog;

  /// @brief Field <GroupId>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupId_k__BackingField, put = __cordl_internal_set__GroupId_k__BackingField))::StringW _GroupId_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::Unity::Services::Vivox::ChannelId* _Key_k__BackingField;

  /// @brief Field _audioState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__audioState, put = __cordl_internal_set__audioState))::Unity::Services::Vivox::ConnectionState _audioState;

  /// @brief Field _channelSessionConnectTaskCompletionSource, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__channelSessionConnectTaskCompletionSource,
                      put = __cordl_internal_set__channelSessionConnectTaskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _channelSessionConnectTaskCompletionSource;

  /// @brief Field _channelState, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__channelState, put = __cordl_internal_set__channelState))::Unity::Services::Vivox::ConnectionState _channelState;

  /// @brief Field _chatHistoryTaskResults, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__chatHistoryTaskResults, put = __cordl_internal_set__chatHistoryTaskResults))::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>* _chatHistoryTaskResults;

  /// @brief Field _deleted, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__deleted, put = __cordl_internal_set__deleted)) bool _deleted;

  /// @brief Field _internalChatHistoryResults, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__internalChatHistoryResults, put = __cordl_internal_set__internalChatHistoryResults))::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* _internalChatHistoryResults;

  /// @brief Field _isSessionBeingTranscribed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isSessionBeingTranscribed, put = __cordl_internal_set__isSessionBeingTranscribed)) bool _isSessionBeingTranscribed;

  /// @brief Field _loginSession, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__loginSession, put = __cordl_internal_set__loginSession))::Unity::Services::Vivox::LoginSession* _loginSession;

  /// @brief Field _messageLog, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__messageLog,
                      put = __cordl_internal_set__messageLog))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* _messageLog;

  /// @brief Field _nextTranscriptionId, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__nextTranscriptionId, put = __cordl_internal_set__nextTranscriptionId)) int32_t _nextTranscriptionId;

  /// @brief Field _participants, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__participants,
                      put = __cordl_internal_set__participants))::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IParticipant*,
                                                                                                                ::Unity::Services::Vivox::ChannelParticipant*>* _participants;

  /// @brief Field _sessionArchive, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionArchive,
                      put = __cordl_internal_set__sessionArchive))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* _sessionArchive;

  /// @brief Field _sessionArchiveResult, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionArchiveResult, put = __cordl_internal_set__sessionArchiveResult))::Unity::Services::Vivox::ArchiveQueryResult* _sessionArchiveResult;

  /// @brief Field _sessionHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionHandle, put = __cordl_internal_set__sessionHandle))::StringW _sessionHandle;

  /// @brief Field _textState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__textState, put = __cordl_internal_set__textState))::Unity::Services::Vivox::ConnectionState _textState;

  /// @brief Field _transcribedLog, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transcribedLog,
                      put = __cordl_internal_set__transcribedLog))::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* _transcribedLog;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IChannelSession"
  constexpr operator ::Unity::Services::Vivox::IChannelSession*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*() noexcept;

  /// @brief Method AlreadyDone, addr 0x2fcee14, size 0x2c, virtual false, abstract: false, final false
  inline bool AlreadyDone(bool connect, ::Unity::Services::Vivox::ConnectionState state);

  /// @brief Method AssertSessionNotDeleted, addr 0x2fcee40, size 0xa0, virtual false, abstract: false, final false
  inline void AssertSessionNotDeleted();

  /// @brief Method BeginChatHistoryQuery, addr 0x2fd4da4, size 0x368, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::AsyncResult_1<::StringW>* BeginChatHistoryQuery(int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* queryOptions,
                                                                                   ::System::AsyncCallback* callback);

  /// @brief Method BeginConnect, addr 0x2fd1acc, size 0x404, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginConnect(bool connectAudio, bool connectText, bool switchTransmission, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginDeleteTextMessage, addr 0x2fd3430, size 0x180, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginDeleteTextMessage(::StringW messageId, ::System::AsyncCallback* callback);

  /// @brief Method BeginEditTextMessage, addr 0x2fd363c, size 0x194, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginEditTextMessage(::StringW messageId, ::StringW newText, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendText, addr 0x2fd2f24, size 0x2bc, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSendText(::StringW language, ::StringW message, ::StringW applicationStanzaNamespace, ::StringW applicationStanzaBody, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendText, addr 0x2fd2ec8, size 0x5c, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSendText(::StringW message, ::Unity::Services::Vivox::MessageOptions* options, ::System::AsyncCallback* callback);

  /// @brief Method BeginSessionArchiveQuery, addr 0x2fd3b2c, size 0x508, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSessionArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd, ::StringW searchText,
                                                          ::Unity::Services::Vivox::AccountId* userId, uint32_t max, ::StringW afterId, ::StringW beforeId, int32_t firstMessageIndex,
                                                          ::System::AsyncCallback* callback);

  /// @brief Method BeginSetAudioConnected, addr 0x2fd26e0, size 0x334, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSetAudioConnected(bool value, bool switchTransmission, ::System::AsyncCallback* callback);

  /// @brief Method BeginSetChannelTranscription, addr 0x2fd4884, size 0x224, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSetChannelTranscription(bool value, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginSetTextConnected, addr 0x2fd2af4, size 0x2ec, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSetTextConnected(bool value, ::System::AsyncCallback* callback);

  /// @brief Method CheckSessionConnection, addr 0x2fceee0, size 0x14c, virtual false, abstract: false, final false
  inline void CheckSessionConnection();

  /// @brief Method Cleanup, addr 0x2fd57c8, size 0x104, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ClearAllCurrentTextQueries, addr 0x2fd1444, size 0x324, virtual false, abstract: false, final false
  inline void ClearAllCurrentTextQueries();

  /// @brief Method ClearSessionStates, addr 0x2fd1380, size 0xc4, virtual false, abstract: false, final false
  inline void ClearSessionStates();

  /// @brief Method ConnectAsync, addr 0x2fd18e4, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* ConnectAsync(bool connectAudio, bool connectText, bool switchTransmission, ::System::AsyncCallback* callback, ::StringW accessToken);

  /// @brief Method DeleteChannelTextMessageAsync, addr 0x2fd3278, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteChannelTextMessageAsync(::StringW messageId);

  /// @brief Method Disconnect, addr 0x2fd2500, size 0x1d8, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* Disconnect(::System::AsyncCallback* callback);

  /// @brief Method DisconnectAsync, addr 0x2fd2438, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisconnectAsync();

  /// @brief Method EditChannelTextMessageAsync, addr 0x2fd3354, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* EditChannelTextMessageAsync(::StringW messageId, ::StringW newText);

  /// @brief Method EndChatHistoryQuery, addr 0x2fd5114, size 0x84, virtual false, abstract: false, final false
  inline void EndChatHistoryQuery(::System::IAsyncResult* result);

  /// @brief Method EndConnect, addr 0x2fd23b4, size 0x84, virtual true, abstract: false, final true
  inline void EndConnect(::System::IAsyncResult* ar);

  /// @brief Method EndDeleteTextMessage, addr 0x2fd35b8, size 0x84, virtual false, abstract: false, final false
  inline void EndDeleteTextMessage(::System::IAsyncResult* result);

  /// @brief Method EndEditTextMessage, addr 0x2fd37d8, size 0x84, virtual false, abstract: false, final false
  inline void EndEditTextMessage(::System::IAsyncResult* result);

  /// @brief Method EndSendText, addr 0x2fd31e8, size 0x90, virtual true, abstract: false, final true
  inline void EndSendText(::System::IAsyncResult* result);

  /// @brief Method EndSessionArchiveQuery, addr 0x2fd403c, size 0x90, virtual true, abstract: false, final true
  inline void EndSessionArchiveQuery(::System::IAsyncResult* result);

  /// @brief Method EndSetAudioConnected, addr 0x2fd2a64, size 0x90, virtual true, abstract: false, final true
  inline void EndSetAudioConnected(::System::IAsyncResult* result);

  /// @brief Method EndSetChannelTranscription, addr 0x2fd4ab0, size 0x84, virtual true, abstract: false, final true
  inline void EndSetChannelTranscription(::System::IAsyncResult* result);

  /// @brief Method EndSetTextConnected, addr 0x2fd2df8, size 0x90, virtual true, abstract: false, final true
  inline void EndSetTextConnected(::System::IAsyncResult* result);

  /// @brief Method GetChannelTextMessageHistoryAsync, addr 0x2fd52b0, size 0x11c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetChannelTextMessageHistoryAsync(int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, ::System::AsyncCallback* callback);

  /// @brief Method GetChannelTextMessageHistoryPageAsync, addr 0x2fd5198, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetChannelTextMessageHistoryPageAsync(int32_t pageSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, ::System::AsyncCallback* callback);

  /// @brief Method GetConnectToken, addr 0x2fd40dc, size 0x134, virtual true, abstract: false, final true
  inline ::StringW GetConnectToken(::System::Nullable_1<::System::TimeSpan> expiration);

  /// @brief Method GetConnectToken, addr 0x2fd4210, size 0x14c, virtual true, abstract: false, final true
  inline ::StringW GetConnectToken(::StringW tokenSigningKey, ::System::TimeSpan expiration);

  /// @brief Method GetTranscriptionToken, addr 0x2fd4b34, size 0x12c, virtual true, abstract: false, final true
  inline ::StringW GetTranscriptionToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration);

  /// @brief Method GetTranscriptionToken, addr 0x2fd4c60, size 0x144, virtual true, abstract: false, final true
  inline ::StringW GetTranscriptionToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration);

  /// @brief Method HandleLoginStateChange, addr 0x2fcfd9c, size 0x84, virtual false, abstract: false, final false
  inline void HandleLoginStateChange(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleMediaStreamUpdated, addr 0x2fcfc38, size 0x90, virtual false, abstract: false, final false
  inline void HandleMediaStreamUpdated(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleParticipantAdded, addr 0x2fcf7dc, size 0x1a0, virtual false, abstract: false, final false
  inline void HandleParticipantAdded(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleParticipantRemoved, addr 0x2fcf97c, size 0xa0, virtual false, abstract: false, final false
  inline void HandleParticipantRemoved(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleParticipantUpdated, addr 0x2fcfa1c, size 0x21c, virtual false, abstract: false, final false
  inline void HandleParticipantUpdated(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionArchiveMessage, addr 0x2fd00f0, size 0x510, virtual false, abstract: false, final false
  inline void HandleSessionArchiveMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionArchiveQueryEnd, addr 0x2fd0600, size 0x360, virtual false, abstract: false, final false
  inline void HandleSessionArchiveQueryEnd(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionDeleteMessage, addr 0x2fd0c08, size 0x2bc, virtual false, abstract: false, final false
  inline void HandleSessionDeleteMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionEditMessage, addr 0x2fd0ec4, size 0x2d4, virtual false, abstract: false, final false
  inline void HandleSessionEditMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionMessage, addr 0x2fcfe20, size 0x2d0, virtual false, abstract: false, final false
  inline void HandleSessionMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionRemoved, addr 0x2fcfd54, size 0x48, virtual false, abstract: false, final false
  inline void HandleSessionRemoved(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleSessionTranscribedMessage, addr 0x2fd0960, size 0x2a8, virtual false, abstract: false, final false
  inline void HandleSessionTranscribedMessage(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleTextStreamUpdated, addr 0x2fcfcc8, size 0x8c, virtual false, abstract: false, final false
  inline void HandleTextStreamUpdated(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method InstanceOnEventMessageReceived, addr 0x2fcf634, size 0x1a8, virtual false, abstract: false, final false
  inline void InstanceOnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method InstanceOnLoginSessionPropertyChanged, addr 0x2fcf55c, size 0xd8, virtual false, abstract: false, final false
  inline void InstanceOnLoginSessionPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  static inline ::Unity::Services::Vivox::ChannelSession* New_ctor(::Unity::Services::Vivox::LoginSession* loginSession, ::Unity::Services::Vivox::ChannelId* channelId, ::StringW groupId);

  /// @brief Method OnSessionDeleteMessage, addr 0x2fd1198, size 0x28, virtual true, abstract: false, final false
  inline void OnSessionDeleteMessage(::Unity::Services::Vivox::VivoxMessage* e);

  /// @brief Method OnSessionEditMessage, addr 0x2fd11c0, size 0x28, virtual true, abstract: false, final false
  inline void OnSessionEditMessage(::Unity::Services::Vivox::VivoxMessage* e);

  /// @brief Method SendChannelMessageAsync, addr 0x2fd19f0, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SendChannelMessageAsync(::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method Set3DPosition, addr 0x2fd53cc, size 0x3f4, virtual true, abstract: false, final true
  inline void Set3DPosition(::UnityEngine::Vector3 speakerPos, ::UnityEngine::Vector3 listenerPos, ::UnityEngine::Vector3 listenerAtOrient, ::UnityEngine::Vector3 listenerUpOrient);

  /// @brief Method SetVolumeAsync, addr 0x2fd1808, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetVolumeAsync(int32_t value);

  /// @brief Method <ConnectAsync>b__43_0, addr 0x2fd5968, size 0xcc, virtual false, abstract: false, final false
  inline void _ConnectAsync_b__43_0();

  /// @brief Method <ConnectAsync>b__43_1, addr 0x2fd5a34, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _ConnectAsync_b__43_1(::System::IAsyncResult* ar);

  /// @brief Method <DeleteChannelTextMessageAsync>b__77_0, addr 0x2fd5d98, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _DeleteChannelTextMessageAsync_b__77_0(::System::IAsyncResult* ar);

  /// @brief Method <DisconnectAsync>b__47_0, addr 0x2fd5c88, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _DisconnectAsync_b__47_0(::System::IAsyncResult* ar);

  /// @brief Method <EditChannelTextMessageAsync>b__78_0, addr 0x2fd5ea8, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _EditChannelTextMessageAsync_b__78_0(::System::IAsyncResult* ar);

  /// @brief Method <SendChannelMessageAsync>b__44_0, addr 0x2fd5b70, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _SendChannelMessageAsync_b__44_0(::System::IAsyncResult* ar);

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_MessageDeleted();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_MessageDeleted() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_MessageEdited();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_MessageEdited() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::StringW const& __cordl_internal_get__GroupId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__GroupId_k__BackingField();

  constexpr ::Unity::Services::Vivox::ChannelId*& __cordl_internal_get__Key_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelId*> const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ConnectionState const& __cordl_internal_get__audioState() const;

  constexpr ::Unity::Services::Vivox::ConnectionState& __cordl_internal_get__audioState();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__channelSessionConnectTaskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get__channelSessionConnectTaskCompletionSource() const;

  constexpr ::Unity::Services::Vivox::ConnectionState const& __cordl_internal_get__channelState() const;

  constexpr ::Unity::Services::Vivox::ConnectionState& __cordl_internal_get__channelState();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*&
  __cordl_internal_get__chatHistoryTaskResults();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*> const&
  __cordl_internal_get__chatHistoryTaskResults() const;

  constexpr bool const& __cordl_internal_get__deleted() const;

  constexpr bool& __cordl_internal_get__deleted();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*&
  __cordl_internal_get__internalChatHistoryResults();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>*> const&
  __cordl_internal_get__internalChatHistoryResults() const;

  constexpr bool const& __cordl_internal_get__isSessionBeingTranscribed() const;

  constexpr bool& __cordl_internal_get__isSessionBeingTranscribed();

  constexpr ::Unity::Services::Vivox::LoginSession*& __cordl_internal_get__loginSession();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginSession*> const& __cordl_internal_get__loginSession() const;

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>*& __cordl_internal_get__messageLog();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>*> const& __cordl_internal_get__messageLog() const;

  constexpr int32_t const& __cordl_internal_get__nextTranscriptionId() const;

  constexpr int32_t& __cordl_internal_get__nextTranscriptionId();

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IParticipant*, ::Unity::Services::Vivox::ChannelParticipant*>*& __cordl_internal_get__participants();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IParticipant*, ::Unity::Services::Vivox::ChannelParticipant*>*> const&
  __cordl_internal_get__participants() const;

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>*& __cordl_internal_get__sessionArchive();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>*> const& __cordl_internal_get__sessionArchive() const;

  constexpr ::Unity::Services::Vivox::ArchiveQueryResult*& __cordl_internal_get__sessionArchiveResult();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ArchiveQueryResult*> const& __cordl_internal_get__sessionArchiveResult() const;

  constexpr ::StringW const& __cordl_internal_get__sessionHandle() const;

  constexpr ::StringW& __cordl_internal_get__sessionHandle();

  constexpr ::Unity::Services::Vivox::ConnectionState const& __cordl_internal_get__textState() const;

  constexpr ::Unity::Services::Vivox::ConnectionState& __cordl_internal_get__textState();

  constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>*& __cordl_internal_get__transcribedLog();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>*> const& __cordl_internal_get__transcribedLog() const;

  constexpr void __cordl_internal_set_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__GroupId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::Unity::Services::Vivox::ChannelId* value);

  constexpr void __cordl_internal_set__audioState(::Unity::Services::Vivox::ConnectionState value);

  constexpr void __cordl_internal_set__channelSessionConnectTaskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__channelState(::Unity::Services::Vivox::ConnectionState value);

  constexpr void __cordl_internal_set__chatHistoryTaskResults(
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>* value);

  constexpr void __cordl_internal_set__deleted(bool value);

  constexpr void __cordl_internal_set__internalChatHistoryResults(
      ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* value);

  constexpr void __cordl_internal_set__isSessionBeingTranscribed(bool value);

  constexpr void __cordl_internal_set__loginSession(::Unity::Services::Vivox::LoginSession* value);

  constexpr void __cordl_internal_set__messageLog(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* value);

  constexpr void __cordl_internal_set__nextTranscriptionId(int32_t value);

  constexpr void
  __cordl_internal_set__participants(::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IParticipant*, ::Unity::Services::Vivox::ChannelParticipant*>* value);

  constexpr void __cordl_internal_set__sessionArchive(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* value);

  constexpr void __cordl_internal_set__sessionArchiveResult(::Unity::Services::Vivox::ArchiveQueryResult* value);

  constexpr void __cordl_internal_set__sessionHandle(::StringW value);

  constexpr void __cordl_internal_set__textState(::Unity::Services::Vivox::ConnectionState value);

  constexpr void __cordl_internal_set__transcribedLog(::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* value);

  /// @brief Method .ctor, addr 0x2fcf0e4, size 0x3dc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::LoginSession* loginSession, ::Unity::Services::Vivox::ChannelId* channelId, ::StringW groupId);

  /// @brief Method add_MessageDeleted, addr 0x2fd39c4, size 0xb0, virtual true, abstract: false, final true
  inline void add_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_MessageEdited, addr 0x2fd3864, size 0xb0, virtual true, abstract: false, final true
  inline void add_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_PropertyChanged, addr 0x2fcecdc, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_AudioState, addr 0x2fd2ea8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ConnectionState get_AudioState();

  /// @brief Method get_Channel, addr 0x2fd2a2c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ChannelId* get_Channel();

  /// @brief Method get_ChannelState, addr 0x2fd2eb8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ConnectionState get_ChannelState();

  /// @brief Method get_GroupId, addr 0x2fd2e98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GroupId();

  /// @brief Method get_IsSessionBeingTranscribed, addr 0x2fd487c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSessionBeingTranscribed();

  /// @brief Method get_IsTransmitting, addr 0x2fd435c, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsTransmitting();

  /// @brief Method get_Key, addr 0x2fd2ea0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ChannelId* get_Key();

  /// @brief Method get_MessageLog, addr 0x2fd385c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* get_MessageLog();

  /// @brief Method get_Parent, addr 0x2fd2e90, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ILoginSession* get_Parent();

  /// @brief Method get_Participants, addr 0x2fd2ec0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* get_Participants();

  /// @brief Method get_SessionArchive, addr 0x2fd40cc, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* get_SessionArchive();

  /// @brief Method get_SessionArchiveResult, addr 0x2fd40d4, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IArchiveQueryResult* get_SessionArchiveResult();

  /// @brief Method get_SessionHandle, addr 0x2fd2e88, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_SessionHandle();

  /// @brief Method get_TextState, addr 0x2fd2eb0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ConnectionState get_TextState();

  /// @brief Method get_TranscribedLog, addr 0x2fd3b24, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* get_TranscribedLog();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IChannelSession"
  constexpr ::Unity::Services::Vivox::IChannelSession* i___Unity__Services__Vivox__IChannelSession() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__ChannelId__() noexcept;

  /// @brief Method remove_MessageDeleted, addr 0x2fd3a74, size 0xb0, virtual true, abstract: false, final true
  inline void remove_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_MessageEdited, addr 0x2fd3914, size 0xb0, virtual true, abstract: false, final true
  inline void remove_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_PropertyChanged, addr 0x2fced78, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_AudioState, addr 0x2fd11e8, size 0xcc, virtual false, abstract: false, final false
  inline void set_AudioState(::Unity::Services::Vivox::ConnectionState value);

  /// @brief Method set_ChannelState, addr 0x2fcf034, size 0xb0, virtual false, abstract: false, final false
  inline void set_ChannelState(::Unity::Services::Vivox::ConnectionState value);

  /// @brief Method set_TextState, addr 0x2fd12b4, size 0xcc, virtual false, abstract: false, final false
  inline void set_TextState(::Unity::Services::Vivox::ConnectionState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelSession(ChannelSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelSession(ChannelSession const&) = delete;

  /// @brief Field _loginSession, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginSession* ____loginSession;

  /// @brief Field _sessionHandle, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sessionHandle;

  /// @brief Field _isSessionBeingTranscribed, offset: 0x20, size: 0x1, def value: None
  bool ____isSessionBeingTranscribed;

  /// @brief Field _participants, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IParticipant*, ::Unity::Services::Vivox::ChannelParticipant*>* ____participants;

  /// @brief Field _messageLog, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* ____messageLog;

  /// @brief Field _sessionArchive, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* ____sessionArchive;

  /// @brief Field _transcribedLog, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* ____transcribedLog;

  /// @brief Field _sessionArchiveResult, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::ArchiveQueryResult* ____sessionArchiveResult;

  /// @brief Field _internalChatHistoryResults, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*>* ____internalChatHistoryResults;

  /// @brief Field _chatHistoryTaskResults, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::IChatHistoryQueryResult*>*>*
      ____chatHistoryTaskResults;

  /// @brief Field _channelSessionConnectTaskCompletionSource, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____channelSessionConnectTaskCompletionSource;

  /// @brief Field _audioState, offset: 0x68, size: 0x4, def value: None
  ::Unity::Services::Vivox::ConnectionState ____audioState;

  /// @brief Field _textState, offset: 0x6c, size: 0x4, def value: None
  ::Unity::Services::Vivox::ConnectionState ____textState;

  /// @brief Field _channelState, offset: 0x70, size: 0x4, def value: None
  ::Unity::Services::Vivox::ConnectionState ____channelState;

  /// @brief Field _nextTranscriptionId, offset: 0x74, size: 0x4, def value: None
  int32_t ____nextTranscriptionId;

  /// @brief Field _deleted, offset: 0x78, size: 0x1, def value: None
  bool ____deleted;

  /// @brief Field PropertyChanged, offset: 0x80, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <GroupId>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____GroupId_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelId* ____Key_k__BackingField;

  /// @brief Field MessageEdited, offset: 0x98, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* ___MessageEdited;

  /// @brief Field MessageDeleted, offset: 0xa0, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* ___MessageDeleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChannelSession, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____loginSession) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____sessionHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____isSessionBeingTranscribed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____participants) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____messageLog) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____sessionArchive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____transcribedLog) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____sessionArchiveResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____internalChatHistoryResults) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____chatHistoryTaskResults) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____channelSessionConnectTaskCompletionSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____audioState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____textState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____channelState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____nextTranscriptionId) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____deleted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ___PropertyChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____GroupId_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ____Key_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ___MessageEdited) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelSession, ___MessageDeleted) == 0xa0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChannelSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChannelSession*, "Unity.Services.Vivox", "ChannelSession");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass105_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass105_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass109_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass109_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass111_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass111_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass115_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass115_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass39_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass39_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass40_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass40_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass42_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass42_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass45_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass45_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass48_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass48_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass49_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_1*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass49_1");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass49_2*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass49_2");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass51_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_1*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass51_1");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass51_2*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass51_2");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass75_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass75_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass79_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass79_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass81_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass81_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession____c__DisplayClass93_0*, "Unity.Services.Vivox", "ChannelSession/<>c__DisplayClass93_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___ConnectAsync_d__43, "Unity.Services.Vivox", "ChannelSession/<ConnectAsync>d__43");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___DeleteChannelTextMessageAsync_d__77, "Unity.Services.Vivox", "ChannelSession/<DeleteChannelTextMessageAsync>d__77");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___DisconnectAsync_d__47, "Unity.Services.Vivox", "ChannelSession/<DisconnectAsync>d__47");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___EditChannelTextMessageAsync_d__78, "Unity.Services.Vivox", "ChannelSession/<EditChannelTextMessageAsync>d__78");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryAsync_d__112, "Unity.Services.Vivox", "ChannelSession/<GetChannelTextMessageHistoryAsync>d__112");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___GetChannelTextMessageHistoryPageAsync_d__111, "Unity.Services.Vivox",
                       "ChannelSession/<GetChannelTextMessageHistoryPageAsync>d__111");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___SendChannelMessageAsync_d__44, "Unity.Services.Vivox", "ChannelSession/<SendChannelMessageAsync>d__44");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelSession___SetVolumeAsync_d__42, "Unity.Services.Vivox", "ChannelSession/<SetVolumeAsync>d__42");
