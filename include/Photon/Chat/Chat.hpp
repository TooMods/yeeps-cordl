#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Photon/Chat/AuthenticationValues.hpp"
#include "Photon/Chat/ChannelCreationOptions.hpp"
#include "Photon/Chat/ChannelWellKnownProperties.hpp"
#include "Photon/Chat/ChatAppSettings.hpp"
#include "Photon/Chat/ChatChannel.hpp"
#include "Photon/Chat/ChatClient.hpp"
#include "Photon/Chat/ChatDisconnectCause.hpp"
#include "Photon/Chat/ChatEventCode.hpp"
#include "Photon/Chat/ChatOperationCode.hpp"
#include "Photon/Chat/ChatParameterCode.hpp"
#include "Photon/Chat/ChatPeer.hpp"
#include "Photon/Chat/ChatState.hpp"
#include "Photon/Chat/ChatUserStatus.hpp"
#include "Photon/Chat/CustomAuthenticationType.hpp"
#include "Photon/Chat/ErrorCode.hpp"
#include "Photon/Chat/IChatClientListener.hpp"
#include "Photon/Chat/ParameterCode.hpp"
#ifdef __cpp_modules
export module Chat;
#endif
