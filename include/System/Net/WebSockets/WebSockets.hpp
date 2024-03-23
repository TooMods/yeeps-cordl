#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/WebSockets/ClientWebSocket.hpp"
#include "System/Net/WebSockets/ClientWebSocketOptions.hpp"
#include "System/Net/WebSockets/ManagedWebSocket.hpp"
#include "System/Net/WebSockets/WebSocket.hpp"
#include "System/Net/WebSockets/WebSocketCloseStatus.hpp"
#include "System/Net/WebSockets/WebSocketError.hpp"
#include "System/Net/WebSockets/WebSocketException.hpp"
#include "System/Net/WebSockets/WebSocketHandle.hpp"
#include "System/Net/WebSockets/WebSocketMessageType.hpp"
#include "System/Net/WebSockets/WebSocketReceiveResult.hpp"
#include "System/Net/WebSockets/WebSocketState.hpp"
#include "System/Net/WebSockets/WebSocketValidate.hpp"
#ifdef __cpp_modules
export module WebSockets;
#endif
