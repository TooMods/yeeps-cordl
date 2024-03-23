#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelParticipant)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class AsyncNoResult;
}
namespace Unity::Services::Vivox {
class ChannelSession;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class IParticipantProperties;
}
namespace Unity::Services::Vivox {
class IParticipant;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass26_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass28_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass43_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass46_0;
}
namespace Unity::Services::Vivox {
class vx_evt_participant_added_t;
}
namespace Unity::Services::Vivox {
class vx_req_channel_mute_user_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_set_participant_mute_for_me_t;
}
namespace Unity::Services::Vivox {
class vx_req_session_set_participant_volume_for_me_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ChannelParticipant;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass26_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass28_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass43_0;
}
namespace Unity::Services::Vivox {
class __ChannelParticipant____c__DisplayClass46_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChannelParticipant);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0);
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelParticipant::<>c__DisplayClass26_0*
class CORDL_TYPE __ChannelParticipant____c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_channel_mute_user_t* request;

  static inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0* New_ctor();

  /// @brief Method <SetIsMuteForAll>b__0, addr 0x2fce7e8, size 0x144, virtual false, abstract: false, final false
  inline void _SetIsMuteForAll_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_channel_mute_user_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_channel_mute_user_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_channel_mute_user_t* value);

  /// @brief Method .ctor, addr 0x2fcdc2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelParticipant____c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelParticipant____c__DisplayClass26_0(__ChannelParticipant____c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelParticipant____c__DisplayClass26_0(__ChannelParticipant____c__DisplayClass26_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_channel_mute_user_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass28_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelParticipant::<>c__DisplayClass28_0*
class CORDL_TYPE __ChannelParticipant____c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ar, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ar, put = __cordl_internal_set_ar))::Unity::Services::Vivox::AsyncNoResult* ar;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_channel_mute_user_t* request;

  static inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0* New_ctor();

  /// @brief Method <SetIsMuteForAll>b__0, addr 0x2fce92c, size 0x144, virtual false, abstract: false, final false
  inline void _SetIsMuteForAll_b__0(::System::IAsyncResult* result);

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_ar();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_ar() const;

  constexpr ::Unity::Services::Vivox::vx_req_channel_mute_user_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_channel_mute_user_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set_ar(::Unity::Services::Vivox::AsyncNoResult* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_channel_mute_user_t* value);

  /// @brief Method .ctor, addr 0x2fcdf10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelParticipant____c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelParticipant____c__DisplayClass28_0(__ChannelParticipant____c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelParticipant____c__DisplayClass28_0(__ChannelParticipant____c__DisplayClass28_0 const&) = delete;

  /// @brief Field ar, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___ar;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_channel_mute_user_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0, ___ar) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass43_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelParticipant::<>c__DisplayClass43_0*
class CORDL_TYPE __ChannelParticipant____c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelParticipant* __4__this;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t* request;

  /// @brief Field value, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0* New_ctor();

  constexpr ::Unity::Services::Vivox::ChannelParticipant*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelParticipant*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t*> const& __cordl_internal_get_request() const;

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelParticipant* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t* value);

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x2fce234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_LocalMute>b__0, addr 0x2fcea70, size 0x128, virtual false, abstract: false, final false
  inline void _set_LocalMute_b__0(::System::IAsyncResult* result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelParticipant____c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelParticipant____c__DisplayClass43_0(__ChannelParticipant____c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelParticipant____c__DisplayClass43_0(__ChannelParticipant____c__DisplayClass43_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelParticipant* _____4__this;

  /// @brief Field value, offset: 0x18, size: 0x1, def value: None
  bool ___value;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_set_participant_mute_for_me_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass46_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::ChannelParticipant::<>c__DisplayClass46_0*
class CORDL_TYPE __ChannelParticipant____c__DisplayClass46_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::ChannelParticipant* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t* request;

  static inline ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0* New_ctor();

  constexpr ::Unity::Services::Vivox::ChannelParticipant*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelParticipant*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::ChannelParticipant* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t* value);

  /// @brief Method .ctor, addr 0x2fce424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_LocalVolumeAdjustment>b__0, addr 0x2fceb98, size 0x144, virtual false, abstract: false, final false
  inline void _set_LocalVolumeAdjustment_b__0(::System::IAsyncResult* result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChannelParticipant____c__DisplayClass46_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass46_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChannelParticipant____c__DisplayClass46_0(__ChannelParticipant____c__DisplayClass46_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChannelParticipant____c__DisplayClass46_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChannelParticipant____c__DisplayClass46_0(__ChannelParticipant____c__DisplayClass46_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelParticipant* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_session_set_participant_volume_for_me_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::ChannelParticipant
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChannelParticipant*
class CORDL_TYPE ChannelParticipant : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass26_0 = ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0;

  using __c__DisplayClass28_0 = ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0;

  using __c__DisplayClass43_0 = ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0;

  using __c__DisplayClass46_0 = ::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0;

  __declspec(property(get = get_Account))::Unity::Services::Vivox::AccountId* Account;

  __declspec(property(get = get_AudioEnergy, put = set_AudioEnergy)) double_t AudioEnergy;

  __declspec(property(get = get_InAudio, put = set_InAudio)) bool InAudio;

  __declspec(property(get = get_InText, put = set_InText)) bool InText;

  __declspec(property(get = get_IsMutedForAll, put = set_IsMutedForAll)) bool IsMutedForAll;

  __declspec(property(get = get_IsSelf)) bool IsSelf;

  __declspec(property(get = get_Key))::StringW Key;

  __declspec(property(get = get_LocalMute, put = set_LocalMute)) bool LocalMute;

  __declspec(property(get = get_LocalVolumeAdjustment, put = set_LocalVolumeAdjustment)) int32_t LocalVolumeAdjustment;

  __declspec(property(get = get_ParentChannelSession))::Unity::Services::Vivox::IChannelSession* ParentChannelSession;

  __declspec(property(get = get_ParticipantId))::StringW ParticipantId;

  /// @brief Field PropertyChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_SpeechDetected, put = set_SpeechDetected)) bool SpeechDetected;

  __declspec(property(get = get_UnavailableCaptureDevice, put = set_UnavailableCaptureDevice)) bool UnavailableCaptureDevice;

  __declspec(property(get = get_UnavailableRenderDevice, put = set_UnavailableRenderDevice)) bool UnavailableRenderDevice;

  /// @brief Field <Account>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Account_k__BackingField, put = __cordl_internal_set__Account_k__BackingField))::Unity::Services::Vivox::AccountId* _Account_k__BackingField;

  /// @brief Field <IsSelf>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSelf_k__BackingField, put = __cordl_internal_set__IsSelf_k__BackingField)) bool _IsSelf_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field _audioActive, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__audioActive, put = __cordl_internal_set__audioActive)) bool _audioActive;

  /// @brief Field _audioEnergy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioEnergy, put = __cordl_internal_set__audioEnergy)) double_t _audioEnergy;

  __declspec(property(get = get__internalMute, put = set__internalMute)) bool _internalMute;

  __declspec(property(get = get__internalVolumeAdjustment, put = set__internalVolumeAdjustment)) int32_t _internalVolumeAdjustment;

  /// @brief Field _isMutedForEveryone, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isMutedForEveryone, put = __cordl_internal_set__isMutedForEveryone)) bool _isMutedForEveryone;

  /// @brief Field _localMute, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__localMute, put = __cordl_internal_set__localMute)) bool _localMute;

  /// @brief Field _localVolumeAdjustment, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__localVolumeAdjustment, put = __cordl_internal_set__localVolumeAdjustment)) int32_t _localVolumeAdjustment;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::Unity::Services::Vivox::ChannelSession* _parent;

  /// @brief Field _speechDetected, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__speechDetected, put = __cordl_internal_set__speechDetected)) bool _speechDetected;

  /// @brief Field _textActive, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__textActive, put = __cordl_internal_set__textActive)) bool _textActive;

  /// @brief Field _unavailableCaptureDevice, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__unavailableCaptureDevice, put = __cordl_internal_set__unavailableCaptureDevice)) bool _unavailableCaptureDevice;

  /// @brief Field _unavailableRenderDevice, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__unavailableRenderDevice, put = __cordl_internal_set__unavailableRenderDevice)) bool _unavailableRenderDevice;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IParticipant"
  constexpr operator ::Unity::Services::Vivox::IParticipant*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IParticipantProperties"
  constexpr operator ::Unity::Services::Vivox::IParticipantProperties*() noexcept;

  static inline ::Unity::Services::Vivox::ChannelParticipant* New_ctor(::Unity::Services::Vivox::ChannelSession* parent, ::Unity::Services::Vivox::vx_evt_participant_added_t* theEvent);

  /// @brief Method SetIsMuteForAll, addr 0x2fcdc34, size 0x10, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x2fcd89c, size 0xc, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x2fcdc44, size 0x2cc, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetIsMuteForAll(bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x2fcd8a8, size 0x384, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* SetIsMuteForAll(bool setMuted, ::System::AsyncCallback* callback);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Account_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Account_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsSelf_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr bool const& __cordl_internal_get__audioActive() const;

  constexpr bool& __cordl_internal_get__audioActive();

  constexpr double_t const& __cordl_internal_get__audioEnergy() const;

  constexpr double_t& __cordl_internal_get__audioEnergy();

  constexpr bool const& __cordl_internal_get__isMutedForEveryone() const;

  constexpr bool& __cordl_internal_get__isMutedForEveryone();

  constexpr bool const& __cordl_internal_get__localMute() const;

  constexpr bool& __cordl_internal_get__localMute();

  constexpr int32_t const& __cordl_internal_get__localVolumeAdjustment() const;

  constexpr int32_t& __cordl_internal_get__localVolumeAdjustment();

  constexpr ::Unity::Services::Vivox::ChannelSession*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ChannelSession*> const& __cordl_internal_get__parent() const;

  constexpr bool const& __cordl_internal_get__speechDetected() const;

  constexpr bool& __cordl_internal_get__speechDetected();

  constexpr bool const& __cordl_internal_get__textActive() const;

  constexpr bool& __cordl_internal_get__textActive();

  constexpr bool const& __cordl_internal_get__unavailableCaptureDevice() const;

  constexpr bool& __cordl_internal_get__unavailableCaptureDevice();

  constexpr bool const& __cordl_internal_get__unavailableRenderDevice() const;

  constexpr bool& __cordl_internal_get__unavailableRenderDevice();

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Account_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__IsSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__audioActive(bool value);

  constexpr void __cordl_internal_set__audioEnergy(double_t value);

  constexpr void __cordl_internal_set__isMutedForEveryone(bool value);

  constexpr void __cordl_internal_set__localMute(bool value);

  constexpr void __cordl_internal_set__localVolumeAdjustment(int32_t value);

  constexpr void __cordl_internal_set__parent(::Unity::Services::Vivox::ChannelSession* value);

  constexpr void __cordl_internal_set__speechDetected(bool value);

  constexpr void __cordl_internal_set__textActive(bool value);

  constexpr void __cordl_internal_set__unavailableCaptureDevice(bool value);

  constexpr void __cordl_internal_set__unavailableRenderDevice(bool value);

  /// @brief Method .ctor, addr 0x2fcd67c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::ChannelSession* parent, ::Unity::Services::Vivox::vx_evt_participant_added_t* theEvent);

  /// @brief Method add_PropertyChanged, addr 0x2fcd754, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Account, addr 0x2fcdf18, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Account();

  /// @brief Method get_AudioEnergy, addr 0x2fce70c, size 0x8, virtual true, abstract: false, final true
  inline double_t get_AudioEnergy();

  /// @brief Method get_InAudio, addr 0x2fce4e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_InAudio();

  /// @brief Method get_InText, addr 0x2fce42c, size 0x8, virtual true, abstract: false, final true
  inline bool get_InText();

  /// @brief Method get_IsMutedForAll, addr 0x2fcdfe0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsMutedForAll();

  /// @brief Method get_IsSelf, addr 0x2fcd894, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSelf();

  /// @brief Method get_Key, addr 0x2fcdf20, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_LocalMute, addr 0x2fce098, size 0x8, virtual true, abstract: false, final true
  inline bool get_LocalMute();

  /// @brief Method get_LocalVolumeAdjustment, addr 0x2fce23c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_LocalVolumeAdjustment();

  /// @brief Method get_ParentChannelSession, addr 0x2fcd88c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IChannelSession* get_ParentChannelSession();

  /// @brief Method get_ParticipantId, addr 0x2fce7e0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ParticipantId();

  /// @brief Method get_SpeechDetected, addr 0x2fcdf28, size 0x8, virtual true, abstract: false, final true
  inline bool get_SpeechDetected();

  /// @brief Method get_UnavailableCaptureDevice, addr 0x2fce59c, size 0x8, virtual true, abstract: false, final true
  inline bool get_UnavailableCaptureDevice();

  /// @brief Method get_UnavailableRenderDevice, addr 0x2fce654, size 0x8, virtual true, abstract: false, final true
  inline bool get_UnavailableRenderDevice();

  /// @brief Method get__internalMute, addr 0x2fcd520, size 0x8, virtual false, abstract: false, final false
  inline bool get__internalMute();

  /// @brief Method get__internalVolumeAdjustment, addr 0x2fcd5cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get__internalVolumeAdjustment();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IParticipant"
  constexpr ::Unity::Services::Vivox::IParticipant* i___Unity__Services__Vivox__IParticipant() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IParticipantProperties"
  constexpr ::Unity::Services::Vivox::IParticipantProperties* i___Unity__Services__Vivox__IParticipantProperties() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2fcd7f0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_AudioEnergy, addr 0x2fce714, size 0xcc, virtual false, abstract: false, final false
  inline void set_AudioEnergy(double_t value);

  /// @brief Method set_InAudio, addr 0x2fce4ec, size 0xb0, virtual false, abstract: false, final false
  inline void set_InAudio(bool value);

  /// @brief Method set_InText, addr 0x2fce434, size 0xb0, virtual false, abstract: false, final false
  inline void set_InText(bool value);

  /// @brief Method set_IsMutedForAll, addr 0x2fcdfe8, size 0xb0, virtual false, abstract: false, final false
  inline void set_IsMutedForAll(bool value);

  /// @brief Method set_LocalMute, addr 0x2fce0a0, size 0x194, virtual true, abstract: false, final true
  inline void set_LocalMute(bool value);

  /// @brief Method set_LocalVolumeAdjustment, addr 0x2fce244, size 0x1e0, virtual true, abstract: false, final true
  inline void set_LocalVolumeAdjustment(int32_t value);

  /// @brief Method set_SpeechDetected, addr 0x2fcdf30, size 0xb0, virtual false, abstract: false, final false
  inline void set_SpeechDetected(bool value);

  /// @brief Method set_UnavailableCaptureDevice, addr 0x2fce5a4, size 0xb0, virtual false, abstract: false, final false
  inline void set_UnavailableCaptureDevice(bool value);

  /// @brief Method set_UnavailableRenderDevice, addr 0x2fce65c, size 0xb0, virtual false, abstract: false, final false
  inline void set_UnavailableRenderDevice(bool value);

  /// @brief Method set__internalMute, addr 0x2fcd528, size 0xa4, virtual false, abstract: false, final false
  inline void set__internalMute(bool value);

  /// @brief Method set__internalVolumeAdjustment, addr 0x2fcd5d4, size 0xa8, virtual false, abstract: false, final false
  inline void set__internalVolumeAdjustment(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelParticipant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelParticipant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelParticipant(ChannelParticipant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelParticipant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelParticipant(ChannelParticipant const&) = delete;

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ChannelSession* ____parent;

  /// @brief Field _speechDetected, offset: 0x18, size: 0x1, def value: None
  bool ____speechDetected;

  /// @brief Field _textActive, offset: 0x19, size: 0x1, def value: None
  bool ____textActive;

  /// @brief Field _audioActive, offset: 0x1a, size: 0x1, def value: None
  bool ____audioActive;

  /// @brief Field _audioEnergy, offset: 0x20, size: 0x8, def value: None
  double_t ____audioEnergy;

  /// @brief Field _isMutedForEveryone, offset: 0x28, size: 0x1, def value: None
  bool ____isMutedForEveryone;

  /// @brief Field _unavailableCaptureDevice, offset: 0x29, size: 0x1, def value: None
  bool ____unavailableCaptureDevice;

  /// @brief Field _unavailableRenderDevice, offset: 0x2a, size: 0x1, def value: None
  bool ____unavailableRenderDevice;

  /// @brief Field _localMute, offset: 0x2b, size: 0x1, def value: None
  bool ____localMute;

  /// @brief Field _localVolumeAdjustment, offset: 0x2c, size: 0x4, def value: None
  int32_t ____localVolumeAdjustment;

  /// @brief Field PropertyChanged, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <IsSelf>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____IsSelf_k__BackingField;

  /// @brief Field <Account>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Account_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChannelParticipant, 0x50>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____speechDetected) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____textActive) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____audioActive) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____audioEnergy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____isMutedForEveryone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____unavailableCaptureDevice) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____unavailableRenderDevice) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____localMute) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____localVolumeAdjustment) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ___PropertyChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____IsSelf_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____Account_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelParticipant, ____Key_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChannelParticipant);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChannelParticipant*, "Unity.Services.Vivox", "ChannelParticipant");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass26_0*, "Unity.Services.Vivox", "ChannelParticipant/<>c__DisplayClass26_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass28_0*, "Unity.Services.Vivox", "ChannelParticipant/<>c__DisplayClass28_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass43_0*, "Unity.Services.Vivox", "ChannelParticipant/<>c__DisplayClass43_0");
NEED_NO_BOX(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__ChannelParticipant____c__DisplayClass46_0*, "Unity.Services.Vivox", "ChannelParticipant/<>c__DisplayClass46_0");
