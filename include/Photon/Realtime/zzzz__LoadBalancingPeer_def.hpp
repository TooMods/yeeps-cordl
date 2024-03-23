#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingPeer)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
template <typename T> class Pool_1;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
struct EncryptionMode;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Realtime {
class FindFriendsOptions;
}
namespace Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class TypedLobby;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace Photon::Realtime {
class __LoadBalancingPeer____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Photon::Realtime {
class LoadBalancingPeer;
}
namespace Photon::Realtime {
class __LoadBalancingPeer____c;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::LoadBalancingPeer);
MARK_REF_PTR_T(::Photon::Realtime::__LoadBalancingPeer____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::LoadBalancingPeer::<>c*
class CORDL_TYPE __LoadBalancingPeer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Photon::Realtime::__LoadBalancingPeer____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1))::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* __9__4_1;

  static inline ::Photon::Realtime::__LoadBalancingPeer____c* New_ctor();

  /// @brief Method <.ctor>b__4_0, addr 0x2247bb0, size 0x5c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ParameterDictionary* __ctor_b__4_0();

  /// @brief Method <.ctor>b__4_1, addr 0x2247c0c, size 0x18, virtual false, abstract: false, final false
  inline void __ctor_b__4_1(::ExitGames::Client::Photon::ParameterDictionary* x);

  /// @brief Method .ctor, addr 0x2247ba8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Photon::Realtime::__LoadBalancingPeer____c* getStaticF___9();

  static inline ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_0();

  static inline ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_1();

  static inline void setStaticF___9(::Photon::Realtime::__LoadBalancingPeer____c* value);

  static inline void setStaticF___9__4_0(::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* value);

  static inline void setStaticF___9__4_1(::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadBalancingPeer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingPeer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadBalancingPeer____c(__LoadBalancingPeer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingPeer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadBalancingPeer____c(__LoadBalancingPeer____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__LoadBalancingPeer____c, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
// Type: Photon.Realtime::LoadBalancingPeer
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::LoadBalancingPeer*
class CORDL_TYPE LoadBalancingPeer : public ::ExitGames::Client::Photon::PhotonPeer {
public:
  // Declarations
  using __c = ::Photon::Realtime::__LoadBalancingPeer____c;

  /// @brief Field paramDictionaryPool, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_paramDictionaryPool,
                      put = __cordl_internal_set_paramDictionaryPool))::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* paramDictionaryPool;

  /// @brief Method ConfigUnitySockets, addr 0x2244c48, size 0x1d0, virtual false, abstract: false, final false
  inline void ConfigUnitySockets();

  static inline ::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocolType);

  static inline ::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType);

  /// @brief Method OpAuthenticate, addr 0x2246bfc, size 0x33c, virtual true, abstract: false, final false
  inline bool OpAuthenticate(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode, bool getLobbyStatistics);

  /// @brief Method OpAuthenticateOnce, addr 0x2246f38, size 0x578, virtual true, abstract: false, final false
  inline bool OpAuthenticateOnce(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode, ::Photon::Realtime::EncryptionMode encryptionMode,
                                 ::ExitGames::Client::Photon::ConnectionProtocol expectedProtocol);

  /// @brief Method OpChangeGroups, addr 0x22474b0, size 0x1ac, virtual true, abstract: false, final false
  inline bool OpChangeGroups(::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToRemove, ::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToAdd);

  /// @brief Method OpCreateRoom, addr 0x2245680, size 0x2dc, virtual true, abstract: false, final false
  inline bool OpCreateRoom(::Photon::Realtime::EnterRoomParams* opParams);

  /// @brief Method OpFindFriends, addr 0x22468e8, size 0x16c, virtual true, abstract: false, final false
  inline bool OpFindFriends(::ArrayW<::StringW, ::Array<::StringW>*> friendsToFind, ::Photon::Realtime::FindFriendsOptions* options);

  /// @brief Method OpGetGameList, addr 0x224650c, size 0x3dc, virtual true, abstract: false, final false
  inline bool OpGetGameList(::Photon::Realtime::TypedLobby* lobby, ::StringW queryData);

  /// @brief Method OpGetRegions, addr 0x2244e18, size 0xf4, virtual true, abstract: false, final false
  inline bool OpGetRegions(::StringW appId);

  /// @brief Method OpJoinLobby, addr 0x2244f0c, size 0x1f8, virtual true, abstract: false, final false
  inline bool OpJoinLobby(::Photon::Realtime::TypedLobby* lobby);

  /// @brief Method OpJoinRandomOrCreateRoom, addr 0x2245ff0, size 0x3b0, virtual true, abstract: false, final false
  inline bool OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams* createRoomParams);

  /// @brief Method OpJoinRandomRoom, addr 0x2245cac, size 0x344, virtual true, abstract: false, final false
  inline bool OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams);

  /// @brief Method OpJoinRoom, addr 0x224595c, size 0x350, virtual true, abstract: false, final false
  inline bool OpJoinRoom(::Photon::Realtime::EnterRoomParams* opParams);

  /// @brief Method OpLeaveLobby, addr 0x2245110, size 0x118, virtual true, abstract: false, final false
  inline bool OpLeaveLobby();

  /// @brief Method OpLeaveRoom, addr 0x22463a0, size 0x16c, virtual true, abstract: false, final false
  inline bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie);

  /// @brief Method OpRaiseEvent, addr 0x224765c, size 0x2fc, virtual true, abstract: false, final false
  inline bool OpRaiseEvent(uint8_t eventCode, ::System::Object* customEventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames::Client::Photon::SendOptions sendOptions);

  /// @brief Method OpSetCustomPropertiesOfActor, addr 0x2246a7c, size 0x7c, virtual false, abstract: false, final false
  inline bool OpSetCustomPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties);

  /// @brief Method OpSetCustomPropertiesOfRoom, addr 0x2246b88, size 0x74, virtual false, abstract: false, final false
  inline bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties);

  /// @brief Method OpSetPropertiesOfActor, addr 0x223c5e8, size 0x384, virtual false, abstract: false, final false
  inline bool OpSetPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                     ::Photon::Realtime::WebFlags* webflags);

  /// @brief Method OpSetPropertiesOfRoom, addr 0x223ce60, size 0x330, virtual false, abstract: false, final false
  inline bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webflags);

  /// @brief Method OpSetPropertyOfRoom, addr 0x2246af8, size 0x90, virtual false, abstract: false, final false
  inline bool OpSetPropertyOfRoom(uint8_t propCode, ::System::Object* value);

  /// @brief Method OpSettings, addr 0x2247958, size 0x1ec, virtual true, abstract: false, final false
  inline bool OpSettings(bool receiveLobbyStats);

  /// @brief Method RoomOptionsToOpParameters, addr 0x2245228, size 0x3ec, virtual false, abstract: false, final false
  inline void RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* op, ::Photon::Realtime::RoomOptions* roomOptions, bool usePropertiesKey);

  constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& __cordl_internal_get_paramDictionaryPool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*> const& __cordl_internal_get_paramDictionaryPool() const;

  constexpr void __cordl_internal_set_paramDictionaryPool(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* value);

  /// @brief Method .ctor, addr 0x2239834, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocolType);

  /// @brief Method .ctor, addr 0x2244a50, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType);

  /// @brief Method get_PingImplementation, addr 0x22449bc, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Type* get_PingImplementation();

  /// @brief Method set_PingImplementation, addr 0x2244a04, size 0x4c, virtual false, abstract: false, final false
  static inline void set_PingImplementation(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBalancingPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadBalancingPeer(LoadBalancingPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadBalancingPeer(LoadBalancingPeer const&) = delete;

  /// @brief Field paramDictionaryPool, offset: 0x118, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* ___paramDictionaryPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::LoadBalancingPeer, 0x120>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingPeer, ___paramDictionaryPool) == 0x118, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::LoadBalancingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LoadBalancingPeer*, "Photon.Realtime", "LoadBalancingPeer");
NEED_NO_BOX(::Photon::Realtime::__LoadBalancingPeer____c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__LoadBalancingPeer____c*, "Photon.Realtime", "LoadBalancingPeer/<>c");
