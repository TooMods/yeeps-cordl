#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSystemPerfMetrics)
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpServer;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__PerfMetrics;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSystemPerfMetrics;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__PerfMetrics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSystemPerfMetrics);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics);
// Type: ::PerfMetrics
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSystemPerfMetrics::PerfMetrics*
class CORDL_TYPE __OVRSystemPerfMetrics__PerfMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Field appCpuTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_appCpuTime, put = __cordl_internal_set_appCpuTime)) float_t appCpuTime;

  /// @brief Field appCpuTime_IsValid, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_appCpuTime_IsValid, put = __cordl_internal_set_appCpuTime_IsValid)) bool appCpuTime_IsValid;

  /// @brief Field appGpuTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_appGpuTime, put = __cordl_internal_set_appGpuTime)) float_t appGpuTime;

  /// @brief Field appGpuTime_IsValid, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_appGpuTime_IsValid, put = __cordl_internal_set_appGpuTime_IsValid)) bool appGpuTime_IsValid;

  /// @brief Field compositorCpuTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_compositorCpuTime, put = __cordl_internal_set_compositorCpuTime)) float_t compositorCpuTime;

  /// @brief Field compositorCpuTime_IsValid, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_compositorCpuTime_IsValid, put = __cordl_internal_set_compositorCpuTime_IsValid)) bool compositorCpuTime_IsValid;

  /// @brief Field compositorDroppedFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_compositorDroppedFrameCount, put = __cordl_internal_set_compositorDroppedFrameCount)) int32_t compositorDroppedFrameCount;

  /// @brief Field compositorDroppedFrameCount_IsValid, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_compositorDroppedFrameCount_IsValid, put = __cordl_internal_set_compositorDroppedFrameCount_IsValid)) bool compositorDroppedFrameCount_IsValid;

  /// @brief Field compositorGpuTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_compositorGpuTime, put = __cordl_internal_set_compositorGpuTime)) float_t compositorGpuTime;

  /// @brief Field compositorGpuTime_IsValid, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_compositorGpuTime_IsValid, put = __cordl_internal_set_compositorGpuTime_IsValid)) bool compositorGpuTime_IsValid;

  /// @brief Field compositorSpaceWarpMode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_compositorSpaceWarpMode, put = __cordl_internal_set_compositorSpaceWarpMode)) int32_t compositorSpaceWarpMode;

  /// @brief Field compositorSpaceWarpMode_IsValid, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_compositorSpaceWarpMode_IsValid, put = __cordl_internal_set_compositorSpaceWarpMode_IsValid)) bool compositorSpaceWarpMode_IsValid;

  /// @brief Field deltaFrameTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_deltaFrameTime, put = __cordl_internal_set_deltaFrameTime)) float_t deltaFrameTime;

  /// @brief Field deviceCpuClockFrequencyInMHz, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceCpuClockFrequencyInMHz, put = __cordl_internal_set_deviceCpuClockFrequencyInMHz)) float_t deviceCpuClockFrequencyInMHz;

  /// @brief Field deviceCpuClockFrequencyInMHz_IsValid, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_deviceCpuClockFrequencyInMHz_IsValid, put = __cordl_internal_set_deviceCpuClockFrequencyInMHz_IsValid)) bool deviceCpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceCpuClockLevel, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceCpuClockLevel, put = __cordl_internal_set_deviceCpuClockLevel)) int32_t deviceCpuClockLevel;

  /// @brief Field deviceCpuClockLevel_IsValid, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_deviceCpuClockLevel_IsValid, put = __cordl_internal_set_deviceCpuClockLevel_IsValid)) bool deviceCpuClockLevel_IsValid;

  /// @brief Field deviceCpuCoreUtilPercentage, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_deviceCpuCoreUtilPercentage, put = __cordl_internal_set_deviceCpuCoreUtilPercentage))::ArrayW<float_t, ::Array<float_t>*> deviceCpuCoreUtilPercentage;

  /// @brief Field deviceCpuCoreUtilPercentage_IsValid, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_deviceCpuCoreUtilPercentage_IsValid,
                      put = __cordl_internal_set_deviceCpuCoreUtilPercentage_IsValid))::ArrayW<bool, ::Array<bool>*> deviceCpuCoreUtilPercentage_IsValid;

  /// @brief Field deviceGpuClockFrequencyInMHz, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceGpuClockFrequencyInMHz, put = __cordl_internal_set_deviceGpuClockFrequencyInMHz)) float_t deviceGpuClockFrequencyInMHz;

  /// @brief Field deviceGpuClockFrequencyInMHz_IsValid, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_deviceGpuClockFrequencyInMHz_IsValid, put = __cordl_internal_set_deviceGpuClockFrequencyInMHz_IsValid)) bool deviceGpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceGpuClockLevel, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceGpuClockLevel, put = __cordl_internal_set_deviceGpuClockLevel)) int32_t deviceGpuClockLevel;

  /// @brief Field deviceGpuClockLevel_IsValid, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_deviceGpuClockLevel_IsValid, put = __cordl_internal_set_deviceGpuClockLevel_IsValid)) bool deviceGpuClockLevel_IsValid;

  /// @brief Field frameCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_frameCount, put = __cordl_internal_set_frameCount)) int32_t frameCount;

  /// @brief Field frameTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_frameTime, put = __cordl_internal_set_frameTime)) float_t frameTime;

  /// @brief Field systemCpuUtilAveragePercentage, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_systemCpuUtilAveragePercentage, put = __cordl_internal_set_systemCpuUtilAveragePercentage)) float_t systemCpuUtilAveragePercentage;

  /// @brief Field systemCpuUtilAveragePercentage_IsValid, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_systemCpuUtilAveragePercentage_IsValid,
                      put = __cordl_internal_set_systemCpuUtilAveragePercentage_IsValid)) bool systemCpuUtilAveragePercentage_IsValid;

  /// @brief Field systemCpuUtilWorstPercentage, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_systemCpuUtilWorstPercentage, put = __cordl_internal_set_systemCpuUtilWorstPercentage)) float_t systemCpuUtilWorstPercentage;

  /// @brief Field systemCpuUtilWorstPercentage_IsValid, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_systemCpuUtilWorstPercentage_IsValid, put = __cordl_internal_set_systemCpuUtilWorstPercentage_IsValid)) bool systemCpuUtilWorstPercentage_IsValid;

  /// @brief Field systemGpuUtilPercentage, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_systemGpuUtilPercentage, put = __cordl_internal_set_systemGpuUtilPercentage)) float_t systemGpuUtilPercentage;

  /// @brief Field systemGpuUtilPercentage_IsValid, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_systemGpuUtilPercentage_IsValid, put = __cordl_internal_set_systemGpuUtilPercentage_IsValid)) bool systemGpuUtilPercentage_IsValid;

  /// @brief Method LoadFromJSON, addr 0x169fbe4, size 0x948, virtual false, abstract: false, final false
  inline bool LoadFromJSON(::StringW json);

  static inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* New_ctor();

  /// @brief Method ToJSON, addr 0x169f3cc, size 0x774, virtual false, abstract: false, final false
  inline ::StringW ToJSON();

  constexpr float_t const& __cordl_internal_get_appCpuTime() const;

  constexpr float_t& __cordl_internal_get_appCpuTime();

  constexpr bool const& __cordl_internal_get_appCpuTime_IsValid() const;

  constexpr bool& __cordl_internal_get_appCpuTime_IsValid();

  constexpr float_t const& __cordl_internal_get_appGpuTime() const;

  constexpr float_t& __cordl_internal_get_appGpuTime();

  constexpr bool const& __cordl_internal_get_appGpuTime_IsValid() const;

  constexpr bool& __cordl_internal_get_appGpuTime_IsValid();

  constexpr float_t const& __cordl_internal_get_compositorCpuTime() const;

  constexpr float_t& __cordl_internal_get_compositorCpuTime();

  constexpr bool const& __cordl_internal_get_compositorCpuTime_IsValid() const;

  constexpr bool& __cordl_internal_get_compositorCpuTime_IsValid();

  constexpr int32_t const& __cordl_internal_get_compositorDroppedFrameCount() const;

  constexpr int32_t& __cordl_internal_get_compositorDroppedFrameCount();

  constexpr bool const& __cordl_internal_get_compositorDroppedFrameCount_IsValid() const;

  constexpr bool& __cordl_internal_get_compositorDroppedFrameCount_IsValid();

  constexpr float_t const& __cordl_internal_get_compositorGpuTime() const;

  constexpr float_t& __cordl_internal_get_compositorGpuTime();

  constexpr bool const& __cordl_internal_get_compositorGpuTime_IsValid() const;

  constexpr bool& __cordl_internal_get_compositorGpuTime_IsValid();

  constexpr int32_t const& __cordl_internal_get_compositorSpaceWarpMode() const;

  constexpr int32_t& __cordl_internal_get_compositorSpaceWarpMode();

  constexpr bool const& __cordl_internal_get_compositorSpaceWarpMode_IsValid() const;

  constexpr bool& __cordl_internal_get_compositorSpaceWarpMode_IsValid();

  constexpr float_t const& __cordl_internal_get_deltaFrameTime() const;

  constexpr float_t& __cordl_internal_get_deltaFrameTime();

  constexpr float_t const& __cordl_internal_get_deviceCpuClockFrequencyInMHz() const;

  constexpr float_t& __cordl_internal_get_deviceCpuClockFrequencyInMHz();

  constexpr bool const& __cordl_internal_get_deviceCpuClockFrequencyInMHz_IsValid() const;

  constexpr bool& __cordl_internal_get_deviceCpuClockFrequencyInMHz_IsValid();

  constexpr int32_t const& __cordl_internal_get_deviceCpuClockLevel() const;

  constexpr int32_t& __cordl_internal_get_deviceCpuClockLevel();

  constexpr bool const& __cordl_internal_get_deviceCpuClockLevel_IsValid() const;

  constexpr bool& __cordl_internal_get_deviceCpuClockLevel_IsValid();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_deviceCpuCoreUtilPercentage() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_deviceCpuCoreUtilPercentage();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_deviceCpuCoreUtilPercentage_IsValid() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_deviceCpuCoreUtilPercentage_IsValid();

  constexpr float_t const& __cordl_internal_get_deviceGpuClockFrequencyInMHz() const;

  constexpr float_t& __cordl_internal_get_deviceGpuClockFrequencyInMHz();

  constexpr bool const& __cordl_internal_get_deviceGpuClockFrequencyInMHz_IsValid() const;

  constexpr bool& __cordl_internal_get_deviceGpuClockFrequencyInMHz_IsValid();

  constexpr int32_t const& __cordl_internal_get_deviceGpuClockLevel() const;

  constexpr int32_t& __cordl_internal_get_deviceGpuClockLevel();

  constexpr bool const& __cordl_internal_get_deviceGpuClockLevel_IsValid() const;

  constexpr bool& __cordl_internal_get_deviceGpuClockLevel_IsValid();

  constexpr int32_t const& __cordl_internal_get_frameCount() const;

  constexpr int32_t& __cordl_internal_get_frameCount();

  constexpr float_t const& __cordl_internal_get_frameTime() const;

  constexpr float_t& __cordl_internal_get_frameTime();

  constexpr float_t const& __cordl_internal_get_systemCpuUtilAveragePercentage() const;

  constexpr float_t& __cordl_internal_get_systemCpuUtilAveragePercentage();

  constexpr bool const& __cordl_internal_get_systemCpuUtilAveragePercentage_IsValid() const;

  constexpr bool& __cordl_internal_get_systemCpuUtilAveragePercentage_IsValid();

  constexpr float_t const& __cordl_internal_get_systemCpuUtilWorstPercentage() const;

  constexpr float_t& __cordl_internal_get_systemCpuUtilWorstPercentage();

  constexpr bool const& __cordl_internal_get_systemCpuUtilWorstPercentage_IsValid() const;

  constexpr bool& __cordl_internal_get_systemCpuUtilWorstPercentage_IsValid();

  constexpr float_t const& __cordl_internal_get_systemGpuUtilPercentage() const;

  constexpr float_t& __cordl_internal_get_systemGpuUtilPercentage();

  constexpr bool const& __cordl_internal_get_systemGpuUtilPercentage_IsValid() const;

  constexpr bool& __cordl_internal_get_systemGpuUtilPercentage_IsValid();

  constexpr void __cordl_internal_set_appCpuTime(float_t value);

  constexpr void __cordl_internal_set_appCpuTime_IsValid(bool value);

  constexpr void __cordl_internal_set_appGpuTime(float_t value);

  constexpr void __cordl_internal_set_appGpuTime_IsValid(bool value);

  constexpr void __cordl_internal_set_compositorCpuTime(float_t value);

  constexpr void __cordl_internal_set_compositorCpuTime_IsValid(bool value);

  constexpr void __cordl_internal_set_compositorDroppedFrameCount(int32_t value);

  constexpr void __cordl_internal_set_compositorDroppedFrameCount_IsValid(bool value);

  constexpr void __cordl_internal_set_compositorGpuTime(float_t value);

  constexpr void __cordl_internal_set_compositorGpuTime_IsValid(bool value);

  constexpr void __cordl_internal_set_compositorSpaceWarpMode(int32_t value);

  constexpr void __cordl_internal_set_compositorSpaceWarpMode_IsValid(bool value);

  constexpr void __cordl_internal_set_deltaFrameTime(float_t value);

  constexpr void __cordl_internal_set_deviceCpuClockFrequencyInMHz(float_t value);

  constexpr void __cordl_internal_set_deviceCpuClockFrequencyInMHz_IsValid(bool value);

  constexpr void __cordl_internal_set_deviceCpuClockLevel(int32_t value);

  constexpr void __cordl_internal_set_deviceCpuClockLevel_IsValid(bool value);

  constexpr void __cordl_internal_set_deviceCpuCoreUtilPercentage(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_deviceGpuClockFrequencyInMHz(float_t value);

  constexpr void __cordl_internal_set_deviceGpuClockFrequencyInMHz_IsValid(bool value);

  constexpr void __cordl_internal_set_deviceGpuClockLevel(int32_t value);

  constexpr void __cordl_internal_set_deviceGpuClockLevel_IsValid(bool value);

  constexpr void __cordl_internal_set_frameCount(int32_t value);

  constexpr void __cordl_internal_set_frameTime(float_t value);

  constexpr void __cordl_internal_set_systemCpuUtilAveragePercentage(float_t value);

  constexpr void __cordl_internal_set_systemCpuUtilAveragePercentage_IsValid(bool value);

  constexpr void __cordl_internal_set_systemCpuUtilWorstPercentage(float_t value);

  constexpr void __cordl_internal_set_systemCpuUtilWorstPercentage_IsValid(bool value);

  constexpr void __cordl_internal_set_systemGpuUtilPercentage(float_t value);

  constexpr void __cordl_internal_set_systemGpuUtilPercentage_IsValid(bool value);

  /// @brief Method .ctor, addr 0x16a0cc0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSystemPerfMetrics__PerfMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__PerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSystemPerfMetrics__PerfMetrics(__OVRSystemPerfMetrics__PerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__PerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSystemPerfMetrics__PerfMetrics(__OVRSystemPerfMetrics__PerfMetrics const&) = delete;

  /// @brief Field frameCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___frameCount;

  /// @brief Field frameTime, offset: 0x14, size: 0x4, def value: None
  float_t ___frameTime;

  /// @brief Field deltaFrameTime, offset: 0x18, size: 0x4, def value: None
  float_t ___deltaFrameTime;

  /// @brief Field appCpuTime_IsValid, offset: 0x1c, size: 0x1, def value: None
  bool ___appCpuTime_IsValid;

  /// @brief Field appCpuTime, offset: 0x20, size: 0x4, def value: None
  float_t ___appCpuTime;

  /// @brief Field appGpuTime_IsValid, offset: 0x24, size: 0x1, def value: None
  bool ___appGpuTime_IsValid;

  /// @brief Field appGpuTime, offset: 0x28, size: 0x4, def value: None
  float_t ___appGpuTime;

  /// @brief Field compositorCpuTime_IsValid, offset: 0x2c, size: 0x1, def value: None
  bool ___compositorCpuTime_IsValid;

  /// @brief Field compositorCpuTime, offset: 0x30, size: 0x4, def value: None
  float_t ___compositorCpuTime;

  /// @brief Field compositorGpuTime_IsValid, offset: 0x34, size: 0x1, def value: None
  bool ___compositorGpuTime_IsValid;

  /// @brief Field compositorGpuTime, offset: 0x38, size: 0x4, def value: None
  float_t ___compositorGpuTime;

  /// @brief Field compositorDroppedFrameCount_IsValid, offset: 0x3c, size: 0x1, def value: None
  bool ___compositorDroppedFrameCount_IsValid;

  /// @brief Field compositorDroppedFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___compositorDroppedFrameCount;

  /// @brief Field compositorSpaceWarpMode_IsValid, offset: 0x44, size: 0x1, def value: None
  bool ___compositorSpaceWarpMode_IsValid;

  /// @brief Field compositorSpaceWarpMode, offset: 0x48, size: 0x4, def value: None
  int32_t ___compositorSpaceWarpMode;

  /// @brief Field systemGpuUtilPercentage_IsValid, offset: 0x4c, size: 0x1, def value: None
  bool ___systemGpuUtilPercentage_IsValid;

  /// @brief Field systemGpuUtilPercentage, offset: 0x50, size: 0x4, def value: None
  float_t ___systemGpuUtilPercentage;

  /// @brief Field systemCpuUtilAveragePercentage_IsValid, offset: 0x54, size: 0x1, def value: None
  bool ___systemCpuUtilAveragePercentage_IsValid;

  /// @brief Field systemCpuUtilAveragePercentage, offset: 0x58, size: 0x4, def value: None
  float_t ___systemCpuUtilAveragePercentage;

  /// @brief Field systemCpuUtilWorstPercentage_IsValid, offset: 0x5c, size: 0x1, def value: None
  bool ___systemCpuUtilWorstPercentage_IsValid;

  /// @brief Field systemCpuUtilWorstPercentage, offset: 0x60, size: 0x4, def value: None
  float_t ___systemCpuUtilWorstPercentage;

  /// @brief Field deviceCpuClockFrequencyInMHz_IsValid, offset: 0x64, size: 0x1, def value: None
  bool ___deviceCpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceCpuClockFrequencyInMHz, offset: 0x68, size: 0x4, def value: None
  float_t ___deviceCpuClockFrequencyInMHz;

  /// @brief Field deviceGpuClockFrequencyInMHz_IsValid, offset: 0x6c, size: 0x1, def value: None
  bool ___deviceGpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceGpuClockFrequencyInMHz, offset: 0x70, size: 0x4, def value: None
  float_t ___deviceGpuClockFrequencyInMHz;

  /// @brief Field deviceCpuClockLevel_IsValid, offset: 0x74, size: 0x1, def value: None
  bool ___deviceCpuClockLevel_IsValid;

  /// @brief Field deviceCpuClockLevel, offset: 0x78, size: 0x4, def value: None
  int32_t ___deviceCpuClockLevel;

  /// @brief Field deviceGpuClockLevel_IsValid, offset: 0x7c, size: 0x1, def value: None
  bool ___deviceGpuClockLevel_IsValid;

  /// @brief Field deviceGpuClockLevel, offset: 0x80, size: 0x4, def value: None
  int32_t ___deviceGpuClockLevel;

  /// @brief Field deviceCpuCoreUtilPercentage_IsValid, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___deviceCpuCoreUtilPercentage_IsValid;

  /// @brief Field deviceCpuCoreUtilPercentage, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___deviceCpuCoreUtilPercentage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___frameCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___frameTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deltaFrameTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___appCpuTime_IsValid) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___appCpuTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___appGpuTime_IsValid) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___appGpuTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorCpuTime_IsValid) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorCpuTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorGpuTime_IsValid) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorGpuTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorDroppedFrameCount_IsValid) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorDroppedFrameCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorSpaceWarpMode_IsValid) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___compositorSpaceWarpMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemGpuUtilPercentage_IsValid) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemGpuUtilPercentage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemCpuUtilAveragePercentage_IsValid) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemCpuUtilAveragePercentage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemCpuUtilWorstPercentage_IsValid) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___systemCpuUtilWorstPercentage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuClockFrequencyInMHz_IsValid) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuClockFrequencyInMHz) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceGpuClockFrequencyInMHz_IsValid) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceGpuClockFrequencyInMHz) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuClockLevel_IsValid) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuClockLevel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceGpuClockLevel_IsValid) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceGpuClockLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuCoreUtilPercentage_IsValid) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, ___deviceCpuCoreUtilPercentage) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSystemPerfMetricsTcpServer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*
class CORDL_TYPE __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field listeningPort, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_listeningPort, put = __cordl_internal_set_listeningPort)) int32_t listeningPort;

  /// @brief Field singleton, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_singleton, put = setStaticF_singleton))::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer> singleton;

  /// @brief Field tcpServer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tcpServer, put = __cordl_internal_set_tcpServer))::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* tcpServer;

  /// @brief Method GatherPerfMetrics, addr 0x16a0fb0, size 0x300, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GatherPerfMetrics();

  static inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* New_ctor();

  /// @brief Method OnDisable, addr 0x16a0e8c, size 0xa0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x16a0d78, size 0x114, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x16a0f2c, size 0x84, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_listeningPort() const;

  constexpr int32_t& __cordl_internal_get_listeningPort();

  constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*& __cordl_internal_get_tcpServer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*> const& __cordl_internal_get_tcpServer() const;

  constexpr void __cordl_internal_set_listeningPort(int32_t value);

  constexpr void __cordl_internal_set_tcpServer(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* value);

  /// @brief Method .ctor, addr 0x16a12b0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer> getStaticF_singleton();

  static inline void setStaticF_singleton(::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer const&) = delete;

  /// @brief Field tcpServer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* ___tcpServer;

  /// @brief Field listeningPort, offset: 0x20, size: 0x4, def value: None
  int32_t ___listeningPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, ___tcpServer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, ___listeningPort) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSystemPerfMetrics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSystemPerfMetrics*
class CORDL_TYPE OVRSystemPerfMetrics : public ::System::Object {
public:
  // Declarations
  using OVRSystemPerfMetricsTcpServer = ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;

  using PerfMetrics = ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics;

  static inline ::GlobalNamespace::OVRSystemPerfMetrics* New_ctor();

  /// @brief Method .ctor, addr 0x169f3c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSystemPerfMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSystemPerfMetrics(OVRSystemPerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSystemPerfMetrics(OVRSystemPerfMetrics const&) = delete;

  /// @brief Field MaxBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxBufferLength{ static_cast<int32_t>(0x10000) };

  /// @brief Field MaxMessageLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxMessageLength{ static_cast<int32_t>(0xfffc) };

  /// @brief Field PayloadTypeMetrics offset 0xffffffff size 0x4
  static constexpr int32_t PayloadTypeMetrics{ static_cast<int32_t>(0x64) };

  /// @brief Field TcpListeningPort offset 0xffffffff size 0x4
  static constexpr int32_t TcpListeningPort{ static_cast<int32_t>(0x7ea3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSystemPerfMetrics, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSystemPerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSystemPerfMetrics*, "", "OVRSystemPerfMetrics");
NEED_NO_BOX(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
NEED_NO_BOX(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*, "", "OVRSystemPerfMetrics/PerfMetrics");
