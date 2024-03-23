#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamDecoder_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventStreamDecoder)
namespace Amazon::Runtime::EventStreams::Internal {
class EventStreamMessageReceivedEventArgs;
}
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamDecoder;
}
namespace Amazon::Runtime::EventStreams::Internal {
struct __EventStreamDecoder__DecoderState;
}
namespace Amazon::Runtime::EventStreams::Internal {
class __EventStreamDecoder__ProcessRead;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace ThirdParty::Ionic::Zlib {
class CrcCalculatorStream;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
struct __EventStreamDecoder__DecoderState;
}
namespace Amazon::Runtime::EventStreams::Internal {
class EventStreamDecoder;
}
namespace Amazon::Runtime::EventStreams::Internal {
class __EventStreamDecoder__ProcessRead;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState);
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder);
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead);
// Type: ::ProcessRead
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::EventStreamDecoder::ProcessRead*
class CORDL_TYPE __EventStreamDecoder__ProcessRead : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x20263b8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2026460, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x20263a4, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2025b50, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventStreamDecoder__ProcessRead();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventStreamDecoder__ProcessRead", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventStreamDecoder__ProcessRead(__EventStreamDecoder__ProcessRead&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventStreamDecoder__ProcessRead", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventStreamDecoder__ProcessRead(__EventStreamDecoder__ProcessRead const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
// Type: ::DecoderState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: true
// CS Name: ::EventStreamDecoder::DecoderState
struct CORDL_TYPE __EventStreamDecoder__DecoderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EventStreamDecoder__DecoderState_Unwrapped
  enum struct ____EventStreamDecoder__DecoderState_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_ReadPrelude = static_cast<int32_t>(0x1),
    __E_ProcessPrelude = static_cast<int32_t>(0x2),
    __E_ReadMessage = static_cast<int32_t>(0x3),
    __E_Error = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EventStreamDecoder__DecoderState_Unwrapped() const noexcept {
    return static_cast<____EventStreamDecoder__DecoderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventStreamDecoder__DecoderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventStreamDecoder__DecoderState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x4)
  static ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const Error;

  /// @brief Field ProcessPrelude value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const ProcessPrelude;

  /// @brief Field ReadMessage value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const ReadMessage;

  /// @brief Field ReadPrelude value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const ReadPrelude;

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const Start;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
// Type: Amazon.Runtime.EventStreams.Internal::EventStreamDecoder
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::EventStreamDecoder*
class CORDL_TYPE EventStreamDecoder : public ::System::Object {
public:
  // Declarations
  using DecoderState = ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState;

  using ProcessRead = ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead;

  /// @brief Field MessageReceived, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_MessageReceived,
                      put = __cordl_internal_set_MessageReceived))::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* MessageReceived;

  __declspec(property(get = get_MessageReceivedContext, put = set_MessageReceivedContext))::System::Object* MessageReceivedContext;

  /// @brief Field <MessageReceivedContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__MessageReceivedContext_k__BackingField,
                      put = __cordl_internal_set__MessageReceivedContext_k__BackingField))::System::Object* _MessageReceivedContext_k__BackingField;

  /// @brief Field _amountBytesRead, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__amountBytesRead, put = __cordl_internal_set__amountBytesRead)) int32_t _amountBytesRead;

  /// @brief Field _currentMessageLength, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__currentMessageLength, put = __cordl_internal_set__currentMessageLength)) int32_t _currentMessageLength;

  /// @brief Field _runningChecksumStream, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__runningChecksumStream, put = __cordl_internal_set__runningChecksumStream))::ThirdParty::Ionic::Zlib::CrcCalculatorStream* _runningChecksumStream;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState _state;

  /// @brief Field _stateFns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stateFns,
                      put = __cordl_internal_set__stateFns))::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*,
                                                                     ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> _stateFns;

  /// @brief Field _workingBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__workingBuffer, put = __cordl_internal_set__workingBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _workingBuffer;

  /// @brief Field _workingMessage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__workingMessage, put = __cordl_internal_set__workingMessage))::ArrayW<uint8_t, ::Array<uint8_t>*> _workingMessage;

  /// @brief Field disposedValue, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_disposedValue, put = __cordl_internal_set_disposedValue)) bool disposedValue;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2026338, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x20262fc, size 0x3c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Error, addr 0x2026224, size 0x4c, virtual false, abstract: false, final false
  inline int32_t Error(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder* New_ctor();

  /// @brief Method ProcessData, addr 0x2026270, size 0x8c, virtual true, abstract: false, final true
  inline void ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method ProcessMessage, addr 0x20260f8, size 0x12c, virtual false, abstract: false, final false
  inline void ProcessMessage();

  /// @brief Method ProcessPrelude, addr 0x2025dac, size 0x284, virtual false, abstract: false, final false
  inline int32_t ProcessPrelude(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method ReadMessage, addr 0x2026030, size 0xc8, virtual false, abstract: false, final false
  inline int32_t ReadMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method ReadPrelude, addr 0x2025ce0, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadPrelude(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method Start, addr 0x2025c28, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Start(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*& __cordl_internal_get_MessageReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*> const&
  __cordl_internal_get_MessageReceived() const;

  constexpr ::System::Object*& __cordl_internal_get__MessageReceivedContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__MessageReceivedContext_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__amountBytesRead() const;

  constexpr int32_t& __cordl_internal_get__amountBytesRead();

  constexpr int32_t const& __cordl_internal_get__currentMessageLength() const;

  constexpr int32_t& __cordl_internal_get__currentMessageLength();

  constexpr ::ThirdParty::Ionic::Zlib::CrcCalculatorStream*& __cordl_internal_get__runningChecksumStream();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*> const& __cordl_internal_get__runningChecksumStream() const;

  constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const& __cordl_internal_get__state() const;

  constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState& __cordl_internal_get__state();

  constexpr ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> const&
  __cordl_internal_get__stateFns() const;

  constexpr ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*>&
  __cordl_internal_get__stateFns();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__workingBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__workingBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__workingMessage() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__workingMessage();

  constexpr bool const& __cordl_internal_get_disposedValue() const;

  constexpr bool& __cordl_internal_get_disposedValue();

  constexpr void __cordl_internal_set_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value);

  constexpr void __cordl_internal_set__MessageReceivedContext_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__amountBytesRead(int32_t value);

  constexpr void __cordl_internal_set__currentMessageLength(int32_t value);

  constexpr void __cordl_internal_set__runningChecksumStream(::ThirdParty::Ionic::Zlib::CrcCalculatorStream* value);

  constexpr void __cordl_internal_set__state(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState value);

  constexpr void __cordl_internal_set__stateFns(
      ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> value);

  constexpr void __cordl_internal_set__workingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__workingMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_disposedValue(bool value);

  /// @brief Method .ctor, addr 0x20258f0, size 0x260, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_MessageReceived, addr 0x2025780, size 0xb0, virtual true, abstract: false, final true
  inline void add_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value);

  /// @brief Method get_MessageReceivedContext, addr 0x20258e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_MessageReceivedContext();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* i___Amazon__Runtime__EventStreams__Internal__IEventStreamDecoder() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_MessageReceived, addr 0x2025830, size 0xb0, virtual true, abstract: false, final true
  inline void remove_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value);

  /// @brief Method set_MessageReceivedContext, addr 0x20258e8, size 0x8, virtual false, abstract: false, final false
  inline void set_MessageReceivedContext(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamDecoder(EventStreamDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamDecoder(EventStreamDecoder const&) = delete;

  /// @brief Field MessageReceived, offset: 0x10, size: 0x8, def value: None
  ::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* ___MessageReceived;

  /// @brief Field <MessageReceivedContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____MessageReceivedContext_k__BackingField;

  /// @brief Field _stateFns, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> ____stateFns;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState ____state;

  /// @brief Field _currentMessageLength, offset: 0x2c, size: 0x4, def value: None
  int32_t ____currentMessageLength;

  /// @brief Field _amountBytesRead, offset: 0x30, size: 0x4, def value: None
  int32_t ____amountBytesRead;

  /// @brief Field _workingMessage, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____workingMessage;

  /// @brief Field _workingBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____workingBuffer;

  /// @brief Field _runningChecksumStream, offset: 0x48, size: 0x8, def value: None
  ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* ____runningChecksumStream;

  /// @brief Field disposedValue, offset: 0x50, size: 0x1, def value: None
  bool ___disposedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ___MessageReceived) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____MessageReceivedContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____stateFns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____currentMessageLength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____amountBytesRead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____workingMessage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____workingBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ____runningChecksumStream) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder, ___disposedValue) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState, "Amazon.Runtime.EventStreams.Internal", "EventStreamDecoder/DecoderState");
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*, "Amazon.Runtime.EventStreams.Internal", "EventStreamDecoder");
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, "Amazon.Runtime.EventStreams.Internal", "EventStreamDecoder/ProcessRead");
