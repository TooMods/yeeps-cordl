#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxAudioTap)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox::AudioTaps {
class VivoxAudioProcessor;
}
namespace Unity::Services::Vivox::AudioTaps {
class __VivoxAudioTap___ProcessAudio_d__52;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Forward declare root types
namespace Unity::Services::Vivox::AudioTaps {
class VivoxAudioTap;
}
namespace Unity::Services::Vivox::AudioTaps {
class __VivoxAudioTap___ProcessAudio_d__52;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap);
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52);
// Type: ::<ProcessAudio>d__52
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::AudioTaps {
// Is value type: false
// CS Name: ::VivoxAudioTap::<ProcessAudio>d__52*
class CORDL_TYPE __VivoxAudioTap___ProcessAudio_d__52 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x170cc44, size 0x74, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x170ccb8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x170ccc0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x170cd00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x170cc40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> value);

  /// @brief Method .ctor, addr 0x170cc18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxAudioTap___ProcessAudio_d__52();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VivoxAudioTap___ProcessAudio_d__52", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VivoxAudioTap___ProcessAudio_d__52(__VivoxAudioTap___ProcessAudio_d__52&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VivoxAudioTap___ProcessAudio_d__52", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VivoxAudioTap___ProcessAudio_d__52(__VivoxAudioTap___ProcessAudio_d__52 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52, _____4__this) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox::AudioTaps
// Type: Unity.Services.Vivox.AudioTaps::VivoxAudioTap
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::AudioTaps {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.AudioTaps::VivoxAudioTap*
class CORDL_TYPE VivoxAudioTap : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ProcessAudio_d__52 = ::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52;

  __declspec(property(get = get_AutoAcquireChannel, put = set_AutoAcquireChannel)) bool AutoAcquireChannel;

  __declspec(property(get = get_ChannelCount, put = set_ChannelCount)) int32_t ChannelCount;

  __declspec(property(get = get_ChannelName, put = set_ChannelName))::StringW ChannelName;

  __declspec(property(get = get_Identifier))::StringW Identifier;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_TapId)) int32_t TapId;

  /// @brief Field <ChannelCount>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__ChannelCount_k__BackingField, put = __cordl_internal_set__ChannelCount_k__BackingField)) int32_t _ChannelCount_k__BackingField;

  /// @brief Field m_AudioProcessor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioProcessor, put = __cordl_internal_set_m_AudioProcessor))::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor* m_AudioProcessor;

  /// @brief Field m_AutoAcquireChannel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutoAcquireChannel, put = __cordl_internal_set_m_AutoAcquireChannel)) bool m_AutoAcquireChannel;

  /// @brief Field m_ChannelName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChannelName, put = __cordl_internal_set_m_ChannelName))::StringW m_ChannelName;

  /// @brief Field m_ChannelUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChannelUri, put = __cordl_internal_set_m_ChannelUri))::StringW m_ChannelUri;

  /// @brief Field m_LastAutoAcquireChannel, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LastAutoAcquireChannel, put = __cordl_internal_set_m_LastAutoAcquireChannel)) bool m_LastAutoAcquireChannel;

  /// @brief Field m_LastChannelName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastChannelName, put = __cordl_internal_set_m_LastChannelName))::StringW m_LastChannelName;

  /// @brief Field m_RetryIsActive, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RetryIsActive, put = __cordl_internal_set_m_RetryIsActive)) bool m_RetryIsActive;

  /// @brief Field m_cachedWaitForSecondRealtime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cachedWaitForSecondRealtime,
                      put = __cordl_internal_set_m_cachedWaitForSecondRealtime))::UnityEngine::WaitForSecondsRealtime* m_cachedWaitForSecondRealtime;

  /// @brief Field m_isEnabled, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isEnabled, put = __cordl_internal_set_m_isEnabled)) bool m_isEnabled;

  /// @brief Field m_registered, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_registered, put = __cordl_internal_set_m_registered)) bool m_registered;

  /// @brief Field m_tapId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_tapId, put = __cordl_internal_set_m_tapId)) int32_t m_tapId;

  /// @brief Method ActivateRetry, addr 0x170c988, size 0x68, virtual false, abstract: false, final false
  inline void ActivateRetry();

  /// @brief Method Awake, addr 0x170c6d0, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CancelRetry, addr 0x170c92c, size 0x5c, virtual false, abstract: false, final false
  inline void CancelRetry();

  /// @brief Method CheckVivoxService, addr 0x170c6d4, size 0x258, virtual false, abstract: false, final false
  inline void CheckVivoxService();

  /// @brief Method CurrentChannelMatch, addr 0x170c004, size 0x50, virtual false, abstract: false, final false
  inline bool CurrentChannelMatch(::StringW channelName);

  /// @brief Method DoAudioFilterRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoAudioFilterRead(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  /// @brief Method GetChannelNameFromUri, addr 0x170bdac, size 0x98, virtual false, abstract: false, final false
  inline ::StringW GetChannelNameFromUri(::StringW channelUriToParse);

  /// @brief Method IsReadyForFilterCalls, addr 0x170bf8c, size 0x4c, virtual false, abstract: false, final false
  inline bool IsReadyForFilterCalls();

  static inline ::Unity::Services::Vivox::AudioTaps::VivoxAudioTap* New_ctor();

  /// @brief Method OnChannelJoined, addr 0x170c168, size 0x8c, virtual false, abstract: false, final false
  inline void OnChannelJoined(::StringW channelName);

  /// @brief Method OnChannelLeft, addr 0x170bfd8, size 0x2c, virtual false, abstract: false, final false
  inline void OnChannelLeft(::StringW channelName);

  /// @brief Method OnDestroy, addr 0x170ca08, size 0x210, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x170c9f0, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x170c6c4, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x170be44, size 0x34, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ProcessAudio, addr 0x170c65c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessAudio();

  /// @brief Method RedoTapRegistration, addr 0x170c1f4, size 0x18, virtual false, abstract: false, final false
  inline void RedoTapRegistration();

  /// @brief Method RegisterTap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t RegisterTap(::StringW channelUri);

  /// @brief Method RegisterTapCore, addr 0x170c20c, size 0x268, virtual false, abstract: false, final false
  inline void RegisterTapCore();

  /// @brief Method TryEnsureTapRegistration, addr 0x170bbb4, size 0x3c, virtual false, abstract: false, final false
  inline void TryEnsureTapRegistration();

  /// @brief Method UnregisterTap, addr 0x170c054, size 0x114, virtual false, abstract: false, final false
  inline void UnregisterTap();

  /// @brief Method UpdateStatus, addr 0x170c474, size 0x1e8, virtual false, abstract: false, final false
  inline void UpdateStatus();

  constexpr int32_t const& __cordl_internal_get__ChannelCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ChannelCount_k__BackingField();

  constexpr ::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor*& __cordl_internal_get_m_AudioProcessor();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor*> const& __cordl_internal_get_m_AudioProcessor() const;

  constexpr bool const& __cordl_internal_get_m_AutoAcquireChannel() const;

  constexpr bool& __cordl_internal_get_m_AutoAcquireChannel();

  constexpr ::StringW const& __cordl_internal_get_m_ChannelName() const;

  constexpr ::StringW& __cordl_internal_get_m_ChannelName();

  constexpr ::StringW const& __cordl_internal_get_m_ChannelUri() const;

  constexpr ::StringW& __cordl_internal_get_m_ChannelUri();

  constexpr bool const& __cordl_internal_get_m_LastAutoAcquireChannel() const;

  constexpr bool& __cordl_internal_get_m_LastAutoAcquireChannel();

  constexpr ::StringW const& __cordl_internal_get_m_LastChannelName() const;

  constexpr ::StringW& __cordl_internal_get_m_LastChannelName();

  constexpr bool const& __cordl_internal_get_m_RetryIsActive() const;

  constexpr bool& __cordl_internal_get_m_RetryIsActive();

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get_m_cachedWaitForSecondRealtime();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& __cordl_internal_get_m_cachedWaitForSecondRealtime() const;

  constexpr bool const& __cordl_internal_get_m_isEnabled() const;

  constexpr bool& __cordl_internal_get_m_isEnabled();

  constexpr bool const& __cordl_internal_get_m_registered() const;

  constexpr bool& __cordl_internal_get_m_registered();

  constexpr int32_t const& __cordl_internal_get_m_tapId() const;

  constexpr int32_t& __cordl_internal_get_m_tapId();

  constexpr void __cordl_internal_set__ChannelCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_AudioProcessor(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor* value);

  constexpr void __cordl_internal_set_m_AutoAcquireChannel(bool value);

  constexpr void __cordl_internal_set_m_ChannelName(::StringW value);

  constexpr void __cordl_internal_set_m_ChannelUri(::StringW value);

  constexpr void __cordl_internal_set_m_LastAutoAcquireChannel(bool value);

  constexpr void __cordl_internal_set_m_LastChannelName(::StringW value);

  constexpr void __cordl_internal_set_m_RetryIsActive(bool value);

  constexpr void __cordl_internal_set_m_cachedWaitForSecondRealtime(::UnityEngine::WaitForSecondsRealtime* value);

  constexpr void __cordl_internal_set_m_isEnabled(bool value);

  constexpr void __cordl_internal_set_m_registered(bool value);

  constexpr void __cordl_internal_set_m_tapId(int32_t value);

  /// @brief Method .ctor, addr 0x170bea8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AutoAcquireChannel, addr 0x170bb8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_AutoAcquireChannel();

  /// @brief Method get_ChannelCount, addr 0x170be98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChannelCount();

  /// @brief Method get_ChannelName, addr 0x170bbf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_Identifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Identifier();

  /// @brief Method get_IsRunning, addr 0x170be78, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  /// @brief Method get_TapId, addr 0x170bb84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TapId();

  /// @brief Method set_AutoAcquireChannel, addr 0x170bb94, size 0x20, virtual false, abstract: false, final false
  inline void set_AutoAcquireChannel(bool value);

  /// @brief Method set_ChannelCount, addr 0x170bea0, size 0x8, virtual false, abstract: false, final false
  inline void set_ChannelCount(int32_t value);

  /// @brief Method set_ChannelName, addr 0x170bbf8, size 0x1b4, virtual false, abstract: false, final false
  inline void set_ChannelName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxAudioTap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxAudioTap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxAudioTap(VivoxAudioTap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxAudioTap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxAudioTap(VivoxAudioTap const&) = delete;

  /// @brief Field m_registered, offset: 0x18, size: 0x1, def value: None
  bool ___m_registered;

  /// @brief Field m_tapId, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_tapId;

  /// @brief Field m_RetryIsActive, offset: 0x20, size: 0x1, def value: None
  bool ___m_RetryIsActive;

  /// @brief Field m_isEnabled, offset: 0x21, size: 0x1, def value: None
  bool ___m_isEnabled;

  /// @brief Field m_AudioProcessor, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor* ___m_AudioProcessor;

  /// @brief Field m_cachedWaitForSecondRealtime, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::WaitForSecondsRealtime* ___m_cachedWaitForSecondRealtime;

  /// @brief Field m_AutoAcquireChannel, offset: 0x38, size: 0x1, def value: None
  bool ___m_AutoAcquireChannel;

  /// @brief Field m_LastAutoAcquireChannel, offset: 0x39, size: 0x1, def value: None
  bool ___m_LastAutoAcquireChannel;

  /// @brief Field m_ChannelUri, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_ChannelUri;

  /// @brief Field m_ChannelName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_ChannelName;

  /// @brief Field m_LastChannelName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___m_LastChannelName;

  /// @brief Field <ChannelCount>k__BackingField, offset: 0x58, size: 0x4, def value: None
  int32_t ____ChannelCount_k__BackingField;

  /// @brief Field AutoAcquireChannelLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString AutoAcquireChannelLabel{ u"Auto Acquire Channel" };

  /// @brief Field VxapErrorAudioParticipantUriEmpty offset 0xffffffff size 0x4
  static constexpr int32_t VxapErrorAudioParticipantUriEmpty{ static_cast<int32_t>(0xfffffbe6) };

  /// @brief Field VxapErrorAudioSinkInUse offset 0xffffffff size 0x4
  static constexpr int32_t VxapErrorAudioSinkInUse{ static_cast<int32_t>(0xfffffc18) };

  /// @brief Field VxapErrorChannelUriEmpty offset 0xffffffff size 0x4
  static constexpr int32_t VxapErrorChannelUriEmpty{ static_cast<int32_t>(0xfffffbe4) };

  /// @brief Field VxapErrorVivoxServiceNotInitialized offset 0xffffffff size 0x4
  static constexpr int32_t VxapErrorVivoxServiceNotInitialized{ static_cast<int32_t>(0xfffffbe5) };

  /// @brief Field VxapTapUnRegistered offset 0xffffffff size 0x4
  static constexpr int32_t VxapTapUnRegistered{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_registered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_tapId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_RetryIsActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_isEnabled) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_AudioProcessor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_cachedWaitForSecondRealtime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_AutoAcquireChannel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_LastAutoAcquireChannel) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_ChannelUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_ChannelName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ___m_LastChannelName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap, ____ChannelCount_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Vivox::AudioTaps
NEED_NO_BOX(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap*, "Unity.Services.Vivox.AudioTaps", "VivoxAudioTap");
NEED_NO_BOX(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTaps::__VivoxAudioTap___ProcessAudio_d__52*, "Unity.Services.Vivox.AudioTaps", "VivoxAudioTap/<ProcessAudio>d__52");
