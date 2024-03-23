#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredConfig)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredConfig);
// Type: UnityEngine.Rendering.Universal.Internal::DeferredConfig
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DeferredConfig*
class CORDL_TYPE DeferredConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field <IsDX10>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__IsDX10_k__BackingField, put = setStaticF__IsDX10_k__BackingField)) bool _IsDX10_k__BackingField;

  /// @brief Field <IsOpenGL>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__IsOpenGL_k__BackingField, put = setStaticF__IsOpenGL_k__BackingField)) bool _IsOpenGL_k__BackingField;

  static inline bool getStaticF__IsDX10_k__BackingField();

  static inline bool getStaticF__IsOpenGL_k__BackingField();

  /// @brief Method get_IsDX10, addr 0x2ad38cc, size 0x48, virtual false, abstract: false, final false
  static inline bool get_IsDX10();

  /// @brief Method get_IsOpenGL, addr 0x2ad3838, size 0x48, virtual false, abstract: false, final false
  static inline bool get_IsOpenGL();

  /// @brief Method get_UseCBufferForDepthRange, addr 0x2ad3960, size 0x40, virtual false, abstract: false, final false
  static inline bool get_UseCBufferForDepthRange();

  /// @brief Method get_UseCBufferForLightData, addr 0x2ad39e0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_UseCBufferForLightData();

  /// @brief Method get_UseCBufferForLightList, addr 0x2ad39e8, size 0x40, virtual false, abstract: false, final false
  static inline bool get_UseCBufferForLightList();

  /// @brief Method get_UseCBufferForTileList, addr 0x2ad39a0, size 0x40, virtual false, abstract: false, final false
  static inline bool get_UseCBufferForTileList();

  static inline void setStaticF__IsDX10_k__BackingField(bool value);

  static inline void setStaticF__IsOpenGL_k__BackingField(bool value);

  /// @brief Method set_IsDX10, addr 0x2ad3914, size 0x4c, virtual false, abstract: false, final false
  static inline void set_IsDX10(bool value);

  /// @brief Method set_IsOpenGL, addr 0x2ad3880, size 0x4c, virtual false, abstract: false, final false
  static inline void set_IsOpenGL(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredConfig(DeferredConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredConfig(DeferredConfig const&) = delete;

  /// @brief Field kAvgLightPerTile offset 0xffffffff size 0x4
  static constexpr int32_t kAvgLightPerTile{ static_cast<int32_t>(0x20) };

  /// @brief Field kHasNativeQuadSupport offset 0xffffffff size 0x1
  static constexpr bool kHasNativeQuadSupport{ false };

  /// @brief Field kPreferredCBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kPreferredCBufferSize{ static_cast<int32_t>(0x10000) };

  /// @brief Field kPreferredStructuredBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kPreferredStructuredBufferSize{ static_cast<int32_t>(0x20000) };

  /// @brief Field kTileDepthInfoIntermediateLevel offset 0xffffffff size 0x4
  static constexpr int32_t kTileDepthInfoIntermediateLevel{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kTilePixelHeight offset 0xffffffff size 0x4
  static constexpr int32_t kTilePixelHeight{ static_cast<int32_t>(0x10) };

  /// @brief Field kTilePixelWidth offset 0xffffffff size 0x4
  static constexpr int32_t kTilePixelWidth{ static_cast<int32_t>(0x10) };

  /// @brief Field kTilerDepth offset 0xffffffff size 0x4
  static constexpr int32_t kTilerDepth{ static_cast<int32_t>(0x3) };

  /// @brief Field kTilerSubdivisions offset 0xffffffff size 0x4
  static constexpr int32_t kTilerSubdivisions{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredConfig, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredConfig*, "UnityEngine.Rendering.Universal.Internal", "DeferredConfig");
