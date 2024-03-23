#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITextToSpeech)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace Unity::Services::Vivox {
class ITTSMessageQueue;
}
namespace Unity::Services::Vivox {
class ITTSVoice;
}
namespace Unity::Services::Vivox {
class TTSMessage;
}
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ITextToSpeech;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ITextToSpeech);
// Type: Unity.Services.Vivox::ITextToSpeech
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ITextToSpeech*
class CORDL_TYPE ITextToSpeech {
public:
  // Declarations
  __declspec(property(get = get_AvailableVoices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* AvailableVoices;

  __declspec(property(get = get_CurrentVoice, put = set_CurrentVoice))::Unity::Services::Vivox::ITTSVoice* CurrentVoice;

  __declspec(property(get = get_Messages))::Unity::Services::Vivox::ITTSMessageQueue* Messages;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Method CancelAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAll();

  /// @brief Method CancelDestination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method CancelMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelMessage(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method GetMessagesFromDestination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::TTSMessage*>* GetMessagesFromDestination(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method Speak, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Speak(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method get_AvailableVoices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ITTSVoice*>* get_AvailableVoices();

  /// @brief Method get_CurrentVoice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ITTSVoice* get_CurrentVoice();

  /// @brief Method get_Messages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ITTSMessageQueue* get_Messages();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Method set_CurrentVoice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CurrentVoice(::Unity::Services::Vivox::ITTSVoice* value);

  // Ctor Parameters [CppParam { name: "", ty: "ITextToSpeech", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextToSpeech(ITextToSpeech&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextToSpeech", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextToSpeech(ITextToSpeech const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ITextToSpeech);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ITextToSpeech*, "Unity.Services.Vivox", "ITextToSpeech");
