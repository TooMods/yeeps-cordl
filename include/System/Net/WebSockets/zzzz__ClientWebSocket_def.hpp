#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientWebSocket)
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
class WebSocketHandle;
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
class __ClientWebSocket__DefaultWebProxy;
}
namespace System::Net::WebSockets {
struct __ClientWebSocket__InternalState;
}
namespace System::Net::WebSockets {
struct __ClientWebSocket___ConnectAsyncCore_d__16;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::WebSockets {
struct __ClientWebSocket__InternalState;
}
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Net::WebSockets {
class __ClientWebSocket__DefaultWebProxy;
}
namespace System::Net::WebSockets {
struct __ClientWebSocket___ConnectAsyncCore_d__16;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::__ClientWebSocket__InternalState);
MARK_REF_PTR_T(::System::Net::WebSockets::ClientWebSocket);
MARK_REF_PTR_T(::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy);
MARK_VAL_T(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16);
// Type: ::InternalState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ClientWebSocket::InternalState
struct CORDL_TYPE __ClientWebSocket__InternalState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ClientWebSocket__InternalState_Unwrapped
  enum struct ____ClientWebSocket__InternalState_Unwrapped : int32_t {
    __E_Created = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disposed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ClientWebSocket__InternalState_Unwrapped() const noexcept {
    return static_cast<____ClientWebSocket__InternalState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClientWebSocket__InternalState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ClientWebSocket__InternalState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::System::Net::WebSockets::__ClientWebSocket__InternalState const Connected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::System::Net::WebSockets::__ClientWebSocket__InternalState const Connecting;

  /// @brief Field Created value: static_cast<int32_t>(0x0)
  static ::System::Net::WebSockets::__ClientWebSocket__InternalState const Created;

  /// @brief Field Disposed value: static_cast<int32_t>(0x3)
  static ::System::Net::WebSockets::__ClientWebSocket__InternalState const Disposed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ClientWebSocket__InternalState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket__InternalState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: ::DefaultWebProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::ClientWebSocket::DefaultWebProxy*
class CORDL_TYPE __ClientWebSocket__DefaultWebProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Credentials, put = set_Credentials))::System::Net::ICredentials* Credentials;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField,
                             put = setStaticF__Instance_k__BackingField))::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* _Instance_k__BackingField;

  /// @brief Convert operator to "::System::Net::IWebProxy"
  constexpr operator ::System::Net::IWebProxy*() noexcept;

  /// @brief Method GetProxy, addr 0x2c985dc, size 0x40, virtual true, abstract: false, final true
  inline ::System::Uri* GetProxy(::System::Uri* destination);

  /// @brief Method IsBypassed, addr 0x2c9861c, size 0x40, virtual true, abstract: false, final true
  inline bool IsBypassed(::System::Uri* host);

  static inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* New_ctor();

  /// @brief Method .ctor, addr 0x2c9865c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* getStaticF__Instance_k__BackingField();

  /// @brief Method get_Credentials, addr 0x2c9855c, size 0x40, virtual true, abstract: false, final true
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_Instance, addr 0x2c98504, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* get_Instance();

  /// @brief Convert to "::System::Net::IWebProxy"
  constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

  static inline void setStaticF__Instance_k__BackingField(::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* value);

  /// @brief Method set_Credentials, addr 0x2c9859c, size 0x40, virtual true, abstract: false, final true
  inline void set_Credentials(::System::Net::ICredentials* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClientWebSocket__DefaultWebProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClientWebSocket__DefaultWebProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClientWebSocket__DefaultWebProxy(__ClientWebSocket__DefaultWebProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClientWebSocket__DefaultWebProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClientWebSocket__DefaultWebProxy(__ClientWebSocket__DefaultWebProxy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy, 0x10>, "Size mismatch!");

} // namespace System::Net::WebSockets
// Type: ::<ConnectAsyncCore>d__16
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::ClientWebSocket::<ConnectAsyncCore>d__16
struct CORDL_TYPE __ClientWebSocket___ConnectAsyncCore_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c986c8, size 0x358, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c98b70, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClientWebSocket___ConnectAsyncCore_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ClientWebSocket*", modifiers: "",
  // def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ClientWebSocket___ConnectAsyncCore_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::System::Net::WebSockets::ClientWebSocket* __4__this, ::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken,
                                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebSockets::ClientWebSocket* __4__this;

  /// @brief Field uri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* uri;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, uri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, __u__1) == 0x38, "Offset mismatch!");

} // namespace System::Net::WebSockets
// Type: System.Net.WebSockets::ClientWebSocket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::ClientWebSocket*
class CORDL_TYPE ClientWebSocket : public ::System::Net::WebSockets::WebSocket {
public:
  // Declarations
  using DefaultWebProxy = ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy;

  using InternalState = ::System::Net::WebSockets::__ClientWebSocket__InternalState;

  using _ConnectAsyncCore_d__16 = ::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16;

  __declspec(property(get = get_CloseStatusDescription))::StringW CloseStatusDescription;

  __declspec(property(get = get_Options))::System::Net::WebSockets::ClientWebSocketOptions* Options;

  __declspec(property(get = get_State))::System::Net::WebSockets::WebSocketState State;

  /// @brief Field _innerWebSocket, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__innerWebSocket, put = __cordl_internal_set__innerWebSocket))::System::Net::WebSockets::WebSocketHandle* _innerWebSocket;

  /// @brief Field _options, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__options, put = __cordl_internal_set__options))::System::Net::WebSockets::ClientWebSocketOptions* _options;

  /// @brief Field _state, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) int32_t _state;

  /// @brief Method Abort, addr 0x2c98368, size 0x94, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method CloseOutputAsync, addr 0x2c982f0, size 0x58, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription,
                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ConnectAsync, addr 0x2c97d90, size 0x288, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ConnectAsync(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ConnectAsyncCore, addr 0x2c98024, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x2c98438, size 0xa8, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::System::Net::WebSockets::ClientWebSocket* New_ctor();

  /// @brief Method ReceiveAsync, addr 0x2c98278, size 0x58, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer,
                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsync, addr 0x2c98108, size 0x70, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowIfNotConnected, addr 0x2c98178, size 0xdc, virtual false, abstract: false, final false
  inline void ThrowIfNotConnected();

  constexpr ::System::Net::WebSockets::WebSocketHandle*& __cordl_internal_get__innerWebSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::WebSocketHandle*> const& __cordl_internal_get__innerWebSocket() const;

  constexpr ::System::Net::WebSockets::ClientWebSocketOptions*& __cordl_internal_get__options();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::ClientWebSocketOptions*> const& __cordl_internal_get__options() const;

  constexpr int32_t const& __cordl_internal_get__state() const;

  constexpr int32_t& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__innerWebSocket(::System::Net::WebSockets::WebSocketHandle* value);

  constexpr void __cordl_internal_set__options(::System::Net::WebSockets::ClientWebSocketOptions* value);

  constexpr void __cordl_internal_set__state(int32_t value);

  /// @brief Method .ctor, addr 0x2c97964, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CloseStatusDescription, addr 0x2c97c18, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW get_CloseStatusDescription();

  /// @brief Method get_Options, addr 0x2c97c10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebSockets::ClientWebSocketOptions* get_Options();

  /// @brief Method get_State, addr 0x2c97cc8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Net::WebSockets::WebSocketState get_State();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientWebSocket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientWebSocket(ClientWebSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientWebSocket(ClientWebSocket const&) = delete;

  /// @brief Field _options, offset: 0x10, size: 0x8, def value: None
  ::System::Net::WebSockets::ClientWebSocketOptions* ____options;

  /// @brief Field _innerWebSocket, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebSockets::WebSocketHandle* ____innerWebSocket;

  /// @brief Field _state, offset: 0x20, size: 0x4, def value: None
  int32_t ____state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::ClientWebSocket, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____options) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____innerWebSocket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____state) == 0x20, "Offset mismatch!");

} // namespace System::Net::WebSockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ClientWebSocket__InternalState, "System.Net.WebSockets", "ClientWebSocket/InternalState");
NEED_NO_BOX(::System::Net::WebSockets::ClientWebSocket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ClientWebSocket*, "System.Net.WebSockets", "ClientWebSocket");
NEED_NO_BOX(::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*, "System.Net.WebSockets", "ClientWebSocket/DefaultWebProxy");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16, "System.Net.WebSockets", "ClientWebSocket/<ConnectAsyncCore>d__16");
