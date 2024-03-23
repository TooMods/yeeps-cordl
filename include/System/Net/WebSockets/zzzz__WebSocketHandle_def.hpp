#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHandle)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
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
class WebSocket;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ConnectAsyncCore_d__26;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ConnectSocketAsync_d__27;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ReadResponseHeaderLineAsync_d__32;
}
namespace System::Net::WebSockets {
class __WebSocketHandle____c;
}
namespace System::Net::WebSockets {
class __WebSocketHandle____c__DisplayClass30_0;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketHandle;
}
namespace System::Net::WebSockets {
class __WebSocketHandle____c;
}
namespace System::Net::WebSockets {
class __WebSocketHandle____c__DisplayClass30_0;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ConnectAsyncCore_d__26;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ConnectSocketAsync_d__27;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30;
}
namespace System::Net::WebSockets {
struct __WebSocketHandle___ReadResponseHeaderLineAsync_d__32;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebSockets::WebSocketHandle);
MARK_REF_PTR_T(::System::Net::WebSockets::__WebSocketHandle____c);
MARK_REF_PTR_T(::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0);
MARK_VAL_T(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26);
MARK_VAL_T(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27);
MARK_VAL_T(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30);
MARK_VAL_T(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::WebSocketHandle::<>c*
class CORDL_TYPE __WebSocketHandle____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::WebSockets::__WebSocketHandle____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Action_1<::System::Object*>* __9__26_0;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Action_1<::System::Object*>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1))::System::Action_1<::System::Object*>* __9__27_1;

  static inline ::System::Net::WebSockets::__WebSocketHandle____c* New_ctor();

  /// @brief Method <ConnectAsyncCore>b__26_0, addr 0x2c99ed4, size 0x60, virtual false, abstract: false, final false
  inline void _ConnectAsyncCore_b__26_0(::System::Object* s);

  /// @brief Method <ConnectSocketAsync>b__27_0, addr 0x2c99f34, size 0x84, virtual false, abstract: false, final false
  inline void _ConnectSocketAsync_b__27_0(::System::Object* s);

  /// @brief Method <ConnectSocketAsync>b__27_1, addr 0x2c99fb8, size 0x84, virtual false, abstract: false, final false
  inline void _ConnectSocketAsync_b__27_1(::System::Object* s);

  /// @brief Method .ctor, addr 0x2c99ecc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebSockets::__WebSocketHandle____c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__26_0();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__27_0();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__27_1();

  static inline void setStaticF___9(::System::Net::WebSockets::__WebSocketHandle____c* value);

  static inline void setStaticF___9__26_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__27_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__27_1(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebSocketHandle____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebSocketHandle____c(__WebSocketHandle____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebSocketHandle____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebSocketHandle____c(__WebSocketHandle____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle____c, 0x10>, "Size mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<ConnectAsyncCore>d__26
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::WebSocketHandle::<ConnectAsyncCore>d__26
struct CORDL_TYPE __WebSocketHandle___ConnectAsyncCore_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c9a03c, size 0x9ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9add4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle___ConnectAsyncCore_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::WebSocketHandle*", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "",
  // def_value: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: None }, CppParam { name: "_registration_5__2", ty:
  // "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "_stream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam {
  // name: "_secKeyAndSecWebSocketAccept_5__4", ty: "::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>", modifiers: "", def_value: None }, CppParam { name: "_sslStream_5__5",
  // ty: "::System::Net::Security::SslStream*", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }]
  constexpr __WebSocketHandle___ConnectAsyncCore_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::WebSocketHandle* __4__this, ::System::Uri* uri,
                                                       ::System::Net::WebSockets::ClientWebSocketOptions* options, ::System::Threading::CancellationTokenRegistration _registration_5__2,
                                                       ::System::IO::Stream* _stream_5__3, ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> _secKeyAndSecWebSocketAccept_5__4,
                                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*> __u__1,
                                                       ::System::Net::Security::SslStream* _sslStream_5__5,
                                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2,
                                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebSockets::WebSocketHandle* __4__this;

  /// @brief Field uri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* uri;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebSockets::ClientWebSocketOptions* options;

  /// @brief Field <registration>5__2, offset: 0x40, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration _registration_5__2;

  /// @brief Field <stream>5__3, offset: 0x58, size: 0x8, def value: None
  ::System::IO::Stream* _stream_5__3;

  /// @brief Field <secKeyAndSecWebSocketAccept>5__4, offset: 0x60, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> _secKeyAndSecWebSocketAccept_5__4;

  /// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*> __u__1;

  /// @brief Field <sslStream>5__5, offset: 0x80, size: 0x8, def value: None
  ::System::Net::Security::SslStream* _sslStream_5__5;

  /// @brief Field <>u__2, offset: 0x88, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x98, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, _registration_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, _stream_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, _secKeyAndSecWebSocketAccept_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, _sslStream_5__5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __u__2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, __u__3) == 0x98, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<ConnectSocketAsync>d__27
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::WebSocketHandle::<ConnectSocketAsync>d__27
struct CORDL_TYPE __WebSocketHandle___ConnectSocketAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c9ade0, size 0x99c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9b77c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle___ConnectSocketAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*>", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::WebSockets::WebSocketHandle*", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: None
  // }, CppParam { name: "__7__wrap1", ty: "::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_socket_5__4", ty: "::System::Net::Sockets::Socket*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __WebSocketHandle___ConnectSocketAsync_d__27(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*> __t__builder, ::StringW host,
      ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::WebSocketHandle* __4__this, int32_t port,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1,
      ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> __7__wrap1, int32_t __7__wrap2, ::System::Net::Sockets::Socket* _socket_5__4,
      ::System::Threading::CancellationTokenRegistration __7__wrap4, ::System::Threading::CancellationTokenRegistration __7__wrap5,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*> __t__builder;

  /// @brief Field host, offset: 0x20, size: 0x8, def value: None
  ::StringW host;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebSockets::WebSocketHandle* __4__this;

  /// @brief Field port, offset: 0x38, size: 0x4, def value: None
  int32_t port;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x58, size: 0x4, def value: None
  int32_t __7__wrap2;

  /// @brief Field <socket>5__4, offset: 0x60, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* _socket_5__4;

  /// @brief Field <>7__wrap4, offset: 0x68, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x80, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap5;

  /// @brief Field <>u__2, offset: 0x98, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, host) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, port) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __7__wrap2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, _socket_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __7__wrap4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __7__wrap5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, __u__2) == 0x98, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::WebSocketHandle::<>c__DisplayClass30_0*
class CORDL_TYPE __WebSocketHandle____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field headerValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_headerValue, put = __cordl_internal_set_headerValue))::StringW headerValue;

  static inline ::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0* New_ctor();

  /// @brief Method <ParseAndValidateConnectResponseAsync>b__0, addr 0x2c9b7dc, size 0x18, virtual false, abstract: false, final false
  inline bool _ParseAndValidateConnectResponseAsync_b__0(::StringW requested);

  constexpr ::StringW const& __cordl_internal_get_headerValue() const;

  constexpr ::StringW& __cordl_internal_get_headerValue();

  constexpr void __cordl_internal_set_headerValue(::StringW value);

  /// @brief Method .ctor, addr 0x2c9b7d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle____c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebSocketHandle____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebSocketHandle____c__DisplayClass30_0(__WebSocketHandle____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebSocketHandle____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebSocketHandle____c__DisplayClass30_0(__WebSocketHandle____c__DisplayClass30_0 const&) = delete;

  /// @brief Field headerValue, offset: 0x10, size: 0x8, def value: None
  ::StringW ___headerValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0, ___headerValue) == 0x10, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<ParseAndValidateConnectResponseAsync>d__30
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::WebSocketHandle::<ParseAndValidateConnectResponseAsync>d__30
struct CORDL_TYPE __WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c9b7f4, size 0x940, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9c134, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "expectedSecWebSocketAccept", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: None }, CppParam { name: "_foundUpgrade_5__2",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_foundConnection_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_foundSecWebSocketAccept_5__4", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_subprotocol_5__5", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }]
  constexpr __WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                           ::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken, ::StringW expectedSecWebSocketAccept,
                                                                           ::System::Net::WebSockets::ClientWebSocketOptions* options, bool _foundUpgrade_5__2, bool _foundConnection_5__3,
                                                                           bool _foundSecWebSocketAccept_5__4, ::StringW _subprotocol_5__5,
                                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field expectedSecWebSocketAccept, offset: 0x30, size: 0x8, def value: None
  ::StringW expectedSecWebSocketAccept;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebSockets::ClientWebSocketOptions* options;

  /// @brief Field <foundUpgrade>5__2, offset: 0x40, size: 0x1, def value: None
  bool _foundUpgrade_5__2;

  /// @brief Field <foundConnection>5__3, offset: 0x41, size: 0x1, def value: None
  bool _foundConnection_5__3;

  /// @brief Field <foundSecWebSocketAccept>5__4, offset: 0x42, size: 0x1, def value: None
  bool _foundSecWebSocketAccept_5__4;

  /// @brief Field <subprotocol>5__5, offset: 0x48, size: 0x8, def value: None
  ::StringW _subprotocol_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, expectedSecWebSocketAccept) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, _foundUpgrade_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, _foundConnection_5__3) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, _foundSecWebSocketAccept_5__4) == 0x42, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, _subprotocol_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<ReadResponseHeaderLineAsync>d__32
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::WebSocketHandle::<ReadResponseHeaderLineAsync>d__32
struct CORDL_TYPE __WebSocketHandle___ReadResponseHeaderLineAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c9c18c, size 0x54c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c9c6d8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebSocketHandle___ReadResponseHeaderLineAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*",
  // modifiers: "", def_value: None }, CppParam { name: "_arr_5__3", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_prevChar_5__4", ty: "char16_t",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None
  // }]
  constexpr __WebSocketHandle___ReadResponseHeaderLineAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                  ::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken, ::System::Text::StringBuilder* _sb_5__2,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> _arr_5__3, char16_t _prevChar_5__4,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <sb>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* _sb_5__2;

  /// @brief Field <arr>5__3, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _arr_5__3;

  /// @brief Field <prevChar>5__4, offset: 0x40, size: 0x2, def value: None
  char16_t _prevChar_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, _sb_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, _arr_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, _prevChar_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, __u__1) == 0x48, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: System.Net.WebSockets::WebSocketHandle
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::WebSocketHandle*
class CORDL_TYPE WebSocketHandle : public ::System::Object {
public:
  // Declarations
  using _ConnectAsyncCore_d__26 = ::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26;

  using _ConnectSocketAsync_d__27 = ::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27;

  using _ParseAndValidateConnectResponseAsync_d__30 = ::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30;

  using _ReadResponseHeaderLineAsync_d__32 = ::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32;

  using __c = ::System::Net::WebSockets::__WebSocketHandle____c;

  using __c__DisplayClass30_0 = ::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0;

  __declspec(property(get = get_CloseStatusDescription))::StringW CloseStatusDescription;

  __declspec(property(get = get_State))::System::Net::WebSockets::WebSocketState State;

  /// @brief Field _abortSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__abortSource, put = __cordl_internal_set__abortSource))::System::Threading::CancellationTokenSource* _abortSource;

  /// @brief Field _state, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::Net::WebSockets::WebSocketState _state;

  /// @brief Field _webSocket, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__webSocket, put = __cordl_internal_set__webSocket))::System::Net::WebSockets::WebSocket* _webSocket;

  /// @brief Field s_defaultHttpEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultHttpEncoding, put = setStaticF_s_defaultHttpEncoding))::System::Text::Encoding* s_defaultHttpEncoding;

  /// @brief Field t_cachedStringBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_cachedStringBuilder, put = setStaticF_t_cachedStringBuilder))::System::Text::StringBuilder* t_cachedStringBuilder;

  /// @brief Method Abort, addr 0x2c983fc, size 0x3c, virtual false, abstract: false, final false
  inline void Abort();

  /// @brief Method BuildRequestHeader, addr 0x2c990d0, size 0x798, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BuildRequestHeader(::System::Uri* uri, ::System::Net::WebSockets::ClientWebSocketOptions* options, ::StringW secKey);

  /// @brief Method CheckPlatformSupport, addr 0x2c97b28, size 0x4, virtual false, abstract: false, final false
  static inline void CheckPlatformSupport();

  /// @brief Method CloseOutputAsync, addr 0x2c98348, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription,
                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ConnectAsyncCore, addr 0x2c98a78, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions* options);

  /// @brief Method ConnectSocketAsync, addr 0x2c98fac, size 0x124, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* ConnectSocketAsync(::StringW host, int32_t port, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Create, addr 0x2c98a20, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::WebSockets::WebSocketHandle* Create();

  /// @brief Method CreateSecKeyAndSecWebSocketAccept, addr 0x2c99868, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> CreateSecKeyAndSecWebSocketAccept();

  /// @brief Method Dispose, addr 0x2c984e0, size 0x24, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method IsValid, addr 0x2c97ca4, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValid(::System::Net::WebSockets::WebSocketHandle* handle);

  static inline ::System::Net::WebSockets::WebSocketHandle* New_ctor();

  /// @brief Method ParseAndValidateConnectResponseAsync, addr 0x2c99b00, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ParseAndValidateConnectResponseAsync(::System::IO::Stream* stream, ::System::Net::WebSockets::ClientWebSocketOptions* options,
                                                                                             ::StringW expectedSecWebSocketAccept, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadResponseHeaderLineAsync, addr 0x2c99d14, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadResponseHeaderLineAsync(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReceiveAsync, addr 0x2c982d0, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer,
                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsync, addr 0x2c98254, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ValidateAndTrackHeader, addr 0x2c99c10, size 0xfc, virtual false, abstract: false, final false
  static inline void ValidateAndTrackHeader(::StringW targetHeaderName, ::StringW targetHeaderValue, ::StringW foundHeaderName, ::StringW foundHeaderValue, ByRef<bool> foundHeader);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__abortSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__abortSource() const;

  constexpr ::System::Net::WebSockets::WebSocketState const& __cordl_internal_get__state() const;

  constexpr ::System::Net::WebSockets::WebSocketState& __cordl_internal_get__state();

  constexpr ::System::Net::WebSockets::WebSocket*& __cordl_internal_get__webSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::WebSocket*> const& __cordl_internal_get__webSocket() const;

  constexpr void __cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__state(::System::Net::WebSockets::WebSocketState value);

  constexpr void __cordl_internal_set__webSocket(::System::Net::WebSockets::WebSocket* value);

  /// @brief Method .ctor, addr 0x2c98f3c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::Encoding* getStaticF_s_defaultHttpEncoding();

  static inline ::System::Text::StringBuilder* getStaticF_t_cachedStringBuilder();

  /// @brief Method get_CloseStatusDescription, addr 0x2c97cb0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_CloseStatusDescription();

  /// @brief Method get_State, addr 0x2c97d70, size 0x20, virtual false, abstract: false, final false
  inline ::System::Net::WebSockets::WebSocketState get_State();

  static inline void setStaticF_s_defaultHttpEncoding(::System::Text::Encoding* value);

  static inline void setStaticF_t_cachedStringBuilder(::System::Text::StringBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebSocketHandle(WebSocketHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebSocketHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebSocketHandle(WebSocketHandle const&) = delete;

  /// @brief Field _abortSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____abortSource;

  /// @brief Field _state, offset: 0x18, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketState ____state;

  /// @brief Field _webSocket, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::WebSocket* ____webSocket;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketHandle, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____abortSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketHandle, ____webSocket) == 0x20, "Offset mismatch!");

} // namespace System::Net::WebSockets
NEED_NO_BOX(::System::Net::WebSockets::WebSocketHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketHandle*, "System.Net.WebSockets", "WebSocketHandle");
NEED_NO_BOX(::System::Net::WebSockets::__WebSocketHandle____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle____c*, "System.Net.WebSockets", "WebSocketHandle/<>c");
NEED_NO_BOX(::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle____c__DisplayClass30_0*, "System.Net.WebSockets", "WebSocketHandle/<>c__DisplayClass30_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle___ConnectAsyncCore_d__26, "System.Net.WebSockets", "WebSocketHandle/<ConnectAsyncCore>d__26");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle___ConnectSocketAsync_d__27, "System.Net.WebSockets", "WebSocketHandle/<ConnectSocketAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle___ParseAndValidateConnectResponseAsync_d__30, "System.Net.WebSockets",
                       "WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__WebSocketHandle___ReadResponseHeaderLineAsync_d__32, "System.Net.WebSockets", "WebSocketHandle/<ReadResponseHeaderLineAsync>d__32");
