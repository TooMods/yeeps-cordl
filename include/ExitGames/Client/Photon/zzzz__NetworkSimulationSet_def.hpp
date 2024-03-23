#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSimulationSet)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class NetworkSimulationSet;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::NetworkSimulationSet);
// Type: ExitGames.Client.Photon::NetworkSimulationSet
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::NetworkSimulationSet*
class CORDL_TYPE NetworkSimulationSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IncomingJitter, put = set_IncomingJitter)) int32_t IncomingJitter;

  __declspec(property(get = get_IncomingLag, put = set_IncomingLag)) int32_t IncomingLag;

  __declspec(property(get = get_IncomingLossPercentage, put = set_IncomingLossPercentage)) int32_t IncomingLossPercentage;

  __declspec(property(get = get_IsSimulationEnabled, put = set_IsSimulationEnabled)) bool IsSimulationEnabled;

  __declspec(property(get = get_LostPackagesIn, put = set_LostPackagesIn)) int32_t LostPackagesIn;

  __declspec(property(get = get_LostPackagesOut, put = set_LostPackagesOut)) int32_t LostPackagesOut;

  /// @brief Field NetSimManualResetEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_NetSimManualResetEvent, put = __cordl_internal_set_NetSimManualResetEvent))::System::Threading::ManualResetEvent* NetSimManualResetEvent;

  __declspec(property(get = get_OutgoingJitter, put = set_OutgoingJitter)) int32_t OutgoingJitter;

  __declspec(property(get = get_OutgoingLag, put = set_OutgoingLag)) int32_t OutgoingLag;

  __declspec(property(get = get_OutgoingLossPercentage, put = set_OutgoingLossPercentage)) int32_t OutgoingLossPercentage;

  /// @brief Field <LostPackagesIn>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__LostPackagesIn_k__BackingField, put = __cordl_internal_set__LostPackagesIn_k__BackingField)) int32_t _LostPackagesIn_k__BackingField;

  /// @brief Field <LostPackagesOut>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__LostPackagesOut_k__BackingField, put = __cordl_internal_set__LostPackagesOut_k__BackingField)) int32_t _LostPackagesOut_k__BackingField;

  /// @brief Field incomingJitter, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_incomingJitter, put = __cordl_internal_set_incomingJitter)) int32_t incomingJitter;

  /// @brief Field incomingLag, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_incomingLag, put = __cordl_internal_set_incomingLag)) int32_t incomingLag;

  /// @brief Field incomingLossPercentage, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_incomingLossPercentage, put = __cordl_internal_set_incomingLossPercentage)) int32_t incomingLossPercentage;

  /// @brief Field isSimulationEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isSimulationEnabled, put = __cordl_internal_set_isSimulationEnabled)) bool isSimulationEnabled;

  /// @brief Field netSimThread, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_netSimThread, put = __cordl_internal_set_netSimThread))::System::Threading::Thread* netSimThread;

  /// @brief Field outgoingJitter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_outgoingJitter, put = __cordl_internal_set_outgoingJitter)) int32_t outgoingJitter;

  /// @brief Field outgoingLag, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_outgoingLag, put = __cordl_internal_set_outgoingLag)) int32_t outgoingLag;

  /// @brief Field outgoingLossPercentage, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_outgoingLossPercentage, put = __cordl_internal_set_outgoingLossPercentage)) int32_t outgoingLossPercentage;

  /// @brief Field peerBase, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_peerBase, put = __cordl_internal_set_peerBase))::ExitGames::Client::Photon::PeerBase* peerBase;

  static inline ::ExitGames::Client::Photon::NetworkSimulationSet* New_ctor();

  /// @brief Method ToString, addr 0x2780d98, size 0x280, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_NetSimManualResetEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __cordl_internal_get_NetSimManualResetEvent() const;

  constexpr int32_t const& __cordl_internal_get__LostPackagesIn_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LostPackagesIn_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LostPackagesOut_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LostPackagesOut_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_incomingJitter() const;

  constexpr int32_t& __cordl_internal_get_incomingJitter();

  constexpr int32_t const& __cordl_internal_get_incomingLag() const;

  constexpr int32_t& __cordl_internal_get_incomingLag();

  constexpr int32_t const& __cordl_internal_get_incomingLossPercentage() const;

  constexpr int32_t& __cordl_internal_get_incomingLossPercentage();

  constexpr bool const& __cordl_internal_get_isSimulationEnabled() const;

  constexpr bool& __cordl_internal_get_isSimulationEnabled();

  constexpr ::System::Threading::Thread*& __cordl_internal_get_netSimThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_netSimThread() const;

  constexpr int32_t const& __cordl_internal_get_outgoingJitter() const;

  constexpr int32_t& __cordl_internal_get_outgoingJitter();

  constexpr int32_t const& __cordl_internal_get_outgoingLag() const;

  constexpr int32_t& __cordl_internal_get_outgoingLag();

  constexpr int32_t const& __cordl_internal_get_outgoingLossPercentage() const;

  constexpr int32_t& __cordl_internal_get_outgoingLossPercentage();

  constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get_peerBase();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PeerBase*> const& __cordl_internal_get_peerBase() const;

  constexpr void __cordl_internal_set_NetSimManualResetEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set__LostPackagesIn_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LostPackagesOut_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_incomingJitter(int32_t value);

  constexpr void __cordl_internal_set_incomingLag(int32_t value);

  constexpr void __cordl_internal_set_incomingLossPercentage(int32_t value);

  constexpr void __cordl_internal_set_isSimulationEnabled(bool value);

  constexpr void __cordl_internal_set_netSimThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set_outgoingJitter(int32_t value);

  constexpr void __cordl_internal_set_outgoingLag(int32_t value);

  constexpr void __cordl_internal_set_outgoingLossPercentage(int32_t value);

  constexpr void __cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase* value);

  /// @brief Method .ctor, addr 0x2781018, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IncomingJitter, addr 0x2780d58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IncomingJitter();

  /// @brief Method get_IncomingLag, addr 0x2780d48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IncomingLag();

  /// @brief Method get_IncomingLossPercentage, addr 0x2780d68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IncomingLossPercentage();

  /// @brief Method get_IsSimulationEnabled, addr 0x2776050, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSimulationEnabled();

  /// @brief Method get_LostPackagesIn, addr 0x2780d88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LostPackagesIn();

  /// @brief Method get_LostPackagesOut, addr 0x2780d78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LostPackagesOut();

  /// @brief Method get_OutgoingJitter, addr 0x2780d28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OutgoingJitter();

  /// @brief Method get_OutgoingLag, addr 0x2780d18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OutgoingLag();

  /// @brief Method get_OutgoingLossPercentage, addr 0x2780d38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OutgoingLossPercentage();

  /// @brief Method set_IncomingJitter, addr 0x2780d60, size 0x8, virtual false, abstract: false, final false
  inline void set_IncomingJitter(int32_t value);

  /// @brief Method set_IncomingLag, addr 0x2780d50, size 0x8, virtual false, abstract: false, final false
  inline void set_IncomingLag(int32_t value);

  /// @brief Method set_IncomingLossPercentage, addr 0x2780d70, size 0x8, virtual false, abstract: false, final false
  inline void set_IncomingLossPercentage(int32_t value);

  /// @brief Method set_IsSimulationEnabled, addr 0x2776058, size 0x710, virtual false, abstract: false, final false
  inline void set_IsSimulationEnabled(bool value);

  /// @brief Method set_LostPackagesIn, addr 0x2780d90, size 0x8, virtual false, abstract: false, final false
  inline void set_LostPackagesIn(int32_t value);

  /// @brief Method set_LostPackagesOut, addr 0x2780d80, size 0x8, virtual false, abstract: false, final false
  inline void set_LostPackagesOut(int32_t value);

  /// @brief Method set_OutgoingJitter, addr 0x2780d30, size 0x8, virtual false, abstract: false, final false
  inline void set_OutgoingJitter(int32_t value);

  /// @brief Method set_OutgoingLag, addr 0x2780d20, size 0x8, virtual false, abstract: false, final false
  inline void set_OutgoingLag(int32_t value);

  /// @brief Method set_OutgoingLossPercentage, addr 0x2780d40, size 0x8, virtual false, abstract: false, final false
  inline void set_OutgoingLossPercentage(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkSimulationSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkSimulationSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkSimulationSet(NetworkSimulationSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkSimulationSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkSimulationSet(NetworkSimulationSet const&) = delete;

  /// @brief Field isSimulationEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___isSimulationEnabled;

  /// @brief Field outgoingLag, offset: 0x14, size: 0x4, def value: None
  int32_t ___outgoingLag;

  /// @brief Field outgoingJitter, offset: 0x18, size: 0x4, def value: None
  int32_t ___outgoingJitter;

  /// @brief Field outgoingLossPercentage, offset: 0x1c, size: 0x4, def value: None
  int32_t ___outgoingLossPercentage;

  /// @brief Field incomingLag, offset: 0x20, size: 0x4, def value: None
  int32_t ___incomingLag;

  /// @brief Field incomingJitter, offset: 0x24, size: 0x4, def value: None
  int32_t ___incomingJitter;

  /// @brief Field incomingLossPercentage, offset: 0x28, size: 0x4, def value: None
  int32_t ___incomingLossPercentage;

  /// @brief Field peerBase, offset: 0x30, size: 0x8, def value: None
  ::ExitGames::Client::Photon::PeerBase* ___peerBase;

  /// @brief Field netSimThread, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Thread* ___netSimThread;

  /// @brief Field NetSimManualResetEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___NetSimManualResetEvent;

  /// @brief Field <LostPackagesOut>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____LostPackagesOut_k__BackingField;

  /// @brief Field <LostPackagesIn>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____LostPackagesIn_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::NetworkSimulationSet, 0x50>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___isSimulationEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___outgoingLag) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___outgoingJitter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___outgoingLossPercentage) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___incomingLag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___incomingJitter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___incomingLossPercentage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___peerBase) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___netSimThread) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ___NetSimManualResetEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ____LostPackagesOut_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NetworkSimulationSet, ____LostPackagesIn_k__BackingField) == 0x4c, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::NetworkSimulationSet);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::NetworkSimulationSet*, "ExitGames.Client.Photon", "NetworkSimulationSet");
