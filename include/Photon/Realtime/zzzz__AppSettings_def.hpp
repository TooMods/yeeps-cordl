#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Realtime/zzzz__AuthModeOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppSettings)
// Forward declare root types
namespace Photon::Realtime {
class AppSettings;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::AppSettings);
// Type: Photon.Realtime::AppSettings
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 114, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::AppSettings*
class CORDL_TYPE AppSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AppIdChat, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_AppIdChat, put = __cordl_internal_set_AppIdChat))::StringW AppIdChat;

  /// @brief Field AppIdFusion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AppIdFusion, put = __cordl_internal_set_AppIdFusion))::StringW AppIdFusion;

  /// @brief Field AppIdRealtime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AppIdRealtime, put = __cordl_internal_set_AppIdRealtime))::StringW AppIdRealtime;

  /// @brief Field AppIdVoice, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_AppIdVoice, put = __cordl_internal_set_AppIdVoice))::StringW AppIdVoice;

  /// @brief Field AppVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_AppVersion, put = __cordl_internal_set_AppVersion))::StringW AppVersion;

  /// @brief Field AuthMode, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_AuthMode, put = __cordl_internal_set_AuthMode))::Photon::Realtime::AuthModeOption AuthMode;

  /// @brief Field BestRegionSummaryFromStorage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_BestRegionSummaryFromStorage, put = __cordl_internal_set_BestRegionSummaryFromStorage))::StringW BestRegionSummaryFromStorage;

  /// @brief Field EnableLobbyStatistics, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableLobbyStatistics, put = __cordl_internal_set_EnableLobbyStatistics)) bool EnableLobbyStatistics;

  /// @brief Field EnableProtocolFallback, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableProtocolFallback, put = __cordl_internal_set_EnableProtocolFallback)) bool EnableProtocolFallback;

  /// @brief Field FixedRegion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_FixedRegion, put = __cordl_internal_set_FixedRegion))::StringW FixedRegion;

  __declspec(property(get = get_IsBestRegion)) bool IsBestRegion;

  __declspec(property(get = get_IsDefaultNameServer)) bool IsDefaultNameServer;

  __declspec(property(get = get_IsDefaultPort)) bool IsDefaultPort;

  __declspec(property(get = get_IsMasterServerAddress)) bool IsMasterServerAddress;

  /// @brief Field NetworkLogging, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_NetworkLogging, put = __cordl_internal_set_NetworkLogging))::ExitGames::Client::Photon::DebugLevel NetworkLogging;

  /// @brief Field Port, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_Port, put = __cordl_internal_set_Port)) int32_t Port;

  /// @brief Field Protocol, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_Protocol, put = __cordl_internal_set_Protocol))::ExitGames::Client::Photon::ConnectionProtocol Protocol;

  /// @brief Field ProxyServer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ProxyServer, put = __cordl_internal_set_ProxyServer))::StringW ProxyServer;

  /// @brief Field Server, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Server, put = __cordl_internal_set_Server))::StringW Server;

  /// @brief Field UseNameServer, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_UseNameServer, put = __cordl_internal_set_UseNameServer)) bool UseNameServer;

  /// @brief Method CopyTo, addr 0x22352e4, size 0x80, virtual false, abstract: false, final false
  inline ::Photon::Realtime::AppSettings* CopyTo(::Photon::Realtime::AppSettings* d);

  /// @brief Method HideAppId, addr 0x22351b4, size 0x90, virtual false, abstract: false, final false
  inline ::StringW HideAppId(::StringW appId);

  /// @brief Method IsAppId, addr 0x2235244, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsAppId(::StringW val);

  static inline ::Photon::Realtime::AppSettings* New_ctor();

  /// @brief Method ToStringFull, addr 0x2234b88, size 0x62c, virtual false, abstract: false, final false
  inline ::StringW ToStringFull();

  constexpr ::StringW const& __cordl_internal_get_AppIdChat() const;

  constexpr ::StringW& __cordl_internal_get_AppIdChat();

  constexpr ::StringW const& __cordl_internal_get_AppIdFusion() const;

  constexpr ::StringW& __cordl_internal_get_AppIdFusion();

  constexpr ::StringW const& __cordl_internal_get_AppIdRealtime() const;

  constexpr ::StringW& __cordl_internal_get_AppIdRealtime();

  constexpr ::StringW const& __cordl_internal_get_AppIdVoice() const;

  constexpr ::StringW& __cordl_internal_get_AppIdVoice();

  constexpr ::StringW const& __cordl_internal_get_AppVersion() const;

  constexpr ::StringW& __cordl_internal_get_AppVersion();

  constexpr ::Photon::Realtime::AuthModeOption const& __cordl_internal_get_AuthMode() const;

  constexpr ::Photon::Realtime::AuthModeOption& __cordl_internal_get_AuthMode();

  constexpr ::StringW const& __cordl_internal_get_BestRegionSummaryFromStorage() const;

  constexpr ::StringW& __cordl_internal_get_BestRegionSummaryFromStorage();

  constexpr bool const& __cordl_internal_get_EnableLobbyStatistics() const;

  constexpr bool& __cordl_internal_get_EnableLobbyStatistics();

  constexpr bool const& __cordl_internal_get_EnableProtocolFallback() const;

  constexpr bool& __cordl_internal_get_EnableProtocolFallback();

  constexpr ::StringW const& __cordl_internal_get_FixedRegion() const;

  constexpr ::StringW& __cordl_internal_get_FixedRegion();

  constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_NetworkLogging() const;

  constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_NetworkLogging();

  constexpr int32_t const& __cordl_internal_get_Port() const;

  constexpr int32_t& __cordl_internal_get_Port();

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_Protocol() const;

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_Protocol();

  constexpr ::StringW const& __cordl_internal_get_ProxyServer() const;

  constexpr ::StringW& __cordl_internal_get_ProxyServer();

  constexpr ::StringW const& __cordl_internal_get_Server() const;

  constexpr ::StringW& __cordl_internal_get_Server();

  constexpr bool const& __cordl_internal_get_UseNameServer() const;

  constexpr bool& __cordl_internal_get_UseNameServer();

  constexpr void __cordl_internal_set_AppIdChat(::StringW value);

  constexpr void __cordl_internal_set_AppIdFusion(::StringW value);

  constexpr void __cordl_internal_set_AppIdRealtime(::StringW value);

  constexpr void __cordl_internal_set_AppIdVoice(::StringW value);

  constexpr void __cordl_internal_set_AppVersion(::StringW value);

  constexpr void __cordl_internal_set_AuthMode(::Photon::Realtime::AuthModeOption value);

  constexpr void __cordl_internal_set_BestRegionSummaryFromStorage(::StringW value);

  constexpr void __cordl_internal_set_EnableLobbyStatistics(bool value);

  constexpr void __cordl_internal_set_EnableProtocolFallback(bool value);

  constexpr void __cordl_internal_set_FixedRegion(::StringW value);

  constexpr void __cordl_internal_set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel value);

  constexpr void __cordl_internal_set_Port(int32_t value);

  constexpr void __cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol value);

  constexpr void __cordl_internal_set_ProxyServer(::StringW value);

  constexpr void __cordl_internal_set_Server(::StringW value);

  constexpr void __cordl_internal_set_UseNameServer(bool value);

  /// @brief Method .ctor, addr 0x2235364, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsBestRegion, addr 0x2234b40, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsBestRegion();

  /// @brief Method get_IsDefaultNameServer, addr 0x2234b5c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsDefaultNameServer();

  /// @brief Method get_IsDefaultPort, addr 0x2234b78, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsDefaultPort();

  /// @brief Method get_IsMasterServerAddress, addr 0x2234b30, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsMasterServerAddress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppSettings(AppSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppSettings(AppSettings const&) = delete;

  /// @brief Field AppIdRealtime, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AppIdRealtime;

  /// @brief Field AppIdFusion, offset: 0x18, size: 0x8, def value: None
  ::StringW ___AppIdFusion;

  /// @brief Field AppIdChat, offset: 0x20, size: 0x8, def value: None
  ::StringW ___AppIdChat;

  /// @brief Field AppIdVoice, offset: 0x28, size: 0x8, def value: None
  ::StringW ___AppIdVoice;

  /// @brief Field AppVersion, offset: 0x30, size: 0x8, def value: None
  ::StringW ___AppVersion;

  /// @brief Field UseNameServer, offset: 0x38, size: 0x1, def value: None
  bool ___UseNameServer;

  /// @brief Field FixedRegion, offset: 0x40, size: 0x8, def value: None
  ::StringW ___FixedRegion;

  /// @brief Field BestRegionSummaryFromStorage, offset: 0x48, size: 0x8, def value: None
  ::StringW ___BestRegionSummaryFromStorage;

  /// @brief Field Server, offset: 0x50, size: 0x8, def value: None
  ::StringW ___Server;

  /// @brief Field Port, offset: 0x58, size: 0x4, def value: None
  int32_t ___Port;

  /// @brief Field ProxyServer, offset: 0x60, size: 0x8, def value: None
  ::StringW ___ProxyServer;

  /// @brief Field Protocol, offset: 0x68, size: 0x1, def value: None
  ::ExitGames::Client::Photon::ConnectionProtocol ___Protocol;

  /// @brief Field EnableProtocolFallback, offset: 0x69, size: 0x1, def value: None
  bool ___EnableProtocolFallback;

  /// @brief Field AuthMode, offset: 0x6c, size: 0x4, def value: None
  ::Photon::Realtime::AuthModeOption ___AuthMode;

  /// @brief Field EnableLobbyStatistics, offset: 0x70, size: 0x1, def value: None
  bool ___EnableLobbyStatistics;

  /// @brief Field NetworkLogging, offset: 0x71, size: 0x1, def value: None
  ::ExitGames::Client::Photon::DebugLevel ___NetworkLogging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::AppSettings, 0x78>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AppIdRealtime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AppIdFusion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AppIdChat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AppIdVoice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AppVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___UseNameServer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___FixedRegion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___BestRegionSummaryFromStorage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___Server) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___Port) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___ProxyServer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___Protocol) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___EnableProtocolFallback) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___AuthMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___EnableLobbyStatistics) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::AppSettings, ___NetworkLogging) == 0x71, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::AppSettings);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::AppSettings*, "Photon.Realtime", "AppSettings");
