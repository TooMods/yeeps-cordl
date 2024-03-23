#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobHandle)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Jobs {
struct JobHandle;
}
// Write type traits
MARK_VAL_T(::Unity::Jobs::JobHandle);
// Type: Unity.Jobs::JobHandle
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Jobs {
// Is value type: true
// CS Name: ::Unity.Jobs::JobHandle
struct CORDL_TYPE JobHandle {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Method CombineDependencies, addr 0x27e0ea8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1);

  /// @brief Method CombineDependenciesInternal2, addr 0x27e0ed0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle CombineDependenciesInternal2(ByRef<::Unity::Jobs::JobHandle> job0, ByRef<::Unity::Jobs::JobHandle> job1);

  /// @brief Method CombineDependenciesInternal2_Injected, addr 0x27e0f2c, size 0x54, virtual false, abstract: false, final false
  static inline void CombineDependenciesInternal2_Injected(ByRef<::Unity::Jobs::JobHandle> job0, ByRef<::Unity::Jobs::JobHandle> job1, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method Complete, addr 0x27e0c74, size 0x8c, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method CompleteAll, addr 0x27e0d3c, size 0x88, virtual false, abstract: false, final false
  static inline void CompleteAll(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs);

  /// @brief Method ScheduleBatchedJobs, addr 0x27e0e80, size 0x28, virtual false, abstract: false, final false
  static inline void ScheduleBatchedJobs();

  /// @brief Method ScheduleBatchedJobsAndComplete, addr 0x27e0d00, size 0x3c, virtual false, abstract: false, final false
  static inline void ScheduleBatchedJobsAndComplete(ByRef<::Unity::Jobs::JobHandle> job);

  /// @brief Method ScheduleBatchedJobsAndCompleteAll, addr 0x27e0dc4, size 0x44, virtual false, abstract: false, final false
  static inline void ScheduleBatchedJobsAndCompleteAll(::cordl_internals::Ptr<void> jobs, int32_t count);

  /// @brief Method ScheduleBatchedJobsAndIsCompleted, addr 0x27e0e44, size 0x3c, virtual false, abstract: false, final false
  static inline bool ScheduleBatchedJobsAndIsCompleted(ByRef<::Unity::Jobs::JobHandle> job);

  /// @brief Method get_IsCompleted, addr 0x27e0e08, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JobHandle();

  // Ctor Parameters [CppParam { name: "jobGroup", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JobHandle(void* jobGroup, int32_t version) noexcept;

  /// @brief Field jobGroup, offset: 0x0, size: 0x8, def value: None
  void* jobGroup;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::JobHandle, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Jobs::JobHandle, jobGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::JobHandle, version) == 0x8, "Offset mismatch!");

} // namespace Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::JobHandle, "Unity.Jobs", "JobHandle");
