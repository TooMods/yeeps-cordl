#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEventStream_2)
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamEventReceivedArgs_1;
}
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamExceptionReceivedArgs_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEventStream_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::IEventStream_2);
// Type: Amazon.Runtime.EventStreams.Internal::IEventStream`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::IEventStream`2<T,TE>*
class CORDL_TYPE IEventStream_2 {
public:
  // Declarations
  __declspec(property(get = get_BufferSize, put = set_BufferSize)) int32_t BufferSize;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method StartProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartProcessing();

  /// @brief Method add_EventReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value);

  /// @brief Method add_ExceptionReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value);

  /// @brief Method get_BufferSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_BufferSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_EventReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value);

  /// @brief Method remove_ExceptionReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value);

  /// @brief Method set_BufferSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_BufferSize(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IEventStream_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventStream_2(IEventStream_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStream_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventStream_2(IEventStream_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::IEventStream_2, "Amazon.Runtime.EventStreams.Internal", "IEventStream`2");
