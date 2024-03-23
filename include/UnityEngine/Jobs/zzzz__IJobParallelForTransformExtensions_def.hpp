#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransformExtensions)
namespace GlobalNamespace {
template <typename T> class __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction;
}
namespace GlobalNamespace {
template <typename T> struct __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData;
}
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Jobs {
template <typename T> struct __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransformExtensions;
}
namespace GlobalNamespace {
template <typename T> struct __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData;
}
namespace UnityEngine::Jobs {
template <typename T> struct __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction);
MARK_REF_PTR_T(::UnityEngine::Jobs::IJobParallelForTransformExtensions);
MARK_GEN_VAL_T(::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData);
MARK_GEN_VAL_T(::UnityEngine::Jobs::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1);
// Type: ::TransformJobData
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::IJobParallelForTransformExtensions::TransformParallelForLoopStruct`1::TransformJobData<T>
struct CORDL_TYPE __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData();

  // Ctor Parameters [CppParam { name: "TransformAccessArray", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "IsReadOnly", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData(void* TransformAccessArray, int32_t IsReadOnly) noexcept;

  /// @brief Field TransformAccessArray, offset: 0x0, size: 0x8, def value: None
  void* TransformAccessArray;

  /// @brief Field IsReadOnly, offset: 0x8, size: 0x4, def value: None
  int32_t IsReadOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ExecuteJobFunction
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::IJobParallelForTransformExtensions::TransformParallelForLoopStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(ByRef<T> jobData, void* additionalPtr, void* bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction(__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction(__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction const&) =
      delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TransformParallelForLoopStruct`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::IJobParallelForTransformExtensions::TransformParallelForLoopStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction<T>;

  using TransformJobData = ::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) void* jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(ByRef<T> jobData, void* jobData2, void* bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void* Initialize();

  static inline void* getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(void* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Jobs
// Type: UnityEngine.Jobs::IJobParallelForTransformExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Jobs {
// Is value type: false
// CS Name: ::UnityEngine.Jobs::IJobParallelForTransformExtensions*
class CORDL_TYPE IJobParallelForTransformExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using TransformParallelForLoopStruct_1 = ::UnityEngine::Jobs::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1<T>;

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForTransformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForTransformExtensions(IJobParallelForTransformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForTransformExtensions(IJobParallelForTransformExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::IJobParallelForTransformExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__ExecuteJobFunction, "UnityEngine.Jobs",
                                     "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::UnityEngine::Jobs::IJobParallelForTransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::IJobParallelForTransformExtensions*, "UnityEngine.Jobs", "IJobParallelForTransformExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1__TransformJobData, "UnityEngine.Jobs",
                                      "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Jobs::__IJobParallelForTransformExtensions__TransformParallelForLoopStruct_1, "UnityEngine.Jobs",
                                      "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1");
