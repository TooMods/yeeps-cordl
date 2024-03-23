#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ShadowsMidtonesHighlights)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
namespace UnityEngine::Rendering {
class Vector4Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowsMidtonesHighlights;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights);
// Type: UnityEngine.Rendering.Universal::ShadowsMidtonesHighlights
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowsMidtonesHighlights*
class CORDL_TYPE ShadowsMidtonesHighlights : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field highlights, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_highlights, put = __cordl_internal_set_highlights))::UnityEngine::Rendering::Vector4Parameter* highlights;

  /// @brief Field highlightsEnd, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightsEnd, put = __cordl_internal_set_highlightsEnd))::UnityEngine::Rendering::MinFloatParameter* highlightsEnd;

  /// @brief Field highlightsStart, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightsStart, put = __cordl_internal_set_highlightsStart))::UnityEngine::Rendering::MinFloatParameter* highlightsStart;

  /// @brief Field midtones, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_midtones, put = __cordl_internal_set_midtones))::UnityEngine::Rendering::Vector4Parameter* midtones;

  /// @brief Field shadows, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_shadows, put = __cordl_internal_set_shadows))::UnityEngine::Rendering::Vector4Parameter* shadows;

  /// @brief Field shadowsEnd, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowsEnd, put = __cordl_internal_set_shadowsEnd))::UnityEngine::Rendering::MinFloatParameter* shadowsEnd;

  /// @brief Field shadowsStart, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowsStart, put = __cordl_internal_set_shadowsStart))::UnityEngine::Rendering::MinFloatParameter* shadowsStart;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x27273a4, size 0xa8, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x272744c, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* New_ctor();

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_highlights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_highlights() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_highlightsEnd();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_highlightsEnd() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_highlightsStart();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_highlightsStart() const;

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_midtones();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_midtones() const;

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_shadows();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_shadows() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_shadowsEnd();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_shadowsEnd() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_shadowsStart();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_shadowsStart() const;

  constexpr void __cordl_internal_set_highlights(::UnityEngine::Rendering::Vector4Parameter* value);

  constexpr void __cordl_internal_set_highlightsEnd(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_highlightsStart(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_midtones(::UnityEngine::Rendering::Vector4Parameter* value);

  constexpr void __cordl_internal_set_shadows(::UnityEngine::Rendering::Vector4Parameter* value);

  constexpr void __cordl_internal_set_shadowsEnd(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_shadowsStart(::UnityEngine::Rendering::MinFloatParameter* value);

  /// @brief Method .ctor, addr 0x2727454, size 0x198, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowsMidtonesHighlights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowsMidtonesHighlights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowsMidtonesHighlights(ShadowsMidtonesHighlights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowsMidtonesHighlights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowsMidtonesHighlights(ShadowsMidtonesHighlights const&) = delete;

  /// @brief Field shadows, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___shadows;

  /// @brief Field midtones, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___midtones;

  /// @brief Field highlights, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___highlights;

  /// @brief Field shadowsStart, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___shadowsStart;

  /// @brief Field shadowsEnd, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___shadowsEnd;

  /// @brief Field highlightsStart, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___highlightsStart;

  /// @brief Field highlightsEnd, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___highlightsEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___shadows) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___midtones) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___highlights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___shadowsStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___shadowsEnd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___highlightsStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights, ___highlightsEnd) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, "UnityEngine.Rendering.Universal", "ShadowsMidtonesHighlights");
