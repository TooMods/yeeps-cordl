#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeechMessageType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextToSpeech)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox {
class Client;
}
namespace Unity::Services::Vivox {
class ITTSMessageQueue;
}
namespace Unity::Services::Vivox {
class ITTSVoice;
}
namespace Unity::Services::Vivox {
class ITextToSpeech;
}
namespace Unity::Services::Vivox {
class TTSMessageQueue;
}
namespace Unity::Services::Vivox {
class TTSMessage;
}
namespace Unity::Services::Vivox {
class TTSVoice;
}
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass17_0;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass24_0;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass29_0;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
struct vx_tts_status;
}
namespace Unity::Services::Vivox {
class vx_tts_voice_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class TextToSpeech;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass17_0;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass24_0;
}
namespace Unity::Services::Vivox {
class __TextToSpeech____c__DisplayClass29_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::TextToSpeech);
MARK_REF_PTR_T(::Unity::Services::Vivox::__TextToSpeech____c);
MARK_REF_PTR_T(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::TextToSpeech::<>c*
class CORDL_TYPE __TextToSpeech____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::__TextToSpeech____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>* __9__14_0;

  static inline ::Unity::Services::Vivox::__TextToSpeech____c* New_ctor();

  /// @brief Method .ctor, addr 0x2caf8c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_AvailableVoices>b__14_0, addr 0x2caf8cc, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::TTSVoice* _get_AvailableVoices_b__14_0(::Unity::Services::Vivox::vx_tts_voice_t* v);

  static inline ::Unity::Services::Vivox::__TextToSpeech____c* getStaticF___9();

  static inline ::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>* getStaticF___9__14_0();

  static inline void setStaticF___9(::Unity::Services::Vivox::__TextToSpeech____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::Unity::Services::Vivox::vx_tts_voice_t*, ::Unity::Services::Vivox::TTSVoice*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextToSpeech____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextToSpeech____c(__TextToSpeech____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextToSpeech____c(__TextToSpeech____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__TextToSpeech____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::TextToSpeech::<>c__DisplayClass17_0*
class CORDL_TYPE __TextToSpeech____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::Unity::Services::Vivox::ITTSVoice* value;

  static inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0* New_ctor();

  constexpr ::Unity::Services::Vivox::ITTSVoice*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ITTSVoice*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(::Unity::Services::Vivox::ITTSVoice* value);

  /// @brief Method .ctor, addr 0x2caf1c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_CurrentVoice>b__0, addr 0x2caf978, size 0x114, virtual false, abstract: false, final false
  inline bool _set_CurrentVoice_b__0(::Unity::Services::Vivox::ITTSVoice* v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextToSpeech____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextToSpeech____c__DisplayClass17_0(__TextToSpeech____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextToSpeech____c__DisplayClass17_0(__TextToSpeech____c__DisplayClass17_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ITTSVoice* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0, ___value) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::TextToSpeech::<>c__DisplayClass24_0*
class CORDL_TYPE __TextToSpeech____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_messageType, put = __cordl_internal_set_messageType))::Unity::Services::Vivox::TextToSpeechMessageType messageType;

  static inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0* New_ctor();

  /// @brief Method <GetMessagesFromDestination>b__0, addr 0x2cafa8c, size 0x24, virtual false, abstract: false, final false
  inline bool _GetMessagesFromDestination_b__0(::Unity::Services::Vivox::TTSMessage* m);

  constexpr ::Unity::Services::Vivox::TextToSpeechMessageType const& __cordl_internal_get_messageType() const;

  constexpr ::Unity::Services::Vivox::TextToSpeechMessageType& __cordl_internal_get_messageType();

  constexpr void __cordl_internal_set_messageType(::Unity::Services::Vivox::TextToSpeechMessageType value);

  /// @brief Method .ctor, addr 0x2caf850, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextToSpeech____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextToSpeech____c__DisplayClass24_0(__TextToSpeech____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextToSpeech____c__DisplayClass24_0(__TextToSpeech____c__DisplayClass24_0 const&) = delete;

  /// @brief Field messageType, offset: 0x10, size: 0x4, def value: None
  ::Unity::Services::Vivox::TextToSpeechMessageType ___messageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0, ___messageType) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::TextToSpeech::<>c__DisplayClass29_0*
class CORDL_TYPE __TextToSpeech____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field utteranceId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_utteranceId, put = __cordl_internal_set_utteranceId)) uint32_t utteranceId;

  static inline ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0* New_ctor();

  /// @brief Method <GetTTSMessageFromEvt>b__0, addr 0x2cafab0, size 0x24, virtual false, abstract: false, final false
  inline bool _GetTTSMessageFromEvt_b__0(::Unity::Services::Vivox::TTSMessage* m);

  constexpr uint32_t const& __cordl_internal_get_utteranceId() const;

  constexpr uint32_t& __cordl_internal_get_utteranceId();

  constexpr void __cordl_internal_set_utteranceId(uint32_t value);

  /// @brief Method .ctor, addr 0x2caf858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextToSpeech____c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextToSpeech____c__DisplayClass29_0(__TextToSpeech____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextToSpeech____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextToSpeech____c__DisplayClass29_0(__TextToSpeech____c__DisplayClass29_0 const&) = delete;

  /// @brief Field utteranceId, offset: 0x10, size: 0x4, def value: None
  uint32_t ___utteranceId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0, ___utteranceId) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::TextToSpeech
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::TextToSpeech*
class CORDL_TYPE TextToSpeech : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Services::Vivox::__TextToSpeech____c;

  using __c__DisplayClass17_0 = ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0;

  using __c__DisplayClass24_0 = ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0;

  using __c__DisplayClass29_0 = ::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0;

  __declspec(property(get = get_AvailableVoices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* AvailableVoices;

  __declspec(property(get = get_CurrentVoice, put = set_CurrentVoice))::Unity::Services::Vivox::ITTSVoice* CurrentVoice;

  __declspec(property(get = get_Messages))::Unity::Services::Vivox::ITTSMessageQueue* Messages;

  /// @brief Field PropertyChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_TTSManagerId)) uint32_t TTSManagerId;

  /// @brief Field _client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Unity::Services::Vivox::Client* _client;

  /// @brief Field _ttsAvailableVoices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ttsAvailableVoices,
                      put = __cordl_internal_set__ttsAvailableVoices))::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>* _ttsAvailableVoices;

  /// @brief Field _ttsCurrentVoice, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ttsCurrentVoice, put = __cordl_internal_set__ttsCurrentVoice))::Unity::Services::Vivox::TTSVoice* _ttsCurrentVoice;

  /// @brief Field _ttsMessages, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ttsMessages, put = __cordl_internal_set__ttsMessages))::Unity::Services::Vivox::TTSMessageQueue* _ttsMessages;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITextToSpeech"
  constexpr operator ::Unity::Services::Vivox::ITextToSpeech*() noexcept;

  /// @brief Method CancelAll, addr 0x2caf748, size 0x100, virtual true, abstract: false, final true
  inline void CancelAll();

  /// @brief Method CancelDestination, addr 0x2caf2b0, size 0x384, virtual true, abstract: false, final true
  inline void CancelDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method CancelMessage, addr 0x2caf1e8, size 0xc8, virtual true, abstract: false, final true
  inline void CancelMessage(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method CleanupTTS, addr 0x2cae824, size 0xe4, virtual false, abstract: false, final false
  inline void CleanupTTS();

  /// @brief Method Finalize, addr 0x2cae790, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetMessagesFromDestination, addr 0x2caf634, size 0x114, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::TTSMessage*>* GetMessagesFromDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method GetTTSMessageFromEvt, addr 0x2caeb30, size 0xd8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::TTSMessage* GetTTSMessageFromEvt(uint32_t utteranceId);

  /// @brief Method HandleTTSInjectionEnded, addr 0x2caea24, size 0x50, virtual false, abstract: false, final false
  inline void HandleTTSInjectionEnded(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleTTSInjectionFailed, addr 0x2caea74, size 0xbc, virtual false, abstract: false, final false
  inline void HandleTTSInjectionFailed(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleTTSInjectionStarted, addr 0x2cae98c, size 0x98, virtual false, abstract: false, final false
  inline void HandleTTSInjectionStarted(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method InstanceOnEventMessageReceived, addr 0x2cae908, size 0x84, virtual false, abstract: false, final false
  inline void InstanceOnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method IsNotTTSError, addr 0x2cae3b8, size 0x24, virtual false, abstract: false, final false
  static inline bool IsNotTTSError(::Unity::Services::Vivox::vx_tts_status status);

  static inline ::Unity::Services::Vivox::TextToSpeech* New_ctor(::Unity::Services::Vivox::Client* client);

  /// @brief Method Speak, addr 0x2caf1d0, size 0x18, virtual true, abstract: false, final true
  inline void Speak(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method TTSInitialize, addr 0x2cae278, size 0x1c, virtual false, abstract: false, final false
  inline bool TTSInitialize();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::Client*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& __cordl_internal_get__client() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>*& __cordl_internal_get__ttsAvailableVoices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>*> const& __cordl_internal_get__ttsAvailableVoices() const;

  constexpr ::Unity::Services::Vivox::TTSVoice*& __cordl_internal_get__ttsCurrentVoice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSVoice*> const& __cordl_internal_get__ttsCurrentVoice() const;

  constexpr ::Unity::Services::Vivox::TTSMessageQueue*& __cordl_internal_get__ttsMessages();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSMessageQueue*> const& __cordl_internal_get__ttsMessages() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__client(::Unity::Services::Vivox::Client* value);

  constexpr void __cordl_internal_set__ttsAvailableVoices(::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>* value);

  constexpr void __cordl_internal_set__ttsCurrentVoice(::Unity::Services::Vivox::TTSVoice* value);

  constexpr void __cordl_internal_set__ttsMessages(::Unity::Services::Vivox::TTSMessageQueue* value);

  /// @brief Method .ctor, addr 0x2cae668, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Client* client);

  /// @brief Method add_PropertyChanged, addr 0x2caec08, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_AvailableVoices, addr 0x2caed40, size 0x21c, virtual true, abstract: false, final true
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* get_AvailableVoices();

  /// @brief Method get_CurrentVoice, addr 0x2cae294, size 0x108, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ITTSVoice* get_CurrentVoice();

  /// @brief Method get_Messages, addr 0x2caf848, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ITTSMessageQueue* get_Messages();

  /// @brief Method get_TTSManagerId, addr 0x2cae39c, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t get_TTSManagerId();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITextToSpeech"
  constexpr ::Unity::Services::Vivox::ITextToSpeech* i___Unity__Services__Vivox__ITextToSpeech() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2caeca4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_CurrentVoice, addr 0x2caef5c, size 0x26c, virtual true, abstract: false, final true
  inline void set_CurrentVoice(::Unity::Services::Vivox::ITTSVoice* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextToSpeech();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextToSpeech", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextToSpeech(TextToSpeech&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextToSpeech", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextToSpeech(TextToSpeech const&) = delete;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::Client* ____client;

  /// @brief Field _ttsAvailableVoices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::ITTSVoice*>* ____ttsAvailableVoices;

  /// @brief Field _ttsCurrentVoice, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::TTSVoice* ____ttsCurrentVoice;

  /// @brief Field _ttsMessages, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::TTSMessageQueue* ____ttsMessages;

  /// @brief Field PropertyChanged, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::TextToSpeech, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeech, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeech, ____ttsAvailableVoices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeech, ____ttsCurrentVoice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeech, ____ttsMessages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeech, ___PropertyChanged) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::TextToSpeech);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::TextToSpeech*, "Unity.Services.Vivox", "TextToSpeech");
NEED_NO_BOX(::Unity::Services::Vivox::__TextToSpeech____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__TextToSpeech____c*, "Unity.Services.Vivox", "TextToSpeech/<>c");
NEED_NO_BOX(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass17_0*, "Unity.Services.Vivox", "TextToSpeech/<>c__DisplayClass17_0");
NEED_NO_BOX(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass24_0*, "Unity.Services.Vivox", "TextToSpeech/<>c__DisplayClass24_0");
NEED_NO_BOX(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__TextToSpeech____c__DisplayClass29_0*, "Unity.Services.Vivox", "TextToSpeech/<>c__DisplayClass29_0");
