#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVivoxServiceInternal)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
namespace Unity::Services::Authentication::Internal {
class IEnvironmentId;
}
namespace Unity::Services::Authentication::Internal {
class IPlayerId;
}
namespace Unity::Services::Vivox::Internal {
class IVivoxTokenProviderInternal;
}
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
namespace Unity::Services::Vivox {
class ChannelOptions;
}
namespace Unity::Services::Vivox {
struct ChannelType;
}
namespace Unity::Services::Vivox {
struct ChatCapability;
}
namespace Unity::Services::Vivox {
class Client;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
class IChannelTextMessage;
}
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class IVivoxService;
}
namespace Unity::Services::Vivox {
class IVivoxTokenProvider;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
namespace Unity::Services::Vivox {
template <typename T> class QueueItemAddedEventArgs_1;
}
namespace Unity::Services::Vivox {
class VivoxInputDevice;
}
namespace Unity::Services::Vivox {
class VivoxOutputDevice;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IVivoxServiceInternal;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IVivoxServiceInternal);
// Type: Unity.Services.Vivox::IVivoxServiceInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IVivoxServiceInternal*
class CORDL_TYPE IVivoxServiceInternal {
public:
  // Declarations
  __declspec(property(get = get_AccessToken))::StringW AccessToken;

  __declspec(property(get = get_AccessTokenComponent))::Unity::Services::Authentication::Internal::IAccessToken* AccessTokenComponent;

  __declspec(property(get = get_Client, put = set_Client))::Unity::Services::Vivox::Client* Client;

  __declspec(property(get = get_Domain, put = set_Domain))::StringW Domain;

  __declspec(property(get = get_EnvironmentId))::StringW EnvironmentId;

  __declspec(property(get = get_EnvironmentIdComponent))::Unity::Services::Authentication::Internal::IEnvironmentId* EnvironmentIdComponent;

  __declspec(property(get = get_ExternalTokenProvider, put = set_ExternalTokenProvider))::Unity::Services::Vivox::IVivoxTokenProvider* ExternalTokenProvider;

  __declspec(property(get = get_HaveVivoxCredentials)) bool HaveVivoxCredentials;

  __declspec(property(get = get_InternalTokenProvider, put = set_InternalTokenProvider))::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* InternalTokenProvider;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_IsEnvironmentCustom)) bool IsEnvironmentCustom;

  __declspec(property(get = get_IsTestMode, put = set_IsTestMode)) bool IsTestMode;

  __declspec(property(get = get_Issuer, put = set_Issuer))::StringW Issuer;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_LastChannelJoinedUri))::StringW LastChannelJoinedUri;

  __declspec(property(get = get_PlayerId))::StringW PlayerId;

  __declspec(property(get = get_PlayerIdComponent))::Unity::Services::Authentication::Internal::IPlayerId* PlayerIdComponent;

  __declspec(property(get = get_Server, put = set_Server))::StringW Server;

  /// @brief Convert operator to "::Unity::Services::Vivox::IVivoxService"
  constexpr operator ::Unity::Services::Vivox::IVivoxService*() noexcept;

  /// @brief Method GetChannelUriByName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetChannelUriByName(::StringW channelName);

  /// @brief Method GetInputDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* GetInputDevices();

  /// @brief Method GetOutputDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* GetOutputDevices();

  /// @brief Method GetParticipantUriByName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetParticipantUriByName(::StringW participantName);

  /// @brief Method GetTransmittingChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* GetTransmittingChannels();

  /// @brief Method HandleLoginStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleLoginStateChange(::Unity::Services::Vivox::ILoginSession* loginSession);

  /// @brief Method HandleRecoveryStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleRecoveryStateChange(::Unity::Services::Vivox::ILoginSession* loginSession);

  /// @brief Method JoinChannelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* JoinChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability, ::Unity::Services::Vivox::ChannelType channelType,
                                                            ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties, ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method OnAvailableInputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnAvailableInputDevicesChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnAvailableOutputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnAvailableOutputDevicesChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnChannelMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnChannelMessageReceived(::System::Object* sender, ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<::Unity::Services::Vivox::IChannelTextMessage*>* textMessage);

  /// @brief Method OnChannelPropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnChannelPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnDirectedMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDirectedMessageReceived(::System::Object* sender, ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<::Unity::Services::Vivox::IDirectedTextMessage*>* textMessage);

  /// @brief Method OnLoginSessionPropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLoginSessionPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* propertyChangedEventArgs);

  /// @brief Method OnParticipantAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnParticipantAdded(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg);

  /// @brief Method OnParticipantRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnParticipantRemoved(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg);

  /// @brief Method SetChannelEventBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetChannelEventBindings(::Unity::Services::Vivox::IChannelSession* channel, bool doBind);

  /// @brief Method add_UserInputDeviceMuteStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_UserInputDeviceMuteStateChanged(::System::Action_1<bool>* value);

  /// @brief Method get_AccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_AccessTokenComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Authentication::Internal::IAccessToken* get_AccessTokenComponent();

  /// @brief Method get_Client, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Client* get_Client();

  /// @brief Method get_Domain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Domain();

  /// @brief Method get_EnvironmentId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_EnvironmentId();

  /// @brief Method get_EnvironmentIdComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Authentication::Internal::IEnvironmentId* get_EnvironmentIdComponent();

  /// @brief Method get_ExternalTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IVivoxTokenProvider* get_ExternalTokenProvider();

  /// @brief Method get_HaveVivoxCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HaveVivoxCredentials();

  /// @brief Method get_InternalTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* get_InternalTokenProvider();

  /// @brief Method get_IsAuthenticated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_IsEnvironmentCustom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEnvironmentCustom();

  /// @brief Method get_IsTestMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsTestMode();

  /// @brief Method get_Issuer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Key();

  /// @brief Method get_LastChannelJoinedUri, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LastChannelJoinedUri();

  /// @brief Method get_PlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PlayerId();

  /// @brief Method get_PlayerIdComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Authentication::Internal::IPlayerId* get_PlayerIdComponent();

  /// @brief Method get_Server, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Server();

  /// @brief Convert to "::Unity::Services::Vivox::IVivoxService"
  constexpr ::Unity::Services::Vivox::IVivoxService* i___Unity__Services__Vivox__IVivoxService() noexcept;

  /// @brief Method remove_UserInputDeviceMuteStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_UserInputDeviceMuteStateChanged(::System::Action_1<bool>* value);

  /// @brief Method set_Client, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Client(::Unity::Services::Vivox::Client* value);

  /// @brief Method set_Domain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_ExternalTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ExternalTokenProvider(::Unity::Services::Vivox::IVivoxTokenProvider* value);

  /// @brief Method set_InternalTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_InternalTokenProvider(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* value);

  /// @brief Method set_IsTestMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IsTestMode(bool value);

  /// @brief Method set_Issuer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Issuer(::StringW value);

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Server, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Server(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxServiceInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivoxServiceInternal(IVivoxServiceInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxServiceInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivoxServiceInternal(IVivoxServiceInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IVivoxServiceInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IVivoxServiceInternal*, "Unity.Services.Vivox", "IVivoxServiceInternal");
