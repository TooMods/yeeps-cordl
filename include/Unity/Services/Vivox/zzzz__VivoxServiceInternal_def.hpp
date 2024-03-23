#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelType_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChatCapability_def.hpp"
#include "Unity/Services/Vivox/zzzz__IChannelSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__TransmissionMode_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxConversation_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxServiceInternal)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class ReadOnlyDictionary_2;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
namespace Unity::Services::Authentication::Internal {
class IEnvironmentId;
}
namespace Unity::Services::Authentication::Internal {
class IPlayerId;
}
namespace Unity::Services::Vivox::Internal {
class IVivoxTokenProviderInternal;
}
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
namespace Unity::Services::Vivox {
class ChannelOptions;
}
namespace Unity::Services::Vivox {
struct ChannelType;
}
namespace Unity::Services::Vivox {
struct ChatCapability;
}
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
namespace Unity::Services::Vivox {
class Client;
}
namespace Unity::Services::Vivox {
class ConversationQueryOptions;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
class IChannelTextMessage;
}
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class IParticipant;
}
namespace Unity::Services::Vivox {
class ITTSVoice;
}
namespace Unity::Services::Vivox {
class IVivoxServiceInternal;
}
namespace Unity::Services::Vivox {
class IVivoxService;
}
namespace Unity::Services::Vivox {
class IVivoxTokenProvider;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
namespace Unity::Services::Vivox {
class LoginOptions;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
template <typename T> class QueueItemAddedEventArgs_1;
}
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
namespace Unity::Services::Vivox {
struct TransmissionMode;
}
namespace Unity::Services::Vivox {
class VivoxConfigurationOptions;
}
namespace Unity::Services::Vivox {
class VivoxConversation;
}
namespace Unity::Services::Vivox {
class VivoxInputDevice;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace Unity::Services::Vivox {
class VivoxOutputDevice;
}
namespace Unity::Services::Vivox {
class VivoxParticipant;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___BlockPlayerAsync_d__175;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EditChannelTextMessageAsync_d__164;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EditDirectTextMessageAsync_d__161;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetConversationsAsync_d__168;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___InitializeAsync_d__153;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinChannelAsync_d__180;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinEchoChannelAsync_d__179;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinGroupChannelAsync_d__177;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinPositionalChannelAsync_d__178;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LeaveAllChannelsAsync_d__181;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LeaveChannelAsync_d__182;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LoginAsync_d__154;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LogoutAsync_d__155;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SendChannelTextMessageAsync_d__163;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SendDirectTextMessageAsync_d__160;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetActiveInputDeviceAsync_d__188;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetChannelVolumeAsync_d__192;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetMessageAsReadAsync_d__169;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___UnblockPlayerAsync_d__176;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass156_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass163_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass164_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass165_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass166_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass182_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass183_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass185_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass192_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass208_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass214_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass215_0;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxServiceInternal;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass156_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass163_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass164_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass165_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass166_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass182_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass183_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass185_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass192_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass208_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass214_0;
}
namespace Unity::Services::Vivox {
class __VivoxServiceInternal____c__DisplayClass215_0;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___BlockPlayerAsync_d__175;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EditChannelTextMessageAsync_d__164;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EditDirectTextMessageAsync_d__161;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetConversationsAsync_d__168;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___InitializeAsync_d__153;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinChannelAsync_d__180;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinEchoChannelAsync_d__179;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinGroupChannelAsync_d__177;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___JoinPositionalChannelAsync_d__178;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LeaveAllChannelsAsync_d__181;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LeaveChannelAsync_d__182;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LoginAsync_d__154;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___LogoutAsync_d__155;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SendChannelTextMessageAsync_d__163;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SendDirectTextMessageAsync_d__160;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetActiveInputDeviceAsync_d__188;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetChannelVolumeAsync_d__192;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetMessageAsReadAsync_d__169;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195;
}
namespace Unity::Services::Vivox {
struct __VivoxServiceInternal___UnblockPlayerAsync_d__176;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxServiceInternal);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c*
class CORDL_TYPE __VivoxServiceInternal____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::__VivoxServiceInternal____c* __9;

  /// @brief Field <>9__58_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__58_0, put = setStaticF___9__58_0))::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>, ::StringW>* __9__58_0;

  /// @brief Field <>9__58_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__58_1,
      put = setStaticF___9__58_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>,
                                                   ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>* __9__58_1;

  /// @brief Field <>9__64_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__64_0, put = setStaticF___9__64_0))::System::Func_2<::Unity::Services::Vivox::ITTSVoice*, ::StringW>* __9__64_0;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c* New_ctor();

  /// @brief Method .ctor, addr 0x1c2298c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_ActiveChannels>b__58_0, addr 0x1c22994, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _get_ActiveChannels_b__58_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*> pair);

  /// @brief Method <get_ActiveChannels>b__58_1, addr 0x1c229d0, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*
  _get_ActiveChannels_b__58_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*> pair);

  /// @brief Method <get_TextToSpeechAvailableVoices>b__64_0, addr 0x1c22a2c, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW _get_TextToSpeechAvailableVoices_b__64_0(::Unity::Services::Vivox::ITTSVoice* ttsVoice);

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>, ::StringW>*
  getStaticF___9__58_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>,
                                 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>*
  getStaticF___9__58_1();

  static inline ::System::Func_2<::Unity::Services::Vivox::ITTSVoice*, ::StringW>* getStaticF___9__64_0();

  static inline void setStaticF___9(::Unity::Services::Vivox::__VivoxServiceInternal____c* value);

  static inline void setStaticF___9__58_0(
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>, ::StringW>* value);

  static inline void
  setStaticF___9__58_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>* value);

  static inline void setStaticF___9__64_0(::System::Func_2<::Unity::Services::Vivox::ITTSVoice*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c(__VivoxServiceInternal____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c(__VivoxServiceInternal____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<InitializeAsync>d__153
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<InitializeAsync>d__153
struct CORDL_TYPE __VivoxServiceInternal___InitializeAsync_d__153 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c22ac8, size 0x564, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2338c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___InitializeAsync_d__153();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Vivox::VivoxConfigurationOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___InitializeAsync_d__153(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::VivoxConfigurationOptions* options,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field options, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxConfigurationOptions* options;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LoginAsync>d__154
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<LoginAsync>d__154
struct CORDL_TYPE __VivoxServiceInternal___LoginAsync_d__154 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c23398, size 0xa90, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c246a8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___LoginAsync_d__154();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "loginOptions", ty: "::Unity::Services::Vivox::LoginOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::__List_1__Enumerator<::StringW>",
  // modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___LoginAsync_d__154(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::LoginOptions* loginOptions,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field loginOptions, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginOptions* loginOptions;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, 0x50>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, loginOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, __7__wrap1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LogoutAsync>d__155
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<LogoutAsync>d__155
struct CORDL_TYPE __VivoxServiceInternal___LogoutAsync_d__155 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c246b4, size 0x2a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2495c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___LogoutAsync_d__155();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___LogoutAsync_d__155(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                        ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass156_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass156_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass156_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0* New_ctor();

  /// @brief Method <SetChannelTransmissionModeAsync>b__0, addr 0x1c24970, size 0xb4, virtual false, abstract: false, final false
  inline bool _SetChannelTransmissionModeAsync_b__0(::Unity::Services::Vivox::IChannelSession* c);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c24968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass156_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass156_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass156_0(__VivoxServiceInternal____c__DisplayClass156_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass156_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass156_0(__VivoxServiceInternal____c__DisplayClass156_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetChannelTransmissionModeAsync>d__156
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetChannelTransmissionModeAsync>d__156
struct CORDL_TYPE __VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c24a24, size 0x514, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c24f38, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "transmissionMode", ty: "::Unity::Services::Vivox::TransmissionMode", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                                            ::Unity::Services::Vivox::TransmissionMode transmissionMode, ::Unity::Services::Vivox::VivoxServiceInternal* __4__this,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field transmissionMode, offset: 0x28, size: 0x4, def value: None
  ::Unity::Services::Vivox::TransmissionMode transmissionMode;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, transmissionMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SendDirectTextMessageAsync>d__160
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SendDirectTextMessageAsync>d__160
struct CORDL_TYPE __VivoxServiceInternal___SendDirectTextMessageAsync_d__160 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c24f44, size 0x2ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c251f0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SendDirectTextMessageAsync_d__160();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "options", ty: "::Unity::Services::Vivox::MessageOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __VivoxServiceInternal___SendDirectTextMessageAsync_d__160(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW playerId, ::StringW message,
                                                                       ::Unity::Services::Vivox::MessageOptions* options, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field playerId, offset: 0x28, size: 0x8, def value: None
  ::StringW playerId;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::MessageOptions* options;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, playerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<EditDirectTextMessageAsync>d__161
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<EditDirectTextMessageAsync>d__161
struct CORDL_TYPE __VivoxServiceInternal___EditDirectTextMessageAsync_d__161 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c251fc, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c25430, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___EditDirectTextMessageAsync_d__161();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "newMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___EditDirectTextMessageAsync_d__161(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW messageId, ::StringW newMessage,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field messageId, offset: 0x28, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field newMessage, offset: 0x30, size: 0x8, def value: None
  ::StringW newMessage;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, messageId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, newMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DeleteDirectTextMessageAsync>d__162
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<DeleteDirectTextMessageAsync>d__162
struct CORDL_TYPE __VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c2543c, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2566c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW messageId,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field messageId, offset: 0x28, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, messageId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass163_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass163_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass163_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0* New_ctor();

  /// @brief Method <SendChannelTextMessageAsync>b__0, addr 0x1c25680, size 0xb8, virtual false, abstract: false, final false
  inline bool _SendChannelTextMessageAsync_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c25678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass163_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass163_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass163_0(__VivoxServiceInternal____c__DisplayClass163_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass163_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass163_0(__VivoxServiceInternal____c__DisplayClass163_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SendChannelTextMessageAsync>d__163
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SendChannelTextMessageAsync>d__163
struct CORDL_TYPE __VivoxServiceInternal___SendChannelTextMessageAsync_d__163 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c25738, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c25aac, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SendChannelTextMessageAsync_d__163();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "options", ty: "::Unity::Services::Vivox::MessageOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __VivoxServiceInternal___SendChannelTextMessageAsync_d__163(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                                        ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::MessageOptions* options;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass164_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass164_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass164_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0* New_ctor();

  /// @brief Method <EditChannelTextMessageAsync>b__0, addr 0x1c25ac0, size 0xb8, virtual false, abstract: false, final false
  inline bool _EditChannelTextMessageAsync_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c25ab8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass164_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass164_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass164_0(__VivoxServiceInternal____c__DisplayClass164_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass164_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass164_0(__VivoxServiceInternal____c__DisplayClass164_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<EditChannelTextMessageAsync>d__164
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<EditChannelTextMessageAsync>d__164
struct CORDL_TYPE __VivoxServiceInternal___EditChannelTextMessageAsync_d__164 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c25b78, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c25eec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___EditChannelTextMessageAsync_d__164();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "newMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __VivoxServiceInternal___EditChannelTextMessageAsync_d__164(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                                        ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW messageId, ::StringW newMessage,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field messageId, offset: 0x30, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field newMessage, offset: 0x38, size: 0x8, def value: None
  ::StringW newMessage;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, messageId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, newMessage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass165_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass165_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass165_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0* New_ctor();

  /// @brief Method <DeleteChannelTextMessageAsync>b__0, addr 0x1c25f00, size 0xb8, virtual false, abstract: false, final false
  inline bool _DeleteChannelTextMessageAsync_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c25ef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass165_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass165_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass165_0(__VivoxServiceInternal____c__DisplayClass165_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass165_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass165_0(__VivoxServiceInternal____c__DisplayClass165_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DeleteChannelTextMessageAsync>d__165
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<DeleteChannelTextMessageAsync>d__165
struct CORDL_TYPE __VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c25fb8, size 0x370, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c26328, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "messageId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                                          ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW messageId,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field messageId, offset: 0x30, size: 0x8, def value: None
  ::StringW messageId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, messageId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass166_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass166_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass166_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0* New_ctor();

  /// @brief Method <GetChannelTextMessageHistoryAsync>b__0, addr 0x1c2633c, size 0xb8, virtual false, abstract: false, final false
  inline bool _GetChannelTextMessageHistoryAsync_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c26334, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass166_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass166_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass166_0(__VivoxServiceInternal____c__DisplayClass166_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass166_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass166_0(__VivoxServiceInternal____c__DisplayClass166_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetChannelTextMessageHistoryAsync>d__166
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<GetChannelTextMessageHistoryAsync>d__166
struct CORDL_TYPE __VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c263f4, size 0x3e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c267d8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None
  // }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "",
  // def_value: None }, CppParam { name: "requestSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chatHistoryQueryOptions", ty:
  // "::Unity::Services::Vivox::ChatHistoryQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      ::StringW channelName, ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field requestSize, offset: 0x30, size: 0x4, def value: None
  int32_t requestSize;

  /// @brief Field chatHistoryQueryOptions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, requestSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, chatHistoryQueryOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetDirectTextMessageHistoryAsync>d__167
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<GetDirectTextMessageHistoryAsync>d__167
struct CORDL_TYPE __VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c26830, size 0x338, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c26b68, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "requestSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chatHistoryQueryOptions", ty: "::Unity::Services::Vivox::ChatHistoryQueryOptions*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder,
      ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW playerId, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field playerId, offset: 0x28, size: 0x8, def value: None
  ::StringW playerId;

  /// @brief Field requestSize, offset: 0x30, size: 0x4, def value: None
  int32_t requestSize;

  /// @brief Field chatHistoryQueryOptions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, playerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, requestSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, chatHistoryQueryOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<GetConversationsAsync>d__168
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<GetConversationsAsync>d__168
struct CORDL_TYPE __VivoxServiceInternal___GetConversationsAsync_d__168 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c26bc0, size 0x298, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c26e58, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___GetConversationsAsync_d__168();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "queryOptions", ty:
  // "::Unity::Services::Vivox::ConversationQueryOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___GetConversationsAsync_d__168(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __t__builder,
      ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::ConversationQueryOptions* queryOptions,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field queryOptions, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::ConversationQueryOptions* queryOptions;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, queryOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetMessageAsReadAsync>d__169
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetMessageAsReadAsync>d__169
struct CORDL_TYPE __VivoxServiceInternal___SetMessageAsReadAsync_d__169 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c26eb0, size 0x244, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c270f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetMessageAsReadAsync_d__169();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "message", ty: "::Unity::Services::Vivox::VivoxMessage*", modifiers: "", def_value: None }, CppParam { name: "seenAt", ty:
  // "::System::Nullable_1<::System::DateTime>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetMessageAsReadAsync_d__169(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::VivoxMessage* message,
                                                                  ::System::Nullable_1<::System::DateTime> seenAt, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxMessage* message;

  /// @brief Field seenAt, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> seenAt;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, seenAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<BlockPlayerAsync>d__175
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<BlockPlayerAsync>d__175
struct CORDL_TYPE __VivoxServiceInternal___BlockPlayerAsync_d__175 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c27100, size 0x2a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c273a8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___BlockPlayerAsync_d__175();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___BlockPlayerAsync_d__175(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW playerId,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field playerId, offset: 0x28, size: 0x8, def value: None
  ::StringW playerId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, playerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<UnblockPlayerAsync>d__176
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<UnblockPlayerAsync>d__176
struct CORDL_TYPE __VivoxServiceInternal___UnblockPlayerAsync_d__176 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c273b4, size 0x2a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2765c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___UnblockPlayerAsync_d__176();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___UnblockPlayerAsync_d__176(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW playerId,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field playerId, offset: 0x28, size: 0x8, def value: None
  ::StringW playerId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, playerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<JoinGroupChannelAsync>d__177
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<JoinGroupChannelAsync>d__177
struct CORDL_TYPE __VivoxServiceInternal___JoinGroupChannelAsync_d__177 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c27668, size 0x18c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c277f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___JoinGroupChannelAsync_d__177();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "chatCapability", ty: "::Unity::Services::Vivox::ChatCapability",
  // modifiers: "", def_value: None }, CppParam { name: "channelOptions", ty: "::Unity::Services::Vivox::ChannelOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___JoinGroupChannelAsync_d__177(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW channelName,
                                                                  ::Unity::Services::Vivox::ChatCapability chatCapability, ::Unity::Services::Vivox::ChannelOptions* channelOptions,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field channelName, offset: 0x28, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field chatCapability, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChatCapability chatCapability;

  /// @brief Field channelOptions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelOptions* channelOptions;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, channelName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, chatCapability) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, channelOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<JoinPositionalChannelAsync>d__178
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<JoinPositionalChannelAsync>d__178
struct CORDL_TYPE __VivoxServiceInternal___JoinPositionalChannelAsync_d__178 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c27800, size 0x188, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c27988, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___JoinPositionalChannelAsync_d__178();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "chatCapability", ty: "::Unity::Services::Vivox::ChatCapability",
  // modifiers: "", def_value: None }, CppParam { name: "positionalChannelProperties", ty: "::Unity::Services::Vivox::Channel3DProperties*", modifiers: "", def_value: None }, CppParam { name:
  // "channelOptions", ty: "::Unity::Services::Vivox::ChannelOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __VivoxServiceInternal___JoinPositionalChannelAsync_d__178(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW channelName,
                                                                       ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                       ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties,
                                                                       ::Unity::Services::Vivox::ChannelOptions* channelOptions, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field channelName, offset: 0x28, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field chatCapability, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChatCapability chatCapability;

  /// @brief Field positionalChannelProperties, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties;

  /// @brief Field channelOptions, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelOptions* channelOptions;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, 0x50>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, channelName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, chatCapability) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, positionalChannelProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, channelOptions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, __u__1) == 0x48, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<JoinEchoChannelAsync>d__179
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<JoinEchoChannelAsync>d__179
struct CORDL_TYPE __VivoxServiceInternal___JoinEchoChannelAsync_d__179 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c27994, size 0x18c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c27b20, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___JoinEchoChannelAsync_d__179();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "chatCapability", ty: "::Unity::Services::Vivox::ChatCapability",
  // modifiers: "", def_value: None }, CppParam { name: "channelOptions", ty: "::Unity::Services::Vivox::ChannelOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___JoinEchoChannelAsync_d__179(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW channelName,
                                                                 ::Unity::Services::Vivox::ChatCapability chatCapability, ::Unity::Services::Vivox::ChannelOptions* channelOptions,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field channelName, offset: 0x28, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field chatCapability, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChatCapability chatCapability;

  /// @brief Field channelOptions, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelOptions* channelOptions;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, channelName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, chatCapability) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, channelOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<JoinChannelAsync>d__180
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<JoinChannelAsync>d__180
struct CORDL_TYPE __VivoxServiceInternal___JoinChannelAsync_d__180 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c27b2c, size 0x554, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2848c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___JoinChannelAsync_d__180();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelOptions", ty: "::Unity::Services::Vivox::ChannelOptions*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "channelType", ty: "::Unity::Services::Vivox::ChannelType", modifiers: "", def_value: None }, CppParam { name: "positionalChannelProperties",
  // ty: "::Unity::Services::Vivox::Channel3DProperties*", modifiers: "", def_value: None }, CppParam { name: "chatCapability", ty: "::Unity::Services::Vivox::ChatCapability", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___JoinChannelAsync_d__180(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::ChannelOptions* channelOptions, ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::StringW channelName,
                                                             ::Unity::Services::Vivox::ChannelType channelType, ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties,
                                                             ::Unity::Services::Vivox::ChatCapability chatCapability, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelOptions, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelOptions* channelOptions;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field channelName, offset: 0x30, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field channelType, offset: 0x38, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChannelType channelType;

  /// @brief Field positionalChannelProperties, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties;

  /// @brief Field chatCapability, offset: 0x48, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChatCapability chatCapability;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, 0x58>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, channelOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, channelName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, channelType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, positionalChannelProperties) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, chatCapability) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, __u__1) == 0x50, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LeaveAllChannelsAsync>d__181
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<LeaveAllChannelsAsync>d__181
struct CORDL_TYPE __VivoxServiceInternal___LeaveAllChannelsAsync_d__181 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c28498, size 0x49c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c28934, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___LeaveAllChannelsAsync_d__181();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::__List_1__Enumerator<::Unity::Services::Vivox::IChannelSession*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___LeaveAllChannelsAsync_d__181(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this,
                                                                  ::System::Collections::Generic::__List_1__Enumerator<::Unity::Services::Vivox::IChannelSession*> __7__wrap1,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::Unity::Services::Vivox::IChannelSession*> __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass182_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass182_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass182_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0* New_ctor();

  /// @brief Method <LeaveChannelAsync>b__0, addr 0x1c28948, size 0xb8, virtual false, abstract: false, final false
  inline bool _LeaveChannelAsync_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c28940, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass182_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass182_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass182_0(__VivoxServiceInternal____c__DisplayClass182_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass182_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass182_0(__VivoxServiceInternal____c__DisplayClass182_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<LeaveChannelAsync>d__182
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<LeaveChannelAsync>d__182
struct CORDL_TYPE __VivoxServiceInternal___LeaveChannelAsync_d__182 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c28a00, size 0x3d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c28dd0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___LeaveChannelAsync_d__182();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___LeaveChannelAsync_d__182(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                              ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass183_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass183_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass183_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field voiceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_voiceName, put = __cordl_internal_set_voiceName))::StringW voiceName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0* New_ctor();

  /// @brief Method <TextToSpeechSetVoice>b__0, addr 0x1c28ddc, size 0xac, virtual false, abstract: false, final false
  inline bool _TextToSpeechSetVoice_b__0(::Unity::Services::Vivox::ITTSVoice* v);

  constexpr ::StringW const& __cordl_internal_get_voiceName() const;

  constexpr ::StringW& __cordl_internal_get_voiceName();

  constexpr void __cordl_internal_set_voiceName(::StringW value);

  /// @brief Method .ctor, addr 0x1c1ee24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass183_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass183_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass183_0(__VivoxServiceInternal____c__DisplayClass183_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass183_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass183_0(__VivoxServiceInternal____c__DisplayClass183_0 const&) = delete;

  /// @brief Field voiceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___voiceName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0, ___voiceName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass185_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass185_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass185_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0* New_ctor();

  /// @brief Method <Set3DPosition>b__0, addr 0x1c28e88, size 0x134, virtual false, abstract: false, final false
  inline bool _Set3DPosition_b__0(::Unity::Services::Vivox::IChannelSession* channel);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c1f2dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass185_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass185_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass185_0(__VivoxServiceInternal____c__DisplayClass185_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass185_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass185_0(__VivoxServiceInternal____c__DisplayClass185_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetActiveInputDeviceAsync>d__188
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetActiveInputDeviceAsync>d__188
struct CORDL_TYPE __VivoxServiceInternal___SetActiveInputDeviceAsync_d__188 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c28fbc, size 0x254, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c29210, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetActiveInputDeviceAsync_d__188();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "device", ty: "::Unity::Services::Vivox::VivoxInputDevice*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetActiveInputDeviceAsync_d__188(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                      ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::VivoxInputDevice* device,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field device, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxInputDevice* device;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetActiveOutputDeviceAsync>d__189
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetActiveOutputDeviceAsync>d__189
struct CORDL_TYPE __VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c2921c, size 0x254, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c29470, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "device", ty: "::Unity::Services::Vivox::VivoxOutputDevice*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, ::Unity::Services::Vivox::VivoxOutputDevice* device,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field device, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxOutputDevice* device;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass192_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass192_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass192_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelName, put = __cordl_internal_set_channelName))::StringW channelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0* New_ctor();

  /// @brief Method <SetChannelVolumeAsync>b__0, addr 0x1c29484, size 0xb4, virtual false, abstract: false, final false
  inline bool _SetChannelVolumeAsync_b__0(::Unity::Services::Vivox::IChannelSession* kv);

  constexpr ::StringW const& __cordl_internal_get_channelName() const;

  constexpr ::StringW& __cordl_internal_get_channelName();

  constexpr void __cordl_internal_set_channelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c2947c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass192_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass192_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass192_0(__VivoxServiceInternal____c__DisplayClass192_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass192_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass192_0(__VivoxServiceInternal____c__DisplayClass192_0 const&) = delete;

  /// @brief Field channelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0, ___channelName) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetChannelVolumeAsync>d__192
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetChannelVolumeAsync>d__192
struct CORDL_TYPE __VivoxServiceInternal___SetChannelVolumeAsync_d__192 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c29538, size 0x388, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c298c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetChannelVolumeAsync_d__192();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetChannelVolumeAsync_d__192(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW channelName,
                                                                  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, int32_t value,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x20, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field value, offset: 0x30, size: 0x4, def value: None
  int32_t value;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, channelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<EnableAutoVoiceActivityDetectionAsync>d__193
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<EnableAutoVoiceActivityDetectionAsync>d__193
struct CORDL_TYPE __VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c298cc, size 0x224, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c29af0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<DisableAutoVoiceActivityDetectionAsync>d__194
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<DisableAutoVoiceActivityDetectionAsync>d__194
struct CORDL_TYPE __VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c29afc, size 0x224, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c29d20, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::Unity::Services::Vivox::VivoxServiceInternal* __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetVoiceActivityDetectionPropertiesAsync>d__195
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxServiceInternal::<SetVoiceActivityDetectionPropertiesAsync>d__195
struct CORDL_TYPE __VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c29d2c, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c29f88, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxServiceInternal*", modifiers:
  // "", def_value: None }, CppParam { name: "hangover", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noiseFloor", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "sensitivity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                     ::Unity::Services::Vivox::VivoxServiceInternal* __4__this, int32_t hangover, int32_t noiseFloor,
                                                                                     int32_t sensitivity, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* __4__this;

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
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, hangover) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, noiseFloor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, sensitivity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass208_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass208_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass208_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field participant, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_participant, put = __cordl_internal_set_participant))::Unity::Services::Vivox::IParticipant* participant;

  /// @brief Field relevantChannelName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_relevantChannelName, put = __cordl_internal_set_relevantChannelName))::StringW relevantChannelName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0* New_ctor();

  /// @brief Method <OnParticipantRemoved>b__0, addr 0x1c29f94, size 0x48, virtual false, abstract: false, final false
  inline bool _OnParticipantRemoved_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*> kvp);

  /// @brief Method <OnParticipantRemoved>b__1, addr 0x1c29fdc, size 0xcc, virtual false, abstract: false, final false
  inline bool _OnParticipantRemoved_b__1(::Unity::Services::Vivox::VivoxParticipant* p);

  constexpr ::Unity::Services::Vivox::IParticipant*& __cordl_internal_get_participant();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IParticipant*> const& __cordl_internal_get_participant() const;

  constexpr ::StringW const& __cordl_internal_get_relevantChannelName() const;

  constexpr ::StringW& __cordl_internal_get_relevantChannelName();

  constexpr void __cordl_internal_set_participant(::Unity::Services::Vivox::IParticipant* value);

  constexpr void __cordl_internal_set_relevantChannelName(::StringW value);

  /// @brief Method .ctor, addr 0x1c21f3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass208_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass208_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass208_0(__VivoxServiceInternal____c__DisplayClass208_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass208_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass208_0(__VivoxServiceInternal____c__DisplayClass208_0 const&) = delete;

  /// @brief Field relevantChannelName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___relevantChannelName;

  /// @brief Field participant, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::IParticipant* ___participant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0, ___relevantChannelName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0, ___participant) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass214_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass214_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass214_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field channelNameToLookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channelNameToLookup, put = __cordl_internal_set_channelNameToLookup))::StringW channelNameToLookup;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0* New_ctor();

  /// @brief Method <GetChannelUriByName>b__0, addr 0x1c2a0a8, size 0xb8, virtual false, abstract: false, final false
  inline bool _GetChannelUriByName_b__0(::Unity::Services::Vivox::IChannelSession* c);

  constexpr ::StringW const& __cordl_internal_get_channelNameToLookup() const;

  constexpr ::StringW& __cordl_internal_get_channelNameToLookup();

  constexpr void __cordl_internal_set_channelNameToLookup(::StringW value);

  /// @brief Method .ctor, addr 0x1c222b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass214_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass214_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass214_0(__VivoxServiceInternal____c__DisplayClass214_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass214_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass214_0(__VivoxServiceInternal____c__DisplayClass214_0 const&) = delete;

  /// @brief Field channelNameToLookup, offset: 0x10, size: 0x8, def value: None
  ::StringW ___channelNameToLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0, ___channelNameToLookup) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass215_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VivoxServiceInternal::<>c__DisplayClass215_0*
class CORDL_TYPE __VivoxServiceInternal____c__DisplayClass215_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Func_2<::Unity::Services::Vivox::IParticipant*, bool>* __9__0;

  /// @brief Field participantName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_participantName, put = __cordl_internal_set_participantName))::StringW participantName;

  static inline ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0* New_ctor();

  /// @brief Method <GetParticipantUriByName>b__0, addr 0x1c2a160, size 0x19c, virtual false, abstract: false, final false
  inline bool _GetParticipantUriByName_b__0(::Unity::Services::Vivox::IParticipant* p);

  constexpr ::System::Func_2<::Unity::Services::Vivox::IParticipant*, bool>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Unity::Services::Vivox::IParticipant*, bool>*> const& __cordl_internal_get___9__0() const;

  constexpr ::StringW const& __cordl_internal_get_participantName() const;

  constexpr ::StringW& __cordl_internal_get_participantName();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::Unity::Services::Vivox::IParticipant*, bool>* value);

  constexpr void __cordl_internal_set_participantName(::StringW value);

  /// @brief Method .ctor, addr 0x1c22848, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxServiceInternal____c__DisplayClass215_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass215_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxServiceInternal____c__DisplayClass215_0(__VivoxServiceInternal____c__DisplayClass215_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxServiceInternal____c__DisplayClass215_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxServiceInternal____c__DisplayClass215_0(__VivoxServiceInternal____c__DisplayClass215_0 const&) = delete;

  /// @brief Field participantName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantName;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Unity::Services::Vivox::IParticipant*, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0, ___participantName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VivoxServiceInternal
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxServiceInternal*
class CORDL_TYPE VivoxServiceInternal : public ::System::Object {
public:
  // Declarations
  using _BlockPlayerAsync_d__175 = ::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175;

  using _DeleteChannelTextMessageAsync_d__165 = ::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165;

  using _DeleteDirectTextMessageAsync_d__162 = ::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162;

  using _DisableAutoVoiceActivityDetectionAsync_d__194 = ::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194;

  using _EditChannelTextMessageAsync_d__164 = ::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164;

  using _EditDirectTextMessageAsync_d__161 = ::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161;

  using _EnableAutoVoiceActivityDetectionAsync_d__193 = ::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193;

  using _GetChannelTextMessageHistoryAsync_d__166 = ::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166;

  using _GetConversationsAsync_d__168 = ::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168;

  using _GetDirectTextMessageHistoryAsync_d__167 = ::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167;

  using _InitializeAsync_d__153 = ::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153;

  using _JoinChannelAsync_d__180 = ::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180;

  using _JoinEchoChannelAsync_d__179 = ::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179;

  using _JoinGroupChannelAsync_d__177 = ::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177;

  using _JoinPositionalChannelAsync_d__178 = ::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178;

  using _LeaveAllChannelsAsync_d__181 = ::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181;

  using _LeaveChannelAsync_d__182 = ::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182;

  using _LoginAsync_d__154 = ::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154;

  using _LogoutAsync_d__155 = ::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155;

  using _SendChannelTextMessageAsync_d__163 = ::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163;

  using _SendDirectTextMessageAsync_d__160 = ::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160;

  using _SetActiveInputDeviceAsync_d__188 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188;

  using _SetActiveOutputDeviceAsync_d__189 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189;

  using _SetChannelTransmissionModeAsync_d__156 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156;

  using _SetChannelVolumeAsync_d__192 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192;

  using _SetMessageAsReadAsync_d__169 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169;

  using _SetVoiceActivityDetectionPropertiesAsync_d__195 = ::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195;

  using _UnblockPlayerAsync_d__176 = ::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176;

  using __c = ::Unity::Services::Vivox::__VivoxServiceInternal____c;

  using __c__DisplayClass156_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0;

  using __c__DisplayClass163_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0;

  using __c__DisplayClass164_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0;

  using __c__DisplayClass165_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0;

  using __c__DisplayClass166_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0;

  using __c__DisplayClass182_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0;

  using __c__DisplayClass183_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0;

  using __c__DisplayClass185_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0;

  using __c__DisplayClass192_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0;

  using __c__DisplayClass208_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0;

  using __c__DisplayClass214_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0;

  using __c__DisplayClass215_0 = ::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0;

  __declspec(property(get = get_AccessToken))::StringW AccessToken;

  __declspec(property(get = get_AccessTokenComponent))::Unity::Services::Authentication::Internal::IAccessToken* AccessTokenComponent;

  __declspec(property(get = get_ActiveChannels))::System::Collections::ObjectModel::ReadOnlyDictionary_2<
      ::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>* ActiveChannels;

  __declspec(property(get = get_ActiveInputDevice))::Unity::Services::Vivox::VivoxInputDevice* ActiveInputDevice;

  __declspec(property(get = get_ActiveOutputDevice))::Unity::Services::Vivox::VivoxOutputDevice* ActiveOutputDevice;

  __declspec(property(get = get_AvailableInputDevices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* AvailableInputDevices;

  /// @brief Field AvailableInputDevicesChanged, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AvailableInputDevicesChanged, put = __cordl_internal_set_AvailableInputDevicesChanged))::System::Action* AvailableInputDevicesChanged;

  __declspec(property(get = get_AvailableOutputDevices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* AvailableOutputDevices;

  /// @brief Field AvailableOutputDevicesChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AvailableOutputDevicesChanged, put = __cordl_internal_set_AvailableOutputDevicesChanged))::System::Action* AvailableOutputDevicesChanged;

  /// @brief Field ChannelJoined, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelJoined, put = __cordl_internal_set_ChannelJoined))::System::Action_1<::StringW>* ChannelJoined;

  /// @brief Field ChannelLeft, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelLeft, put = __cordl_internal_set_ChannelLeft))::System::Action_1<::StringW>* ChannelLeft;

  /// @brief Field ChannelMessageDeleted, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelMessageDeleted,
                      put = __cordl_internal_set_ChannelMessageDeleted))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ChannelMessageDeleted;

  /// @brief Field ChannelMessageEdited, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelMessageEdited,
                      put = __cordl_internal_set_ChannelMessageEdited))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ChannelMessageEdited;

  /// @brief Field ChannelMessageReceived, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelMessageReceived,
                      put = __cordl_internal_set_ChannelMessageReceived))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ChannelMessageReceived;

  __declspec(property(get = get_Client, put = set_Client))::Unity::Services::Vivox::Client* Client;

  /// @brief Field ConnectionFailedToRecover, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionFailedToRecover, put = __cordl_internal_set_ConnectionFailedToRecover))::System::Action* ConnectionFailedToRecover;

  /// @brief Field ConnectionRecovered, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionRecovered, put = __cordl_internal_set_ConnectionRecovered))::System::Action* ConnectionRecovered;

  /// @brief Field ConnectionRecovering, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionRecovering, put = __cordl_internal_set_ConnectionRecovering))::System::Action* ConnectionRecovering;

  /// @brief Field DirectedMessageDeleted, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_DirectedMessageDeleted,
                      put = __cordl_internal_set_DirectedMessageDeleted))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* DirectedMessageDeleted;

  /// @brief Field DirectedMessageEdited, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_DirectedMessageEdited,
                      put = __cordl_internal_set_DirectedMessageEdited))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* DirectedMessageEdited;

  /// @brief Field DirectedMessageReceived, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_DirectedMessageReceived,
                      put = __cordl_internal_set_DirectedMessageReceived))::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* DirectedMessageReceived;

  __declspec(property(get = get_Domain, put = set_Domain))::StringW Domain;

  __declspec(property(get = get_EnvironmentId))::StringW EnvironmentId;

  __declspec(property(get = get_EnvironmentIdComponent))::Unity::Services::Authentication::Internal::IEnvironmentId* EnvironmentIdComponent;

  __declspec(property(get = get_ExternalTokenProvider, put = set_ExternalTokenProvider))::Unity::Services::Vivox::IVivoxTokenProvider* ExternalTokenProvider;

  __declspec(property(get = get_HaveVivoxCredentials)) bool HaveVivoxCredentials;

  __declspec(property(get = get_InputDeviceVolume)) int32_t InputDeviceVolume;

  __declspec(property(get = get_InternalTokenProvider, put = set_InternalTokenProvider))::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* InternalTokenProvider;

  __declspec(property(get = get_IsAudioEchoCancellationEnabled)) bool IsAudioEchoCancellationEnabled;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_IsEnvironmentCustom)) bool IsEnvironmentCustom;

  __declspec(property(get = get_IsInputDeviceMuted)) bool IsInputDeviceMuted;

  __declspec(property(get = get_IsLoggedIn)) bool IsLoggedIn;

  __declspec(property(get = get_IsOutputDeviceMuted)) bool IsOutputDeviceMuted;

  __declspec(property(get = get_IsTestMode, put = set_IsTestMode)) bool IsTestMode;

  __declspec(property(get = get_Issuer, put = set_Issuer))::StringW Issuer;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_LastChannelJoinedUri))::StringW LastChannelJoinedUri;

  /// @brief Field LoggedIn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_LoggedIn, put = __cordl_internal_set_LoggedIn))::System::Action* LoggedIn;

  /// @brief Field LoggedOut, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_LoggedOut, put = __cordl_internal_set_LoggedOut))::System::Action* LoggedOut;

  __declspec(property(get = get_OutputDeviceVolume)) int32_t OutputDeviceVolume;

  /// @brief Field ParticipantAddedToChannel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantAddedToChannel,
                      put = __cordl_internal_set_ParticipantAddedToChannel))::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* ParticipantAddedToChannel;

  /// @brief Field ParticipantRemovedFromChannel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantRemovedFromChannel,
                      put = __cordl_internal_set_ParticipantRemovedFromChannel))::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* ParticipantRemovedFromChannel;

  __declspec(property(get = get_PlayerId))::StringW PlayerId;

  __declspec(property(get = get_PlayerIdComponent))::Unity::Services::Authentication::Internal::IPlayerId* PlayerIdComponent;

  __declspec(property(get = get_Server, put = set_Server))::StringW Server;

  __declspec(property(get = get_SignedInPlayerId))::StringW SignedInPlayerId;

  __declspec(property(get = get_TextToSpeechAvailableVoices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* TextToSpeechAvailableVoices;

  __declspec(property(get = get_TextToSpeechCurrentVoice))::StringW TextToSpeechCurrentVoice;

  __declspec(property(get = get_TransmittingChannels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* TransmittingChannels;

  /// @brief Field UserInputDeviceMuteStateChanged, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_UserInputDeviceMuteStateChanged, put = __cordl_internal_set_UserInputDeviceMuteStateChanged))::System::Action_1<bool>* UserInputDeviceMuteStateChanged;

  /// @brief Field <AccessTokenComponent>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessTokenComponent_k__BackingField,
                      put = __cordl_internal_set__AccessTokenComponent_k__BackingField))::Unity::Services::Authentication::Internal::IAccessToken* _AccessTokenComponent_k__BackingField;

  /// @brief Field <Client>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__Client_k__BackingField, put = __cordl_internal_set__Client_k__BackingField))::Unity::Services::Vivox::Client* _Client_k__BackingField;

  /// @brief Field <Domain>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__Domain_k__BackingField, put = __cordl_internal_set__Domain_k__BackingField))::StringW _Domain_k__BackingField;

  /// @brief Field <EnvironmentIdComponent>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__EnvironmentIdComponent_k__BackingField,
                      put = __cordl_internal_set__EnvironmentIdComponent_k__BackingField))::Unity::Services::Authentication::Internal::IEnvironmentId* _EnvironmentIdComponent_k__BackingField;

  /// @brief Field <ExternalTokenProvider>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__ExternalTokenProvider_k__BackingField,
                      put = __cordl_internal_set__ExternalTokenProvider_k__BackingField))::Unity::Services::Vivox::IVivoxTokenProvider* _ExternalTokenProvider_k__BackingField;

  /// @brief Field <InternalTokenProvider>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__InternalTokenProvider_k__BackingField,
                      put = __cordl_internal_set__InternalTokenProvider_k__BackingField))::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* _InternalTokenProvider_k__BackingField;

  /// @brief Field <IsEnvironmentCustom>k__BackingField, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEnvironmentCustom_k__BackingField, put = __cordl_internal_set__IsEnvironmentCustom_k__BackingField)) bool _IsEnvironmentCustom_k__BackingField;

  /// @brief Field <IsTestMode>k__BackingField, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsTestMode_k__BackingField, put = __cordl_internal_set__IsTestMode_k__BackingField)) bool _IsTestMode_k__BackingField;

  /// @brief Field <Issuer>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__Issuer_k__BackingField, put = __cordl_internal_set__Issuer_k__BackingField))::StringW _Issuer_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <PlayerIdComponent>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerIdComponent_k__BackingField,
                      put = __cordl_internal_set__PlayerIdComponent_k__BackingField))::Unity::Services::Authentication::Internal::IPlayerId* _PlayerIdComponent_k__BackingField;

  /// @brief Field <Server>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__Server_k__BackingField, put = __cordl_internal_set__Server_k__BackingField))::StringW _Server_k__BackingField;

  /// @brief Field _accessToken, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__accessToken, put = __cordl_internal_set__accessToken))::StringW _accessToken;

  /// @brief Field m_ActiveChannels, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveChannels, put = __cordl_internal_set_m_ActiveChannels))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>* m_ActiveChannels;

  /// @brief Field m_Initialized, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Initialized, put = __cordl_internal_set_m_Initialized)) bool m_Initialized;

  /// @brief Field m_LastChannelJoinedUri, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastChannelJoinedUri, put = __cordl_internal_set_m_LastChannelJoinedUri))::StringW m_LastChannelJoinedUri;

  /// @brief Field m_LoginSession, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoginSession, put = __cordl_internal_set_m_LoginSession))::Unity::Services::Vivox::ILoginSession* m_LoginSession;

  /// @brief Convert operator to "::Unity::Services::Vivox::IVivoxService"
  constexpr operator ::Unity::Services::Vivox::IVivoxService*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IVivoxServiceInternal"
  constexpr operator ::Unity::Services::Vivox::IVivoxServiceInternal*() noexcept;

  /// @brief Method BlockPlayerAsync, addr 0x1c1e370, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* BlockPlayerAsync(::StringW playerId);

  /// @brief Method DeleteChannelTextMessageAsync, addr 0x1c1d75c, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteChannelTextMessageAsync(::StringW channelName, ::StringW messageId);

  /// @brief Method DeleteDirectTextMessageAsync, addr 0x1c1d4a0, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteDirectTextMessageAsync(::StringW messageId);

  /// @brief Method DisableAcousticEchoCancellation, addr 0x1c1f67c, size 0x6c, virtual true, abstract: false, final true
  inline void DisableAcousticEchoCancellation();

  /// @brief Method DisableAutoVoiceActivityDetectionAsync, addr 0x1c1fc58, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisableAutoVoiceActivityDetectionAsync();

  /// @brief Method EditChannelTextMessageAsync, addr 0x1c1d66c, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* EditChannelTextMessageAsync(::StringW channelName, ::StringW messageId, ::StringW newMessage);

  /// @brief Method EditDirectTextMessageAsync, addr 0x1c1d3c4, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* EditDirectTextMessageAsync(::StringW messageId, ::StringW newMessage);

  /// @brief Method EnableAcousticEchoCancellation, addr 0x1c1f564, size 0x6c, virtual true, abstract: false, final true
  inline void EnableAcousticEchoCancellation();

  /// @brief Method EnableAutoVoiceActivityDetectionAsync, addr 0x1c1fb90, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* EnableAutoVoiceActivityDetectionAsync();

  /// @brief Method GetChannelTextMessageHistoryAsync, addr 0x1c1d838, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetChannelTextMessageHistoryAsync(::StringW channelName, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions);

  /// @brief Method GetChannelUriByName, addr 0x1c2205c, size 0x258, virtual true, abstract: false, final true
  inline ::StringW GetChannelUriByName(::StringW channelName);

  /// @brief Method GetConversationsAsync, addr 0x1c1da60, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*
  GetConversationsAsync(::Unity::Services::Vivox::ConversationQueryOptions* queryOptions);

  /// @brief Method GetDirectTextMessageHistoryAsync, addr 0x1c1d94c, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetDirectTextMessageHistoryAsync(::StringW playerId, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions);

  /// @brief Method GetInputDevices, addr 0x1c1b970, size 0x474, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* GetInputDevices();

  /// @brief Method GetOutputDevices, addr 0x1c1bde8, size 0x474, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* GetOutputDevices();

  /// @brief Method GetParticipantUriByName, addr 0x1c222bc, size 0x58c, virtual true, abstract: false, final true
  inline ::StringW GetParticipantUriByName(::StringW participantName);

  /// @brief Method GetTransmittingChannels, addr 0x1c1aeb8, size 0x40c, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* GetTransmittingChannels();

  /// @brief Method HandleLoginStateChange, addr 0x1c2084c, size 0x454, virtual true, abstract: false, final true
  inline void HandleLoginStateChange(::Unity::Services::Vivox::ILoginSession* loginSession);

  /// @brief Method HandleRecoveryStateChange, addr 0x1c20ca0, size 0xf4, virtual true, abstract: false, final true
  inline void HandleRecoveryStateChange(::Unity::Services::Vivox::ILoginSession* loginSession);

  /// @brief Method InitializeAsync, addr 0x1c1ca58, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Vivox::VivoxConfigurationOptions* options);

  /// @brief Method JoinChannelAsync, addr 0x1c1e808, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* JoinChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability, ::Unity::Services::Vivox::ChannelType channelType,
                                                            ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties, ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method JoinEchoChannelAsync, addr 0x1c1e714, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* JoinEchoChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method JoinGroupChannelAsync, addr 0x1c1e528, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* JoinGroupChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                 ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method JoinPositionalChannelAsync, addr 0x1c1e61c, size 0xf8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* JoinPositionalChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                      ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties,
                                                                      ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method LeaveAllChannelsAsync, addr 0x1c1e914, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LeaveAllChannelsAsync();

  /// @brief Method LeaveChannelAsync, addr 0x1c1e9e0, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LeaveChannelAsync(::StringW channelName);

  /// @brief Method LoginAsync, addr 0x1c1cb34, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LoginAsync(::Unity::Services::Vivox::LoginOptions* loginOptions);

  /// @brief Method LogoutAsync, addr 0x1c1cc10, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LogoutAsync();

  /// @brief Method MuteInputDevice, addr 0x1c1dc54, size 0x1dc, virtual true, abstract: false, final true
  inline void MuteInputDevice();

  /// @brief Method MuteOutputDevice, addr 0x1c1e0d0, size 0x150, virtual true, abstract: false, final true
  inline void MuteOutputDevice();

  static inline ::Unity::Services::Vivox::VivoxServiceInternal* New_ctor(::StringW server, ::StringW domain, ::StringW issuer, ::StringW token, bool isEnvironmentCustom, bool isTestMode,
                                                                         ::Unity::Services::Authentication::Internal::IAccessToken* accessTokenComponent,
                                                                         ::Unity::Services::Authentication::Internal::IPlayerId* playerIdComponent,
                                                                         ::Unity::Services::Authentication::Internal::IEnvironmentId* environmentIdComponent);

  /// @brief Method OnAvailableInputDevicesChanged, addr 0x1c21f44, size 0x8c, virtual true, abstract: false, final true
  inline void OnAvailableInputDevicesChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnAvailableOutputDevicesChanged, addr 0x1c21fd0, size 0x8c, virtual true, abstract: false, final true
  inline void OnAvailableOutputDevicesChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnChannelMessageDeleted, addr 0x1c21754, size 0x24, virtual false, abstract: false, final false
  inline void OnChannelMessageDeleted(::System::Object* sender, ::Unity::Services::Vivox::VivoxMessage* message);

  /// @brief Method OnChannelMessageEdited, addr 0x1c21778, size 0x24, virtual false, abstract: false, final false
  inline void OnChannelMessageEdited(::System::Object* sender, ::Unity::Services::Vivox::VivoxMessage* message);

  /// @brief Method OnChannelMessageReceived, addr 0x1c216bc, size 0x98, virtual true, abstract: false, final true
  inline void OnChannelMessageReceived(::System::Object* sender, ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<::Unity::Services::Vivox::IChannelTextMessage*>* textMessage);

  /// @brief Method OnChannelPropertyChanged, addr 0x1c20d94, size 0x928, virtual true, abstract: false, final true
  inline void OnChannelPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnDirectedMessageDeleted, addr 0x1c21834, size 0x24, virtual false, abstract: false, final false
  inline void OnDirectedMessageDeleted(::System::Object* sender, ::Unity::Services::Vivox::VivoxMessage* message);

  /// @brief Method OnDirectedMessageEdited, addr 0x1c21858, size 0x24, virtual false, abstract: false, final false
  inline void OnDirectedMessageEdited(::System::Object* sender, ::Unity::Services::Vivox::VivoxMessage* message);

  /// @brief Method OnDirectedMessageReceived, addr 0x1c2179c, size 0x98, virtual true, abstract: false, final true
  inline void OnDirectedMessageReceived(::System::Object* sender, ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<::Unity::Services::Vivox::IDirectedTextMessage*>* textMessage);

  /// @brief Method OnLoginSessionPropertyChanged, addr 0x1c20734, size 0x118, virtual true, abstract: false, final true
  inline void OnLoginSessionPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* propertyChangedEventArgs);

  /// @brief Method OnParticipantAdded, addr 0x1c2187c, size 0x300, virtual true, abstract: false, final true
  inline void OnParticipantAdded(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg);

  /// @brief Method OnParticipantRemoved, addr 0x1c21b7c, size 0x3c0, virtual true, abstract: false, final true
  inline void OnParticipantRemoved(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg);

  /// @brief Method SendChannelTextMessageAsync, addr 0x1c1d57c, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SendChannelTextMessageAsync(::StringW channelName, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method SendDirectTextMessageAsync, addr 0x1c1d2d4, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SendDirectTextMessageAsync(::StringW playerId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method Set3DPosition, addr 0x1c1ee2c, size 0xf4, virtual true, abstract: false, final true
  inline void Set3DPosition(::UnityEngine::GameObject* participantObject, ::StringW channelName, bool allowPanning);

  /// @brief Method Set3DPosition, addr 0x1c1ef20, size 0x3bc, virtual true, abstract: false, final true
  inline void Set3DPosition(::UnityEngine::Vector3 speakerPos, ::UnityEngine::Vector3 listenerPos, ::UnityEngine::Vector3 listenerAtOrient, ::UnityEngine::Vector3 listenerUpOrient,
                            ::StringW channelName, bool allowPanning);

  /// @brief Method SetActiveInputDeviceAsync, addr 0x1c1f6e8, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetActiveInputDeviceAsync(::Unity::Services::Vivox::VivoxInputDevice* device);

  /// @brief Method SetActiveOutputDeviceAsync, addr 0x1c1f7c4, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetActiveOutputDeviceAsync(::Unity::Services::Vivox::VivoxOutputDevice* device);

  /// @brief Method SetChannelEventBindings, addr 0x1c1fe0c, size 0x928, virtual true, abstract: false, final true
  inline void SetChannelEventBindings(::Unity::Services::Vivox::IChannelSession* channel, bool doBind);

  /// @brief Method SetChannelTransmissionModeAsync, addr 0x1c1ccd8, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetChannelTransmissionModeAsync(::Unity::Services::Vivox::TransmissionMode transmissionMode, ::StringW channelName);

  /// @brief Method SetChannelVolumeAsync, addr 0x1c1fab0, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetChannelVolumeAsync(::StringW channelName, int32_t value);

  /// @brief Method SetInputDeviceVolume, addr 0x1c1f8a0, size 0x108, virtual true, abstract: false, final true
  inline void SetInputDeviceVolume(int32_t value);

  /// @brief Method SetMessageAsReadAsync, addr 0x1c1db5c, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetMessageAsReadAsync(::Unity::Services::Vivox::VivoxMessage* message, ::System::Nullable_1<::System::DateTime> seenAt);

  /// @brief Method SetOutputDeviceVolume, addr 0x1c1f9a8, size 0x108, virtual true, abstract: false, final true
  inline void SetOutputDeviceVolume(int32_t value);

  /// @brief Method SetTokenProvider, addr 0x1c1dc4c, size 0x8, virtual true, abstract: false, final true
  inline void SetTokenProvider(::Unity::Services::Vivox::IVivoxTokenProvider* provider);

  /// @brief Method SetVoiceActivityDetectionPropertiesAsync, addr 0x1c1fd20, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetVoiceActivityDetectionPropertiesAsync(int32_t hangover, int32_t noiseFloor, int32_t sensitivity);

  /// @brief Method TextToSpeechCancelAllMessages, addr 0x1c1d028, size 0x14c, virtual true, abstract: false, final true
  inline void TextToSpeechCancelAllMessages();

  /// @brief Method TextToSpeechCancelMessages, addr 0x1c1d174, size 0x160, virtual true, abstract: false, final true
  inline void TextToSpeechCancelMessages(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method TextToSpeechSendMessage, addr 0x1c1cdb8, size 0x198, virtual true, abstract: false, final true
  inline void TextToSpeechSendMessage(::StringW message, ::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method TextToSpeechSetVoice, addr 0x1c1eabc, size 0x368, virtual true, abstract: false, final true
  inline void TextToSpeechSetVoice(::StringW voiceName);

  /// @brief Method UnblockPlayerAsync, addr 0x1c1e44c, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* UnblockPlayerAsync(::StringW playerId);

  /// @brief Method UnmuteInputDevice, addr 0x1c1def4, size 0x1dc, virtual true, abstract: false, final true
  inline void UnmuteInputDevice();

  /// @brief Method UnmuteOutputDevice, addr 0x1c1e220, size 0x150, virtual true, abstract: false, final true
  inline void UnmuteOutputDevice();

  /// @brief Method ValidateIsInChannel, addr 0x1c1f2e4, size 0x280, virtual false, abstract: false, final false
  inline bool ValidateIsInChannel(::StringW channelName, ::StringW memberName);

  /// @brief Method ValidateIsInitialized, addr 0x1c1de30, size 0xc4, virtual false, abstract: false, final false
  inline bool ValidateIsInitialized(::StringW memberName);

  /// @brief Method ValidateIsLoggedIn, addr 0x1c1cf50, size 0xd8, virtual false, abstract: false, final false
  inline bool ValidateIsLoggedIn(::StringW memberName);

  /// @brief Method ValidateIsLoggedOut, addr 0x1c22850, size 0xd8, virtual false, abstract: false, final false
  inline bool ValidateIsLoggedOut(::StringW memberName);

  constexpr ::System::Action*& __cordl_internal_get_AvailableInputDevicesChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_AvailableInputDevicesChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_AvailableOutputDevicesChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_AvailableOutputDevicesChanged() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_ChannelJoined();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_ChannelJoined() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_ChannelLeft();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_ChannelLeft() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_ChannelMessageDeleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_ChannelMessageDeleted() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_ChannelMessageEdited();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_ChannelMessageEdited() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_ChannelMessageReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_ChannelMessageReceived() const;

  constexpr ::System::Action*& __cordl_internal_get_ConnectionFailedToRecover();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ConnectionFailedToRecover() const;

  constexpr ::System::Action*& __cordl_internal_get_ConnectionRecovered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ConnectionRecovered() const;

  constexpr ::System::Action*& __cordl_internal_get_ConnectionRecovering();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ConnectionRecovering() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_DirectedMessageDeleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_DirectedMessageDeleted() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_DirectedMessageEdited();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_DirectedMessageEdited() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get_DirectedMessageReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get_DirectedMessageReceived() const;

  constexpr ::System::Action*& __cordl_internal_get_LoggedIn();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_LoggedIn() const;

  constexpr ::System::Action*& __cordl_internal_get_LoggedOut();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_LoggedOut() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>*& __cordl_internal_get_ParticipantAddedToChannel();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>*> const& __cordl_internal_get_ParticipantAddedToChannel() const;

  constexpr ::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>*& __cordl_internal_get_ParticipantRemovedFromChannel();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>*> const& __cordl_internal_get_ParticipantRemovedFromChannel() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_UserInputDeviceMuteStateChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_UserInputDeviceMuteStateChanged() const;

  constexpr ::Unity::Services::Authentication::Internal::IAccessToken*& __cordl_internal_get__AccessTokenComponent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Authentication::Internal::IAccessToken*> const& __cordl_internal_get__AccessTokenComponent_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::Client*& __cordl_internal_get__Client_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& __cordl_internal_get__Client_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Domain_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Domain_k__BackingField();

  constexpr ::Unity::Services::Authentication::Internal::IEnvironmentId*& __cordl_internal_get__EnvironmentIdComponent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Authentication::Internal::IEnvironmentId*> const& __cordl_internal_get__EnvironmentIdComponent_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::IVivoxTokenProvider*& __cordl_internal_get__ExternalTokenProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IVivoxTokenProvider*> const& __cordl_internal_get__ExternalTokenProvider_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*& __cordl_internal_get__InternalTokenProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*> const& __cordl_internal_get__InternalTokenProvider_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsEnvironmentCustom_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEnvironmentCustom_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsTestMode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsTestMode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Issuer_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Issuer_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::Unity::Services::Authentication::Internal::IPlayerId*& __cordl_internal_get__PlayerIdComponent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Authentication::Internal::IPlayerId*> const& __cordl_internal_get__PlayerIdComponent_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Server_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Server_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__accessToken() const;

  constexpr ::StringW& __cordl_internal_get__accessToken();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>*& __cordl_internal_get_m_ActiveChannels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>*> const&
  __cordl_internal_get_m_ActiveChannels() const;

  constexpr bool const& __cordl_internal_get_m_Initialized() const;

  constexpr bool& __cordl_internal_get_m_Initialized();

  constexpr ::StringW const& __cordl_internal_get_m_LastChannelJoinedUri() const;

  constexpr ::StringW& __cordl_internal_get_m_LastChannelJoinedUri();

  constexpr ::Unity::Services::Vivox::ILoginSession*& __cordl_internal_get_m_LoginSession();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ILoginSession*> const& __cordl_internal_get_m_LoginSession() const;

  constexpr void __cordl_internal_set_AvailableInputDevicesChanged(::System::Action* value);

  constexpr void __cordl_internal_set_AvailableOutputDevicesChanged(::System::Action* value);

  constexpr void __cordl_internal_set_ChannelJoined(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_ChannelLeft(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_ChannelMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_ChannelMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_ChannelMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_ConnectionFailedToRecover(::System::Action* value);

  constexpr void __cordl_internal_set_ConnectionRecovered(::System::Action* value);

  constexpr void __cordl_internal_set_ConnectionRecovering(::System::Action* value);

  constexpr void __cordl_internal_set_DirectedMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_DirectedMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_DirectedMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  constexpr void __cordl_internal_set_LoggedIn(::System::Action* value);

  constexpr void __cordl_internal_set_LoggedOut(::System::Action* value);

  constexpr void __cordl_internal_set_ParticipantAddedToChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  constexpr void __cordl_internal_set_ParticipantRemovedFromChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  constexpr void __cordl_internal_set_UserInputDeviceMuteStateChanged(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__AccessTokenComponent_k__BackingField(::Unity::Services::Authentication::Internal::IAccessToken* value);

  constexpr void __cordl_internal_set__Client_k__BackingField(::Unity::Services::Vivox::Client* value);

  constexpr void __cordl_internal_set__Domain_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__EnvironmentIdComponent_k__BackingField(::Unity::Services::Authentication::Internal::IEnvironmentId* value);

  constexpr void __cordl_internal_set__ExternalTokenProvider_k__BackingField(::Unity::Services::Vivox::IVivoxTokenProvider* value);

  constexpr void __cordl_internal_set__InternalTokenProvider_k__BackingField(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* value);

  constexpr void __cordl_internal_set__IsEnvironmentCustom_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsTestMode_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Issuer_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PlayerIdComponent_k__BackingField(::Unity::Services::Authentication::Internal::IPlayerId* value);

  constexpr void __cordl_internal_set__Server_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__accessToken(::StringW value);

  constexpr void
  __cordl_internal_set_m_ActiveChannels(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>* value);

  constexpr void __cordl_internal_set_m_Initialized(bool value);

  constexpr void __cordl_internal_set_m_LastChannelJoinedUri(::StringW value);

  constexpr void __cordl_internal_set_m_LoginSession(::Unity::Services::Vivox::ILoginSession* value);

  /// @brief Method .ctor, addr 0x1c190ac, size 0x284, virtual false, abstract: false, final false
  inline void _ctor(::StringW server, ::StringW domain, ::StringW issuer, ::StringW token, bool isEnvironmentCustom, bool isTestMode,
                    ::Unity::Services::Authentication::Internal::IAccessToken* accessTokenComponent, ::Unity::Services::Authentication::Internal::IPlayerId* playerIdComponent,
                    ::Unity::Services::Authentication::Internal::IEnvironmentId* environmentIdComponent);

  /// @brief Method add_AvailableInputDevicesChanged, addr 0x1c193c4, size 0x9c, virtual true, abstract: false, final true
  inline void add_AvailableInputDevicesChanged(::System::Action* value);

  /// @brief Method add_AvailableOutputDevicesChanged, addr 0x1c194fc, size 0x9c, virtual true, abstract: false, final true
  inline void add_AvailableOutputDevicesChanged(::System::Action* value);

  /// @brief Method add_ChannelJoined, addr 0x1c19c4c, size 0xb0, virtual true, abstract: false, final true
  inline void add_ChannelJoined(::System::Action_1<::StringW>* value);

  /// @brief Method add_ChannelLeft, addr 0x1c19dac, size 0xb0, virtual true, abstract: false, final true
  inline void add_ChannelLeft(::System::Action_1<::StringW>* value);

  /// @brief Method add_ChannelMessageDeleted, addr 0x1c1a48c, size 0xb0, virtual true, abstract: false, final true
  inline void add_ChannelMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ChannelMessageEdited, addr 0x1c1a32c, size 0xb0, virtual true, abstract: false, final true
  inline void add_ChannelMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ChannelMessageReceived, addr 0x1c1a1cc, size 0xb0, virtual true, abstract: false, final true
  inline void add_ChannelMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ConnectionFailedToRecover, addr 0x1c19b14, size 0x9c, virtual true, abstract: false, final true
  inline void add_ConnectionFailedToRecover(::System::Action* value);

  /// @brief Method add_ConnectionRecovered, addr 0x1c199dc, size 0x9c, virtual true, abstract: false, final true
  inline void add_ConnectionRecovered(::System::Action* value);

  /// @brief Method add_ConnectionRecovering, addr 0x1c198a4, size 0x9c, virtual true, abstract: false, final true
  inline void add_ConnectionRecovering(::System::Action* value);

  /// @brief Method add_DirectedMessageDeleted, addr 0x1c1a8ac, size 0xb0, virtual true, abstract: false, final true
  inline void add_DirectedMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageEdited, addr 0x1c1a74c, size 0xb0, virtual true, abstract: false, final true
  inline void add_DirectedMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageReceived, addr 0x1c1a5ec, size 0xb0, virtual true, abstract: false, final true
  inline void add_DirectedMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_LoggedIn, addr 0x1c19634, size 0x9c, virtual true, abstract: false, final true
  inline void add_LoggedIn(::System::Action* value);

  /// @brief Method add_LoggedOut, addr 0x1c1976c, size 0x9c, virtual true, abstract: false, final true
  inline void add_LoggedOut(::System::Action* value);

  /// @brief Method add_ParticipantAddedToChannel, addr 0x1c19f0c, size 0xb0, virtual true, abstract: false, final true
  inline void add_ParticipantAddedToChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method add_ParticipantRemovedFromChannel, addr 0x1c1a06c, size 0xb0, virtual true, abstract: false, final true
  inline void add_ParticipantRemovedFromChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method add_UserInputDeviceMuteStateChanged, addr 0x1c1c58c, size 0xb0, virtual true, abstract: false, final true
  inline void add_UserInputDeviceMuteStateChanged(::System::Action_1<bool>* value);

  /// @brief Method get_AccessToken, addr 0x1c1c700, size 0xe4, virtual true, abstract: false, final true
  inline ::StringW get_AccessToken();

  /// @brief Method get_AccessTokenComponent, addr 0x1c1ca20, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Authentication::Internal::IAccessToken* get_AccessTokenComponent();

  /// @brief Method get_ActiveChannels, addr 0x1c1acd0, size 0x1dc, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>*
  get_ActiveChannels();

  /// @brief Method get_ActiveInputDevice, addr 0x1c1b764, size 0x104, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::VivoxInputDevice* get_ActiveInputDevice();

  /// @brief Method get_ActiveOutputDevice, addr 0x1c1b868, size 0x104, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::VivoxOutputDevice* get_ActiveOutputDevice();

  /// @brief Method get_AvailableInputDevices, addr 0x1c1b96c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* get_AvailableInputDevices();

  /// @brief Method get_AvailableOutputDevices, addr 0x1c1bde4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* get_AvailableOutputDevices();

  /// @brief Method get_Client, addr 0x1c1c97c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Client* get_Client();

  /// @brief Method get_Domain, addr 0x1c1c99c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Domain();

  /// @brief Method get_EnvironmentId, addr 0x1c1c890, size 0xac, virtual true, abstract: false, final true
  inline ::StringW get_EnvironmentId();

  /// @brief Method get_EnvironmentIdComponent, addr 0x1c1ca30, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Authentication::Internal::IEnvironmentId* get_EnvironmentIdComponent();

  /// @brief Method get_ExternalTokenProvider, addr 0x1c1ca48, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IVivoxTokenProvider* get_ExternalTokenProvider();

  /// @brief Method get_HaveVivoxCredentials, addr 0x1c1c9d4, size 0x4c, virtual true, abstract: false, final true
  inline bool get_HaveVivoxCredentials();

  /// @brief Method get_InputDeviceVolume, addr 0x1c1c25c, size 0xcc, virtual true, abstract: false, final true
  inline int32_t get_InputDeviceVolume();

  /// @brief Method get_InternalTokenProvider, addr 0x1c1ca38, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* get_InternalTokenProvider();

  /// @brief Method get_IsAudioEchoCancellationEnabled, addr 0x1c1aba0, size 0x38, virtual true, abstract: false, final true
  inline bool get_IsAudioEchoCancellationEnabled();

  /// @brief Method get_IsAuthenticated, addr 0x1c1c93c, size 0x40, virtual true, abstract: false, final true
  inline bool get_IsAuthenticated();

  /// @brief Method get_IsEnvironmentCustom, addr 0x1c1c9cc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsEnvironmentCustom();

  /// @brief Method get_IsInputDeviceMuted, addr 0x1c1c3f4, size 0xcc, virtual true, abstract: false, final true
  inline bool get_IsInputDeviceMuted();

  /// @brief Method get_IsLoggedIn, addr 0x1c1aa0c, size 0xb4, virtual true, abstract: false, final true
  inline bool get_IsLoggedIn();

  /// @brief Method get_IsOutputDeviceMuted, addr 0x1c1c4c0, size 0xcc, virtual true, abstract: false, final true
  inline bool get_IsOutputDeviceMuted();

  /// @brief Method get_IsTestMode, addr 0x1c1c6ec, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsTestMode();

  /// @brief Method get_Issuer, addr 0x1c1c9ac, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Issuer();

  /// @brief Method get_Key, addr 0x1c1c9bc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_LastChannelJoinedUri, addr 0x1c1aeac, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_LastChannelJoinedUri();

  /// @brief Method get_OutputDeviceVolume, addr 0x1c1c328, size 0xcc, virtual true, abstract: false, final true
  inline int32_t get_OutputDeviceVolume();

  /// @brief Method get_PlayerId, addr 0x1c1c7e4, size 0xac, virtual true, abstract: false, final true
  inline ::StringW get_PlayerId();

  /// @brief Method get_PlayerIdComponent, addr 0x1c1ca28, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Authentication::Internal::IPlayerId* get_PlayerIdComponent();

  /// @brief Method get_Server, addr 0x1c1c98c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Server();

  /// @brief Method get_SignedInPlayerId, addr 0x1c1aac0, size 0xe0, virtual true, abstract: false, final true
  inline ::StringW get_SignedInPlayerId();

  /// @brief Method get_TextToSpeechAvailableVoices, addr 0x1c1b2c4, size 0x2d8, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_TextToSpeechAvailableVoices();

  /// @brief Method get_TextToSpeechCurrentVoice, addr 0x1c1b59c, size 0x1c8, virtual true, abstract: false, final true
  inline ::StringW get_TextToSpeechCurrentVoice();

  /// @brief Method get_TransmittingChannels, addr 0x1c1aeb4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_TransmittingChannels();

  /// @brief Convert to "::Unity::Services::Vivox::IVivoxService"
  constexpr ::Unity::Services::Vivox::IVivoxService* i___Unity__Services__Vivox__IVivoxService() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IVivoxServiceInternal"
  constexpr ::Unity::Services::Vivox::IVivoxServiceInternal* i___Unity__Services__Vivox__IVivoxServiceInternal() noexcept;

  /// @brief Method remove_AvailableInputDevicesChanged, addr 0x1c19460, size 0x9c, virtual true, abstract: false, final true
  inline void remove_AvailableInputDevicesChanged(::System::Action* value);

  /// @brief Method remove_AvailableOutputDevicesChanged, addr 0x1c19598, size 0x9c, virtual true, abstract: false, final true
  inline void remove_AvailableOutputDevicesChanged(::System::Action* value);

  /// @brief Method remove_ChannelJoined, addr 0x1c19cfc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ChannelJoined(::System::Action_1<::StringW>* value);

  /// @brief Method remove_ChannelLeft, addr 0x1c19e5c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ChannelLeft(::System::Action_1<::StringW>* value);

  /// @brief Method remove_ChannelMessageDeleted, addr 0x1c1a53c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ChannelMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ChannelMessageEdited, addr 0x1c1a3dc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ChannelMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ChannelMessageReceived, addr 0x1c1a27c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ChannelMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ConnectionFailedToRecover, addr 0x1c19bb0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_ConnectionFailedToRecover(::System::Action* value);

  /// @brief Method remove_ConnectionRecovered, addr 0x1c19a78, size 0x9c, virtual true, abstract: false, final true
  inline void remove_ConnectionRecovered(::System::Action* value);

  /// @brief Method remove_ConnectionRecovering, addr 0x1c19940, size 0x9c, virtual true, abstract: false, final true
  inline void remove_ConnectionRecovering(::System::Action* value);

  /// @brief Method remove_DirectedMessageDeleted, addr 0x1c1a95c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_DirectedMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageEdited, addr 0x1c1a7fc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_DirectedMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageReceived, addr 0x1c1a69c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_DirectedMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_LoggedIn, addr 0x1c196d0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_LoggedIn(::System::Action* value);

  /// @brief Method remove_LoggedOut, addr 0x1c19808, size 0x9c, virtual true, abstract: false, final true
  inline void remove_LoggedOut(::System::Action* value);

  /// @brief Method remove_ParticipantAddedToChannel, addr 0x1c19fbc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ParticipantAddedToChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method remove_ParticipantRemovedFromChannel, addr 0x1c1a11c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_ParticipantRemovedFromChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method remove_UserInputDeviceMuteStateChanged, addr 0x1c1c63c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_UserInputDeviceMuteStateChanged(::System::Action_1<bool>* value);

  /// @brief Method set_Client, addr 0x1c1c984, size 0x8, virtual true, abstract: false, final true
  inline void set_Client(::Unity::Services::Vivox::Client* value);

  /// @brief Method set_Domain, addr 0x1c1c9a4, size 0x8, virtual true, abstract: false, final true
  inline void set_Domain(::StringW value);

  /// @brief Method set_ExternalTokenProvider, addr 0x1c1ca50, size 0x8, virtual true, abstract: false, final true
  inline void set_ExternalTokenProvider(::Unity::Services::Vivox::IVivoxTokenProvider* value);

  /// @brief Method set_InternalTokenProvider, addr 0x1c1ca40, size 0x8, virtual true, abstract: false, final true
  inline void set_InternalTokenProvider(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* value);

  /// @brief Method set_IsTestMode, addr 0x1c1c6f4, size 0xc, virtual true, abstract: false, final true
  inline void set_IsTestMode(bool value);

  /// @brief Method set_Issuer, addr 0x1c1c9b4, size 0x8, virtual true, abstract: false, final true
  inline void set_Issuer(::StringW value);

  /// @brief Method set_Key, addr 0x1c1c9c4, size 0x8, virtual true, abstract: false, final true
  inline void set_Key(::StringW value);

  /// @brief Method set_Server, addr 0x1c1c994, size 0x8, virtual true, abstract: false, final true
  inline void set_Server(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxServiceInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxServiceInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxServiceInternal(VivoxServiceInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxServiceInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxServiceInternal(VivoxServiceInternal const&) = delete;

  /// @brief Field AvailableInputDevicesChanged, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___AvailableInputDevicesChanged;

  /// @brief Field AvailableOutputDevicesChanged, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___AvailableOutputDevicesChanged;

  /// @brief Field LoggedIn, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___LoggedIn;

  /// @brief Field LoggedOut, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___LoggedOut;

  /// @brief Field ConnectionRecovering, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___ConnectionRecovering;

  /// @brief Field ConnectionRecovered, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___ConnectionRecovered;

  /// @brief Field ConnectionFailedToRecover, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___ConnectionFailedToRecover;

  /// @brief Field ChannelJoined, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___ChannelJoined;

  /// @brief Field ChannelLeft, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___ChannelLeft;

  /// @brief Field ParticipantAddedToChannel, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* ___ParticipantAddedToChannel;

  /// @brief Field ParticipantRemovedFromChannel, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* ___ParticipantRemovedFromChannel;

  /// @brief Field ChannelMessageReceived, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___ChannelMessageReceived;

  /// @brief Field ChannelMessageEdited, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___ChannelMessageEdited;

  /// @brief Field ChannelMessageDeleted, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___ChannelMessageDeleted;

  /// @brief Field DirectedMessageReceived, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___DirectedMessageReceived;

  /// @brief Field DirectedMessageEdited, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___DirectedMessageEdited;

  /// @brief Field DirectedMessageDeleted, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* ___DirectedMessageDeleted;

  /// @brief Field UserInputDeviceMuteStateChanged, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<bool>* ___UserInputDeviceMuteStateChanged;

  /// @brief Field <IsTestMode>k__BackingField, offset: 0xa0, size: 0x1, def value: None
  bool ____IsTestMode_k__BackingField;

  /// @brief Field _accessToken, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____accessToken;

  /// @brief Field <Client>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::Unity::Services::Vivox::Client* ____Client_k__BackingField;

  /// @brief Field <Server>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____Server_k__BackingField;

  /// @brief Field <Domain>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____Domain_k__BackingField;

  /// @brief Field <Issuer>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____Issuer_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field <IsEnvironmentCustom>k__BackingField, offset: 0xd8, size: 0x1, def value: None
  bool ____IsEnvironmentCustom_k__BackingField;

  /// @brief Field <AccessTokenComponent>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::Unity::Services::Authentication::Internal::IAccessToken* ____AccessTokenComponent_k__BackingField;

  /// @brief Field <PlayerIdComponent>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::Unity::Services::Authentication::Internal::IPlayerId* ____PlayerIdComponent_k__BackingField;

  /// @brief Field <EnvironmentIdComponent>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::Unity::Services::Authentication::Internal::IEnvironmentId* ____EnvironmentIdComponent_k__BackingField;

  /// @brief Field <InternalTokenProvider>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* ____InternalTokenProvider_k__BackingField;

  /// @brief Field <ExternalTokenProvider>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::Unity::Services::Vivox::IVivoxTokenProvider* ____ExternalTokenProvider_k__BackingField;

  /// @brief Field m_Initialized, offset: 0x108, size: 0x1, def value: None
  bool ___m_Initialized;

  /// @brief Field m_LoginSession, offset: 0x110, size: 0x8, def value: None
  ::Unity::Services::Vivox::ILoginSession* ___m_LoginSession;

  /// @brief Field m_ActiveChannels, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::VivoxParticipant*>*>* ___m_ActiveChannels;

  /// @brief Field m_LastChannelJoinedUri, offset: 0x120, size: 0x8, def value: None
  ::StringW ___m_LastChannelJoinedUri;

  /// @brief Field k_DomainKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DomainKey{ u"com.unity.services.vivox.domain" };

  /// @brief Field k_EnvironmentCustomKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EnvironmentCustomKey{ u"com.unity.services.vivox.is-environment-custom" };

  /// @brief Field k_IssuerKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_IssuerKey{ u"com.unity.services.vivox.issuer" };

  /// @brief Field k_MustBeLoggedInErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MustBeLoggedInErrorMessage{ u"You must be logged in to perform this operation." };

  /// @brief Field k_ServerKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ServerKey{ u"com.unity.services.vivox.server" };

  /// @brief Field k_TestModeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TestModeKey{ u"com.unity.services.vivox.is-test-mode" };

  /// @brief Field k_TokenKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TokenKey{ u"com.unity.services.vivox.token" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxServiceInternal, 0x128>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___AvailableInputDevicesChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___AvailableOutputDevicesChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___LoggedIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___LoggedOut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ConnectionRecovering) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ConnectionRecovered) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ConnectionFailedToRecover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ChannelJoined) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ChannelLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ParticipantAddedToChannel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ParticipantRemovedFromChannel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ChannelMessageReceived) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ChannelMessageEdited) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___ChannelMessageDeleted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___DirectedMessageReceived) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___DirectedMessageEdited) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___DirectedMessageDeleted) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___UserInputDeviceMuteStateChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____IsTestMode_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____accessToken) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____Client_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____Server_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____Domain_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____Issuer_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____Key_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____IsEnvironmentCustom_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____AccessTokenComponent_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____PlayerIdComponent_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____EnvironmentIdComponent_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____InternalTokenProvider_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ____ExternalTokenProvider_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___m_Initialized) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___m_LoginSession) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___m_ActiveChannels) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxServiceInternal, ___m_LastChannelJoinedUri) == 0x120, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxServiceInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxServiceInternal*, "Unity.Services.Vivox", "VivoxServiceInternal");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass156_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass156_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass163_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass163_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass164_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass164_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass165_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass165_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass166_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass166_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass182_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass182_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass183_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass183_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass185_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass185_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass192_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass192_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass208_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass208_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass214_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass214_0");
NEED_NO_BOX(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal____c__DisplayClass215_0*, "Unity.Services.Vivox", "VivoxServiceInternal/<>c__DisplayClass215_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___BlockPlayerAsync_d__175, "Unity.Services.Vivox", "VivoxServiceInternal/<BlockPlayerAsync>d__175");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteChannelTextMessageAsync_d__165, "Unity.Services.Vivox", "VivoxServiceInternal/<DeleteChannelTextMessageAsync>d__165");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___DeleteDirectTextMessageAsync_d__162, "Unity.Services.Vivox", "VivoxServiceInternal/<DeleteDirectTextMessageAsync>d__162");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___DisableAutoVoiceActivityDetectionAsync_d__194, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<DisableAutoVoiceActivityDetectionAsync>d__194");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___EditChannelTextMessageAsync_d__164, "Unity.Services.Vivox", "VivoxServiceInternal/<EditChannelTextMessageAsync>d__164");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___EditDirectTextMessageAsync_d__161, "Unity.Services.Vivox", "VivoxServiceInternal/<EditDirectTextMessageAsync>d__161");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___EnableAutoVoiceActivityDetectionAsync_d__193, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<EnableAutoVoiceActivityDetectionAsync>d__193");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___GetChannelTextMessageHistoryAsync_d__166, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<GetChannelTextMessageHistoryAsync>d__166");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___GetConversationsAsync_d__168, "Unity.Services.Vivox", "VivoxServiceInternal/<GetConversationsAsync>d__168");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___GetDirectTextMessageHistoryAsync_d__167, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<GetDirectTextMessageHistoryAsync>d__167");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___InitializeAsync_d__153, "Unity.Services.Vivox", "VivoxServiceInternal/<InitializeAsync>d__153");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___JoinChannelAsync_d__180, "Unity.Services.Vivox", "VivoxServiceInternal/<JoinChannelAsync>d__180");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___JoinEchoChannelAsync_d__179, "Unity.Services.Vivox", "VivoxServiceInternal/<JoinEchoChannelAsync>d__179");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___JoinGroupChannelAsync_d__177, "Unity.Services.Vivox", "VivoxServiceInternal/<JoinGroupChannelAsync>d__177");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___JoinPositionalChannelAsync_d__178, "Unity.Services.Vivox", "VivoxServiceInternal/<JoinPositionalChannelAsync>d__178");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveAllChannelsAsync_d__181, "Unity.Services.Vivox", "VivoxServiceInternal/<LeaveAllChannelsAsync>d__181");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___LeaveChannelAsync_d__182, "Unity.Services.Vivox", "VivoxServiceInternal/<LeaveChannelAsync>d__182");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___LoginAsync_d__154, "Unity.Services.Vivox", "VivoxServiceInternal/<LoginAsync>d__154");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___LogoutAsync_d__155, "Unity.Services.Vivox", "VivoxServiceInternal/<LogoutAsync>d__155");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SendChannelTextMessageAsync_d__163, "Unity.Services.Vivox", "VivoxServiceInternal/<SendChannelTextMessageAsync>d__163");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SendDirectTextMessageAsync_d__160, "Unity.Services.Vivox", "VivoxServiceInternal/<SendDirectTextMessageAsync>d__160");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveInputDeviceAsync_d__188, "Unity.Services.Vivox", "VivoxServiceInternal/<SetActiveInputDeviceAsync>d__188");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetActiveOutputDeviceAsync_d__189, "Unity.Services.Vivox", "VivoxServiceInternal/<SetActiveOutputDeviceAsync>d__189");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelTransmissionModeAsync_d__156, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<SetChannelTransmissionModeAsync>d__156");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetChannelVolumeAsync_d__192, "Unity.Services.Vivox", "VivoxServiceInternal/<SetChannelVolumeAsync>d__192");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetMessageAsReadAsync_d__169, "Unity.Services.Vivox", "VivoxServiceInternal/<SetMessageAsReadAsync>d__169");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___SetVoiceActivityDetectionPropertiesAsync_d__195, "Unity.Services.Vivox",
                       "VivoxServiceInternal/<SetVoiceActivityDetectionPropertiesAsync>d__195");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxServiceInternal___UnblockPlayerAsync_d__176, "Unity.Services.Vivox", "VivoxServiceInternal/<UnblockPlayerAsync>d__176");
