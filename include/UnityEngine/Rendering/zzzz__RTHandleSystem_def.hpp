#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandleSystem)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
struct __RTHandleSystem__ResizeMode;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __RTHandleSystem__ResizeMode;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__RTHandleSystem__ResizeMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::RTHandleSystem);
// Type: ::ResizeMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::RTHandleSystem::ResizeMode
struct CORDL_TYPE __RTHandleSystem__ResizeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RTHandleSystem__ResizeMode_Unwrapped
  enum struct ____RTHandleSystem__ResizeMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_OnDemand = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RTHandleSystem__ResizeMode_Unwrapped() const noexcept {
    return static_cast<____RTHandleSystem__ResizeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RTHandleSystem__ResizeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RTHandleSystem__ResizeMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__RTHandleSystem__ResizeMode const Auto;

  /// @brief Field OnDemand value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__RTHandleSystem__ResizeMode const OnDemand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__RTHandleSystem__ResizeMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__RTHandleSystem__ResizeMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::RTHandleSystem
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RTHandleSystem*
class CORDL_TYPE RTHandleSystem : public ::System::Object {
public:
  // Declarations
  using ResizeMode = ::UnityEngine::Rendering::__RTHandleSystem__ResizeMode;

  /// @brief Field m_AutoSizedRTs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoSizedRTs,
                      put = __cordl_internal_set_m_AutoSizedRTs))::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTs;

  /// @brief Field m_AutoSizedRTsArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoSizedRTsArray,
                      put = __cordl_internal_set_m_AutoSizedRTsArray))::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> m_AutoSizedRTsArray;

  /// @brief Field m_HardwareDynamicResRequested, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HardwareDynamicResRequested, put = __cordl_internal_set_m_HardwareDynamicResRequested)) bool m_HardwareDynamicResRequested;

  /// @brief Field m_MaxHeights, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxHeights, put = __cordl_internal_set_m_MaxHeights)) int32_t m_MaxHeights;

  /// @brief Field m_MaxWidths, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxWidths, put = __cordl_internal_set_m_MaxWidths)) int32_t m_MaxWidths;

  /// @brief Field m_RTHandleProperties, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get_m_RTHandleProperties, put = __cordl_internal_set_m_RTHandleProperties))::UnityEngine::Rendering::RTHandleProperties m_RTHandleProperties;

  /// @brief Field m_ResizeOnDemandRTs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResizeOnDemandRTs,
                      put = __cordl_internal_set_m_ResizeOnDemandRTs))::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_ResizeOnDemandRTs;

  __declspec(property(get = get_rtHandleProperties))::UnityEngine::Rendering::RTHandleProperties rtHandleProperties;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Alloc, addr 0x1a090bc, size 0x2f4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a094ec, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a0b1c0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* tex);

  /// @brief Method Alloc, addr 0x1a097c8, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* texture);

  /// @brief Method Alloc, addr 0x1a09928, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture);

  /// @brief Method Alloc, addr 0x1a09a40, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture, ::StringW name);

  /// @brief Method Alloc, addr 0x1a09694, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* texture);

  /// @brief Method Alloc, addr 0x1a08800, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a08a00, size 0x574, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                   ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method AllocAutoSizedRenderTexture, addr 0x1a0ac88, size 0x538, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                         ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                         ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite,
                                                                         bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                         ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                         ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method CalculateRatioAgainstMaxSize, addr 0x1a05a08, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculateRatioAgainstMaxSize(ByRef<::UnityEngine::Vector2Int> viewportSize);

  /// @brief Method DemandResize, addr 0x1a0aa24, size 0x254, virtual false, abstract: false, final false
  inline void DemandResize(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method Dispose, addr 0x1a05e38, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1a0a3f0, size 0x1b4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DumpRTInfo, addr 0x1a0b230, size 0x2f8, virtual false, abstract: false, final false
  inline ::StringW DumpRTInfo();

  /// @brief Method GetMaxHeight, addr 0x1a0ac80, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxHeight();

  /// @brief Method GetMaxWidth, addr 0x1a0ac78, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxWidth();

  /// @brief Method Initialize, addr 0x1a09bd8, size 0x2ac, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height);

  static inline ::UnityEngine::Rendering::RTHandleSystem* New_ctor();

  /// @brief Method Release, addr 0x1a05610, size 0x10, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method Remove, addr 0x1a0818c, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method ResetReferenceSize, addr 0x1a05938, size 0xc, virtual false, abstract: false, final false
  inline void ResetReferenceSize(int32_t width, int32_t height);

  /// @brief Method Resize, addr 0x1a0a73c, size 0x2e8, virtual false, abstract: false, final false
  inline void Resize(int32_t width, int32_t height, bool sizeChanged);

  /// @brief Method SetHardwareDynamicResolutionState, addr 0x1a09eec, size 0x174, virtual false, abstract: false, final false
  inline void SetHardwareDynamicResolutionState(bool enableHWDynamicRes);

  /// @brief Method SetReferenceSize, addr 0x1a05910, size 0x8, virtual false, abstract: false, final false
  inline void SetReferenceSize(int32_t width, int32_t height);

  /// @brief Method SetReferenceSize, addr 0x1a0a5a4, size 0x198, virtual false, abstract: false, final false
  inline void SetReferenceSize(int32_t width, int32_t height, bool reset);

  /// @brief Method SwitchResizeMode, addr 0x1a05414, size 0x10c, virtual false, abstract: false, final false
  inline void SwitchResizeMode(::UnityEngine::Rendering::RTHandle* rth, ::UnityEngine::Rendering::__RTHandleSystem__ResizeMode mode);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& __cordl_internal_get_m_AutoSizedRTs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_AutoSizedRTs() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_AutoSizedRTsArray() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_AutoSizedRTsArray();

  constexpr bool const& __cordl_internal_get_m_HardwareDynamicResRequested() const;

  constexpr bool& __cordl_internal_get_m_HardwareDynamicResRequested();

  constexpr int32_t const& __cordl_internal_get_m_MaxHeights() const;

  constexpr int32_t& __cordl_internal_get_m_MaxHeights();

  constexpr int32_t const& __cordl_internal_get_m_MaxWidths() const;

  constexpr int32_t& __cordl_internal_get_m_MaxWidths();

  constexpr ::UnityEngine::Rendering::RTHandleProperties const& __cordl_internal_get_m_RTHandleProperties() const;

  constexpr ::UnityEngine::Rendering::RTHandleProperties& __cordl_internal_get_m_RTHandleProperties();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& __cordl_internal_get_m_ResizeOnDemandRTs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_ResizeOnDemandRTs() const;

  constexpr void __cordl_internal_set_m_AutoSizedRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value);

  constexpr void __cordl_internal_set_m_AutoSizedRTsArray(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_HardwareDynamicResRequested(bool value);

  constexpr void __cordl_internal_set_m_MaxHeights(int32_t value);

  constexpr void __cordl_internal_set_m_MaxWidths(int32_t value);

  constexpr void __cordl_internal_set_m_RTHandleProperties(::UnityEngine::Rendering::RTHandleProperties value);

  constexpr void __cordl_internal_set_m_ResizeOnDemandRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value);

  /// @brief Method .ctor, addr 0x1a05ef0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rtHandleProperties, addr 0x1a0a3dc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleSystem(RTHandleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleSystem(RTHandleSystem const&) = delete;

  /// @brief Field m_HardwareDynamicResRequested, offset: 0x10, size: 0x1, def value: None
  bool ___m_HardwareDynamicResRequested;

  /// @brief Field m_AutoSizedRTs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* ___m_AutoSizedRTs;

  /// @brief Field m_AutoSizedRTsArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_AutoSizedRTsArray;

  /// @brief Field m_ResizeOnDemandRTs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* ___m_ResizeOnDemandRTs;

  /// @brief Field m_RTHandleProperties, offset: 0x30, size: 0x30, def value: None
  ::UnityEngine::Rendering::RTHandleProperties ___m_RTHandleProperties;

  /// @brief Field m_MaxWidths, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_MaxWidths;

  /// @brief Field m_MaxHeights, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_MaxHeights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandleSystem, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_HardwareDynamicResRequested) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_AutoSizedRTs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_AutoSizedRTsArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_ResizeOnDemandRTs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_RTHandleProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_MaxWidths) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_MaxHeights) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__RTHandleSystem__ResizeMode, "UnityEngine.Rendering", "RTHandleSystem/ResizeMode");
NEED_NO_BOX(::UnityEngine::Rendering::RTHandleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandleSystem*, "UnityEngine.Rendering", "RTHandleSystem");
