#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusSettings)
namespace Unity::XR::Oculus {
struct __OculusSettings__FoveationMethod;
}
namespace Unity::XR::Oculus {
struct __OculusSettings__StereoRenderingModeAndroid;
}
namespace Unity::XR::Oculus {
struct __OculusSettings__StereoRenderingModeDesktop;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __OculusSettings__FoveationMethod;
}
namespace Unity::XR::Oculus {
struct __OculusSettings__StereoRenderingModeAndroid;
}
namespace Unity::XR::Oculus {
struct __OculusSettings__StereoRenderingModeDesktop;
}
namespace Unity::XR::Oculus {
class OculusSettings;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__OculusSettings__FoveationMethod);
MARK_VAL_T(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid);
MARK_VAL_T(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop);
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusSettings);
// Type: ::StereoRenderingModeDesktop
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::OculusSettings::StereoRenderingModeDesktop
struct CORDL_TYPE __OculusSettings__StereoRenderingModeDesktop {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusSettings__StereoRenderingModeDesktop_Unwrapped
  enum struct ____OculusSettings__StereoRenderingModeDesktop_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePassInstanced = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusSettings__StereoRenderingModeDesktop_Unwrapped() const noexcept {
    return static_cast<____OculusSettings__StereoRenderingModeDesktop_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusSettings__StereoRenderingModeDesktop();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusSettings__StereoRenderingModeDesktop(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiPass value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop const MultiPass;

  /// @brief Field SinglePassInstanced value: static_cast<int32_t>(0x1)
  static ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop const SinglePassInstanced;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::StereoRenderingModeAndroid
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::OculusSettings::StereoRenderingModeAndroid
struct CORDL_TYPE __OculusSettings__StereoRenderingModeAndroid {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusSettings__StereoRenderingModeAndroid_Unwrapped
  enum struct ____OculusSettings__StereoRenderingModeAndroid_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_Multiview = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusSettings__StereoRenderingModeAndroid_Unwrapped() const noexcept {
    return static_cast<____OculusSettings__StereoRenderingModeAndroid_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusSettings__StereoRenderingModeAndroid();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusSettings__StereoRenderingModeAndroid(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiPass value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid const MultiPass;

  /// @brief Field Multiview value: static_cast<int32_t>(0x2)
  static ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid const Multiview;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::FoveationMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::OculusSettings::FoveationMethod
struct CORDL_TYPE __OculusSettings__FoveationMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusSettings__FoveationMethod_Unwrapped
  enum struct ____OculusSettings__FoveationMethod_Unwrapped : int32_t {
    __E_FixedFoveatedRendering = static_cast<int32_t>(0x0),
    __E_EyeTrackedFoveatedRendering = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusSettings__FoveationMethod_Unwrapped() const noexcept {
    return static_cast<____OculusSettings__FoveationMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusSettings__FoveationMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusSettings__FoveationMethod(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EyeTrackedFoveatedRendering value: static_cast<int32_t>(0x1)
  static ::Unity::XR::Oculus::__OculusSettings__FoveationMethod const EyeTrackedFoveatedRendering;

  /// @brief Field FixedFoveatedRendering value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__OculusSettings__FoveationMethod const FixedFoveatedRendering;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusSettings__FoveationMethod, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusSettings__FoveationMethod, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusSettings
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::OculusSettings*
class CORDL_TYPE OculusSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using FoveationMethod = ::Unity::XR::Oculus::__OculusSettings__FoveationMethod;

  using StereoRenderingModeAndroid = ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid;

  using StereoRenderingModeDesktop = ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop;

  /// @brief Field DashSupport, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_DashSupport, put = __cordl_internal_set_DashSupport)) bool DashSupport;

  /// @brief Field DepthSubmission, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_DepthSubmission, put = __cordl_internal_set_DepthSubmission)) bool DepthSubmission;

  /// @brief Field EnableTrackingOriginStageMode, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableTrackingOriginStageMode, put = __cordl_internal_set_EnableTrackingOriginStageMode)) bool EnableTrackingOriginStageMode;

  /// @brief Field FoveatedRenderingMethod, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_FoveatedRenderingMethod,
                      put = __cordl_internal_set_FoveatedRenderingMethod))::Unity::XR::Oculus::__OculusSettings__FoveationMethod FoveatedRenderingMethod;

  /// @brief Field LateLatching, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_LateLatching, put = __cordl_internal_set_LateLatching)) bool LateLatching;

  /// @brief Field LateLatchingDebug, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_LateLatchingDebug, put = __cordl_internal_set_LateLatchingDebug)) bool LateLatchingDebug;

  /// @brief Field LowOverheadMode, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_LowOverheadMode, put = __cordl_internal_set_LowOverheadMode)) bool LowOverheadMode;

  /// @brief Field OptimizeBufferDiscards, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_OptimizeBufferDiscards, put = __cordl_internal_set_OptimizeBufferDiscards)) bool OptimizeBufferDiscards;

  /// @brief Field PhaseSync, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_PhaseSync, put = __cordl_internal_set_PhaseSync)) bool PhaseSync;

  /// @brief Field SharedDepthBuffer, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_SharedDepthBuffer, put = __cordl_internal_set_SharedDepthBuffer)) bool SharedDepthBuffer;

  /// @brief Field SpaceWarp, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get_SpaceWarp, put = __cordl_internal_set_SpaceWarp)) bool SpaceWarp;

  /// @brief Field SubsampledLayout, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get_SubsampledLayout, put = __cordl_internal_set_SubsampledLayout)) bool SubsampledLayout;

  /// @brief Field SymmetricProjection, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_SymmetricProjection, put = __cordl_internal_set_SymmetricProjection)) bool SymmetricProjection;

  /// @brief Field SystemSplashScreen, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_SystemSplashScreen, put = __cordl_internal_set_SystemSplashScreen))::UnityW<::UnityEngine::Texture2D> SystemSplashScreen;

  /// @brief Field TargetQuest, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_TargetQuest, put = __cordl_internal_set_TargetQuest)) bool TargetQuest;

  /// @brief Field TargetQuest2, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_TargetQuest2, put = __cordl_internal_set_TargetQuest2)) bool TargetQuest2;

  /// @brief Field TargetQuestPro, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_TargetQuestPro, put = __cordl_internal_set_TargetQuestPro)) bool TargetQuestPro;

  /// @brief Field m_StereoRenderingModeAndroid, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StereoRenderingModeAndroid,
                      put = __cordl_internal_set_m_StereoRenderingModeAndroid))::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid m_StereoRenderingModeAndroid;

  /// @brief Field m_StereoRenderingModeDesktop, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StereoRenderingModeDesktop,
                      put = __cordl_internal_set_m_StereoRenderingModeDesktop))::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop m_StereoRenderingModeDesktop;

  /// @brief Field s_Settings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Settings, put = setStaticF_s_Settings))::UnityW<::Unity::XR::Oculus::OculusSettings> s_Settings;

  /// @brief Method Awake, addr 0x21eebf8, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetStereoRenderingMode, addr 0x21eb3e0, size 0x8, virtual false, abstract: false, final false
  inline uint16_t GetStereoRenderingMode();

  static inline ::Unity::XR::Oculus::OculusSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_DashSupport() const;

  constexpr bool& __cordl_internal_get_DashSupport();

  constexpr bool const& __cordl_internal_get_DepthSubmission() const;

  constexpr bool& __cordl_internal_get_DepthSubmission();

  constexpr bool const& __cordl_internal_get_EnableTrackingOriginStageMode() const;

  constexpr bool& __cordl_internal_get_EnableTrackingOriginStageMode();

  constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod const& __cordl_internal_get_FoveatedRenderingMethod() const;

  constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod& __cordl_internal_get_FoveatedRenderingMethod();

  constexpr bool const& __cordl_internal_get_LateLatching() const;

  constexpr bool& __cordl_internal_get_LateLatching();

  constexpr bool const& __cordl_internal_get_LateLatchingDebug() const;

  constexpr bool& __cordl_internal_get_LateLatchingDebug();

  constexpr bool const& __cordl_internal_get_LowOverheadMode() const;

  constexpr bool& __cordl_internal_get_LowOverheadMode();

  constexpr bool const& __cordl_internal_get_OptimizeBufferDiscards() const;

  constexpr bool& __cordl_internal_get_OptimizeBufferDiscards();

  constexpr bool const& __cordl_internal_get_PhaseSync() const;

  constexpr bool& __cordl_internal_get_PhaseSync();

  constexpr bool const& __cordl_internal_get_SharedDepthBuffer() const;

  constexpr bool& __cordl_internal_get_SharedDepthBuffer();

  constexpr bool const& __cordl_internal_get_SpaceWarp() const;

  constexpr bool& __cordl_internal_get_SpaceWarp();

  constexpr bool const& __cordl_internal_get_SubsampledLayout() const;

  constexpr bool& __cordl_internal_get_SubsampledLayout();

  constexpr bool const& __cordl_internal_get_SymmetricProjection() const;

  constexpr bool& __cordl_internal_get_SymmetricProjection();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_SystemSplashScreen() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_SystemSplashScreen();

  constexpr bool const& __cordl_internal_get_TargetQuest() const;

  constexpr bool& __cordl_internal_get_TargetQuest();

  constexpr bool const& __cordl_internal_get_TargetQuest2() const;

  constexpr bool& __cordl_internal_get_TargetQuest2();

  constexpr bool const& __cordl_internal_get_TargetQuestPro() const;

  constexpr bool& __cordl_internal_get_TargetQuestPro();

  constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid const& __cordl_internal_get_m_StereoRenderingModeAndroid() const;

  constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid& __cordl_internal_get_m_StereoRenderingModeAndroid();

  constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop const& __cordl_internal_get_m_StereoRenderingModeDesktop() const;

  constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop& __cordl_internal_get_m_StereoRenderingModeDesktop();

  constexpr void __cordl_internal_set_DashSupport(bool value);

  constexpr void __cordl_internal_set_DepthSubmission(bool value);

  constexpr void __cordl_internal_set_EnableTrackingOriginStageMode(bool value);

  constexpr void __cordl_internal_set_FoveatedRenderingMethod(::Unity::XR::Oculus::__OculusSettings__FoveationMethod value);

  constexpr void __cordl_internal_set_LateLatching(bool value);

  constexpr void __cordl_internal_set_LateLatchingDebug(bool value);

  constexpr void __cordl_internal_set_LowOverheadMode(bool value);

  constexpr void __cordl_internal_set_OptimizeBufferDiscards(bool value);

  constexpr void __cordl_internal_set_PhaseSync(bool value);

  constexpr void __cordl_internal_set_SharedDepthBuffer(bool value);

  constexpr void __cordl_internal_set_SpaceWarp(bool value);

  constexpr void __cordl_internal_set_SubsampledLayout(bool value);

  constexpr void __cordl_internal_set_SymmetricProjection(bool value);

  constexpr void __cordl_internal_set_SystemSplashScreen(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_TargetQuest(bool value);

  constexpr void __cordl_internal_set_TargetQuest2(bool value);

  constexpr void __cordl_internal_set_TargetQuestPro(bool value);

  constexpr void __cordl_internal_set_m_StereoRenderingModeAndroid(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid value);

  constexpr void __cordl_internal_set_m_StereoRenderingModeDesktop(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop value);

  /// @brief Method .ctor, addr 0x21eec44, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Unity::XR::Oculus::OculusSettings> getStaticF_s_Settings();

  static inline void setStaticF_s_Settings(::UnityW<::Unity::XR::Oculus::OculusSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusSettings(OculusSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusSettings(OculusSettings const&) = delete;

  /// @brief Field m_StereoRenderingModeDesktop, offset: 0x18, size: 0x4, def value: None
  ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop ___m_StereoRenderingModeDesktop;

  /// @brief Field m_StereoRenderingModeAndroid, offset: 0x1c, size: 0x4, def value: None
  ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid ___m_StereoRenderingModeAndroid;

  /// @brief Field SharedDepthBuffer, offset: 0x20, size: 0x1, def value: None
  bool ___SharedDepthBuffer;

  /// @brief Field DepthSubmission, offset: 0x21, size: 0x1, def value: None
  bool ___DepthSubmission;

  /// @brief Field DashSupport, offset: 0x22, size: 0x1, def value: None
  bool ___DashSupport;

  /// @brief Field LowOverheadMode, offset: 0x23, size: 0x1, def value: None
  bool ___LowOverheadMode;

  /// @brief Field OptimizeBufferDiscards, offset: 0x24, size: 0x1, def value: None
  bool ___OptimizeBufferDiscards;

  /// @brief Field PhaseSync, offset: 0x25, size: 0x1, def value: None
  bool ___PhaseSync;

  /// @brief Field SymmetricProjection, offset: 0x26, size: 0x1, def value: None
  bool ___SymmetricProjection;

  /// @brief Field SubsampledLayout, offset: 0x27, size: 0x1, def value: None
  bool ___SubsampledLayout;

  /// @brief Field FoveatedRenderingMethod, offset: 0x28, size: 0x4, def value: None
  ::Unity::XR::Oculus::__OculusSettings__FoveationMethod ___FoveatedRenderingMethod;

  /// @brief Field LateLatching, offset: 0x2c, size: 0x1, def value: None
  bool ___LateLatching;

  /// @brief Field LateLatchingDebug, offset: 0x2d, size: 0x1, def value: None
  bool ___LateLatchingDebug;

  /// @brief Field EnableTrackingOriginStageMode, offset: 0x2e, size: 0x1, def value: None
  bool ___EnableTrackingOriginStageMode;

  /// @brief Field SpaceWarp, offset: 0x2f, size: 0x1, def value: None
  bool ___SpaceWarp;

  /// @brief Field TargetQuest, offset: 0x30, size: 0x1, def value: None
  bool ___TargetQuest;

  /// @brief Field TargetQuest2, offset: 0x31, size: 0x1, def value: None
  bool ___TargetQuest2;

  /// @brief Field TargetQuestPro, offset: 0x32, size: 0x1, def value: None
  bool ___TargetQuestPro;

  /// @brief Field SystemSplashScreen, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___SystemSplashScreen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusSettings, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___m_StereoRenderingModeDesktop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___m_StereoRenderingModeAndroid) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___SharedDepthBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___DepthSubmission) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___DashSupport) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___LowOverheadMode) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___OptimizeBufferDiscards) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___PhaseSync) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___SymmetricProjection) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___SubsampledLayout) == 0x27, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___FoveatedRenderingMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___LateLatching) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___LateLatchingDebug) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___EnableTrackingOriginStageMode) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___SpaceWarp) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___TargetQuest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___TargetQuest2) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___TargetQuestPro) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusSettings, ___SystemSplashScreen) == 0x38, "Offset mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusSettings__FoveationMethod, "Unity.XR.Oculus", "OculusSettings/FoveationMethod");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeAndroid");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeDesktop");
NEED_NO_BOX(::Unity::XR::Oculus::OculusSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings*, "Unity.XR.Oculus", "OculusSettings");
