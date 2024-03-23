#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITTSMessageQueue)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Unity::Services::Vivox {
class ITTSMessageQueueEventArgs;
}
namespace Unity::Services::Vivox {
class TTSMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ITTSMessageQueue;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ITTSMessageQueue);
// Type: Unity.Services.Vivox::ITTSMessageQueue
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ITTSMessageQueue*
class CORDL_TYPE ITTSMessageQueue {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Contains(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::TTSMessage* Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Enqueue(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::TTSMessage* Peek();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Remove(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method add_AfterMessageAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AfterMessageAdded(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method add_AfterMessageUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AfterMessageUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method add_BeforeMessageRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_BeforeMessageRemoved(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Services::Vivox::TTSMessage*>* i___System__Collections__Generic__IEnumerable_1___Unity__Services__Vivox__TTSMessage__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_AfterMessageAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AfterMessageAdded(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method remove_AfterMessageUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AfterMessageUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  /// @brief Method remove_BeforeMessageRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_BeforeMessageRemoved(::System::EventHandler_1<::Unity::Services::Vivox::ITTSMessageQueueEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "ITTSMessageQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITTSMessageQueue(ITTSMessageQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITTSMessageQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITTSMessageQueue(ITTSMessageQueue const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ITTSMessageQueue);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ITTSMessageQueue*, "Unity.Services.Vivox", "ITTSMessageQueue");
