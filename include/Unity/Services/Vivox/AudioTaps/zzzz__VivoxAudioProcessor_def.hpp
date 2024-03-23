#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxAudioProcessor)
namespace Unity::Services::Vivox::AudioTaps {
class VivoxAudioTap;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Unity::Services::Vivox::AudioTaps {
class VivoxAudioProcessor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor);
// Type: Unity.Services.Vivox.AudioTaps::VivoxAudioProcessor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::AudioTaps {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.AudioTaps::VivoxAudioProcessor*
class CORDL_TYPE VivoxAudioProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field VxErrorNoMoreData, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_VxErrorNoMoreData, put = __cordl_internal_set_VxErrorNoMoreData)) int32_t VxErrorNoMoreData;

  /// @brief Field m_BufferedAudio, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BufferedAudio, put = __cordl_internal_set_m_BufferedAudio)) int32_t m_BufferedAudio;

  /// @brief Field m_audioSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioSource, put = __cordl_internal_set_m_audioSource))::UnityW<::UnityEngine::AudioSource> m_audioSource;

  /// @brief Field m_cachedAudioConfig, offset 0x1c, size 0x14
  __declspec(property(get = __cordl_internal_get_m_cachedAudioConfig, put = __cordl_internal_set_m_cachedAudioConfig))::UnityEngine::AudioConfiguration m_cachedAudioConfig;

  /// @brief Field m_internalAudioPeriodFrames, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_internalAudioPeriodFrames, put = __cordl_internal_set_m_internalAudioPeriodFrames)) int32_t m_internalAudioPeriodFrames;

  /// @brief Field m_internalBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_internalBuffer, put = __cordl_internal_set_m_internalBuffer))::ArrayW<float_t, ::Array<float_t>*> m_internalBuffer;

  /// @brief Field m_lastDspTime, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lastDspTime, put = __cordl_internal_set_m_lastDspTime)) double_t m_lastDspTime;

  /// @brief Field m_lastReadPointer, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastReadPointer, put = __cordl_internal_set_m_lastReadPointer)) int32_t m_lastReadPointer;

  /// @brief Field m_maxLatencyFrames, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxLatencyFrames, put = __cordl_internal_set_m_maxLatencyFrames)) int32_t m_maxLatencyFrames;

  /// @brief Field m_minLatencyFrames, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_minLatencyFrames, put = __cordl_internal_set_m_minLatencyFrames)) int32_t m_minLatencyFrames;

  /// @brief Field m_missedReads, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_missedReads, put = __cordl_internal_set_m_missedReads)) int32_t m_missedReads;

  /// @brief Field m_owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_owner, put = __cordl_internal_set_m_owner))::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> m_owner;

  /// @brief Field m_ownerTapId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ownerTapId, put = __cordl_internal_set_m_ownerTapId)) int32_t m_ownerTapId;

  /// @brief Field m_readPointer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_readPointer, put = __cordl_internal_set_m_readPointer)) int32_t m_readPointer;

  /// @brief Field m_silenceBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_silenceBuffer, put = __cordl_internal_set_m_silenceBuffer))::ArrayW<float_t, ::Array<float_t>*> m_silenceBuffer;

  /// @brief Field m_silenceBufferForAudioPeriod, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_silenceBufferForAudioPeriod,
                      put = __cordl_internal_set_m_silenceBufferForAudioPeriod))::ArrayW<float_t, ::Array<float_t>*> m_silenceBufferForAudioPeriod;

  /// @brief Field m_streamClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_streamClip, put = __cordl_internal_set_m_streamClip))::UnityW<::UnityEngine::AudioClip> m_streamClip;

  /// @brief Field m_streamClipTotalFramesSize, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_streamClipTotalFramesSize, put = __cordl_internal_set_m_streamClipTotalFramesSize)) int32_t m_streamClipTotalFramesSize;

  /// @brief Field m_writePointer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_writePointer, put = __cordl_internal_set_m_writePointer)) int32_t m_writePointer;

  /// @brief Method GetMax, addr 0x170bb24, size 0x60, virtual false, abstract: false, final false
  inline float_t GetMax(::ArrayW<float_t, ::Array<float_t>*> data);

  /// @brief Method InitializeAudioConfiguration, addr 0x170b0bc, size 0xb0, virtual false, abstract: false, final false
  inline void InitializeAudioConfiguration();

  /// @brief Method InitializeResources, addr 0x170b234, size 0x424, virtual false, abstract: false, final false
  inline void InitializeResources(int32_t tapId);

  /// @brief Method IsReady, addr 0x170b098, size 0x24, virtual false, abstract: false, final false
  inline bool IsReady();

  static inline ::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor* New_ctor(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap* owner);

  /// @brief Method OnAudioConfigurationChanged, addr 0x170b1ec, size 0x48, virtual false, abstract: false, final false
  inline void OnAudioConfigurationChanged(bool deviceWasChanged);

  /// @brief Method ProcessAudio, addr 0x170b7c8, size 0x35c, virtual false, abstract: false, final false
  inline float_t ProcessAudio();

  /// @brief Method SilenceAudioClipData, addr 0x170b658, size 0xe8, virtual false, abstract: false, final false
  inline void SilenceAudioClipData(int32_t fromPointer, int32_t toPointer);

  /// @brief Method Stop, addr 0x170b740, size 0x88, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method UninitializeAudioConfiguration, addr 0x170b16c, size 0x80, virtual false, abstract: false, final false
  inline void UninitializeAudioConfiguration();

  constexpr int32_t const& __cordl_internal_get_VxErrorNoMoreData() const;

  constexpr int32_t& __cordl_internal_get_VxErrorNoMoreData();

  constexpr int32_t const& __cordl_internal_get_m_BufferedAudio() const;

  constexpr int32_t& __cordl_internal_get_m_BufferedAudio();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_audioSource();

  constexpr ::UnityEngine::AudioConfiguration const& __cordl_internal_get_m_cachedAudioConfig() const;

  constexpr ::UnityEngine::AudioConfiguration& __cordl_internal_get_m_cachedAudioConfig();

  constexpr int32_t const& __cordl_internal_get_m_internalAudioPeriodFrames() const;

  constexpr int32_t& __cordl_internal_get_m_internalAudioPeriodFrames();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_internalBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_internalBuffer();

  constexpr double_t const& __cordl_internal_get_m_lastDspTime() const;

  constexpr double_t& __cordl_internal_get_m_lastDspTime();

  constexpr int32_t const& __cordl_internal_get_m_lastReadPointer() const;

  constexpr int32_t& __cordl_internal_get_m_lastReadPointer();

  constexpr int32_t const& __cordl_internal_get_m_maxLatencyFrames() const;

  constexpr int32_t& __cordl_internal_get_m_maxLatencyFrames();

  constexpr int32_t const& __cordl_internal_get_m_minLatencyFrames() const;

  constexpr int32_t& __cordl_internal_get_m_minLatencyFrames();

  constexpr int32_t const& __cordl_internal_get_m_missedReads() const;

  constexpr int32_t& __cordl_internal_get_m_missedReads();

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> const& __cordl_internal_get_m_owner() const;

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap>& __cordl_internal_get_m_owner();

  constexpr int32_t const& __cordl_internal_get_m_ownerTapId() const;

  constexpr int32_t& __cordl_internal_get_m_ownerTapId();

  constexpr int32_t const& __cordl_internal_get_m_readPointer() const;

  constexpr int32_t& __cordl_internal_get_m_readPointer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_silenceBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_silenceBuffer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_silenceBufferForAudioPeriod() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_silenceBufferForAudioPeriod();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_streamClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_streamClip();

  constexpr int32_t const& __cordl_internal_get_m_streamClipTotalFramesSize() const;

  constexpr int32_t& __cordl_internal_get_m_streamClipTotalFramesSize();

  constexpr int32_t const& __cordl_internal_get_m_writePointer() const;

  constexpr int32_t& __cordl_internal_get_m_writePointer();

  constexpr void __cordl_internal_set_VxErrorNoMoreData(int32_t value);

  constexpr void __cordl_internal_set_m_BufferedAudio(int32_t value);

  constexpr void __cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_m_cachedAudioConfig(::UnityEngine::AudioConfiguration value);

  constexpr void __cordl_internal_set_m_internalAudioPeriodFrames(int32_t value);

  constexpr void __cordl_internal_set_m_internalBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_lastDspTime(double_t value);

  constexpr void __cordl_internal_set_m_lastReadPointer(int32_t value);

  constexpr void __cordl_internal_set_m_maxLatencyFrames(int32_t value);

  constexpr void __cordl_internal_set_m_minLatencyFrames(int32_t value);

  constexpr void __cordl_internal_set_m_missedReads(int32_t value);

  constexpr void __cordl_internal_set_m_owner(::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> value);

  constexpr void __cordl_internal_set_m_ownerTapId(int32_t value);

  constexpr void __cordl_internal_set_m_readPointer(int32_t value);

  constexpr void __cordl_internal_set_m_silenceBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_silenceBufferForAudioPeriod(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_streamClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_streamClipTotalFramesSize(int32_t value);

  constexpr void __cordl_internal_set_m_writePointer(int32_t value);

  /// @brief Method .ctor, addr 0x170b018, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::AudioTaps::VivoxAudioTap* owner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxAudioProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxAudioProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxAudioProcessor(VivoxAudioProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxAudioProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxAudioProcessor(VivoxAudioProcessor const&) = delete;

  /// @brief Field m_owner, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> ___m_owner;

  /// @brief Field m_ownerTapId, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ownerTapId;

  /// @brief Field m_cachedAudioConfig, offset: 0x1c, size: 0x14, def value: None
  ::UnityEngine::AudioConfiguration ___m_cachedAudioConfig;

  /// @brief Field m_audioSource, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___m_audioSource;

  /// @brief Field m_streamClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_streamClip;

  /// @brief Field m_internalAudioPeriodFrames, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_internalAudioPeriodFrames;

  /// @brief Field m_streamClipTotalFramesSize, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_streamClipTotalFramesSize;

  /// @brief Field m_writePointer, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_writePointer;

  /// @brief Field m_lastReadPointer, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_lastReadPointer;

  /// @brief Field m_readPointer, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_readPointer;

  /// @brief Field m_minLatencyFrames, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_minLatencyFrames;

  /// @brief Field m_maxLatencyFrames, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_maxLatencyFrames;

  /// @brief Field m_internalBuffer, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_internalBuffer;

  /// @brief Field m_silenceBuffer, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_silenceBuffer;

  /// @brief Field m_silenceBufferForAudioPeriod, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_silenceBufferForAudioPeriod;

  /// @brief Field m_missedReads, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_missedReads;

  /// @brief Field m_lastDspTime, offset: 0x80, size: 0x8, def value: None
  double_t ___m_lastDspTime;

  /// @brief Field m_BufferedAudio, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_BufferedAudio;

  /// @brief Field VxErrorNoMoreData, offset: 0x8c, size: 0x4, def value: None
  int32_t ___VxErrorNoMoreData;

  /// @brief Field m_assumedVivoxSampleRate offset 0xffffffff size 0x4
  static constexpr int32_t m_assumedVivoxSampleRate{ static_cast<int32_t>(0xbb80) };

  /// @brief Field m_internalAudioPeriodDuration offset 0xffffffff size 0x8
  static constexpr double_t m_internalAudioPeriodDuration{ 0.02 };

  /// @brief Field m_missedReadsLimit offset 0xffffffff size 0x4
  static constexpr int32_t m_missedReadsLimit{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, 0x90>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_ownerTapId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_cachedAudioConfig) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_streamClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_internalAudioPeriodFrames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_streamClipTotalFramesSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_writePointer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_lastReadPointer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_readPointer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_minLatencyFrames) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_maxLatencyFrames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_internalBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_silenceBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_silenceBufferForAudioPeriod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_missedReads) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_lastDspTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___m_BufferedAudio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor, ___VxErrorNoMoreData) == 0x8c, "Offset mismatch!");

} // namespace Unity::Services::Vivox::AudioTaps
NEED_NO_BOX(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTaps::VivoxAudioProcessor*, "Unity.Services.Vivox.AudioTaps", "VivoxAudioProcessor");
