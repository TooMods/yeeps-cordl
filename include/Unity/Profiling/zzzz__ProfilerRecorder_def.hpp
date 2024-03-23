#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder)
namespace System {
class IDisposable;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
namespace Unity::Profiling {
struct ProfilerRecorderOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorderSample;
}
namespace Unity::Profiling {
struct __ProfilerRecorder__ControlOptions;
}
namespace Unity::Profiling {
struct __ProfilerRecorder__CountOptions;
}
// Forward declare root types
namespace Unity::Profiling {
struct __ProfilerRecorder__ControlOptions;
}
namespace Unity::Profiling {
struct __ProfilerRecorder__CountOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::__ProfilerRecorder__ControlOptions);
MARK_VAL_T(::Unity::Profiling::__ProfilerRecorder__CountOptions);
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder);
// Type: ::ControlOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::ProfilerRecorder::ControlOptions
struct CORDL_TYPE __ProfilerRecorder__ControlOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProfilerRecorder__ControlOptions_Unwrapped
  enum struct ____ProfilerRecorder__ControlOptions_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Stop = static_cast<int32_t>(0x1),
    __E_Reset = static_cast<int32_t>(0x2),
    __E_Release = static_cast<int32_t>(0x4),
    __E_SetFilterToCurrentThread = static_cast<int32_t>(0x5),
    __E_SetToCollectFromAllThreads = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProfilerRecorder__ControlOptions_Unwrapped() const noexcept {
    return static_cast<____ProfilerRecorder__ControlOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfilerRecorder__ControlOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProfilerRecorder__ControlOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Release value: static_cast<int32_t>(0x4)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const Release;

  /// @brief Field Reset value: static_cast<int32_t>(0x2)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const Reset;

  /// @brief Field SetFilterToCurrentThread value: static_cast<int32_t>(0x5)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const SetFilterToCurrentThread;

  /// @brief Field SetToCollectFromAllThreads value: static_cast<int32_t>(0x6)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const SetToCollectFromAllThreads;

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const Start;

  /// @brief Field Stop value: static_cast<int32_t>(0x1)
  static ::Unity::Profiling::__ProfilerRecorder__ControlOptions const Stop;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::__ProfilerRecorder__ControlOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::__ProfilerRecorder__ControlOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling
// Type: ::CountOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::ProfilerRecorder::CountOptions
struct CORDL_TYPE __ProfilerRecorder__CountOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProfilerRecorder__CountOptions_Unwrapped
  enum struct ____ProfilerRecorder__CountOptions_Unwrapped : int32_t {
    __E_Count = static_cast<int32_t>(0x0),
    __E_MaxCount = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProfilerRecorder__CountOptions_Unwrapped() const noexcept {
    return static_cast<____ProfilerRecorder__CountOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfilerRecorder__CountOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProfilerRecorder__CountOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Count value: static_cast<int32_t>(0x0)
  static ::Unity::Profiling::__ProfilerRecorder__CountOptions const Count;

  /// @brief Field MaxCount value: static_cast<int32_t>(0x1)
  static ::Unity::Profiling::__ProfilerRecorder__CountOptions const MaxCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::__ProfilerRecorder__CountOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::__ProfilerRecorder__CountOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling
// Type: Unity.Profiling::ProfilerRecorder
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::Unity.Profiling::ProfilerRecorder
struct CORDL_TYPE ProfilerRecorder {
public:
  // Declarations
  using ControlOptions = ::Unity::Profiling::__ProfilerRecorder__ControlOptions;

  using CountOptions = ::Unity::Profiling::__ProfilerRecorder__CountOptions;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_LastValue)) int64_t LastValue;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CheckInitializedAndThrow, addr 0x27dffe8, size 0x60, virtual false, abstract: false, final false
  inline void CheckInitializedAndThrow();

  /// @brief Method Control, addr 0x27e0048, size 0x48, virtual false, abstract: false, final false
  static inline void Control(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::__ProfilerRecorder__ControlOptions options);

  /// @brief Method Control_Injected, addr 0x27e03b4, size 0x44, virtual false, abstract: false, final false
  static inline void Control_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::__ProfilerRecorder__ControlOptions options);

  /// @brief Method Create, addr 0x27dfea0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorder Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t maxSampleCount,
                                                            ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method Create_Injected, addr 0x27e0358, size 0x5c, virtual false, abstract: false, final false
  static inline void Create_Injected(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> statHandle, int32_t maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions options,
                                     ByRef<::Unity::Profiling::ProfilerRecorder> ret);

  /// @brief Method Dispose, addr 0x27e0544, size 0x54, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetCount, addr 0x27e01bc, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetCount(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::__ProfilerRecorder__CountOptions countOptions);

  /// @brief Method GetCount_Injected, addr 0x27e0434, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetCount_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::__ProfilerRecorder__CountOptions countOptions);

  /// @brief Method GetLastValue, addr 0x27e012c, size 0x40, virtual false, abstract: false, final false
  static inline int64_t GetLastValue(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetLastValue_Injected, addr 0x27e03f8, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetLastValue_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method GetRunning, addr 0x27e0254, size 0x44, virtual false, abstract: false, final false
  static inline bool GetRunning(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetRunning_Injected, addr 0x27e04b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetRunning_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method GetSample, addr 0x27e0298, size 0x54, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerRecorderSample GetSample(int32_t index);

  /// @brief Method GetSampleInternal, addr 0x27e02ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorderSample GetSampleInternal(::Unity::Profiling::ProfilerRecorder handle, int32_t index);

  /// @brief Method GetSampleInternal_Injected, addr 0x27e04f0, size 0x54, virtual false, abstract: false, final false
  static inline void GetSampleInternal_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, int32_t index, ByRef<::Unity::Profiling::ProfilerRecorderSample> ret);

  /// @brief Method GetValid, addr 0x27dff54, size 0x44, virtual false, abstract: false, final false
  static inline bool GetValid(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetValid_Injected, addr 0x27e0478, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetValid_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method Start, addr 0x27dff98, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x27e0090, size 0x50, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method .ctor, addr 0x27dfe7c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method get_Count, addr 0x27e016c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsRunning, addr 0x27e0204, size 0x50, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  /// @brief Method get_LastValue, addr 0x27e00e0, size 0x4c, virtual false, abstract: false, final false
  inline int64_t get_LastValue();

  /// @brief Method get_Valid, addr 0x27dff00, size 0x54, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorder();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ProfilerRecorder(uint64_t handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  /// @brief Field SharedRecorder value: static_cast<int32_t>(0x80)
  static ::Unity::Profiling::ProfilerRecorderOptions const SharedRecorder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerRecorder, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::ProfilerRecorder, handle) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::__ProfilerRecorder__ControlOptions, "Unity.Profiling", "ProfilerRecorder/ControlOptions");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::__ProfilerRecorder__CountOptions, "Unity.Profiling", "ProfilerRecorder/CountOptions");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorder, "Unity.Profiling", "ProfilerRecorder");
