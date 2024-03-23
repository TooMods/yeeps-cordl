#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings)
namespace UnityEngine::Rendering::Universal {
struct __ScreenSpaceAmbientOcclusionSettings__DepthSource;
}
namespace UnityEngine::Rendering::Universal {
struct __ScreenSpaceAmbientOcclusionSettings__NormalQuality;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __ScreenSpaceAmbientOcclusionSettings__DepthSource;
}
namespace UnityEngine::Rendering::Universal {
struct __ScreenSpaceAmbientOcclusionSettings__NormalQuality;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings);
// Type: ::DepthSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ScreenSpaceAmbientOcclusionSettings::DepthSource
struct CORDL_TYPE __ScreenSpaceAmbientOcclusionSettings__DepthSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenSpaceAmbientOcclusionSettings__DepthSource_Unwrapped
  enum struct ____ScreenSpaceAmbientOcclusionSettings__DepthSource_Unwrapped : int32_t {
    __E_Depth = static_cast<int32_t>(0x0),
    __E_DepthNormals = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenSpaceAmbientOcclusionSettings__DepthSource_Unwrapped() const noexcept {
    return static_cast<____ScreenSpaceAmbientOcclusionSettings__DepthSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceAmbientOcclusionSettings__DepthSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenSpaceAmbientOcclusionSettings__DepthSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Depth value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource const Depth;

  /// @brief Field DepthNormals value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource const DepthNormals;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::NormalQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ScreenSpaceAmbientOcclusionSettings::NormalQuality
struct CORDL_TYPE __ScreenSpaceAmbientOcclusionSettings__NormalQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenSpaceAmbientOcclusionSettings__NormalQuality_Unwrapped
  enum struct ____ScreenSpaceAmbientOcclusionSettings__NormalQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenSpaceAmbientOcclusionSettings__NormalQuality_Unwrapped() const noexcept {
    return static_cast<____ScreenSpaceAmbientOcclusionSettings__NormalQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceAmbientOcclusionSettings__NormalQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenSpaceAmbientOcclusionSettings__NormalQuality(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality const High;

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality const Medium;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ScreenSpaceAmbientOcclusionSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScreenSpaceAmbientOcclusionSettings*
class CORDL_TYPE ScreenSpaceAmbientOcclusionSettings : public ::System::Object {
public:
  // Declarations
  using DepthSource = ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource;

  using NormalQuality = ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality;

  /// @brief Field AfterOpaque, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_AfterOpaque, put = __cordl_internal_set_AfterOpaque)) bool AfterOpaque;

  /// @brief Field DirectLightingStrength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_DirectLightingStrength, put = __cordl_internal_set_DirectLightingStrength)) float_t DirectLightingStrength;

  /// @brief Field Downsample, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Downsample, put = __cordl_internal_set_Downsample)) bool Downsample;

  /// @brief Field Intensity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Intensity, put = __cordl_internal_set_Intensity)) float_t Intensity;

  /// @brief Field NormalSamples, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_NormalSamples,
                      put = __cordl_internal_set_NormalSamples))::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality NormalSamples;

  /// @brief Field Radius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_Radius, put = __cordl_internal_set_Radius)) float_t Radius;

  /// @brief Field SampleCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_SampleCount, put = __cordl_internal_set_SampleCount)) int32_t SampleCount;

  /// @brief Field Source, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Source, put = __cordl_internal_set_Source))::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource Source;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_AfterOpaque() const;

  constexpr bool& __cordl_internal_get_AfterOpaque();

  constexpr float_t const& __cordl_internal_get_DirectLightingStrength() const;

  constexpr float_t& __cordl_internal_get_DirectLightingStrength();

  constexpr bool const& __cordl_internal_get_Downsample() const;

  constexpr bool& __cordl_internal_get_Downsample();

  constexpr float_t const& __cordl_internal_get_Intensity() const;

  constexpr float_t& __cordl_internal_get_Intensity();

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality const& __cordl_internal_get_NormalSamples() const;

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality& __cordl_internal_get_NormalSamples();

  constexpr float_t const& __cordl_internal_get_Radius() const;

  constexpr float_t& __cordl_internal_get_Radius();

  constexpr int32_t const& __cordl_internal_get_SampleCount() const;

  constexpr int32_t& __cordl_internal_get_SampleCount();

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource const& __cordl_internal_get_Source() const;

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource& __cordl_internal_get_Source();

  constexpr void __cordl_internal_set_AfterOpaque(bool value);

  constexpr void __cordl_internal_set_DirectLightingStrength(float_t value);

  constexpr void __cordl_internal_set_Downsample(bool value);

  constexpr void __cordl_internal_set_Intensity(float_t value);

  constexpr void __cordl_internal_set_NormalSamples(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality value);

  constexpr void __cordl_internal_set_Radius(float_t value);

  constexpr void __cordl_internal_set_SampleCount(int32_t value);

  constexpr void __cordl_internal_set_Source(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource value);

  /// @brief Method .ctor, addr 0x272aa08, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings const&) = delete;

  /// @brief Field Downsample, offset: 0x10, size: 0x1, def value: None
  bool ___Downsample;

  /// @brief Field AfterOpaque, offset: 0x11, size: 0x1, def value: None
  bool ___AfterOpaque;

  /// @brief Field Source, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource ___Source;

  /// @brief Field NormalSamples, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality ___NormalSamples;

  /// @brief Field Intensity, offset: 0x1c, size: 0x4, def value: None
  float_t ___Intensity;

  /// @brief Field DirectLightingStrength, offset: 0x20, size: 0x4, def value: None
  float_t ___DirectLightingStrength;

  /// @brief Field Radius, offset: 0x24, size: 0x4, def value: None
  float_t ___Radius;

  /// @brief Field SampleCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___SampleCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Downsample) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___AfterOpaque) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Source) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___NormalSamples) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Intensity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___DirectLightingStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___SampleCount) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/DepthSource");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusionSettings/NormalQuality");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings");
