#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PunLogLevel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerSettings)
namespace Photon::Realtime {
class AppSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Photon::Pun {
class ServerSettings;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::ServerSettings);
// Type: Photon.Pun::ServerSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::ServerSettings*
class CORDL_TYPE ServerSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field AppSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AppSettings, put = __cordl_internal_set_AppSettings))::Photon::Realtime::AppSettings* AppSettings;

  /// @brief Field DevRegion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_DevRegion, put = __cordl_internal_set_DevRegion))::StringW DevRegion;

  /// @brief Field EnableSupportLogger, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableSupportLogger, put = __cordl_internal_set_EnableSupportLogger)) bool EnableSupportLogger;

  /// @brief Field PunLogging, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PunLogging, put = __cordl_internal_set_PunLogging))::Photon::Pun::PunLogLevel PunLogging;

  /// @brief Field RpcList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RpcList, put = __cordl_internal_set_RpcList))::System::Collections::Generic::List_1<::StringW>* RpcList;

  /// @brief Field RunInBackground, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_RunInBackground, put = __cordl_internal_set_RunInBackground)) bool RunInBackground;

  /// @brief Field StartInOfflineMode, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_StartInOfflineMode, put = __cordl_internal_set_StartInOfflineMode)) bool StartInOfflineMode;

  /// @brief Method IsAppId, addr 0x26032f8, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsAppId(::StringW val);

  static inline ::Photon::Pun::ServerSettings* New_ctor();

  /// @brief Method ResetBestRegionCodeInPreferences, addr 0x26033e8, size 0x54, virtual false, abstract: false, final false
  static inline void ResetBestRegionCodeInPreferences();

  /// @brief Method ToString, addr 0x260343c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UseCloud, addr 0x26032b4, size 0x44, virtual false, abstract: false, final false
  inline void UseCloud(::StringW cloudAppid, ::StringW code);

  constexpr ::Photon::Realtime::AppSettings*& __cordl_internal_get_AppSettings();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AppSettings*> const& __cordl_internal_get_AppSettings() const;

  constexpr ::StringW const& __cordl_internal_get_DevRegion() const;

  constexpr ::StringW& __cordl_internal_get_DevRegion();

  constexpr bool const& __cordl_internal_get_EnableSupportLogger() const;

  constexpr bool& __cordl_internal_get_EnableSupportLogger();

  constexpr ::Photon::Pun::PunLogLevel const& __cordl_internal_get_PunLogging() const;

  constexpr ::Photon::Pun::PunLogLevel& __cordl_internal_get_PunLogging();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RpcList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_RpcList() const;

  constexpr bool const& __cordl_internal_get_RunInBackground() const;

  constexpr bool& __cordl_internal_get_RunInBackground();

  constexpr bool const& __cordl_internal_get_StartInOfflineMode() const;

  constexpr bool& __cordl_internal_get_StartInOfflineMode();

  constexpr void __cordl_internal_set_AppSettings(::Photon::Realtime::AppSettings* value);

  constexpr void __cordl_internal_set_DevRegion(::StringW value);

  constexpr void __cordl_internal_set_EnableSupportLogger(bool value);

  constexpr void __cordl_internal_set_PunLogging(::Photon::Pun::PunLogLevel value);

  constexpr void __cordl_internal_set_RpcList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_RunInBackground(bool value);

  constexpr void __cordl_internal_set_StartInOfflineMode(bool value);

  /// @brief Method .ctor, addr 0x26034a0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BestRegionSummaryInPreferences, addr 0x2603398, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_BestRegionSummaryInPreferences();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerSettings(ServerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerSettings(ServerSettings const&) = delete;

  /// @brief Field AppSettings, offset: 0x18, size: 0x8, def value: None
  ::Photon::Realtime::AppSettings* ___AppSettings;

  /// @brief Field DevRegion, offset: 0x20, size: 0x8, def value: None
  ::StringW ___DevRegion;

  /// @brief Field PunLogging, offset: 0x28, size: 0x4, def value: None
  ::Photon::Pun::PunLogLevel ___PunLogging;

  /// @brief Field EnableSupportLogger, offset: 0x2c, size: 0x1, def value: None
  bool ___EnableSupportLogger;

  /// @brief Field RunInBackground, offset: 0x2d, size: 0x1, def value: None
  bool ___RunInBackground;

  /// @brief Field StartInOfflineMode, offset: 0x2e, size: 0x1, def value: None
  bool ___StartInOfflineMode;

  /// @brief Field RpcList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___RpcList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::ServerSettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___AppSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___DevRegion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___PunLogging) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___EnableSupportLogger) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___RunInBackground) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___StartInOfflineMode) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___RpcList) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::ServerSettings);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::ServerSettings*, "Photon.Pun", "ServerSettings");
