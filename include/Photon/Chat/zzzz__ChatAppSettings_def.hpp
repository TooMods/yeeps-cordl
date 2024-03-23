#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatAppSettings)
// Forward declare root types
namespace Photon::Chat {
class ChatAppSettings;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatAppSettings);
// Type: Photon.Chat::ChatAppSettings
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 67, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatAppSettings*
class CORDL_TYPE ChatAppSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AppIdChat, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AppIdChat, put = __cordl_internal_set_AppIdChat))::StringW AppIdChat;

  /// @brief Field AppVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AppVersion, put = __cordl_internal_set_AppVersion))::StringW AppVersion;

  /// @brief Field EnableProtocolFallback, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableProtocolFallback, put = __cordl_internal_set_EnableProtocolFallback)) bool EnableProtocolFallback;

  /// @brief Field FixedRegion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_FixedRegion, put = __cordl_internal_set_FixedRegion))::StringW FixedRegion;

  __declspec(property(get = get_IsDefaultNameServer)) bool IsDefaultNameServer;

  /// @brief Field NetworkLogging, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_NetworkLogging, put = __cordl_internal_set_NetworkLogging))::ExitGames::Client::Photon::DebugLevel NetworkLogging;

  /// @brief Field Port, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get_Port, put = __cordl_internal_set_Port)) uint16_t Port;

  /// @brief Field Protocol, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_Protocol, put = __cordl_internal_set_Protocol))::ExitGames::Client::Photon::ConnectionProtocol Protocol;

  /// @brief Field ProxyServer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ProxyServer, put = __cordl_internal_set_ProxyServer))::StringW ProxyServer;

  /// @brief Field Server, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Server, put = __cordl_internal_set_Server))::StringW Server;

  static inline ::Photon::Chat::ChatAppSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_AppIdChat() const;

  constexpr ::StringW& __cordl_internal_get_AppIdChat();

  constexpr ::StringW const& __cordl_internal_get_AppVersion() const;

  constexpr ::StringW& __cordl_internal_get_AppVersion();

  constexpr bool const& __cordl_internal_get_EnableProtocolFallback() const;

  constexpr bool& __cordl_internal_get_EnableProtocolFallback();

  constexpr ::StringW const& __cordl_internal_get_FixedRegion() const;

  constexpr ::StringW& __cordl_internal_get_FixedRegion();

  constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_NetworkLogging() const;

  constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_NetworkLogging();

  constexpr uint16_t const& __cordl_internal_get_Port() const;

  constexpr uint16_t& __cordl_internal_get_Port();

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_Protocol() const;

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_Protocol();

  constexpr ::StringW const& __cordl_internal_get_ProxyServer() const;

  constexpr ::StringW& __cordl_internal_get_ProxyServer();

  constexpr ::StringW const& __cordl_internal_get_Server() const;

  constexpr ::StringW& __cordl_internal_get_Server();

  constexpr void __cordl_internal_set_AppIdChat(::StringW value);

  constexpr void __cordl_internal_set_AppVersion(::StringW value);

  constexpr void __cordl_internal_set_EnableProtocolFallback(bool value);

  constexpr void __cordl_internal_set_FixedRegion(::StringW value);

  constexpr void __cordl_internal_set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel value);

  constexpr void __cordl_internal_set_Port(uint16_t value);

  constexpr void __cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol value);

  constexpr void __cordl_internal_set_ProxyServer(::StringW value);

  constexpr void __cordl_internal_set_Server(::StringW value);

  /// @brief Method .ctor, addr 0x180a34c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDefaultNameServer, addr 0x180a340, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDefaultNameServer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatAppSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatAppSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatAppSettings(ChatAppSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatAppSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatAppSettings(ChatAppSettings const&) = delete;

  /// @brief Field AppIdChat, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AppIdChat;

  /// @brief Field AppVersion, offset: 0x18, size: 0x8, def value: None
  ::StringW ___AppVersion;

  /// @brief Field FixedRegion, offset: 0x20, size: 0x8, def value: None
  ::StringW ___FixedRegion;

  /// @brief Field Server, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Server;

  /// @brief Field Port, offset: 0x30, size: 0x2, def value: None
  uint16_t ___Port;

  /// @brief Field ProxyServer, offset: 0x38, size: 0x8, def value: None
  ::StringW ___ProxyServer;

  /// @brief Field Protocol, offset: 0x40, size: 0x1, def value: None
  ::ExitGames::Client::Photon::ConnectionProtocol ___Protocol;

  /// @brief Field EnableProtocolFallback, offset: 0x41, size: 0x1, def value: None
  bool ___EnableProtocolFallback;

  /// @brief Field NetworkLogging, offset: 0x42, size: 0x1, def value: None
  ::ExitGames::Client::Photon::DebugLevel ___NetworkLogging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatAppSettings, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___AppIdChat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___AppVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___FixedRegion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___Server) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___Port) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___ProxyServer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___Protocol) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___EnableProtocolFallback) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatAppSettings, ___NetworkLogging) == 0x42, "Offset mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatAppSettings);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatAppSettings*, "Photon.Chat", "ChatAppSettings");
