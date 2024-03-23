#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTapBridge)
// Forward declare root types
namespace Unity::Services::Vivox {
class AudioTapBridge;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioTapBridge);
// Type: Unity.Services.Vivox::AudioTapBridge
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AudioTapBridge*
class CORDL_TYPE AudioTapBridge : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCaptureSourceAudio, addr 0x1c12f58, size 0x88, virtual false, abstract: false, final false
  static inline int32_t GetCaptureSourceAudio(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  /// @brief Method GetChannelAudio, addr 0x1c12ed0, size 0x88, virtual false, abstract: false, final false
  static inline int32_t GetChannelAudio(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  /// @brief Method GetParticipantAudio, addr 0x1c13068, size 0x88, virtual false, abstract: false, final false
  static inline int32_t GetParticipantAudio(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  static inline ::Unity::Services::Vivox::AudioTapBridge* New_ctor();

  /// @brief Method PutCaptureSinkAudio, addr 0x1c12fe0, size 0x88, virtual false, abstract: false, final false
  static inline int32_t PutCaptureSinkAudio(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels, int32_t sampleRate);

  /// @brief Method RegisterTapForCaptureSink, addr 0x1c12d90, size 0x68, virtual false, abstract: false, final false
  static inline int32_t RegisterTapForCaptureSink(uint32_t bufferDuration, ::StringW channelUri);

  /// @brief Method RegisterTapForCaptureSource, addr 0x1c12d28, size 0x68, virtual false, abstract: false, final false
  static inline int32_t RegisterTapForCaptureSource(uint32_t bufferDuration, ::StringW channelUri);

  /// @brief Method RegisterTapForChannelAudio, addr 0x1c12cc0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t RegisterTapForChannelAudio(uint32_t bufferDuration, ::StringW channelUri);

  /// @brief Method RegisterTapForParticipantAudio, addr 0x1c12df8, size 0x80, virtual false, abstract: false, final false
  static inline int32_t RegisterTapForParticipantAudio(uint32_t bufferDuration, ::StringW participantUri, ::StringW channelUri, bool silenceInFinalMix);

  /// @brief Method UnregisterTap, addr 0x1c12e78, size 0x58, virtual false, abstract: false, final false
  static inline int32_t UnregisterTap(int32_t tapId);

  /// @brief Method .ctor, addr 0x1c130f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTapBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioTapBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTapBridge(AudioTapBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTapBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTapBridge(AudioTapBridge const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioTapBridge, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AudioTapBridge);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioTapBridge*, "Unity.Services.Vivox", "AudioTapBridge");
