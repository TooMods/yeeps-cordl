#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SystemInfo);
// Type: UnityEngine::SystemInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SystemInfo*
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCompatibleFormat, addr 0x27f2814, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                           ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method GetCopyTextureSupport, addr 0x27faea4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport();

  /// @brief Method GetDeviceModel, addr 0x27fab84, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceModel();

  /// @brief Method GetDeviceType, addr 0x27fabd4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType GetDeviceType();

  /// @brief Method GetGraphicsDeviceName, addr 0x27fac24, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceName();

  /// @brief Method GetGraphicsDeviceType, addr 0x27facc4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();

  /// @brief Method GetGraphicsDeviceVendor, addr 0x27fac74, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVendor();

  /// @brief Method GetGraphicsDeviceVersion, addr 0x27fad64, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVersion();

  /// @brief Method GetGraphicsFormat, addr 0x27ed620, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetGraphicsShaderLevel, addr 0x27fadb4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsShaderLevel();

  /// @brief Method GetGraphicsUVStartsAtTop, addr 0x27fad14, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsUVStartsAtTop();

  /// @brief Method GetMaxRenderTextureSize, addr 0x27fb2c4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxRenderTextureSize();

  /// @brief Method GetMaxTextureSize, addr 0x27fb274, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxTextureSize();

  /// @brief Method GetOperatingSystem, addr 0x27faa94, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetOperatingSystem();

  /// @brief Method GetOperatingSystemFamily, addr 0x27faae4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();

  /// @brief Method GetProcessorType, addr 0x27fab34, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetProcessorType();

  /// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0x27fb42c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0x27fb468, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0x27fae04, size 0x28, virtual false, abstract: false, final false
  static inline bool HasHiddenSurfaceRemovalOnGPU();

  /// @brief Method HasRenderTextureNative, addr 0x27fb1d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);

  /// @brief Method IsFormatSupported, addr 0x27ec838, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method IsValidEnumValue, addr 0x27fb084, size 0x78, virtual false, abstract: false, final false
  static inline bool IsValidEnumValue(::bs_hook::EnumPtr value);

  /// @brief Method MaxGraphicsBufferSize, addr 0x27fb364, size 0x28, virtual false, abstract: false, final false
  static inline int64_t MaxGraphicsBufferSize();

  /// @brief Method SupportedRenderTargetCount, addr 0x27faf6c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportedRenderTargetCount();

  /// @brief Method SupportsGPUFence, addr 0x27fb314, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsGPUFence();

  /// @brief Method SupportsInstancing, addr 0x27faf1c, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsInstancing();

  /// @brief Method SupportsMultisampleAutoResolve, addr 0x27fb00c, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleAutoResolve();

  /// @brief Method SupportsMultisampledTextures, addr 0x27fafbc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportsMultisampledTextures();

  /// @brief Method SupportsMultiview, addr 0x27fb3b4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultiview();

  /// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0x27faef4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method SupportsRenderTextureFormat, addr 0x27fb0fc, size 0xd8, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsShadows, addr 0x27fae54, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsShadows();

  /// @brief Method SupportsStoreAndResolveAction, addr 0x27fb404, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsStoreAndResolveAction();

  /// @brief Method SupportsTextureFormat, addr 0x27ec594, size 0xd8, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method SupportsTextureFormatNative, addr 0x27fb210, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);

  /// @brief Method UsesReversedZBuffer, addr 0x27fb05c, size 0x28, virtual false, abstract: false, final false
  static inline bool UsesReversedZBuffer();

  /// @brief Method get_copyTextureSupport, addr 0x27fae7c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport();

  /// @brief Method get_deviceModel, addr 0x27fab5c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceType, addr 0x27fabac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType get_deviceType();

  /// @brief Method get_graphicsDeviceName, addr 0x27fabfc, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceName();

  /// @brief Method get_graphicsDeviceType, addr 0x27fac9c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();

  /// @brief Method get_graphicsDeviceVendor, addr 0x27fac4c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVendor();

  /// @brief Method get_graphicsDeviceVersion, addr 0x27fad3c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVersion();

  /// @brief Method get_graphicsShaderLevel, addr 0x27fad8c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsShaderLevel();

  /// @brief Method get_graphicsUVStartsAtTop, addr 0x27facec, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsUVStartsAtTop();

  /// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0x27faddc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_hasHiddenSurfaceRemovalOnGPU();

  /// @brief Method get_maxGraphicsBufferSize, addr 0x27fb33c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t get_maxGraphicsBufferSize();

  /// @brief Method get_maxRenderTextureSize, addr 0x27fb29c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxRenderTextureSize();

  /// @brief Method get_maxTextureSize, addr 0x27fb24c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxTextureSize();

  /// @brief Method get_operatingSystem, addr 0x27faa6c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_operatingSystem();

  /// @brief Method get_operatingSystemFamily, addr 0x27faabc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();

  /// @brief Method get_processorType, addr 0x27fab0c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_processorType();

  /// @brief Method get_supportedRenderTargetCount, addr 0x27faf44, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportedRenderTargetCount();

  /// @brief Method get_supportsGraphicsFence, addr 0x27fb2ec, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsGraphicsFence();

  /// @brief Method get_supportsInstancing, addr 0x27f3d4c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsInstancing();

  /// @brief Method get_supportsMultisampleAutoResolve, addr 0x27fafe4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleAutoResolve();

  /// @brief Method get_supportsMultisampledTextures, addr 0x27faf94, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportsMultisampledTextures();

  /// @brief Method get_supportsMultiview, addr 0x27fb38c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultiview();

  /// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0x27faecc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method get_supportsShadows, addr 0x27fae2c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsShadows();

  /// @brief Method get_supportsStoreAndResolveAction, addr 0x27fb3dc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsStoreAndResolveAction();

  /// @brief Method get_usesReversedZBuffer, addr 0x27fb034, size 0x28, virtual false, abstract: false, final false
  static inline bool get_usesReversedZBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
