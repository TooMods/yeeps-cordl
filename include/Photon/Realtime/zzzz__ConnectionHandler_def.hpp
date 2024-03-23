#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionHandler)
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Photon::Realtime {
class ConnectionHandler;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ConnectionHandler);
// Type: Photon.Realtime::ConnectionHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ConnectionHandler*
class CORDL_TYPE ConnectionHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AppQuits, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_AppQuits, put = setStaticF_AppQuits)) bool AppQuits;

  /// @brief Field ApplyDontDestroyOnLoad, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_ApplyDontDestroyOnLoad, put = __cordl_internal_set_ApplyDontDestroyOnLoad)) bool ApplyDontDestroyOnLoad;

  __declspec(property(get = get_Client, put = set_Client))::Photon::Realtime::LoadBalancingClient* Client;

  __declspec(property(get = get_CountSendAcksOnly, put = set_CountSendAcksOnly)) int32_t CountSendAcksOnly;

  /// @brief Field DisconnectAfterKeepAlive, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_DisconnectAfterKeepAlive, put = __cordl_internal_set_DisconnectAfterKeepAlive)) bool DisconnectAfterKeepAlive;

  __declspec(property(get = get_FallbackThreadRunning)) bool FallbackThreadRunning;

  /// @brief Field KeepAliveInBackground, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_KeepAliveInBackground, put = __cordl_internal_set_KeepAliveInBackground)) int32_t KeepAliveInBackground;

  /// @brief Field <Client>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Client_k__BackingField, put = __cordl_internal_set__Client_k__BackingField))::Photon::Realtime::LoadBalancingClient* _Client_k__BackingField;

  /// @brief Field <CountSendAcksOnly>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__CountSendAcksOnly_k__BackingField, put = __cordl_internal_set__CountSendAcksOnly_k__BackingField)) int32_t _CountSendAcksOnly_k__BackingField;

  /// @brief Field backgroundStopwatch, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundStopwatch, put = __cordl_internal_set_backgroundStopwatch))::System::Diagnostics::Stopwatch* backgroundStopwatch;

  /// @brief Field didSendAcks, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_didSendAcks, put = __cordl_internal_set_didSendAcks)) bool didSendAcks;

  /// @brief Field fallbackThreadId, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_fallbackThreadId, put = __cordl_internal_set_fallbackThreadId)) uint8_t fallbackThreadId;

  /// @brief Method Awake, addr 0x2235440, size 0x80, virtual true, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Realtime::ConnectionHandler* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x22353f4, size 0x4c, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDisable, addr 0x22354c0, size 0xd4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RealtimeFallbackThread, addr 0x22359e4, size 0x10c, virtual false, abstract: false, final false
  inline bool RealtimeFallbackThread();

  /// @brief Method StartFallbackSendAckThread, addr 0x2235908, size 0xdc, virtual false, abstract: false, final false
  inline void StartFallbackSendAckThread();

  /// @brief Method StaticReset, addr 0x22353ac, size 0x48, virtual false, abstract: false, final false
  static inline void StaticReset();

  /// @brief Method StopFallbackSendAckThread, addr 0x2235594, size 0x70, virtual false, abstract: false, final false
  inline void StopFallbackSendAckThread();

  constexpr bool const& __cordl_internal_get_ApplyDontDestroyOnLoad() const;

  constexpr bool& __cordl_internal_get_ApplyDontDestroyOnLoad();

  constexpr bool const& __cordl_internal_get_DisconnectAfterKeepAlive() const;

  constexpr bool& __cordl_internal_get_DisconnectAfterKeepAlive();

  constexpr int32_t const& __cordl_internal_get_KeepAliveInBackground() const;

  constexpr int32_t& __cordl_internal_get_KeepAliveInBackground();

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__Client_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get__Client_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__CountSendAcksOnly_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CountSendAcksOnly_k__BackingField();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_backgroundStopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_backgroundStopwatch() const;

  constexpr bool const& __cordl_internal_get_didSendAcks() const;

  constexpr bool& __cordl_internal_get_didSendAcks();

  constexpr uint8_t const& __cordl_internal_get_fallbackThreadId() const;

  constexpr uint8_t& __cordl_internal_get_fallbackThreadId();

  constexpr void __cordl_internal_set_ApplyDontDestroyOnLoad(bool value);

  constexpr void __cordl_internal_set_DisconnectAfterKeepAlive(bool value);

  constexpr void __cordl_internal_set_KeepAliveInBackground(int32_t value);

  constexpr void __cordl_internal_set__Client_k__BackingField(::Photon::Realtime::LoadBalancingClient* value);

  constexpr void __cordl_internal_set__CountSendAcksOnly_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_backgroundStopwatch(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set_didSendAcks(bool value);

  constexpr void __cordl_internal_set_fallbackThreadId(uint8_t value);

  /// @brief Method .ctor, addr 0x2235af0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_AppQuits();

  /// @brief Method get_Client, addr 0x223537c, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::LoadBalancingClient* get_Client();

  /// @brief Method get_CountSendAcksOnly, addr 0x223538c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CountSendAcksOnly();

  /// @brief Method get_FallbackThreadRunning, addr 0x223539c, size 0x10, virtual false, abstract: false, final false
  inline bool get_FallbackThreadRunning();

  static inline void setStaticF_AppQuits(bool value);

  /// @brief Method set_Client, addr 0x2235384, size 0x8, virtual false, abstract: false, final false
  inline void set_Client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method set_CountSendAcksOnly, addr 0x2235394, size 0x8, virtual false, abstract: false, final false
  inline void set_CountSendAcksOnly(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionHandler(ConnectionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionHandler(ConnectionHandler const&) = delete;

  /// @brief Field <Client>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ____Client_k__BackingField;

  /// @brief Field DisconnectAfterKeepAlive, offset: 0x20, size: 0x1, def value: None
  bool ___DisconnectAfterKeepAlive;

  /// @brief Field KeepAliveInBackground, offset: 0x24, size: 0x4, def value: None
  int32_t ___KeepAliveInBackground;

  /// @brief Field <CountSendAcksOnly>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____CountSendAcksOnly_k__BackingField;

  /// @brief Field ApplyDontDestroyOnLoad, offset: 0x2c, size: 0x1, def value: None
  bool ___ApplyDontDestroyOnLoad;

  /// @brief Field fallbackThreadId, offset: 0x2d, size: 0x1, def value: None
  uint8_t ___fallbackThreadId;

  /// @brief Field didSendAcks, offset: 0x2e, size: 0x1, def value: None
  bool ___didSendAcks;

  /// @brief Field backgroundStopwatch, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___backgroundStopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ConnectionHandler, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ____Client_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___DisconnectAfterKeepAlive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___KeepAliveInBackground) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ____CountSendAcksOnly_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___ApplyDontDestroyOnLoad) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___fallbackThreadId) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___didSendAcks) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___backgroundStopwatch) == 0x30, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ConnectionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ConnectionHandler*, "Photon.Realtime", "ConnectionHandler");
