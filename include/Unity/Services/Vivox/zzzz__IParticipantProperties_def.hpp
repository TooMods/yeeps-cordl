#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IParticipantProperties)
// Forward declare root types
namespace Unity::Services::Vivox {
class IParticipantProperties;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IParticipantProperties);
// Type: Unity.Services.Vivox::IParticipantProperties
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IParticipantProperties*
class CORDL_TYPE IParticipantProperties {
public:
  // Declarations
  __declspec(property(get = get_AudioEnergy)) double_t AudioEnergy;

  __declspec(property(get = get_InAudio)) bool InAudio;

  __declspec(property(get = get_InText)) bool InText;

  __declspec(property(get = get_IsMutedForAll)) bool IsMutedForAll;

  __declspec(property(get = get_IsSelf)) bool IsSelf;

  __declspec(property(get = get_LocalMute, put = set_LocalMute)) bool LocalMute;

  __declspec(property(get = get_LocalVolumeAdjustment, put = set_LocalVolumeAdjustment)) int32_t LocalVolumeAdjustment;

  __declspec(property(get = get_SpeechDetected)) bool SpeechDetected;

  __declspec(property(get = get_UnavailableCaptureDevice)) bool UnavailableCaptureDevice;

  __declspec(property(get = get_UnavailableRenderDevice)) bool UnavailableRenderDevice;

  /// @brief Method get_AudioEnergy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_AudioEnergy();

  /// @brief Method get_InAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_InAudio();

  /// @brief Method get_InText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_InText();

  /// @brief Method get_IsMutedForAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsMutedForAll();

  /// @brief Method get_IsSelf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSelf();

  /// @brief Method get_LocalMute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_LocalMute();

  /// @brief Method get_LocalVolumeAdjustment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LocalVolumeAdjustment();

  /// @brief Method get_SpeechDetected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SpeechDetected();

  /// @brief Method get_UnavailableCaptureDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UnavailableCaptureDevice();

  /// @brief Method get_UnavailableRenderDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UnavailableRenderDevice();

  /// @brief Method set_LocalMute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_LocalMute(bool value);

  /// @brief Method set_LocalVolumeAdjustment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_LocalVolumeAdjustment(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IParticipantProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IParticipantProperties(IParticipantProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IParticipantProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IParticipantProperties(IParticipantProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IParticipantProperties);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IParticipantProperties*, "Unity.Services.Vivox", "IParticipantProperties");
