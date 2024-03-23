#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxConfigurationOptions)
namespace Unity::Services::Vivox {
struct VivoxLogLevel;
}
namespace Unity::Services::Vivox {
class vx_sdk_config_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxConfigurationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxConfigurationOptions);
// Type: Unity.Services.Vivox::VivoxConfigurationOptions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxConfigurationOptions*
class CORDL_TYPE VivoxConfigurationOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CaptureDeviceBufferSizeIntervals, put = set_CaptureDeviceBufferSizeIntervals)) int32_t CaptureDeviceBufferSizeIntervals;

  __declspec(property(get = get_DisableAudioDucking, put = set_DisableAudioDucking)) bool DisableAudioDucking;

  __declspec(property(get = get_DisableDevicePolling, put = set_DisableDevicePolling)) bool DisableDevicePolling;

  __declspec(property(get = get_DynamicVoiceProcessingSwitching, put = set_DynamicVoiceProcessingSwitching)) bool DynamicVoiceProcessingSwitching;

  __declspec(property(get = get_EnableAdvancedAutoLevels, put = set_EnableAdvancedAutoLevels)) bool EnableAdvancedAutoLevels;

  __declspec(property(get = get_EnableDtx, put = set_EnableDtx)) bool EnableDtx;

  __declspec(property(get = get_EnableFastNetworkChangeDetection, put = set_EnableFastNetworkChangeDetection)) bool EnableFastNetworkChangeDetection;

  __declspec(property(get = get_ForceCaptureSilence, put = set_ForceCaptureSilence)) bool ForceCaptureSilence;

  __declspec(property(get = get_InternalVivoxConfig, put = set_InternalVivoxConfig))::Unity::Services::Vivox::vx_sdk_config_t* InternalVivoxConfig;

  __declspec(property(get = get_LogLevel, put = set_LogLevel))::Unity::Services::Vivox::VivoxLogLevel LogLevel;

  __declspec(property(get = get_LostRtpTimeoutMs, put = set_LostRtpTimeoutMs)) int32_t LostRtpTimeoutMs;

  __declspec(property(get = get_MaxLoginsPerUser, put = set_MaxLoginsPerUser)) int32_t MaxLoginsPerUser;

  __declspec(property(get = get_NeverRtpTimeoutMs, put = set_NeverRtpTimeoutMs)) int32_t NeverRtpTimeoutMs;

  __declspec(property(get = get_RenderDeviceBufferSizeIntervals, put = set_RenderDeviceBufferSizeIntervals)) int32_t RenderDeviceBufferSizeIntervals;

  __declspec(property(get = get_RenderSourceInitialBufferCount, put = set_RenderSourceInitialBufferCount)) int32_t RenderSourceInitialBufferCount;

  __declspec(property(get = get_RenderSourceQueueDepthMax, put = set_RenderSourceQueueDepthMax)) int32_t RenderSourceQueueDepthMax;

  __declspec(property(get = get_SkipPrepareForVivox, put = set_SkipPrepareForVivox)) bool SkipPrepareForVivox;

  __declspec(property(get = get_UpstreamJitterFrameCount, put = set_UpstreamJitterFrameCount)) int32_t UpstreamJitterFrameCount;

  __declspec(property(get = get_UseOsProxySettings, put = set_UseOsProxySettings)) int32_t UseOsProxySettings;

  /// @brief Field <InternalVivoxConfig>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__InternalVivoxConfig_k__BackingField,
                      put = __cordl_internal_set__InternalVivoxConfig_k__BackingField))::Unity::Services::Vivox::vx_sdk_config_t* _InternalVivoxConfig_k__BackingField;

  /// @brief Field <SkipPrepareForVivox>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__SkipPrepareForVivox_k__BackingField, put = __cordl_internal_set__SkipPrepareForVivox_k__BackingField)) bool _SkipPrepareForVivox_k__BackingField;

  static inline ::Unity::Services::Vivox::VivoxConfigurationOptions* New_ctor();

  constexpr ::Unity::Services::Vivox::vx_sdk_config_t*& __cordl_internal_get__InternalVivoxConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_sdk_config_t*> const& __cordl_internal_get__InternalVivoxConfig_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__SkipPrepareForVivox_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SkipPrepareForVivox_k__BackingField();

  constexpr void __cordl_internal_set__InternalVivoxConfig_k__BackingField(::Unity::Services::Vivox::vx_sdk_config_t* value);

  constexpr void __cordl_internal_set__SkipPrepareForVivox_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1c1822c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CaptureDeviceBufferSizeIntervals, addr 0x1c17d30, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_CaptureDeviceBufferSizeIntervals();

  /// @brief Method get_DisableAudioDucking, addr 0x1c17da0, size 0x74, virtual false, abstract: false, final false
  inline bool get_DisableAudioDucking();

  /// @brief Method get_DisableDevicePolling, addr 0x1c17a54, size 0x74, virtual false, abstract: false, final false
  inline bool get_DisableDevicePolling();

  /// @brief Method get_DynamicVoiceProcessingSwitching, addr 0x1c180b4, size 0x74, virtual false, abstract: false, final false
  inline bool get_DynamicVoiceProcessingSwitching();

  /// @brief Method get_EnableAdvancedAutoLevels, addr 0x1c17c3c, size 0x74, virtual false, abstract: false, final false
  inline bool get_EnableAdvancedAutoLevels();

  /// @brief Method get_EnableDtx, addr 0x1c17e94, size 0x74, virtual false, abstract: false, final false
  inline bool get_EnableDtx();

  /// @brief Method get_EnableFastNetworkChangeDetection, addr 0x1c17f88, size 0x74, virtual false, abstract: false, final false
  inline bool get_EnableFastNetworkChangeDetection();

  /// @brief Method get_ForceCaptureSilence, addr 0x1c17b48, size 0x74, virtual false, abstract: false, final false
  inline bool get_ForceCaptureSilence();

  /// @brief Method get_InternalVivoxConfig, addr 0x1c1792c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_sdk_config_t* get_InternalVivoxConfig();

  /// @brief Method get_LogLevel, addr 0x1c17a1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::VivoxLogLevel get_LogLevel();

  /// @brief Method get_LostRtpTimeoutMs, addr 0x1c181e0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_LostRtpTimeoutMs();

  /// @brief Method get_MaxLoginsPerUser, addr 0x1c179e4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_MaxLoginsPerUser();

  /// @brief Method get_NeverRtpTimeoutMs, addr 0x1c181a8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_NeverRtpTimeoutMs();

  /// @brief Method get_RenderDeviceBufferSizeIntervals, addr 0x1c17d68, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_RenderDeviceBufferSizeIntervals();

  /// @brief Method get_RenderSourceInitialBufferCount, addr 0x1c17974, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_RenderSourceInitialBufferCount();

  /// @brief Method get_RenderSourceQueueDepthMax, addr 0x1c1793c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_RenderSourceQueueDepthMax();

  /// @brief Method get_SkipPrepareForVivox, addr 0x1c18218, size 0x8, virtual false, abstract: false, final false
  inline bool get_SkipPrepareForVivox();

  /// @brief Method get_UpstreamJitterFrameCount, addr 0x1c179ac, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_UpstreamJitterFrameCount();

  /// @brief Method get_UseOsProxySettings, addr 0x1c1807c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_UseOsProxySettings();

  /// @brief Method set_CaptureDeviceBufferSizeIntervals, addr 0x1c17d4c, size 0x1c, virtual false, abstract: false, final false
  inline void set_CaptureDeviceBufferSizeIntervals(int32_t value);

  /// @brief Method set_DisableAudioDucking, addr 0x1c17e14, size 0x80, virtual false, abstract: false, final false
  inline void set_DisableAudioDucking(bool value);

  /// @brief Method set_DisableDevicePolling, addr 0x1c17ac8, size 0x80, virtual false, abstract: false, final false
  inline void set_DisableDevicePolling(bool value);

  /// @brief Method set_DynamicVoiceProcessingSwitching, addr 0x1c18128, size 0x80, virtual false, abstract: false, final false
  inline void set_DynamicVoiceProcessingSwitching(bool value);

  /// @brief Method set_EnableAdvancedAutoLevels, addr 0x1c17cb0, size 0x80, virtual false, abstract: false, final false
  inline void set_EnableAdvancedAutoLevels(bool value);

  /// @brief Method set_EnableDtx, addr 0x1c17f08, size 0x80, virtual false, abstract: false, final false
  inline void set_EnableDtx(bool value);

  /// @brief Method set_EnableFastNetworkChangeDetection, addr 0x1c17ffc, size 0x80, virtual false, abstract: false, final false
  inline void set_EnableFastNetworkChangeDetection(bool value);

  /// @brief Method set_ForceCaptureSilence, addr 0x1c17bbc, size 0x80, virtual false, abstract: false, final false
  inline void set_ForceCaptureSilence(bool value);

  /// @brief Method set_InternalVivoxConfig, addr 0x1c17934, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalVivoxConfig(::Unity::Services::Vivox::vx_sdk_config_t* value);

  /// @brief Method set_LogLevel, addr 0x1c17a38, size 0x1c, virtual false, abstract: false, final false
  inline void set_LogLevel(::Unity::Services::Vivox::VivoxLogLevel value);

  /// @brief Method set_LostRtpTimeoutMs, addr 0x1c181fc, size 0x1c, virtual false, abstract: false, final false
  inline void set_LostRtpTimeoutMs(int32_t value);

  /// @brief Method set_MaxLoginsPerUser, addr 0x1c17a00, size 0x1c, virtual false, abstract: false, final false
  inline void set_MaxLoginsPerUser(int32_t value);

  /// @brief Method set_NeverRtpTimeoutMs, addr 0x1c181c4, size 0x1c, virtual false, abstract: false, final false
  inline void set_NeverRtpTimeoutMs(int32_t value);

  /// @brief Method set_RenderDeviceBufferSizeIntervals, addr 0x1c17d84, size 0x1c, virtual false, abstract: false, final false
  inline void set_RenderDeviceBufferSizeIntervals(int32_t value);

  /// @brief Method set_RenderSourceInitialBufferCount, addr 0x1c17990, size 0x1c, virtual false, abstract: false, final false
  inline void set_RenderSourceInitialBufferCount(int32_t value);

  /// @brief Method set_RenderSourceQueueDepthMax, addr 0x1c17958, size 0x1c, virtual false, abstract: false, final false
  inline void set_RenderSourceQueueDepthMax(int32_t value);

  /// @brief Method set_SkipPrepareForVivox, addr 0x1c18220, size 0xc, virtual false, abstract: false, final false
  inline void set_SkipPrepareForVivox(bool value);

  /// @brief Method set_UpstreamJitterFrameCount, addr 0x1c179c8, size 0x1c, virtual false, abstract: false, final false
  inline void set_UpstreamJitterFrameCount(int32_t value);

  /// @brief Method set_UseOsProxySettings, addr 0x1c18098, size 0x1c, virtual false, abstract: false, final false
  inline void set_UseOsProxySettings(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxConfigurationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxConfigurationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxConfigurationOptions(VivoxConfigurationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxConfigurationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxConfigurationOptions(VivoxConfigurationOptions const&) = delete;

  /// @brief Field <InternalVivoxConfig>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_sdk_config_t* ____InternalVivoxConfig_k__BackingField;

  /// @brief Field <SkipPrepareForVivox>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____SkipPrepareForVivox_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxConfigurationOptions, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxConfigurationOptions, ____InternalVivoxConfig_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxConfigurationOptions, ____SkipPrepareForVivox_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxConfigurationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxConfigurationOptions*, "Unity.Services.Vivox", "VivoxConfigurationOptions");
