#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket)
namespace System::IO {
class Stream;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketError;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System::Net::WebSockets {
template <typename TResult> class __ManagedWebSocket__IWebSocketReceiveResultGetter_1;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket__MessageHeader;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket__MessageOpcode;
}
namespace System::Net::WebSockets {
class __ManagedWebSocket__Utf8MessageState;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket__WebSocketReceiveResultGetter;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___EnsureBufferContainsAsync_d__71;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___HandleReceivedCloseAsync_d__62;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___HandleReceivedPingPongAsync_d__64;
}
namespace System::Net::WebSockets {
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult> struct __ManagedWebSocket___ReceiveAsyncPrivate_d__61_2;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___SendCloseFrameAsync_d__69;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___SendFrameFallbackAsync_d__56;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___WaitForWriteTaskAsync_d__55;
}
namespace System::Net::WebSockets {
class __ManagedWebSocket____c;
}
namespace System::Net::WebSockets {
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult> class __ManagedWebSocket____c__61_2;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class Timer;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::WebSockets {
struct __ManagedWebSocket__MessageOpcode;
}
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Net::WebSockets {
template <typename TResult> class __ManagedWebSocket__IWebSocketReceiveResultGetter_1;
}
namespace System::Net::WebSockets {
class __ManagedWebSocket__Utf8MessageState;
}
namespace System::Net::WebSockets {
class __ManagedWebSocket____c;
}
namespace System::Net::WebSockets {
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult> class __ManagedWebSocket____c__61_2;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket__MessageHeader;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket__WebSocketReceiveResultGetter;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___EnsureBufferContainsAsync_d__71;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___HandleReceivedCloseAsync_d__62;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___HandleReceivedPingPongAsync_d__64;
}
namespace System::Net::WebSockets {
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult> struct __ManagedWebSocket___ReceiveAsyncPrivate_d__61_2;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___SendCloseFrameAsync_d__69;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___SendFrameFallbackAsync_d__56;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63;
}
namespace System::Net::WebSockets {
struct __ManagedWebSocket___WaitForWriteTaskAsync_d__55;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode);
MARK_REF_PTR_T(::System::Net::WebSockets::ManagedWebSocket);
MARK_GEN_REF_PTR_T(::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1);
MARK_REF_PTR_T(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState);
MARK_REF_PTR_T(::System::Net::WebSockets::__ManagedWebSocket____c);
MARK_GEN_REF_PTR_T(::System::Net::WebSockets::__ManagedWebSocket____c__61_2);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64);
MARK_GEN_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63);
MARK_VAL_T(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55);
// Type: ::Utf8MessageState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::ManagedWebSocket::Utf8MessageState*
class CORDL_TYPE __ManagedWebSocket__Utf8MessageState : public ::System::Object {
public:
  // Declarations
  /// @brief Field AdditionalBytesExpected, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_AdditionalBytesExpected, put = __cordl_internal_set_AdditionalBytesExpected)) int32_t AdditionalBytesExpected;

  /// @brief Field CurrentDecodeBits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentDecodeBits, put = __cordl_internal_set_CurrentDecodeBits)) int32_t CurrentDecodeBits;

  /// @brief Field ExpectedValueMin, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ExpectedValueMin, put = __cordl_internal_set_ExpectedValueMin)) int32_t ExpectedValueMin;

  /// @brief Field SequenceInProgress, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_SequenceInProgress, put = __cordl_internal_set_SequenceInProgress)) bool SequenceInProgress;

  static inline ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* New_ctor();

  constexpr int32_t const& __cordl_internal_get_AdditionalBytesExpected() const;

  constexpr int32_t& __cordl_internal_get_AdditionalBytesExpected();

  constexpr int32_t const& __cordl_internal_get_CurrentDecodeBits() const;

  constexpr int32_t& __cordl_internal_get_CurrentDecodeBits();

  constexpr int32_t const& __cordl_internal_get_ExpectedValueMin() const;

  constexpr int32_t& __cordl_internal_get_ExpectedValueMin();

  constexpr bool const& __cordl_internal_get_SequenceInProgress() const;

  constexpr bool& __cordl_internal_get_SequenceInProgress();

  constexpr void __cordl_internal_set_AdditionalBytesExpected(int32_t value);

  constexpr void __cordl_internal_set_CurrentDecodeBits(int32_t value);

  constexpr void __cordl_internal_set_ExpectedValueMin(int32_t value);

  constexpr void __cordl_internal_set_SequenceInProgress(bool value);

  /// @brief Method .ctor, addr 0x2c90c34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket__Utf8MessageState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket__Utf8MessageState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ManagedWebSocket__Utf8MessageState(__ManagedWebSocket__Utf8MessageState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket__Utf8MessageState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ManagedWebSocket__Utf8MessageState(__ManagedWebSocket__Utf8MessageState const&) = delete;

  /// @brief Field SequenceInProgress, offset: 0x10, size: 0x1, def value: None
  bool ___SequenceInProgress;

  /// @brief Field AdditionalBytesExpected, offset: 0x14, size: 0x4, def value: None
  int32_t ___AdditionalBytesExpected;

  /// @brief Field ExpectedValueMin, offset: 0x18, size: 0x4, def value: None
  int32_t ___ExpectedValueMin;

  /// @brief Field CurrentDecodeBits, offset: 0x1c, size: 0x4, def value: None
  int32_t ___CurrentDecodeBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState, ___SequenceInProgress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState, ___AdditionalBytesExpected) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState, ___ExpectedValueMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState, ___CurrentDecodeBits) == 0x1c, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::MessageOpcode
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::MessageOpcode
struct CORDL_TYPE __ManagedWebSocket__MessageOpcode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ManagedWebSocket__MessageOpcode_Unwrapped
  enum struct ____ManagedWebSocket__MessageOpcode_Unwrapped : uint8_t {
    __E_Continuation = static_cast<uint8_t>(0x0u),
    __E_Text = static_cast<uint8_t>(0x1u),
    __E_Binary = static_cast<uint8_t>(0x2u),
    __E_Close = static_cast<uint8_t>(0x8u),
    __E_Ping = static_cast<uint8_t>(0x9u),
    __E_Pong = static_cast<uint8_t>(0xau),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ManagedWebSocket__MessageOpcode_Unwrapped() const noexcept {
    return static_cast<____ManagedWebSocket__MessageOpcode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket__MessageOpcode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket__MessageOpcode(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Binary value: static_cast<uint8_t>(0x2u)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Binary;

  /// @brief Field Close value: static_cast<uint8_t>(0x8u)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Close;

  /// @brief Field Continuation value: static_cast<uint8_t>(0x0u)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Continuation;

  /// @brief Field Ping value: static_cast<uint8_t>(0x9u)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Ping;

  /// @brief Field Pong value: static_cast<uint8_t>(0xau)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Pong;

  /// @brief Field Text value: static_cast<uint8_t>(0x1u)
  static ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode const Text;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::MessageHeader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::MessageHeader
struct CORDL_TYPE __ManagedWebSocket__MessageHeader {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket__MessageHeader();

  // Ctor Parameters [CppParam { name: "Opcode", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode", modifiers: "", def_value: None }, CppParam { name: "Fin", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "PayloadLength", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Mask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket__MessageHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode Opcode, bool Fin, int64_t PayloadLength, int32_t Mask) noexcept;

  /// @brief Field Opcode, offset: 0x0, size: 0x1, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode Opcode;

  /// @brief Field Fin, offset: 0x1, size: 0x1, def value: None
  bool Fin;

  /// @brief Field PayloadLength, offset: 0x8, size: 0x8, def value: None
  int64_t PayloadLength;

  /// @brief Field Mask, offset: 0x10, size: 0x4, def value: None
  int32_t Mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, Opcode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, Fin) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, PayloadLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, Mask) == 0x10, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::IWebSocketReceiveResultGetter`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: ::ManagedWebSocket::IWebSocketReceiveResultGetter`1<TResult>*
class CORDL_TYPE __ManagedWebSocket__IWebSocketReceiveResultGetter_1 {
public:
  // Declarations
  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TResult GetResult(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                           ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::StringW closeDescription);

  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket__IWebSocketReceiveResultGetter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ManagedWebSocket__IWebSocketReceiveResultGetter_1(__ManagedWebSocket__IWebSocketReceiveResultGetter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket__IWebSocketReceiveResultGetter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ManagedWebSocket__IWebSocketReceiveResultGetter_1(__ManagedWebSocket__IWebSocketReceiveResultGetter_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::WebSockets
// Type: ::WebSocketReceiveResultGetter
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::WebSocketReceiveResultGetter
#pragma pack(push, 0)
struct CORDL_TYPE __ManagedWebSocket__WebSocketReceiveResultGetter {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
  constexpr operator ::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*();

  /// @brief Method GetResult, addr 0x2c93f9c, size 0x90, virtual true, abstract: false, final true
  inline ::System::Net::WebSockets::WebSocketReceiveResult* GetResult(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                      ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::StringW closeDescription);

  /// @brief Convert to "::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
  constexpr ::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*
  i___System__Net__WebSockets____ManagedWebSocket__IWebSocketReceiveResultGetter_1___System__Net__WebSockets__WebSocketReceiveResult__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket__WebSocketReceiveResultGetter();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter, 0x1>, "Size mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::ManagedWebSocket::<>c*
class CORDL_TYPE __ManagedWebSocket____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::WebSockets::__ManagedWebSocket____c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0))::System::Action_1<::System::Object*>* __9__36_0;

  /// @brief Field <>9__36_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_1, put = setStaticF___9__36_1))::System::Threading::TimerCallback* __9__36_1;

  /// @brief Field <>9__56_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__56_0, put = setStaticF___9__56_0))::System::Action_1<::System::Object*>* __9__56_0;

  /// @brief Field <>9__58_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__58_0, put = setStaticF___9__58_0))::System::Action_1<::System::Threading::Tasks::Task*>* __9__58_0;

  /// @brief Field <>9__63_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__63_0, put = setStaticF___9__63_0))::System::Action_1<::System::Object*>* __9__63_0;

  static inline ::System::Net::WebSockets::__ManagedWebSocket____c* New_ctor();

  /// @brief Method <SendFrameFallbackAsync>b__56_0, addr 0x2c942cc, size 0x74, virtual false, abstract: false, final false
  inline void _SendFrameFallbackAsync_b__56_0(::System::Object* s);

  /// @brief Method <SendKeepAliveFrameAsync>b__58_0, addr 0x2c94340, size 0x18, virtual false, abstract: false, final false
  inline void _SendKeepAliveFrameAsync_b__58_0(::System::Threading::Tasks::Task* p);

  /// @brief Method <WaitForServerToCloseConnectionAsync>b__63_0, addr 0x2c94358, size 0x74, virtual false, abstract: false, final false
  inline void _WaitForServerToCloseConnectionAsync_b__63_0(::System::Object* s);

  /// @brief Method <.ctor>b__36_0, addr 0x2c94144, size 0x128, virtual false, abstract: false, final false
  inline void __ctor_b__36_0(::System::Object* s);

  /// @brief Method <.ctor>b__36_1, addr 0x2c9426c, size 0x60, virtual false, abstract: false, final false
  inline void __ctor_b__36_1(::System::Object* s);

  /// @brief Method .ctor, addr 0x2c9413c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebSockets::__ManagedWebSocket____c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__36_0();

  static inline ::System::Threading::TimerCallback* getStaticF___9__36_1();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__56_0();

  static inline ::System::Action_1<::System::Threading::Tasks::Task*>* getStaticF___9__58_0();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__63_0();

  static inline void setStaticF___9(::System::Net::WebSockets::__ManagedWebSocket____c* value);

  static inline void setStaticF___9__36_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__36_1(::System::Threading::TimerCallback* value);

  static inline void setStaticF___9__56_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__58_0(::System::Action_1<::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF___9__63_0(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ManagedWebSocket____c(__ManagedWebSocket____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ManagedWebSocket____c(__ManagedWebSocket____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket____c, 0x10>, "Size mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<WaitForWriteTaskAsync>d__55
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<WaitForWriteTaskAsync>d__55
struct CORDL_TYPE __ManagedWebSocket___WaitForWriteTaskAsync_d__55 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c943cc, size 0x588, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c94954, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___WaitForWriteTaskAsync_d__55();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::ValueTask", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___WaitForWriteTaskAsync_d__55(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::System::Threading::Tasks::ValueTask writeTask, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
                                                             ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field writeTask, offset: 0x20, size: 0x10, def value: None
  ::System::Threading::Tasks::ValueTask writeTask;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, writeTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, __u__1) == 0x38, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<SendFrameFallbackAsync>d__56
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<SendFrameFallbackAsync>d__56
struct CORDL_TYPE __ManagedWebSocket___SendFrameFallbackAsync_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c94960, size 0x8dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9523c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___SendFrameFallbackAsync_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "opcode", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode", modifiers: "", def_value: None }, CppParam { name: "endOfMessage", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "payloadBuffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___SendFrameFallbackAsync_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode,
                                                              bool endOfMessage, ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer, ::System::Threading::CancellationToken cancellationToken,
                                                              ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                              ::System::Threading::CancellationTokenRegistration __7__wrap1,
                                                              ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field opcode, offset: 0x28, size: 0x1, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode;

  /// @brief Field endOfMessage, offset: 0x29, size: 0x1, def value: None
  bool endOfMessage;

  /// @brief Field payloadBuffer, offset: 0x30, size: 0x10, def value: None
  ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>7__wrap1, offset: 0x58, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, opcode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, endOfMessage) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, payloadBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __7__wrap1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, __u__2) == 0x70, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<>c__61`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// cpp template
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
// Is value type: false
// CS Name: ::ManagedWebSocket::<>c__61`2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*
class CORDL_TYPE __ManagedWebSocket____c__61_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0))::System::Action_1<::System::Object*>* __9__61_0;

  static inline ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>* New_ctor();

  /// @brief Method <ReceiveAsyncPrivate>b__61_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ReceiveAsyncPrivate_b__61_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__61_0();

  static inline void setStaticF___9(::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>* value);

  static inline void setStaticF___9__61_0(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket____c__61_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket____c__61_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ManagedWebSocket____c__61_2(__ManagedWebSocket____c__61_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ManagedWebSocket____c__61_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ManagedWebSocket____c__61_2(__ManagedWebSocket____c__61_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::WebSockets
// Type: ::<ReceiveAsyncPrivate>d__61`2
// SizeInfo { instance_size: 176, native_size: 192, calculated_instance_size: 176, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// cpp template
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
// Is value type: true
// CS Name: ::ManagedWebSocket::<ReceiveAsyncPrivate>d__61`2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>
struct CORDL_TYPE __ManagedWebSocket___ReceiveAsyncPrivate_d__61_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___ReceiveAsyncPrivate_d__61_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None },
  // CppParam { name: "resultGetter", ty: "TWebSocketReceiveResultGetter", modifiers: "", def_value: None }, CppParam { name: "payloadBuffer", ty: "::System::Memory_1<uint8_t>", modifiers: "",
  // def_value: None }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "_header_5__3", ty:
  // "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader", modifiers: "", def_value: None }, CppParam { name: "_totalBytesReceived_5__4", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___ReceiveAsyncPrivate_d__61_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult> __t__builder,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
                                                             TWebSocketReceiveResultGetter resultGetter, ::System::Memory_1<uint8_t> payloadBuffer,
                                                             ::System::Threading::CancellationTokenRegistration _registration_5__2,
                                                             ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader _header_5__3, int32_t _totalBytesReceived_5__4,
                                                             ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                             ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult> __t__builder;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field resultGetter, offset: 0x40, size: 0x8, def value: None
  TWebSocketReceiveResultGetter resultGetter;

  /// @brief Field payloadBuffer, offset: 0x48, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> payloadBuffer;

  /// @brief Field <registration>5__2, offset: 0x58, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration _registration_5__2;

  /// @brief Field <header>5__3, offset: 0x70, size: 0x18, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader _header_5__3;

  /// @brief Field <totalBytesReceived>5__4, offset: 0x88, size: 0x4, def value: None
  int32_t _totalBytesReceived_5__4;

  /// @brief Field <>u__1, offset: 0x90, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0xa0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net::WebSockets
// Type: ::<HandleReceivedCloseAsync>d__62
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<HandleReceivedCloseAsync>d__62
struct CORDL_TYPE __ManagedWebSocket___HandleReceivedCloseAsync_d__62 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c95248, size 0x8dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c95b24, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___HandleReceivedCloseAsync_d__62();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "header", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_closeStatus_5__2", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value:
  // None }, CppParam { name: "_closeStatusDescription_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___HandleReceivedCloseAsync_d__62(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header,
                                                                ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::WebSocketCloseStatus _closeStatus_5__2,
                                                                ::StringW _closeStatusDescription_5__3,
                                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field header, offset: 0x28, size: 0x18, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <closeStatus>5__2, offset: 0x48, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketCloseStatus _closeStatus_5__2;

  /// @brief Field <closeStatusDescription>5__3, offset: 0x50, size: 0x8, def value: None
  ::StringW _closeStatusDescription_5__3;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, header) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, _closeStatus_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, _closeStatusDescription_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, __u__1) == 0x58, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<WaitForServerToCloseConnectionAsync>d__63
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<WaitForServerToCloseConnectionAsync>d__63
struct CORDL_TYPE __ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c95b30, size 0x674, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c961a4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_finalCts_5__2", ty:
  // "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                           ::System::Threading::CancellationTokenSource* _finalCts_5__2, ::System::Threading::CancellationTokenRegistration __7__wrap2,
                                                                           ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <finalCts>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _finalCts_5__2;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, _finalCts_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<HandleReceivedPingPongAsync>d__64
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<HandleReceivedPingPongAsync>d__64
struct CORDL_TYPE __ManagedWebSocket___HandleReceivedPingPongAsync_d__64 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c961b0, size 0x5ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9675c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___HandleReceivedPingPongAsync_d__64();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "header", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __ManagedWebSocket___HandleReceivedPingPongAsync_d__64(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                   ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
                                                                   ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field header, offset: 0x20, size: 0x18, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, header) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, __u__2) == 0x58, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<CloseWithReceiveErrorAndThrowAsync>d__66
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<CloseWithReceiveErrorAndThrowAsync>d__66
struct CORDL_TYPE __ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c96768, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c96988, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: None }, CppParam { name: "error", ty:
  // "::System::Net::WebSockets::WebSocketError", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                          ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Net::WebSockets::WebSocketCloseStatus closeStatus,
                                                                          ::System::Net::WebSockets::WebSocketError error, ::System::Exception* innerException,
                                                                          ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field closeStatus, offset: 0x28, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketCloseStatus closeStatus;

  /// @brief Field error, offset: 0x2c, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketError error;

  /// @brief Field innerException, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* innerException;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, closeStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, error) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, innerException) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, __u__1) == 0x38, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<SendCloseFrameAsync>d__69
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<SendCloseFrameAsync>d__69
struct CORDL_TYPE __ManagedWebSocket___SendCloseFrameAsync_d__69 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c96994, size 0x8b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9724c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___SendCloseFrameAsync_d__69();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "closeStatusDescription", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___SendCloseFrameAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW closeStatusDescription,
                                                           ::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
                                                           ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2,
                                                           ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1,
                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field closeStatusDescription, offset: 0x20, size: 0x8, def value: None
  ::StringW closeStatusDescription;

  /// @brief Field closeStatus, offset: 0x28, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketCloseStatus closeStatus;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, closeStatusDescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, closeStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, _buffer_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, __u__2) == 0x58, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<EnsureBufferContainsAsync>d__71
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ManagedWebSocket::<EnsureBufferContainsAsync>d__71
struct CORDL_TYPE __ManagedWebSocket___EnsureBufferContainsAsync_d__71 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c97258, size 0x454, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c976ac, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ManagedWebSocket___EnsureBufferContainsAsync_d__71();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "minimumRequiredBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "throwOnPrematureClosure", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __ManagedWebSocket___EnsureBufferContainsAsync_d__71(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::System::Net::WebSockets::ManagedWebSocket* __4__this, int32_t minimumRequiredBytes,
                                                                 ::System::Threading::CancellationToken cancellationToken, bool throwOnPrematureClosure,
                                                                 ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ManagedWebSocket* __4__this;

  /// @brief Field minimumRequiredBytes, offset: 0x28, size: 0x4, def value: None
  int32_t minimumRequiredBytes;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field throwOnPrematureClosure, offset: 0x38, size: 0x1, def value: None
  bool throwOnPrematureClosure;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, minimumRequiredBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, throwOnPrematureClosure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, __u__1) == 0x40, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: System.Net.WebSockets::ManagedWebSocket
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::ManagedWebSocket*
class CORDL_TYPE ManagedWebSocket : public ::System::Net::WebSockets::WebSocket {
public:
  // Declarations
  template <typename TResult> using IWebSocketReceiveResultGetter_1 = ::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<TResult>;

  using MessageHeader = ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader;

  using MessageOpcode = ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode;

  using Utf8MessageState = ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState;

  using WebSocketReceiveResultGetter = ::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter;

  using _CloseWithReceiveErrorAndThrowAsync_d__66 = ::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66;

  using _EnsureBufferContainsAsync_d__71 = ::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71;

  using _HandleReceivedCloseAsync_d__62 = ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62;

  using _HandleReceivedPingPongAsync_d__64 = ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64;

  template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
  using _ReceiveAsyncPrivate_d__61_2 = ::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>;

  using _SendCloseFrameAsync_d__69 = ::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69;

  using _SendFrameFallbackAsync_d__56 = ::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56;

  using _WaitForServerToCloseConnectionAsync_d__63 = ::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63;

  using _WaitForWriteTaskAsync_d__55 = ::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55;

  using __c = ::System::Net::WebSockets::__ManagedWebSocket____c;

  template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
  using __c__61_2 = ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>;

  __declspec(property(get = get_CloseStatusDescription))::StringW CloseStatusDescription;

  __declspec(property(get = get_ReceiveAsyncLock))::System::Object* ReceiveAsyncLock;

  __declspec(property(get = get_State))::System::Net::WebSockets::WebSocketState State;

  __declspec(property(get = get_StateUpdateLock))::System::Object* StateUpdateLock;

  /// @brief Field _abortSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__abortSource, put = __cordl_internal_set__abortSource))::System::Threading::CancellationTokenSource* _abortSource;

  /// @brief Field _closeStatus, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__closeStatus, put = __cordl_internal_set__closeStatus))::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> _closeStatus;

  /// @brief Field _closeStatusDescription, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__closeStatusDescription, put = __cordl_internal_set__closeStatusDescription))::StringW _closeStatusDescription;

  /// @brief Field _disposed, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _isServer, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isServer, put = __cordl_internal_set__isServer)) bool _isServer;

  /// @brief Field _keepAliveTimer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__keepAliveTimer, put = __cordl_internal_set__keepAliveTimer))::System::Threading::Timer* _keepAliveTimer;

  /// @brief Field _lastReceiveAsync, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__lastReceiveAsync, put = __cordl_internal_set__lastReceiveAsync))::System::Threading::Tasks::Task* _lastReceiveAsync;

  /// @brief Field _lastReceiveHeader, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get__lastReceiveHeader, put = __cordl_internal_set__lastReceiveHeader))::System::Net::WebSockets::__ManagedWebSocket__MessageHeader _lastReceiveHeader;

  /// @brief Field _lastSendWasFragment, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__lastSendWasFragment, put = __cordl_internal_set__lastSendWasFragment)) bool _lastSendWasFragment;

  /// @brief Field _receiveBuffer, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__receiveBuffer, put = __cordl_internal_set__receiveBuffer))::System::Memory_1<uint8_t> _receiveBuffer;

  /// @brief Field _receiveBufferCount, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__receiveBufferCount, put = __cordl_internal_set__receiveBufferCount)) int32_t _receiveBufferCount;

  /// @brief Field _receiveBufferOffset, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__receiveBufferOffset, put = __cordl_internal_set__receiveBufferOffset)) int32_t _receiveBufferOffset;

  /// @brief Field _receivedCloseFrame, offset 0x5e, size 0x1
  __declspec(property(get = __cordl_internal_get__receivedCloseFrame, put = __cordl_internal_set__receivedCloseFrame)) bool _receivedCloseFrame;

  /// @brief Field _receivedMaskOffsetOffset, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__receivedMaskOffsetOffset, put = __cordl_internal_set__receivedMaskOffsetOffset)) int32_t _receivedMaskOffsetOffset;

  /// @brief Field _sendBuffer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__sendBuffer, put = __cordl_internal_set__sendBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _sendBuffer;

  /// @brief Field _sendFrameAsyncLock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sendFrameAsyncLock, put = __cordl_internal_set__sendFrameAsyncLock))::System::Threading::SemaphoreSlim* _sendFrameAsyncLock;

  /// @brief Field _sentCloseFrame, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get__sentCloseFrame, put = __cordl_internal_set__sentCloseFrame)) bool _sentCloseFrame;

  /// @brief Field _state, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::Net::WebSockets::WebSocketState _state;

  /// @brief Field _stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream))::System::IO::Stream* _stream;

  /// @brief Field _subprotocol, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__subprotocol, put = __cordl_internal_set__subprotocol))::StringW _subprotocol;

  /// @brief Field _utf8TextState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__utf8TextState, put = __cordl_internal_set__utf8TextState))::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* _utf8TextState;

  /// @brief Field s_cachedCloseTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedCloseTask,
                             put = setStaticF_s_cachedCloseTask))::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* s_cachedCloseTask;

  /// @brief Field s_random, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_random, put = setStaticF_s_random))::System::Security::Cryptography::RandomNumberGenerator* s_random;

  /// @brief Field s_textEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_textEncoding, put = setStaticF_s_textEncoding))::System::Text::UTF8Encoding* s_textEncoding;

  /// @brief Field s_validCloseOutputStates, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_validCloseOutputStates,
               put = setStaticF_s_validCloseOutputStates))::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> s_validCloseOutputStates;

  /// @brief Field s_validCloseStates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_validCloseStates,
                             put = setStaticF_s_validCloseStates))::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> s_validCloseStates;

  /// @brief Field s_validReceiveStates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_validReceiveStates,
                             put = setStaticF_s_validReceiveStates))::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> s_validReceiveStates;

  /// @brief Field s_validSendStates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_validSendStates,
                             put = setStaticF_s_validSendStates))::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> s_validSendStates;

  /// @brief Method Abort, addr 0x2c91e18, size 0x30, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method AllocateSendBuffer, addr 0x2c92894, size 0xec, virtual false, abstract: false, final false
  inline void AllocateSendBuffer(int32_t minLength);

  /// @brief Method ApplyMask, addr 0x2c92b00, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t ApplyMask(::System::Span_1<uint8_t> toMask, ::ArrayW<uint8_t, ::Array<uint8_t>*> mask, int32_t maskOffset, int32_t maskOffsetIndex);

  /// @brief Method ApplyMask, addr 0x2c93a00, size 0x104, virtual false, abstract: false, final false
  static inline int32_t ApplyMask(::System::Span_1<uint8_t> toMask, int32_t mask, int32_t maskIndex);

  /// @brief Method CloseOutputAsync, addr 0x2c91a2c, size 0x154, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription,
                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CloseWithReceiveErrorAndThrowAsync, addr 0x2c93328, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CloseWithReceiveErrorAndThrowAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::Net::WebSockets::WebSocketError error,
                                                                              ::System::Exception* innerException);

  /// @brief Method CombineMaskBytes, addr 0x2c9367c, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t CombineMaskBytes(::System::Span_1<uint8_t> buffer, int32_t maskOffset);

  /// @brief Method ConsumeFromBuffer, addr 0x2c93668, size 0x14, virtual false, abstract: false, final false
  inline void ConsumeFromBuffer(int32_t count);

  /// @brief Method CreateFromConnectedStream, addr 0x2c907e0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Net::WebSockets::ManagedWebSocket* CreateFromConnectedStream(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol, ::System::TimeSpan keepAliveInterval);

  /// @brief Method CreateOperationCanceledException, addr 0x2c92708, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateOperationCanceledException(::System::Exception* innerException, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x2c90c44, size 0xbc, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method DisposeCore, addr 0x2c90d00, size 0x54, virtual false, abstract: false, final false
  inline void DisposeCore();

  /// @brief Method EnsureBufferContainsAsync, addr 0x2c93750, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* EnsureBufferContainsAsync(int32_t minimumRequiredBytes, ::System::Threading::CancellationToken cancellationToken, bool throwOnPrematureClosure);

  /// @brief Method HandleReceivedCloseAsync, addr 0x2c93020, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* HandleReceivedCloseAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HandleReceivedPingPongAsync, addr 0x2c931f0, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* HandleReceivedPingPongAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsValidCloseStatus, addr 0x2c932e4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsValidCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus);

  static inline ::System::Net::WebSockets::ManagedWebSocket* New_ctor(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol, ::System::TimeSpan keepAliveInterval);

  /// @brief Method ReceiveAsync, addr 0x2c916d0, size 0x338, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer,
                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReceiveAsyncPrivate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
  inline ::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult> ReceiveAsyncPrivate(::System::Memory_1<uint8_t> payloadBuffer, ::System::Threading::CancellationToken cancellationToken,
                                                                                              TWebSocketReceiveResultGetter resultGetter);

  /// @brief Method ReleaseSendBuffer, addr 0x2c9390c, size 0xf4, virtual false, abstract: false, final false
  inline void ReleaseSendBuffer();

  /// @brief Method SendAsync, addr 0x2c90d64, size 0x28c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendCloseFrameAsync, addr 0x2c91d20, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendCloseFrameAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW closeStatusDescription,
                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendFrameAsync, addr 0x2c91610, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask SendFrameAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage, ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer,
                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendFrameFallbackAsync, addr 0x2c922fc, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendFrameFallbackAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage,
                                                                  ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendFrameLockAcquiredNonCancelableAsync, addr 0x2c91e48, size 0x4b4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask SendFrameLockAcquiredNonCancelableAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage,
                                                                                       ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer);

  /// @brief Method SendKeepAliveFrameAsync, addr 0x2c92bc0, size 0x3dc, virtual false, abstract: false, final false
  inline void SendKeepAliveFrameAsync();

  /// @brief Method SendPrivateAsync, addr 0x2c9112c, size 0x34c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask SendPrivateAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowIfEOFUnexpected, addr 0x2c93848, size 0x8c, virtual false, abstract: false, final false
  inline void ThrowIfEOFUnexpected(bool throwOnPrematureClosure);

  /// @brief Method ThrowIfOperationInProgress, addr 0x2c91a08, size 0x24, virtual false, abstract: false, final false
  inline void ThrowIfOperationInProgress(bool operationCompleted, ::StringW methodName);

  /// @brief Method ThrowOperationInProgress, addr 0x2c93b04, size 0x68, virtual false, abstract: false, final false
  inline void ThrowOperationInProgress(::StringW methodName);

  /// @brief Method TryParseMessageHeaderFromReceiveBuffer, addr 0x2c9341c, size 0x24c, virtual false, abstract: false, final false
  inline bool TryParseMessageHeaderFromReceiveBuffer(ByRef<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader> resultHeader);

  /// @brief Method TryValidateUtf8, addr 0x2c93b6c, size 0x1e4, virtual false, abstract: false, final false
  static inline bool TryValidateUtf8(::System::Span_1<uint8_t> span, bool endOfMessage, ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* state);

  /// @brief Method WaitForServerToCloseConnectionAsync, addr 0x2c93114, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForServerToCloseConnectionAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitForWriteTaskAsync, addr 0x2c927b0, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForWriteTaskAsync(::System::Threading::Tasks::ValueTask writeTask);

  /// @brief Method WriteFrameToSendBuffer, addr 0x2c9241c, size 0x2ac, virtual false, abstract: false, final false
  inline int32_t WriteFrameToSendBuffer(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage, ::System::ReadOnlySpan_1<uint8_t> payloadBuffer);

  /// @brief Method WriteHeader, addr 0x2c92980, size 0x180, virtual false, abstract: false, final false
  static inline int32_t WriteHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, ::ArrayW<uint8_t, ::Array<uint8_t>*> sendBuffer, ::System::ReadOnlySpan_1<uint8_t> payload,
                                    bool endOfMessage, bool useMask);

  /// @brief Method WriteRandomMask, addr 0x2c92f9c, size 0x84, virtual false, abstract: false, final false
  static inline void WriteRandomMask(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__abortSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__abortSource() const;

  constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& __cordl_internal_get__closeStatus() const;

  constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& __cordl_internal_get__closeStatus();

  constexpr ::StringW const& __cordl_internal_get__closeStatusDescription() const;

  constexpr ::StringW& __cordl_internal_get__closeStatusDescription();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr bool const& __cordl_internal_get__isServer() const;

  constexpr bool& __cordl_internal_get__isServer();

  constexpr ::System::Threading::Timer*& __cordl_internal_get__keepAliveTimer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __cordl_internal_get__keepAliveTimer() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__lastReceiveAsync();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__lastReceiveAsync() const;

  constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader const& __cordl_internal_get__lastReceiveHeader() const;

  constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader& __cordl_internal_get__lastReceiveHeader();

  constexpr bool const& __cordl_internal_get__lastSendWasFragment() const;

  constexpr bool& __cordl_internal_get__lastSendWasFragment();

  constexpr ::System::Memory_1<uint8_t> const& __cordl_internal_get__receiveBuffer() const;

  constexpr ::System::Memory_1<uint8_t>& __cordl_internal_get__receiveBuffer();

  constexpr int32_t const& __cordl_internal_get__receiveBufferCount() const;

  constexpr int32_t& __cordl_internal_get__receiveBufferCount();

  constexpr int32_t const& __cordl_internal_get__receiveBufferOffset() const;

  constexpr int32_t& __cordl_internal_get__receiveBufferOffset();

  constexpr bool const& __cordl_internal_get__receivedCloseFrame() const;

  constexpr bool& __cordl_internal_get__receivedCloseFrame();

  constexpr int32_t const& __cordl_internal_get__receivedMaskOffsetOffset() const;

  constexpr int32_t& __cordl_internal_get__receivedMaskOffsetOffset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__sendBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__sendBuffer();

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__sendFrameAsyncLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get__sendFrameAsyncLock() const;

  constexpr bool const& __cordl_internal_get__sentCloseFrame() const;

  constexpr bool& __cordl_internal_get__sentCloseFrame();

  constexpr ::System::Net::WebSockets::WebSocketState const& __cordl_internal_get__state() const;

  constexpr ::System::Net::WebSockets::WebSocketState& __cordl_internal_get__state();

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__stream() const;

  constexpr ::StringW const& __cordl_internal_get__subprotocol() const;

  constexpr ::StringW& __cordl_internal_get__subprotocol();

  constexpr ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*& __cordl_internal_get__utf8TextState();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*> const& __cordl_internal_get__utf8TextState() const;

  constexpr void __cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__closeStatus(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> value);

  constexpr void __cordl_internal_set__closeStatusDescription(::StringW value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__isServer(bool value);

  constexpr void __cordl_internal_set__keepAliveTimer(::System::Threading::Timer* value);

  constexpr void __cordl_internal_set__lastReceiveAsync(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__lastReceiveHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader value);

  constexpr void __cordl_internal_set__lastSendWasFragment(bool value);

  constexpr void __cordl_internal_set__receiveBuffer(::System::Memory_1<uint8_t> value);

  constexpr void __cordl_internal_set__receiveBufferCount(int32_t value);

  constexpr void __cordl_internal_set__receiveBufferOffset(int32_t value);

  constexpr void __cordl_internal_set__receivedCloseFrame(bool value);

  constexpr void __cordl_internal_set__receivedMaskOffsetOffset(int32_t value);

  constexpr void __cordl_internal_set__sendBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__sendFrameAsyncLock(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__sentCloseFrame(bool value);

  constexpr void __cordl_internal_set__state(::System::Net::WebSockets::WebSocketState value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__subprotocol(::StringW value);

  constexpr void __cordl_internal_set__utf8TextState(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* value);

  /// @brief Method .ctor, addr 0x2c90868, size 0x3bc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol, ::System::TimeSpan keepAliveInterval);

  static inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* getStaticF_s_cachedCloseTask();

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_s_random();

  static inline ::System::Text::UTF8Encoding* getStaticF_s_textEncoding();

  static inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> getStaticF_s_validCloseOutputStates();

  static inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> getStaticF_s_validCloseStates();

  static inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> getStaticF_s_validReceiveStates();

  static inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> getStaticF_s_validSendStates();

  /// @brief Method get_CloseStatusDescription, addr 0x2c90d54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CloseStatusDescription();

  /// @brief Method get_ReceiveAsyncLock, addr 0x2c90c2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ReceiveAsyncLock();

  /// @brief Method get_State, addr 0x2c90d5c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::WebSockets::WebSocketState get_State();

  /// @brief Method get_StateUpdateLock, addr 0x2c90c24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_StateUpdateLock();

  static inline void setStaticF_s_cachedCloseTask(::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* value);

  static inline void setStaticF_s_random(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline void setStaticF_s_textEncoding(::System::Text::UTF8Encoding* value);

  static inline void setStaticF_s_validCloseOutputStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value);

  static inline void setStaticF_s_validCloseStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value);

  static inline void setStaticF_s_validReceiveStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value);

  static inline void setStaticF_s_validSendStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedWebSocket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagedWebSocket(ManagedWebSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagedWebSocket(ManagedWebSocket const&) = delete;

  /// @brief Field _stream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _isServer, offset: 0x18, size: 0x1, def value: None
  bool ____isServer;

  /// @brief Field _subprotocol, offset: 0x20, size: 0x8, def value: None
  ::StringW ____subprotocol;

  /// @brief Field _keepAliveTimer, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Timer* ____keepAliveTimer;

  /// @brief Field _abortSource, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____abortSource;

  /// @brief Field _receiveBuffer, offset: 0x38, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> ____receiveBuffer;

  /// @brief Field _utf8TextState, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* ____utf8TextState;

  /// @brief Field _sendFrameAsyncLock, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____sendFrameAsyncLock;

  /// @brief Field _state, offset: 0x58, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketState ____state;

  /// @brief Field _disposed, offset: 0x5c, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _sentCloseFrame, offset: 0x5d, size: 0x1, def value: None
  bool ____sentCloseFrame;

  /// @brief Field _receivedCloseFrame, offset: 0x5e, size: 0x1, def value: None
  bool ____receivedCloseFrame;

  /// @brief Field _closeStatus, offset: 0x60, size: 0x8, def value: None
  ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> ____closeStatus;

  /// @brief Field _closeStatusDescription, offset: 0x68, size: 0x8, def value: None
  ::StringW ____closeStatusDescription;

  /// @brief Field _lastReceiveHeader, offset: 0x70, size: 0x18, def value: None
  ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader ____lastReceiveHeader;

  /// @brief Field _receiveBufferOffset, offset: 0x88, size: 0x4, def value: None
  int32_t ____receiveBufferOffset;

  /// @brief Field _receiveBufferCount, offset: 0x8c, size: 0x4, def value: None
  int32_t ____receiveBufferCount;

  /// @brief Field _receivedMaskOffsetOffset, offset: 0x90, size: 0x4, def value: None
  int32_t ____receivedMaskOffsetOffset;

  /// @brief Field _sendBuffer, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____sendBuffer;

  /// @brief Field _lastSendWasFragment, offset: 0xa0, size: 0x1, def value: None
  bool ____lastSendWasFragment;

  /// @brief Field _lastReceiveAsync, offset: 0xa8, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____lastReceiveAsync;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::ManagedWebSocket, 0xb0>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____isServer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____subprotocol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____keepAliveTimer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____abortSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____utf8TextState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sendFrameAsyncLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____state) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____disposed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sentCloseFrame) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receivedCloseFrame) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____closeStatus) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____closeStatusDescription) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastReceiveHeader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBufferOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBufferCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receivedMaskOffsetOffset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sendBuffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastSendWasFragment) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastReceiveAsync) == 0xa8, "Offset mismatch!");

} // namespace System::Net::WebSockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, "System.Net.WebSockets", "ManagedWebSocket/MessageOpcode");
NEED_NO_BOX(::System::Net::WebSockets::ManagedWebSocket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ManagedWebSocket*, "System.Net.WebSockets", "ManagedWebSocket");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1, "System.Net.WebSockets", "ManagedWebSocket/IWebSocketReceiveResultGetter`1");
NEED_NO_BOX(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*, "System.Net.WebSockets", "ManagedWebSocket/Utf8MessageState");
NEED_NO_BOX(::System::Net::WebSockets::__ManagedWebSocket____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket____c*, "System.Net.WebSockets", "ManagedWebSocket/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebSockets::__ManagedWebSocket____c__61_2, "System.Net.WebSockets", "ManagedWebSocket/<>c__61`2");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, "System.Net.WebSockets", "ManagedWebSocket/MessageHeader");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter, "System.Net.WebSockets", "ManagedWebSocket/WebSocketReceiveResultGetter");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66, "System.Net.WebSockets", "ManagedWebSocket/<CloseWithReceiveErrorAndThrowAsync>d__66");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71, "System.Net.WebSockets", "ManagedWebSocket/<EnsureBufferContainsAsync>d__71");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62, "System.Net.WebSockets", "ManagedWebSocket/<HandleReceivedCloseAsync>d__62");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64, "System.Net.WebSockets", "ManagedWebSocket/<HandleReceivedPingPongAsync>d__64");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2, "System.Net.WebSockets", "ManagedWebSocket/<ReceiveAsyncPrivate>d__61`2");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69, "System.Net.WebSockets", "ManagedWebSocket/<SendCloseFrameAsync>d__69");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56, "System.Net.WebSockets", "ManagedWebSocket/<SendFrameFallbackAsync>d__56");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63, "System.Net.WebSockets",
                       "ManagedWebSocket/<WaitForServerToCloseConnectionAsync>d__63");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55, "System.Net.WebSockets", "ManagedWebSocket/<WaitForWriteTaskAsync>d__55");
