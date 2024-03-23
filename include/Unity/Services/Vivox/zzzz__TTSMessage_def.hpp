#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__TTSMessageState_def.hpp"
#include "Unity/Services/Vivox/zzzz__TextToSpeechMessageType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSMessage)
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class ITTSVoice;
}
namespace Unity::Services::Vivox {
class ITextToSpeech;
}
namespace Unity::Services::Vivox {
struct TTSMessageState;
}
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class TTSMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::TTSMessage);
// Type: Unity.Services.Vivox::TTSMessage
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::TTSMessage*
class CORDL_TYPE TTSMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Destination))::Unity::Services::Vivox::TextToSpeechMessageType Destination;

  __declspec(property(get = get_Duration, put = set_Duration)) double_t Duration;

  __declspec(property(get = get_Key, put = set_Key)) uint32_t Key;

  __declspec(property(get = get_NumConsumers, put = set_NumConsumers)) uint32_t NumConsumers;

  /// @brief Field PropertyChanged, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_State, put = set_State))::Unity::Services::Vivox::TTSMessageState State;

  __declspec(property(get = get_TTS, put = set_TTS))::Unity::Services::Vivox::ITextToSpeech* TTS;

  __declspec(property(get = get_Text))::StringW Text;

  __declspec(property(get = get_Voice, put = set_Voice))::Unity::Services::Vivox::ITTSVoice* Voice;

  /// @brief Field _destination, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__destination, put = __cordl_internal_set__destination))::Unity::Services::Vivox::TextToSpeechMessageType _destination;

  /// @brief Field _duration, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) double_t _duration;

  /// @brief Field _key, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) uint32_t _key;

  /// @brief Field _numConsumers, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__numConsumers, put = __cordl_internal_set__numConsumers)) uint32_t _numConsumers;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::Unity::Services::Vivox::TTSMessageState _state;

  /// @brief Field _text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::StringW _text;

  /// @brief Field _ttsSubSystem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ttsSubSystem, put = __cordl_internal_set__ttsSubSystem))::Unity::Services::Vivox::ITextToSpeech* _ttsSubSystem;

  /// @brief Field _voice, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__voice, put = __cordl_internal_set__voice))::Unity::Services::Vivox::ITTSVoice* _voice;

  /// @brief Method AlreadySpoken, addr 0x16d4620, size 0x10, virtual false, abstract: false, final false
  inline bool AlreadySpoken();

  /// @brief Method Cancel, addr 0x16d3f6c, size 0x12c, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Equals, addr 0x16d4098, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x16d4178, size 0x21c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::TTSMessage* other);

  /// @brief Method GetHashCode, addr 0x16d4394, size 0x154, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Unity::Services::Vivox::TTSMessage* New_ctor(::StringW text, ::Unity::Services::Vivox::TextToSpeechMessageType destination);

  /// @brief Method OnPropertyChanged, addr 0x16d3c74, size 0x98, virtual false, abstract: false, final false
  inline void OnPropertyChanged(::StringW propertyName);

  /// @brief Method Speak, addr 0x16d3e4c, size 0x120, virtual false, abstract: false, final false
  inline void Speak(::Unity::Services::Vivox::ILoginSession* userSpeaking);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::TextToSpeechMessageType const& __cordl_internal_get__destination() const;

  constexpr ::Unity::Services::Vivox::TextToSpeechMessageType& __cordl_internal_get__destination();

  constexpr double_t const& __cordl_internal_get__duration() const;

  constexpr double_t& __cordl_internal_get__duration();

  constexpr uint32_t const& __cordl_internal_get__key() const;

  constexpr uint32_t& __cordl_internal_get__key();

  constexpr uint32_t const& __cordl_internal_get__numConsumers() const;

  constexpr uint32_t& __cordl_internal_get__numConsumers();

  constexpr ::Unity::Services::Vivox::TTSMessageState const& __cordl_internal_get__state() const;

  constexpr ::Unity::Services::Vivox::TTSMessageState& __cordl_internal_get__state();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr ::Unity::Services::Vivox::ITextToSpeech*& __cordl_internal_get__ttsSubSystem();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ITextToSpeech*> const& __cordl_internal_get__ttsSubSystem() const;

  constexpr ::Unity::Services::Vivox::ITTSVoice*& __cordl_internal_get__voice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ITTSVoice*> const& __cordl_internal_get__voice() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__destination(::Unity::Services::Vivox::TextToSpeechMessageType value);

  constexpr void __cordl_internal_set__duration(double_t value);

  constexpr void __cordl_internal_set__key(uint32_t value);

  constexpr void __cordl_internal_set__numConsumers(uint32_t value);

  constexpr void __cordl_internal_set__state(::Unity::Services::Vivox::TTSMessageState value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set__ttsSubSystem(::Unity::Services::Vivox::ITextToSpeech* value);

  constexpr void __cordl_internal_set__voice(::Unity::Services::Vivox::ITTSVoice* value);

  /// @brief Method .ctor, addr 0x16d3a3c, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::Unity::Services::Vivox::TextToSpeechMessageType destination);

  /// @brief Method add_PropertyChanged, addr 0x16d44e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Destination, addr 0x16d3c0c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::TextToSpeechMessageType get_Destination();

  /// @brief Method get_Duration, addr 0x16d3dcc, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Duration();

  /// @brief Method get_Key, addr 0x16d3e2c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Key();

  /// @brief Method get_NumConsumers, addr 0x16d3d6c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_NumConsumers();

  /// @brief Method get_State, addr 0x16d3d0c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::TTSMessageState get_State();

  /// @brief Method get_TTS, addr 0x16d3e3c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ITextToSpeech* get_TTS();

  /// @brief Method get_Text, addr 0x16d3c04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method get_Voice, addr 0x16d3c14, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ITTSVoice* get_Voice();

  /// @brief Method remove_PropertyChanged, addr 0x16d4584, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Duration, addr 0x16d3dd4, size 0x58, virtual false, abstract: false, final false
  inline void set_Duration(double_t value);

  /// @brief Method set_Key, addr 0x16d3e34, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(uint32_t value);

  /// @brief Method set_NumConsumers, addr 0x16d3d74, size 0x58, virtual false, abstract: false, final false
  inline void set_NumConsumers(uint32_t value);

  /// @brief Method set_State, addr 0x16d3d14, size 0x58, virtual false, abstract: false, final false
  inline void set_State(::Unity::Services::Vivox::TTSMessageState value);

  /// @brief Method set_TTS, addr 0x16d3e44, size 0x8, virtual false, abstract: false, final false
  inline void set_TTS(::Unity::Services::Vivox::ITextToSpeech* value);

  /// @brief Method set_Voice, addr 0x16d3c1c, size 0x58, virtual false, abstract: false, final false
  inline void set_Voice(::Unity::Services::Vivox::ITTSVoice* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TTSMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TTSMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TTSMessage(TTSMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TTSMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TTSMessage(TTSMessage const&) = delete;

  /// @brief Field _text, offset: 0x10, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _destination, offset: 0x18, size: 0x4, def value: None
  ::Unity::Services::Vivox::TextToSpeechMessageType ____destination;

  /// @brief Field _voice, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::ITTSVoice* ____voice;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::Unity::Services::Vivox::TTSMessageState ____state;

  /// @brief Field _numConsumers, offset: 0x2c, size: 0x4, def value: None
  uint32_t ____numConsumers;

  /// @brief Field _duration, offset: 0x30, size: 0x8, def value: None
  double_t ____duration;

  /// @brief Field _key, offset: 0x38, size: 0x4, def value: None
  uint32_t ____key;

  /// @brief Field _ttsSubSystem, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::ITextToSpeech* ____ttsSubSystem;

  /// @brief Field PropertyChanged, offset: 0x48, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::TTSMessage, 0x50>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____destination) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____voice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____numConsumers) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____key) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ____ttsSubSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessage, ___PropertyChanged) == 0x48, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::TTSMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::TTSMessage*, "Unity.Services.Vivox", "TTSMessage");
