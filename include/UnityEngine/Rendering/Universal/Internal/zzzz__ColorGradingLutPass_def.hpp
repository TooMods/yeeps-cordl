#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGradingLutPass)
namespace UnityEngine::Rendering::Universal::Internal {
class __ColorGradingLutPass__ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __ColorGradingLutPass__ShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants);
// Type: ::ShaderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::ColorGradingLutPass::ShaderConstants*
class CORDL_TYPE __ColorGradingLutPass__ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ChannelMixerBlue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ChannelMixerBlue, put = setStaticF__ChannelMixerBlue)) int32_t _ChannelMixerBlue;

  /// @brief Field _ChannelMixerGreen, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ChannelMixerGreen, put = setStaticF__ChannelMixerGreen)) int32_t _ChannelMixerGreen;

  /// @brief Field _ChannelMixerRed, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ChannelMixerRed, put = setStaticF__ChannelMixerRed)) int32_t _ChannelMixerRed;

  /// @brief Field _ColorBalance, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ColorBalance, put = setStaticF__ColorBalance)) int32_t _ColorBalance;

  /// @brief Field _ColorFilter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ColorFilter, put = setStaticF__ColorFilter)) int32_t _ColorFilter;

  /// @brief Field _CurveBlue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveBlue, put = setStaticF__CurveBlue)) int32_t _CurveBlue;

  /// @brief Field _CurveGreen, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveGreen, put = setStaticF__CurveGreen)) int32_t _CurveGreen;

  /// @brief Field _CurveHueVsHue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveHueVsHue, put = setStaticF__CurveHueVsHue)) int32_t _CurveHueVsHue;

  /// @brief Field _CurveHueVsSat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveHueVsSat, put = setStaticF__CurveHueVsSat)) int32_t _CurveHueVsSat;

  /// @brief Field _CurveLumVsSat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveLumVsSat, put = setStaticF__CurveLumVsSat)) int32_t _CurveLumVsSat;

  /// @brief Field _CurveMaster, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveMaster, put = setStaticF__CurveMaster)) int32_t _CurveMaster;

  /// @brief Field _CurveRed, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveRed, put = setStaticF__CurveRed)) int32_t _CurveRed;

  /// @brief Field _CurveSatVsSat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CurveSatVsSat, put = setStaticF__CurveSatVsSat)) int32_t _CurveSatVsSat;

  /// @brief Field _Gain, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Gain, put = setStaticF__Gain)) int32_t _Gain;

  /// @brief Field _Gamma, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Gamma, put = setStaticF__Gamma)) int32_t _Gamma;

  /// @brief Field _Highlights, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Highlights, put = setStaticF__Highlights)) int32_t _Highlights;

  /// @brief Field _HueSatCon, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__HueSatCon, put = setStaticF__HueSatCon)) int32_t _HueSatCon;

  /// @brief Field _Lift, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Lift, put = setStaticF__Lift)) int32_t _Lift;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _Midtones, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Midtones, put = setStaticF__Midtones)) int32_t _Midtones;

  /// @brief Field _ShaHiLimits, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShaHiLimits, put = setStaticF__ShaHiLimits)) int32_t _ShaHiLimits;

  /// @brief Field _Shadows, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Shadows, put = setStaticF__Shadows)) int32_t _Shadows;

  /// @brief Field _SplitHighlights, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SplitHighlights, put = setStaticF__SplitHighlights)) int32_t _SplitHighlights;

  /// @brief Field _SplitShadows, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SplitShadows, put = setStaticF__SplitShadows)) int32_t _SplitShadows;

  static inline int32_t getStaticF__ChannelMixerBlue();

  static inline int32_t getStaticF__ChannelMixerGreen();

  static inline int32_t getStaticF__ChannelMixerRed();

  static inline int32_t getStaticF__ColorBalance();

  static inline int32_t getStaticF__ColorFilter();

  static inline int32_t getStaticF__CurveBlue();

  static inline int32_t getStaticF__CurveGreen();

  static inline int32_t getStaticF__CurveHueVsHue();

  static inline int32_t getStaticF__CurveHueVsSat();

  static inline int32_t getStaticF__CurveLumVsSat();

  static inline int32_t getStaticF__CurveMaster();

  static inline int32_t getStaticF__CurveRed();

  static inline int32_t getStaticF__CurveSatVsSat();

  static inline int32_t getStaticF__Gain();

  static inline int32_t getStaticF__Gamma();

  static inline int32_t getStaticF__Highlights();

  static inline int32_t getStaticF__HueSatCon();

  static inline int32_t getStaticF__Lift();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__Midtones();

  static inline int32_t getStaticF__ShaHiLimits();

  static inline int32_t getStaticF__Shadows();

  static inline int32_t getStaticF__SplitHighlights();

  static inline int32_t getStaticF__SplitShadows();

  static inline void setStaticF__ChannelMixerBlue(int32_t value);

  static inline void setStaticF__ChannelMixerGreen(int32_t value);

  static inline void setStaticF__ChannelMixerRed(int32_t value);

  static inline void setStaticF__ColorBalance(int32_t value);

  static inline void setStaticF__ColorFilter(int32_t value);

  static inline void setStaticF__CurveBlue(int32_t value);

  static inline void setStaticF__CurveGreen(int32_t value);

  static inline void setStaticF__CurveHueVsHue(int32_t value);

  static inline void setStaticF__CurveHueVsSat(int32_t value);

  static inline void setStaticF__CurveLumVsSat(int32_t value);

  static inline void setStaticF__CurveMaster(int32_t value);

  static inline void setStaticF__CurveRed(int32_t value);

  static inline void setStaticF__CurveSatVsSat(int32_t value);

  static inline void setStaticF__Gain(int32_t value);

  static inline void setStaticF__Gamma(int32_t value);

  static inline void setStaticF__Highlights(int32_t value);

  static inline void setStaticF__HueSatCon(int32_t value);

  static inline void setStaticF__Lift(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__Midtones(int32_t value);

  static inline void setStaticF__ShaHiLimits(int32_t value);

  static inline void setStaticF__Shadows(int32_t value);

  static inline void setStaticF__SplitHighlights(int32_t value);

  static inline void setStaticF__SplitShadows(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorGradingLutPass__ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorGradingLutPass__ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorGradingLutPass__ShaderConstants(__ColorGradingLutPass__ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorGradingLutPass__ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorGradingLutPass__ShaderConstants(__ColorGradingLutPass__ShaderConstants const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::ColorGradingLutPass
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 289, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::ColorGradingLutPass*
class CORDL_TYPE ColorGradingLutPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants;

  /// @brief Field m_AllowColorGradingACESHDR, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowColorGradingACESHDR, put = __cordl_internal_set_m_AllowColorGradingACESHDR)) bool m_AllowColorGradingACESHDR;

  /// @brief Field m_HdrLutFormat, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HdrLutFormat, put = __cordl_internal_set_m_HdrLutFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat;

  /// @brief Field m_InternalLut, offset 0xf0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_InternalLut, put = __cordl_internal_set_m_InternalLut))::UnityEngine::Rendering::Universal::RenderTargetHandle m_InternalLut;

  /// @brief Field m_LdrLutFormat, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LdrLutFormat, put = __cordl_internal_set_m_LdrLutFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat;

  /// @brief Field m_LutBuilderHdr, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LutBuilderHdr, put = __cordl_internal_set_m_LutBuilderHdr))::UnityW<::UnityEngine::Material> m_LutBuilderHdr;

  /// @brief Field m_LutBuilderLdr, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LutBuilderLdr, put = __cordl_internal_set_m_LutBuilderLdr))::UnityW<::UnityEngine::Material> m_LutBuilderLdr;

  /// @brief Method Cleanup, addr 0x29b3738, size 0x68, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Execute, addr 0x29b25a0, size 0x1174, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                             ::UnityEngine::Rendering::Universal::PostProcessData* data);

  /// @brief Method OnFinishCameraStackRendering, addr 0x29b3714, size 0x24, virtual true, abstract: false, final false
  inline void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Setup, addr 0x29b258c, size 0x14, virtual false, abstract: false, final false
  inline void Setup(ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut);

  constexpr bool const& __cordl_internal_get_m_AllowColorGradingACESHDR() const;

  constexpr bool& __cordl_internal_get_m_AllowColorGradingACESHDR();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_HdrLutFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_HdrLutFormat();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_InternalLut() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_InternalLut();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_LdrLutFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_LdrLutFormat();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_LutBuilderHdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_LutBuilderHdr();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_LutBuilderLdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_LutBuilderLdr();

  constexpr void __cordl_internal_set_m_AllowColorGradingACESHDR(bool value);

  constexpr void __cordl_internal_set_m_HdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_LdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_LutBuilderHdr(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_LutBuilderLdr(::UnityW<::UnityEngine::Material> value);

  /// @brief Method <.ctor>g__Load|6_0, addr 0x29b2434, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> __ctor_g__Load_6_0(::UnityEngine::Shader* shader);

  /// @brief Method .ctor, addr 0x29b2298, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradingLutPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradingLutPass(ColorGradingLutPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradingLutPass(ColorGradingLutPass const&) = delete;

  /// @brief Field m_LutBuilderLdr, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_LutBuilderLdr;

  /// @brief Field m_LutBuilderHdr, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_LutBuilderHdr;

  /// @brief Field m_HdrLutFormat, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_HdrLutFormat;

  /// @brief Field m_LdrLutFormat, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_LdrLutFormat;

  /// @brief Field m_InternalLut, offset: 0xf0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_InternalLut;

  /// @brief Field m_AllowColorGradingACESHDR, offset: 0x120, size: 0x1, def value: None
  bool ___m_AllowColorGradingACESHDR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LutBuilderLdr) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LutBuilderHdr) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_HdrLutFormat) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LdrLutFormat) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_InternalLut) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_AllowColorGradingACESHDR) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/ShaderConstants");
