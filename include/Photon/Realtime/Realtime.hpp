#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Photon/Realtime/ActorProperties.hpp"
#include "Photon/Realtime/AppSettings.hpp"
#include "Photon/Realtime/AuthModeOption.hpp"
#include "Photon/Realtime/AuthenticationValues.hpp"
#include "Photon/Realtime/ClientAppType.hpp"
#include "Photon/Realtime/ClientState.hpp"
#include "Photon/Realtime/ConnectionCallbacksContainer.hpp"
#include "Photon/Realtime/ConnectionHandler.hpp"
#include "Photon/Realtime/CustomAuthenticationType.hpp"
#include "Photon/Realtime/CustomTypesUnity.hpp"
#include "Photon/Realtime/DisconnectCause.hpp"
#include "Photon/Realtime/EncryptionMode.hpp"
#include "Photon/Realtime/EnterRoomParams.hpp"
#include "Photon/Realtime/ErrorCode.hpp"
#include "Photon/Realtime/ErrorInfo.hpp"
#include "Photon/Realtime/ErrorInfoCallbacksContainer.hpp"
#include "Photon/Realtime/EventCaching.hpp"
#include "Photon/Realtime/EventCode.hpp"
#include "Photon/Realtime/Extensions.hpp"
#include "Photon/Realtime/FindFriendsOptions.hpp"
#include "Photon/Realtime/FriendInfo.hpp"
#include "Photon/Realtime/GamePropertyKey.hpp"
#include "Photon/Realtime/IConnectionCallbacks.hpp"
#include "Photon/Realtime/IErrorInfoCallback.hpp"
#include "Photon/Realtime/IInRoomCallbacks.hpp"
#include "Photon/Realtime/ILobbyCallbacks.hpp"
#include "Photon/Realtime/IMatchmakingCallbacks.hpp"
#include "Photon/Realtime/IOnEventCallback.hpp"
#include "Photon/Realtime/IWebRpcCallback.hpp"
#include "Photon/Realtime/InRoomCallbacksContainer.hpp"
#include "Photon/Realtime/JoinMode.hpp"
#include "Photon/Realtime/JoinType.hpp"
#include "Photon/Realtime/LoadBalancingClient.hpp"
#include "Photon/Realtime/LoadBalancingPeer.hpp"
#include "Photon/Realtime/LobbyCallbacksContainer.hpp"
#include "Photon/Realtime/LobbyType.hpp"
#include "Photon/Realtime/MatchMakingCallbacksContainer.hpp"
#include "Photon/Realtime/MatchmakingMode.hpp"
#include "Photon/Realtime/OpJoinRandomRoomParams.hpp"
#include "Photon/Realtime/OperationCode.hpp"
#include "Photon/Realtime/ParameterCode.hpp"
#include "Photon/Realtime/PhotonPing.hpp"
#include "Photon/Realtime/PhotonPortDefinition.hpp"
#include "Photon/Realtime/PingMono.hpp"
#include "Photon/Realtime/Player.hpp"
#include "Photon/Realtime/PropertyTypeFlag.hpp"
#include "Photon/Realtime/RaiseEventOptions.hpp"
#include "Photon/Realtime/ReceiverGroup.hpp"
#include "Photon/Realtime/Region.hpp"
#include "Photon/Realtime/RegionHandler.hpp"
#include "Photon/Realtime/RegionPinger.hpp"
#include "Photon/Realtime/Room.hpp"
#include "Photon/Realtime/RoomInfo.hpp"
#include "Photon/Realtime/RoomOptionBit.hpp"
#include "Photon/Realtime/RoomOptions.hpp"
#include "Photon/Realtime/ServerConnection.hpp"
#include "Photon/Realtime/SupportLogger.hpp"
#include "Photon/Realtime/TypedLobby.hpp"
#include "Photon/Realtime/TypedLobbyInfo.hpp"
#include "Photon/Realtime/WebFlags.hpp"
#include "Photon/Realtime/WebRpcCallbacksContainer.hpp"
#include "Photon/Realtime/WebRpcResponse.hpp"
#ifdef __cpp_modules
export module Realtime;
#endif
