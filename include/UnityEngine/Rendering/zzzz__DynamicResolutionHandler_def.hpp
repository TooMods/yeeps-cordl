#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalerSlot_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionHandler_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalDynamicResolutionSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicResolutionHandler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class WeakReference;
}
namespace UnityEngine::Rendering {
struct DynamicResScalePolicyType;
}
namespace UnityEngine::Rendering {
struct DynamicResScalerSlot;
}
namespace UnityEngine::Rendering {
struct DynamicResUpscaleFilter;
}
namespace UnityEngine::Rendering {
struct GlobalDynamicResolutionSettings;
}
namespace UnityEngine::Rendering {
class PerformDynamicRes;
}
namespace UnityEngine::Rendering {
struct __DynamicResolutionHandler__ScalerContainer;
}
namespace UnityEngine::Rendering {
struct __DynamicResolutionHandler__UpsamplerScheduleType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __DynamicResolutionHandler__UpsamplerScheduleType;
}
namespace UnityEngine::Rendering {
class DynamicResolutionHandler;
}
namespace UnityEngine::Rendering {
struct __DynamicResolutionHandler__ScalerContainer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType);
MARK_REF_PTR_T(::UnityEngine::Rendering::DynamicResolutionHandler);
MARK_VAL_T(::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer);
// Type: ::ScalerContainer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::DynamicResolutionHandler::ScalerContainer
struct CORDL_TYPE __DynamicResolutionHandler__ScalerContainer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicResolutionHandler__ScalerContainer();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::DynamicResScalePolicyType", modifiers: "", def_value: None }, CppParam { name: "method", ty:
  // "::UnityEngine::Rendering::PerformDynamicRes*", modifiers: "", def_value: None }]
  constexpr __DynamicResolutionHandler__ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType type, ::UnityEngine::Rendering::PerformDynamicRes* method) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::DynamicResScalePolicyType type;

  /// @brief Field method, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::PerformDynamicRes* method;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, method) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::UpsamplerScheduleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::DynamicResolutionHandler::UpsamplerScheduleType
struct CORDL_TYPE __DynamicResolutionHandler__UpsamplerScheduleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicResolutionHandler__UpsamplerScheduleType_Unwrapped
  enum struct ____DynamicResolutionHandler__UpsamplerScheduleType_Unwrapped : int32_t {
    __E_BeforePost = static_cast<int32_t>(0x0),
    __E_AfterPost = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicResolutionHandler__UpsamplerScheduleType_Unwrapped() const noexcept {
    return static_cast<____DynamicResolutionHandler__UpsamplerScheduleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicResolutionHandler__UpsamplerScheduleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicResolutionHandler__UpsamplerScheduleType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AfterPost value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType const AfterPost;

  /// @brief Field BeforePost value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType const BeforePost;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DynamicResolutionHandler
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DynamicResolutionHandler*
class CORDL_TYPE DynamicResolutionHandler : public ::System::Object {
public:
  // Declarations
  using ScalerContainer = ::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer;

  using UpsamplerScheduleType = ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType;

  /// @brief Field <filter>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__filter_k__BackingField, put = __cordl_internal_set__filter_k__BackingField))::UnityEngine::Rendering::DynamicResUpscaleFilter _filter_k__BackingField;

  /// @brief Field <finalViewport>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__finalViewport_k__BackingField, put = __cordl_internal_set__finalViewport_k__BackingField))::UnityEngine::Vector2Int _finalViewport_k__BackingField;

  /// @brief Field cachedOriginalSize, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedOriginalSize, put = __cordl_internal_set_cachedOriginalSize))::UnityEngine::Vector2Int cachedOriginalSize;

  __declspec(property(get = get_filter, put = set_filter))::UnityEngine::Rendering::DynamicResUpscaleFilter filter;

  __declspec(property(get = get_finalViewport, put = set_finalViewport))::UnityEngine::Vector2Int finalViewport;

  /// @brief Field m_CachedSettings, offset 0x54, size 0x28
  __declspec(property(get = __cordl_internal_get_m_CachedSettings, put = __cordl_internal_set_m_CachedSettings))::UnityEngine::Rendering::GlobalDynamicResolutionSettings m_CachedSettings;

  /// @brief Field m_CurrentCameraRequest, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CurrentCameraRequest, put = __cordl_internal_set_m_CurrentCameraRequest)) bool m_CurrentCameraRequest;

  /// @brief Field m_CurrentFraction, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFraction, put = __cordl_internal_set_m_CurrentFraction)) float_t m_CurrentFraction;

  /// @brief Field m_Enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_ForceSoftwareFallback, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceSoftwareFallback, put = __cordl_internal_set_m_ForceSoftwareFallback)) bool m_ForceSoftwareFallback;

  /// @brief Field m_ForcingRes, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForcingRes, put = __cordl_internal_set_m_ForcingRes)) bool m_ForcingRes;

  /// @brief Field m_LastScaledSize, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastScaledSize, put = __cordl_internal_set_m_LastScaledSize))::UnityEngine::Vector2Int m_LastScaledSize;

  /// @brief Field m_MaxScreenFraction, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxScreenFraction, put = __cordl_internal_set_m_MaxScreenFraction)) float_t m_MaxScreenFraction;

  /// @brief Field m_MinScreenFraction, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinScreenFraction, put = __cordl_internal_set_m_MinScreenFraction)) float_t m_MinScreenFraction;

  /// @brief Field m_OwnerCameraWeakRef, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OwnerCameraWeakRef, put = __cordl_internal_set_m_OwnerCameraWeakRef))::System::WeakReference* m_OwnerCameraWeakRef;

  /// @brief Field m_PrevFraction, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevFraction, put = __cordl_internal_set_m_PrevFraction)) float_t m_PrevFraction;

  /// @brief Field m_PrevHWScaleHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevHWScaleHeight, put = __cordl_internal_set_m_PrevHWScaleHeight)) float_t m_PrevHWScaleHeight;

  /// @brief Field m_PrevHWScaleWidth, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevHWScaleWidth, put = __cordl_internal_set_m_PrevHWScaleWidth)) float_t m_PrevHWScaleWidth;

  /// @brief Field m_RunUpscalerFilterOnFullResolution, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RunUpscalerFilterOnFullResolution, put = __cordl_internal_set_m_RunUpscalerFilterOnFullResolution)) bool m_RunUpscalerFilterOnFullResolution;

  /// @brief Field m_UpsamplerSchedule, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpsamplerSchedule,
                      put = __cordl_internal_set_m_UpsamplerSchedule))::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType m_UpsamplerSchedule;

  /// @brief Field m_UseMipBias, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMipBias, put = __cordl_internal_set_m_UseMipBias)) bool m_UseMipBias;

  __declspec(property(get = get_runUpscalerFilterOnFullResolution, put = set_runUpscalerFilterOnFullResolution)) bool runUpscalerFilterOnFullResolution;

  /// @brief Field s_ActiveCameraId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ActiveCameraId, put = setStaticF_s_ActiveCameraId)) int32_t s_ActiveCameraId;

  /// @brief Field s_ActiveInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ActiveInstance, put = setStaticF_s_ActiveInstance))::UnityEngine::Rendering::DynamicResolutionHandler* s_ActiveInstance;

  /// @brief Field s_ActiveInstanceDirty, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_ActiveInstanceDirty, put = setStaticF_s_ActiveInstanceDirty)) bool s_ActiveInstanceDirty;

  /// @brief Field s_ActiveScalerSlot, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ActiveScalerSlot, put = setStaticF_s_ActiveScalerSlot))::UnityEngine::Rendering::DynamicResScalerSlot s_ActiveScalerSlot;

  /// @brief Field s_CameraInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CameraInstances,
                             put = setStaticF_s_CameraInstances))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>* s_CameraInstances;

  /// @brief Field s_CameraUpscaleFilters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CameraUpscaleFilters,
                             put = setStaticF_s_CameraUpscaleFilters))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* s_CameraUpscaleFilters;

  /// @brief Field s_DefaultInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultInstance, put = setStaticF_s_DefaultInstance))::UnityEngine::Rendering::DynamicResolutionHandler* s_DefaultInstance;

  /// @brief Field s_GlobalHwFraction, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GlobalHwFraction, put = setStaticF_s_GlobalHwFraction)) float_t s_GlobalHwFraction;

  /// @brief Field s_GlobalHwUpresActive, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_GlobalHwUpresActive, put = setStaticF_s_GlobalHwUpresActive)) bool s_GlobalHwUpresActive;

  /// @brief Field s_ScalerContainers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ScalerContainers,
                             put = setStaticF_s_ScalerContainers))::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer,
                                                                           ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*> s_ScalerContainers;

  /// @brief Field type, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::UnityEngine::Rendering::DynamicResolutionType type;

  __declspec(property(get = get_upsamplerSchedule, put = set_upsamplerSchedule))::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType upsamplerSchedule;

  /// @brief Method ApplyScalesOnSize, addr 0x1bd20d8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int ApplyScalesOnSize(::UnityEngine::Vector2Int size);

  /// @brief Method ApplyScalesOnSize, addr 0x1bd2100, size 0x188, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int ApplyScalesOnSize(::UnityEngine::Vector2Int size, ::UnityEngine::Vector2 scales);

  /// @brief Method CalculateMipBias, addr 0x1bd17e8, size 0x90, virtual false, abstract: false, final false
  inline float_t CalculateMipBias(::UnityEngine::Vector2Int inputResolution, ::UnityEngine::Vector2Int outputResolution, bool forceApply);

  /// @brief Method ClearSelectedCamera, addr 0x1bd19e0, size 0x68, virtual false, abstract: false, final false
  static inline void ClearSelectedCamera();

  /// @brief Method DefaultDynamicResMethod, addr 0x1bd15d0, size 0x8, virtual false, abstract: false, final false
  static inline float_t DefaultDynamicResMethod();

  /// @brief Method DynamicResolutionEnabled, addr 0x1bd2034, size 0x48, virtual false, abstract: false, final false
  inline bool DynamicResolutionEnabled();

  /// @brief Method FlushScalableBufferManagerState, addr 0x1bd0f04, size 0x13c, virtual false, abstract: false, final false
  inline bool FlushScalableBufferManagerState();

  /// @brief Method ForceSoftwareFallback, addr 0x1bd207c, size 0xc, virtual false, abstract: false, final false
  inline void ForceSoftwareFallback();

  /// @brief Method GetCurrentScale, addr 0x1bd2288, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetCurrentScale();

  /// @brief Method GetLastScaledSize, addr 0x1bd22a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetLastScaledSize();

  /// @brief Method GetLowResMultiplier, addr 0x1bd22ac, size 0xac, virtual false, abstract: false, final false
  inline float_t GetLowResMultiplier(float_t targetLowRes);

  /// @brief Method GetOrCreateDrsInstanceHandler, addr 0x1bd1070, size 0x41c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DynamicResolutionHandler* GetOrCreateDrsInstanceHandler(::UnityEngine::Camera* camera);

  /// @brief Method GetResolvedScale, addr 0x1bd177c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetResolvedScale();

  /// @brief Method GetScaledSize, addr 0x1bd2088, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int size);

  /// @brief Method HardwareDynamicResIsEnabled, addr 0x1bd1040, size 0x30, virtual false, abstract: false, final false
  inline bool HardwareDynamicResIsEnabled();

  static inline ::UnityEngine::Rendering::DynamicResolutionHandler* New_ctor();

  /// @brief Method ProcessSettings, addr 0x1bd15d8, size 0x1a4, virtual false, abstract: false, final false
  inline void ProcessSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings);

  /// @brief Method RequestsHardwareDynamicResolution, addr 0x1bd2014, size 0x20, virtual false, abstract: false, final false
  inline bool RequestsHardwareDynamicResolution();

  /// @brief Method Reset, addr 0x1bd0e7c, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetActiveDynamicScalerSlot, addr 0x1bd1984, size 0x5c, virtual false, abstract: false, final false
  static inline void SetActiveDynamicScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot slot);

  /// @brief Method SetCurrentCameraRequest, addr 0x1bd1b6c, size 0xc, virtual false, abstract: false, final false
  inline void SetCurrentCameraRequest(bool cameraRequest);

  /// @brief Method SetDynamicResScaler, addr 0x1bd1878, size 0x84, virtual false, abstract: false, final false
  static inline void SetDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* scaler, ::UnityEngine::Rendering::DynamicResScalePolicyType scalerType);

  /// @brief Method SetSystemDynamicResScaler, addr 0x1bd18fc, size 0x88, virtual false, abstract: false, final false
  static inline void SetSystemDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* scaler, ::UnityEngine::Rendering::DynamicResScalePolicyType scalerType);

  /// @brief Method SetUpscaleFilter, addr 0x1bd1a48, size 0x124, virtual false, abstract: false, final false
  static inline void SetUpscaleFilter(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::DynamicResUpscaleFilter filter);

  /// @brief Method SoftwareDynamicResIsEnabled, addr 0x1bd1fb8, size 0x5c, virtual false, abstract: false, final false
  inline bool SoftwareDynamicResIsEnabled();

  /// @brief Method Update, addr 0x1bd1d58, size 0x260, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings, ::System::Action* OnResolutionChange);

  /// @brief Method UpdateAndUseCamera, addr 0x1bd1b78, size 0x1e0, virtual false, abstract: false, final false
  static inline void UpdateAndUseCamera(::UnityEngine::Camera* camera, ::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings> settings, ::System::Action* OnResolutionChange);

  constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter const& __cordl_internal_get__filter_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter& __cordl_internal_get__filter_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__finalViewport_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__finalViewport_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_cachedOriginalSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_cachedOriginalSize();

  constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings const& __cordl_internal_get_m_CachedSettings() const;

  constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings& __cordl_internal_get_m_CachedSettings();

  constexpr bool const& __cordl_internal_get_m_CurrentCameraRequest() const;

  constexpr bool& __cordl_internal_get_m_CurrentCameraRequest();

  constexpr float_t const& __cordl_internal_get_m_CurrentFraction() const;

  constexpr float_t& __cordl_internal_get_m_CurrentFraction();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr bool const& __cordl_internal_get_m_ForceSoftwareFallback() const;

  constexpr bool& __cordl_internal_get_m_ForceSoftwareFallback();

  constexpr bool const& __cordl_internal_get_m_ForcingRes() const;

  constexpr bool& __cordl_internal_get_m_ForcingRes();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_LastScaledSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_LastScaledSize();

  constexpr float_t const& __cordl_internal_get_m_MaxScreenFraction() const;

  constexpr float_t& __cordl_internal_get_m_MaxScreenFraction();

  constexpr float_t const& __cordl_internal_get_m_MinScreenFraction() const;

  constexpr float_t& __cordl_internal_get_m_MinScreenFraction();

  constexpr ::System::WeakReference*& __cordl_internal_get_m_OwnerCameraWeakRef();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __cordl_internal_get_m_OwnerCameraWeakRef() const;

  constexpr float_t const& __cordl_internal_get_m_PrevFraction() const;

  constexpr float_t& __cordl_internal_get_m_PrevFraction();

  constexpr float_t const& __cordl_internal_get_m_PrevHWScaleHeight() const;

  constexpr float_t& __cordl_internal_get_m_PrevHWScaleHeight();

  constexpr float_t const& __cordl_internal_get_m_PrevHWScaleWidth() const;

  constexpr float_t& __cordl_internal_get_m_PrevHWScaleWidth();

  constexpr bool const& __cordl_internal_get_m_RunUpscalerFilterOnFullResolution() const;

  constexpr bool& __cordl_internal_get_m_RunUpscalerFilterOnFullResolution();

  constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType const& __cordl_internal_get_m_UpsamplerSchedule() const;

  constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType& __cordl_internal_get_m_UpsamplerSchedule();

  constexpr bool const& __cordl_internal_get_m_UseMipBias() const;

  constexpr bool& __cordl_internal_get_m_UseMipBias();

  constexpr ::UnityEngine::Rendering::DynamicResolutionType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::Rendering::DynamicResolutionType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set__filter_k__BackingField(::UnityEngine::Rendering::DynamicResUpscaleFilter value);

  constexpr void __cordl_internal_set__finalViewport_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_cachedOriginalSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_CachedSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings value);

  constexpr void __cordl_internal_set_m_CurrentCameraRequest(bool value);

  constexpr void __cordl_internal_set_m_CurrentFraction(float_t value);

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr void __cordl_internal_set_m_ForceSoftwareFallback(bool value);

  constexpr void __cordl_internal_set_m_ForcingRes(bool value);

  constexpr void __cordl_internal_set_m_LastScaledSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_MaxScreenFraction(float_t value);

  constexpr void __cordl_internal_set_m_MinScreenFraction(float_t value);

  constexpr void __cordl_internal_set_m_OwnerCameraWeakRef(::System::WeakReference* value);

  constexpr void __cordl_internal_set_m_PrevFraction(float_t value);

  constexpr void __cordl_internal_set_m_PrevHWScaleHeight(float_t value);

  constexpr void __cordl_internal_set_m_PrevHWScaleWidth(float_t value);

  constexpr void __cordl_internal_set_m_RunUpscalerFilterOnFullResolution(bool value);

  constexpr void __cordl_internal_set_m_UpsamplerSchedule(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType value);

  constexpr void __cordl_internal_set_m_UseMipBias(bool value);

  constexpr void __cordl_internal_set_type(::UnityEngine::Rendering::DynamicResolutionType value);

  /// @brief Method .ctor, addr 0x1bd148c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_ActiveCameraId();

  static inline ::UnityEngine::Rendering::DynamicResolutionHandler* getStaticF_s_ActiveInstance();

  static inline bool getStaticF_s_ActiveInstanceDirty();

  static inline ::UnityEngine::Rendering::DynamicResScalerSlot getStaticF_s_ActiveScalerSlot();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>* getStaticF_s_CameraInstances();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* getStaticF_s_CameraUpscaleFilters();

  static inline ::UnityEngine::Rendering::DynamicResolutionHandler* getStaticF_s_DefaultInstance();

  static inline float_t getStaticF_s_GlobalHwFraction();

  static inline bool getStaticF_s_GlobalHwUpresActive();

  static inline ::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*>
  getStaticF_s_ScalerContainers();

  /// @brief Method get_filter, addr 0x1bd0eb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicResUpscaleFilter get_filter();

  /// @brief Method get_finalViewport, addr 0x1bd0ec8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_finalViewport();

  /// @brief Method get_instance, addr 0x1bd1534, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DynamicResolutionHandler* get_instance();

  /// @brief Method get_runUpscalerFilterOnFullResolution, addr 0x1bd0ee4, size 0x20, virtual false, abstract: false, final false
  inline bool get_runUpscalerFilterOnFullResolution();

  /// @brief Method get_upsamplerSchedule, addr 0x1bd152c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType get_upsamplerSchedule();

  static inline void setStaticF_s_ActiveCameraId(int32_t value);

  static inline void setStaticF_s_ActiveInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value);

  static inline void setStaticF_s_ActiveInstanceDirty(bool value);

  static inline void setStaticF_s_ActiveScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot value);

  static inline void setStaticF_s_CameraInstances(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>* value);

  static inline void setStaticF_s_CameraUpscaleFilters(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* value);

  static inline void setStaticF_s_DefaultInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value);

  static inline void setStaticF_s_GlobalHwFraction(float_t value);

  static inline void setStaticF_s_GlobalHwUpresActive(bool value);

  static inline void
  setStaticF_s_ScalerContainers(::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*> value);

  /// @brief Method set_filter, addr 0x1bd0ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter value);

  /// @brief Method set_finalViewport, addr 0x1bd0ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_finalViewport(::UnityEngine::Vector2Int value);

  /// @brief Method set_runUpscalerFilterOnFullResolution, addr 0x1bd0ed8, size 0xc, virtual false, abstract: false, final false
  inline void set_runUpscalerFilterOnFullResolution(bool value);

  /// @brief Method set_upsamplerSchedule, addr 0x1bd1524, size 0x8, virtual false, abstract: false, final false
  inline void set_upsamplerSchedule(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResolutionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicResolutionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicResolutionHandler(DynamicResolutionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicResolutionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicResolutionHandler(DynamicResolutionHandler const&) = delete;

  /// @brief Field m_Enabled, offset: 0x10, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_UseMipBias, offset: 0x11, size: 0x1, def value: None
  bool ___m_UseMipBias;

  /// @brief Field m_MinScreenFraction, offset: 0x14, size: 0x4, def value: None
  float_t ___m_MinScreenFraction;

  /// @brief Field m_MaxScreenFraction, offset: 0x18, size: 0x4, def value: None
  float_t ___m_MaxScreenFraction;

  /// @brief Field m_CurrentFraction, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_CurrentFraction;

  /// @brief Field m_ForcingRes, offset: 0x20, size: 0x1, def value: None
  bool ___m_ForcingRes;

  /// @brief Field m_CurrentCameraRequest, offset: 0x21, size: 0x1, def value: None
  bool ___m_CurrentCameraRequest;

  /// @brief Field m_PrevFraction, offset: 0x24, size: 0x4, def value: None
  float_t ___m_PrevFraction;

  /// @brief Field m_ForceSoftwareFallback, offset: 0x28, size: 0x1, def value: None
  bool ___m_ForceSoftwareFallback;

  /// @brief Field m_RunUpscalerFilterOnFullResolution, offset: 0x29, size: 0x1, def value: None
  bool ___m_RunUpscalerFilterOnFullResolution;

  /// @brief Field m_PrevHWScaleWidth, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_PrevHWScaleWidth;

  /// @brief Field m_PrevHWScaleHeight, offset: 0x30, size: 0x4, def value: None
  float_t ___m_PrevHWScaleHeight;

  /// @brief Field m_LastScaledSize, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_LastScaledSize;

  /// @brief Field cachedOriginalSize, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___cachedOriginalSize;

  /// @brief Field <filter>k__BackingField, offset: 0x44, size: 0x1, def value: None
  ::UnityEngine::Rendering::DynamicResUpscaleFilter ____filter_k__BackingField;

  /// @brief Field <finalViewport>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____finalViewport_k__BackingField;

  /// @brief Field type, offset: 0x50, size: 0x1, def value: None
  ::UnityEngine::Rendering::DynamicResolutionType ___type;

  /// @brief Field m_CachedSettings, offset: 0x54, size: 0x28, def value: None
  ::UnityEngine::Rendering::GlobalDynamicResolutionSettings ___m_CachedSettings;

  /// @brief Field m_OwnerCameraWeakRef, offset: 0x80, size: 0x8, def value: None
  ::System::WeakReference* ___m_OwnerCameraWeakRef;

  /// @brief Field m_UpsamplerSchedule, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType ___m_UpsamplerSchedule;

  /// @brief Field CameraDictionaryMaxcCapacity offset 0xffffffff size 0x4
  static constexpr int32_t CameraDictionaryMaxcCapacity{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicResolutionHandler, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_UseMipBias) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_MinScreenFraction) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_MaxScreenFraction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_CurrentFraction) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_ForcingRes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_CurrentCameraRequest) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_PrevFraction) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_ForceSoftwareFallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_RunUpscalerFilterOnFullResolution) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_PrevHWScaleWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_PrevHWScaleHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_LastScaledSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___cachedOriginalSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ____filter_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ____finalViewport_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___type) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_CachedSettings) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_OwnerCameraWeakRef) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler, ___m_UpsamplerSchedule) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType, "UnityEngine.Rendering", "DynamicResolutionHandler/UpsamplerScheduleType");
NEED_NO_BOX(::UnityEngine::Rendering::DynamicResolutionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler*, "UnityEngine.Rendering", "DynamicResolutionHandler");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, "UnityEngine.Rendering", "DynamicResolutionHandler/ScalerContainer");
