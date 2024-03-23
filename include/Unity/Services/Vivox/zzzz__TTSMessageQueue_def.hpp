#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSMessageQueue)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
class ITTSMessageQueueEventArgs;
}
namespace Unity::Services::Vivox {
class ITTSMessageQueue;
}
namespace Unity::Services::Vivox {
class TTSMessage;
}
namespace Unity::Services::Vivox {
class TextToSpeech;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class TTSMessageQueue;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::TTSMessageQueue);
// Type: Unity.Services.Vivox::TTSMessageQueue
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::TTSMessageQueue*
class CORDL_TYPE TTSMessageQueue : public ::System::Object {
public:
  // Declarations
  /// @brief Field AfterMessageAdded, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterMessageAdded,
                      put = __cordl_internal_set_AfterMessageAdded))::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* AfterMessageAdded;

  /// @brief Field AfterMessageUpdated, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterMessageUpdated,
                      put = __cordl_internal_set_AfterMessageUpdated))::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* AfterMessageUpdated;

  /// @brief Field BeforeMessageRemoved, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_BeforeMessageRemoved,
                      put = __cordl_internal_set_BeforeMessageRemoved))::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* BeforeMessageRemoved;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field _messages, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__messages, put = __cordl_internal_set__messages))::System::Collections::Generic::List_1<::Unity::Services::Vivox::TTSMessage*>* _messages;

  /// @brief Field _parentTTS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parentTTS, put = __cordl_internal_set__parentTTS))::Unity::Services::Vivox::TextToSpeech* _parentTTS;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITTSMessageQueue"
  constexpr operator ::Unity::Services::Vivox::ITTSMessageQueue*() noexcept;

  /// @brief Method Cleanup, addr 0x2cad6b4, size 0x270, virtual false, abstract: false, final false
  inline void Cleanup(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method Clear, addr 0x2cad924, size 0x194, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2cadd10, size 0x58, virtual true, abstract: false, final true
  inline bool Contains(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method Dequeue, addr 0x2caddb0, size 0x108, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::TTSMessage* Dequeue();

  /// @brief Method Enqueue, addr 0x2cadeb8, size 0x3c0, virtual true, abstract: false, final true
  inline void Enqueue(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method GetEnumerator, addr 0x2cae5d4, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Services::Vivox::TTSMessage*>* GetEnumerator();

  static inline ::Unity::Services::Vivox::TTSMessageQueue* New_ctor(::Unity::Services::Vivox::TextToSpeech* tts);

  /// @brief Method OnMessage_PropertyChanged, addr 0x2cae3dc, size 0x108, virtual false, abstract: false, final false
  inline void OnMessage_PropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);

  /// @brief Method Peek, addr 0x2cae4e4, size 0xf0, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::TTSMessage* Peek();

  /// @brief Method Remove, addr 0x2cadab8, size 0x258, virtual true, abstract: false, final true
  inline bool Remove(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2cae664, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*& __cordl_internal_get_AfterMessageAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*> const& __cordl_internal_get_AfterMessageAdded() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*& __cordl_internal_get_AfterMessageUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*> const& __cordl_internal_get_AfterMessageUpdated() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*& __cordl_internal_get_BeforeMessageRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>*> const& __cordl_internal_get_BeforeMessageRemoved() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::TTSMessage*>*& __cordl_internal_get__messages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::TTSMessage*>*> const& __cordl_internal_get__messages() const;

  constexpr ::Unity::Services::Vivox::TextToSpeech*& __cordl_internal_get__parentTTS();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TextToSpeech*> const& __cordl_internal_get__parentTTS() const;

  constexpr void __cordl_internal_set_AfterMessageAdded(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  constexpr void __cordl_internal_set_AfterMessageUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  constexpr void __cordl_internal_set_BeforeMessageRemoved(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  constexpr void __cordl_internal_set__messages(::System::Collections::Generic::List_1<::Unity::Services::Vivox::TTSMessage*>* value);

  constexpr void __cordl_internal_set__parentTTS(::Unity::Services::Vivox::TextToSpeech* value);

  /// @brief Method .ctor, addr 0x2cad624, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::TextToSpeech* tts);

  /// @brief Method add_AfterMessageAdded, addr 0x2cad204, size 0xb0, virtual true, abstract: false, final true
  inline void add_AfterMessageAdded(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method add_AfterMessageUpdated, addr 0x2cad4c4, size 0xb0, virtual true, abstract: false, final true
  inline void add_AfterMessageUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method add_BeforeMessageRemoved, addr 0x2cad364, size 0xb0, virtual true, abstract: false, final true
  inline void add_BeforeMessageRemoved(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method get_Count, addr 0x2cadd68, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>* i___System__Collections__Generic__IEnumerable_1___Unity__Services__Vivox__TTSMessage__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITTSMessageQueue"
  constexpr ::Unity::Services::Vivox::ITTSMessageQueue* i___Unity__Services__Vivox__ITTSMessageQueue() noexcept;

  /// @brief Method remove_AfterMessageAdded, addr 0x2cad2b4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_AfterMessageAdded(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method remove_AfterMessageUpdated, addr 0x2cad574, size 0xb0, virtual true, abstract: false, final true
  inline void remove_AfterMessageUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method remove_BeforeMessageRemoved, addr 0x2cad414, size 0xb0, virtual true, abstract: false, final true
  inline void remove_BeforeMessageRemoved(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TTSMessageQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TTSMessageQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TTSMessageQueue(TTSMessageQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TTSMessageQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TTSMessageQueue(TTSMessageQueue const&) = delete;

  /// @brief Field _messages, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Vivox::TTSMessage*>* ____messages;

  /// @brief Field _parentTTS, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::TextToSpeech* ____parentTTS;

  /// @brief Field AfterMessageAdded, offset: 0x20, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* ___AfterMessageAdded;

  /// @brief Field BeforeMessageRemoved, offset: 0x28, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* ___BeforeMessageRemoved;

  /// @brief Field AfterMessageUpdated, offset: 0x30, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* ___AfterMessageUpdated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::TTSMessageQueue, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessageQueue, ____messages) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessageQueue, ____parentTTS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessageQueue, ___AfterMessageAdded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessageQueue, ___BeforeMessageRemoved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSMessageQueue, ___AfterMessageUpdated) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::TTSMessageQueue);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::TTSMessageQueue*, "Unity.Services.Vivox", "TTSMessageQueue");
