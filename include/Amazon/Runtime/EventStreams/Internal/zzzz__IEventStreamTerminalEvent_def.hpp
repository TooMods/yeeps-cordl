#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventStreamTerminalEvent)
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamEvent;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamTerminalEvent;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::IEventStreamTerminalEvent);
// Type: Amazon.Runtime.EventStreams.Internal::IEventStreamTerminalEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::IEventStreamTerminalEvent*
class CORDL_TYPE IEventStreamTerminalEvent {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*() noexcept;

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent* i___Amazon__Runtime__EventStreams__Internal__IEventStreamEvent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamTerminalEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventStreamTerminalEvent(IEventStreamTerminalEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamTerminalEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventStreamTerminalEvent(IEventStreamTerminalEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::IEventStreamTerminalEvent);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::IEventStreamTerminalEvent*, "Amazon.Runtime.EventStreams.Internal", "IEventStreamTerminalEvent");
