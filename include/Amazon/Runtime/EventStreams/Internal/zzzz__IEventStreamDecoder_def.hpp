#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEventStreamDecoder)
namespace Amazon::Runtime::EventStreams::Internal {
class EventStreamMessageReceivedEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamDecoder;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder);
// Type: Amazon.Runtime.EventStreams.Internal::IEventStreamDecoder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::IEventStreamDecoder*
class CORDL_TYPE IEventStreamDecoder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ProcessData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method add_MessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_MessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventStreamDecoder(IEventStreamDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventStreamDecoder(IEventStreamDecoder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*, "Amazon.Runtime.EventStreams.Internal", "IEventStreamDecoder");
