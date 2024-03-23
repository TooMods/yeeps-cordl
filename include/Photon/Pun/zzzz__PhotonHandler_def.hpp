#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonHandler)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun {
class __PhotonHandler____c;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class SupportLogger;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
template <typename T0, typename T1> class UnityAction_2;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonHandler;
}
namespace Photon::Pun {
class __PhotonHandler____c;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonHandler);
MARK_REF_PTR_T(::Photon::Pun::__PhotonHandler____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::PhotonHandler::<>c*
class CORDL_TYPE __PhotonHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Photon::Pun::__PhotonHandler____c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0,
                             put = setStaticF___9__13_0))::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* __9__13_0;

  static inline ::Photon::Pun::__PhotonHandler____c* New_ctor();

  /// @brief Method <Start>b__13_0, addr 0x273d54c, size 0x4c, virtual false, abstract: false, final false
  inline void _Start_b__13_0(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadingMode);

  /// @brief Method .ctor, addr 0x273d544, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Photon::Pun::__PhotonHandler____c* getStaticF___9();

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF___9__13_0();

  static inline void setStaticF___9(::Photon::Pun::__PhotonHandler____c* value);

  static inline void setStaticF___9__13_0(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonHandler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PhotonHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhotonHandler____c(__PhotonHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhotonHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhotonHandler____c(__PhotonHandler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonHandler____c, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
// Type: Photon.Pun::PhotonHandler
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonHandler*
class CORDL_TYPE PhotonHandler : public ::Photon::Realtime::ConnectionHandler {
public:
  // Declarations
  using __c = ::Photon::Pun::__PhotonHandler____c;

  /// @brief Field MaxDatagrams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxDatagrams, put = setStaticF_MaxDatagrams)) int32_t MaxDatagrams;

  /// @brief Field SendAsap, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_SendAsap, put = setStaticF_SendAsap)) bool SendAsap;

  /// @brief Field UpdateInterval, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_UpdateInterval, put = __cordl_internal_set_UpdateInterval)) int32_t UpdateInterval;

  /// @brief Field UpdateIntervalOnSerialize, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_UpdateIntervalOnSerialize, put = __cordl_internal_set_UpdateIntervalOnSerialize)) int32_t UpdateIntervalOnSerialize;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::UnityW<::Photon::Pun::PhotonHandler> instance;

  /// @brief Field nextSendTickCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_nextSendTickCount, put = __cordl_internal_set_nextSendTickCount)) int32_t nextSendTickCount;

  /// @brief Field nextSendTickCountOnSerialize, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_nextSendTickCountOnSerialize, put = __cordl_internal_set_nextSendTickCountOnSerialize)) int32_t nextSendTickCountOnSerialize;

  /// @brief Field reusableIntList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_reusableIntList, put = __cordl_internal_set_reusableIntList))::System::Collections::Generic::List_1<int32_t>* reusableIntList;

  /// @brief Field supportLoggerComponent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_supportLoggerComponent, put = __cordl_internal_set_supportLoggerComponent))::UnityW<::Photon::Realtime::SupportLogger> supportLoggerComponent;

  /// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
  constexpr operator ::Photon::Realtime::IInRoomCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  /// @brief Method Awake, addr 0x2739ddc, size 0x114, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Dispatch, addr 0x273aaa0, size 0x28c, virtual false, abstract: false, final false
  inline void Dispatch();

  /// @brief Method FixedUpdate, addr 0x273aa1c, size 0x84, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x273ad2c, size 0x2cc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Photon::Pun::PhotonHandler* New_ctor();

  /// @brief Method OnCreateRoomFailed, addr 0x273c264, size 0x4, virtual true, abstract: false, final true
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x273b478, size 0x60, virtual true, abstract: false, final true
  inline void OnCreatedRoom();

  /// @brief Method OnDisable, addr 0x273a70c, size 0x60, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2739ef0, size 0x30c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFriendListUpdate, addr 0x273c260, size 0x4, virtual true, abstract: false, final true
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x273c26c, size 0x4, virtual true, abstract: false, final true
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x273c268, size 0x4, virtual true, abstract: false, final true
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedRoom, addr 0x273c270, size 0x384, virtual true, abstract: false, final true
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x273c8e8, size 0x50, virtual true, abstract: false, final true
  inline void OnLeftRoom();

  /// @brief Method OnMasterClientSwitched, addr 0x273bc14, size 0x1ac, virtual true, abstract: false, final true
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerEnteredRoom, addr 0x273cca0, size 0x338, virtual true, abstract: false, final true
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x273cfd8, size 0x30c, virtual true, abstract: false, final true
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x273bc10, size 0x4, virtual true, abstract: false, final true
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x273b950, size 0x4c, virtual true, abstract: false, final true
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method Start, addr 0x273a614, size 0xf8, virtual false, abstract: false, final false
  inline void Start();

  constexpr int32_t const& __cordl_internal_get_UpdateInterval() const;

  constexpr int32_t& __cordl_internal_get_UpdateInterval();

  constexpr int32_t const& __cordl_internal_get_UpdateIntervalOnSerialize() const;

  constexpr int32_t& __cordl_internal_get_UpdateIntervalOnSerialize();

  constexpr int32_t const& __cordl_internal_get_nextSendTickCount() const;

  constexpr int32_t& __cordl_internal_get_nextSendTickCount();

  constexpr int32_t const& __cordl_internal_get_nextSendTickCountOnSerialize() const;

  constexpr int32_t& __cordl_internal_get_nextSendTickCountOnSerialize();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_reusableIntList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_reusableIntList() const;

  constexpr ::UnityW<::Photon::Realtime::SupportLogger> const& __cordl_internal_get_supportLoggerComponent() const;

  constexpr ::UnityW<::Photon::Realtime::SupportLogger>& __cordl_internal_get_supportLoggerComponent();

  constexpr void __cordl_internal_set_UpdateInterval(int32_t value);

  constexpr void __cordl_internal_set_UpdateIntervalOnSerialize(int32_t value);

  constexpr void __cordl_internal_set_nextSendTickCount(int32_t value);

  constexpr void __cordl_internal_set_nextSendTickCountOnSerialize(int32_t value);

  constexpr void __cordl_internal_set_reusableIntList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_supportLoggerComponent(::UnityW<::Photon::Realtime::SupportLogger> value);

  /// @brief Method .ctor, addr 0x273d418, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_MaxDatagrams();

  static inline bool getStaticF_SendAsap();

  static inline ::UnityW<::Photon::Pun::PhotonHandler> getStaticF_instance();

  /// @brief Method get_Instance, addr 0x2739c20, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityW<::Photon::Pun::PhotonHandler> get_Instance();

  /// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
  constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

  static inline void setStaticF_MaxDatagrams(int32_t value);

  static inline void setStaticF_SendAsap(bool value);

  static inline void setStaticF_instance(::UnityW<::Photon::Pun::PhotonHandler> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonHandler(PhotonHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonHandler(PhotonHandler const&) = delete;

  /// @brief Field UpdateInterval, offset: 0x38, size: 0x4, def value: None
  int32_t ___UpdateInterval;

  /// @brief Field UpdateIntervalOnSerialize, offset: 0x3c, size: 0x4, def value: None
  int32_t ___UpdateIntervalOnSerialize;

  /// @brief Field nextSendTickCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___nextSendTickCount;

  /// @brief Field nextSendTickCountOnSerialize, offset: 0x44, size: 0x4, def value: None
  int32_t ___nextSendTickCountOnSerialize;

  /// @brief Field supportLoggerComponent, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Photon::Realtime::SupportLogger> ___supportLoggerComponent;

  /// @brief Field reusableIntList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___reusableIntList;

  /// @brief Field SerializeRateFrameCorrection offset 0xffffffff size 0x4
  static constexpr int32_t SerializeRateFrameCorrection{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonHandler, 0x58>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___UpdateInterval) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___UpdateIntervalOnSerialize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___nextSendTickCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___nextSendTickCountOnSerialize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___supportLoggerComponent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___reusableIntList) == 0x50, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonHandler);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonHandler*, "Photon.Pun", "PhotonHandler");
NEED_NO_BOX(::Photon::Pun::__PhotonHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonHandler____c*, "Photon.Pun", "PhotonHandler/<>c");
