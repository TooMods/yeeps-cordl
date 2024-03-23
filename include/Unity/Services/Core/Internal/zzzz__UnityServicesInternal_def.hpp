#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageInitializationInfo_def.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityServicesInternal)
namespace GlobalNamespace {
struct __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
class CoreDiagnostics;
}
namespace Unity::Services::Core::Internal {
class CoreMetrics;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
namespace Unity::Services::Core::Internal {
class PackageInitializationInfo;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___EnableInitializationAsync_d__24;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___InitializeAsync_d__20;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___InitializeServicesAsync_d__22;
}
namespace Unity::Services::Core::Internal {
class __UnityServicesInternal____c__DisplayClass22_0;
}
namespace Unity::Services::Core {
class IUnityServices;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
namespace Unity::Services::Core {
struct ServicesInitializationState;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class UnityServicesInternal;
}
namespace Unity::Services::Core::Internal {
class __UnityServicesInternal____c__DisplayClass22_0;
}
namespace GlobalNamespace {
struct __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___EnableInitializationAsync_d__24;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___InitializeAsync_d__20;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInternal___InitializeServicesAsync_d__22;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityServicesInternal);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0);
MARK_VAL_T(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d);
MARK_VAL_T(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24);
MARK_VAL_T(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20);
MARK_VAL_T(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22);
// Type: ::<InitializeAsync>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::UnityServicesInternal::<InitializeAsync>d__20
struct CORDL_TYPE __UnityServicesInternal___InitializeAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26711c8, size 0x304, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26714cc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInternal___InitializeAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
  // modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __UnityServicesInternal___InitializeAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this, ::Unity::Services::Core::InitializationOptions* options,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__1,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this;

  /// @brief Field options, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* options;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, __u__2) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<<InitializeServicesAsync>g__InitializePackagesAsync|1>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::UnityServicesInternal::<>c__DisplayClass22_0::<<InitializeServicesAsync>g__InitializePackagesAsync|1>d
struct CORDL_TYPE __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2671850, size 0x238, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2671a88, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value: None }]
  constexpr __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __t__builder,
      ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::UnityServicesInternal::<>c__DisplayClass22_0*
class CORDL_TYPE __UnityServicesInternal____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  using __InitializeServicesAsync_g__InitializePackagesAsync_1_d = ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Core::Internal::UnityServicesInternal* __4__this;

  /// @brief Field dependencyTree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dependencyTree, put = __cordl_internal_set_dependencyTree))::Unity::Services::Core::Internal::DependencyTree* dependencyTree;

  /// @brief Field initStopwatch, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_initStopwatch, put = __cordl_internal_set_initStopwatch))::System::Diagnostics::Stopwatch* initStopwatch;

  /// @brief Field sortedPackageTypeHashes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sortedPackageTypeHashes, put = __cordl_internal_set_sortedPackageTypeHashes))::System::Collections::Generic::List_1<int32_t>* sortedPackageTypeHashes;

  static inline ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* New_ctor();

  /// @brief Method <InitializeServicesAsync>g__FailServicesInitialization|2, addr 0x26715f8, size 0xf0, virtual false, abstract: false, final false
  inline void _InitializeServicesAsync_g__FailServicesInitialization_2(::System::Exception* reason);

  /// @brief Method <InitializeServicesAsync>g__InitializePackagesAsync|1, addr 0x2671508, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>*
  _InitializeServicesAsync_g__InitializePackagesAsync_1();

  /// @brief Method <InitializeServicesAsync>g__SortPackages|0, addr 0x26714e0, size 0x28, virtual false, abstract: false, final false
  inline void _InitializeServicesAsync_g__SortPackages_0();

  /// @brief Method <InitializeServicesAsync>g__SucceedServicesInitialization|3, addr 0x26716e8, size 0x168, virtual false, abstract: false, final false
  inline void _InitializeServicesAsync_g__SucceedServicesInitialization_3();

  constexpr ::Unity::Services::Core::Internal::UnityServicesInternal*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::UnityServicesInternal*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Core::Internal::DependencyTree*& __cordl_internal_get_dependencyTree();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::DependencyTree*> const& __cordl_internal_get_dependencyTree() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_initStopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_initStopwatch() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sortedPackageTypeHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_sortedPackageTypeHashes() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Core::Internal::UnityServicesInternal* value);

  constexpr void __cordl_internal_set_dependencyTree(::Unity::Services::Core::Internal::DependencyTree* value);

  constexpr void __cordl_internal_set_initStopwatch(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set_sortedPackageTypeHashes(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x26714d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInternal____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityServicesInternal____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityServicesInternal____c__DisplayClass22_0(__UnityServicesInternal____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityServicesInternal____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityServicesInternal____c__DisplayClass22_0(__UnityServicesInternal____c__DisplayClass22_0 const&) = delete;

  /// @brief Field dependencyTree, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::DependencyTree* ___dependencyTree;

  /// @brief Field sortedPackageTypeHashes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___sortedPackageTypeHashes;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::UnityServicesInternal* _____4__this;

  /// @brief Field initStopwatch, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___initStopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0, ___dependencyTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0, ___sortedPackageTypeHashes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0, ___initStopwatch) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<InitializeServicesAsync>d__22
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::UnityServicesInternal::<InitializeServicesAsync>d__22
struct CORDL_TYPE __UnityServicesInternal___InitializeServicesAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2671ae0, size 0x528, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2672008, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInternal___InitializeServicesAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
  // modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "",
  // def_value: None }]
  constexpr __UnityServicesInternal___InitializeServicesAsync_d__22(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this,
      ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<EnableInitializationAsync>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::UnityServicesInternal::<EnableInitializationAsync>d__24
struct CORDL_TYPE __UnityServicesInternal___EnableInitializationAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2672014, size 0x1a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26721b4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInternal___EnableInitializationAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __UnityServicesInternal___EnableInitializationAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                      ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::UnityServicesInternal
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::UnityServicesInternal*
class CORDL_TYPE UnityServicesInternal : public ::System::Object {
public:
  // Declarations
  using _EnableInitializationAsync_d__24 = ::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24;

  using _InitializeAsync_d__20 = ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20;

  using _InitializeServicesAsync_d__22 = ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22;

  using __c__DisplayClass22_0 = ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0;

  /// @brief Field CanInitialize, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_CanInitialize, put = __cordl_internal_set_CanInitialize)) bool CanInitialize;

  __declspec(property(get = get_Diagnostics))::Unity::Services::Core::Internal::CoreDiagnostics* Diagnostics;

  __declspec(property(get = get_Metrics))::Unity::Services::Core::Internal::CoreMetrics* Metrics;

  __declspec(property(get = get_Options, put = set_Options))::Unity::Services::Core::InitializationOptions* Options;

  __declspec(property(get = get_Registry))::Unity::Services::Core::Internal::CoreRegistry* Registry;

  __declspec(property(get = get_State, put = set_State))::Unity::Services::Core::ServicesInitializationState State;

  /// @brief Field <Diagnostics>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Diagnostics_k__BackingField,
                      put = __cordl_internal_set__Diagnostics_k__BackingField))::Unity::Services::Core::Internal::CoreDiagnostics* _Diagnostics_k__BackingField;

  /// @brief Field <Metrics>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Metrics_k__BackingField,
                      put = __cordl_internal_set__Metrics_k__BackingField))::Unity::Services::Core::Internal::CoreMetrics* _Metrics_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField))::Unity::Services::Core::InitializationOptions* _Options_k__BackingField;

  /// @brief Field <Registry>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Registry_k__BackingField,
                      put = __cordl_internal_set__Registry_k__BackingField))::Unity::Services::Core::Internal::CoreRegistry* _Registry_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::Unity::Services::Core::ServicesInitializationState _State_k__BackingField;

  /// @brief Field m_Initialization, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Initialization, put = __cordl_internal_set_m_Initialization))::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* m_Initialization;

  /// @brief Convert operator to "::Unity::Services::Core::IUnityServices"
  constexpr operator ::Unity::Services::Core::IUnityServices*() noexcept;

  /// @brief Method EnableInitializationAsync, addr 0x2670d2c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* EnableInitializationAsync();

  /// @brief Method HasRequestedInitialization, addr 0x2670f10, size 0x10, virtual false, abstract: false, final false
  inline bool HasRequestedInitialization();

  /// @brief Method InitializeAsync, addr 0x2670e38, size 0xd8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Core::InitializationOptions* options);

  /// @brief Method InitializeServicesAsync, addr 0x2670f20, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeServicesAsync();

  static inline ::Unity::Services::Core::Internal::UnityServicesInternal* New_ctor(::Unity::Services::Core::Internal::CoreRegistry* registry, ::Unity::Services::Core::Internal::CoreMetrics* metrics,
                                                                                   ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics);

  /// @brief Method SendInitializationMetrics, addr 0x2670fec, size 0x15c, virtual false, abstract: false, final false
  inline void SendInitializationMetrics(::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>* packageInitInfos);

  /// @brief Method <InitializeAsync>g__HasInitializationFailed|20_0, addr 0x2671148, size 0x80, virtual false, abstract: false, final false
  inline bool _InitializeAsync_g__HasInitializationFailed_20_0();

  constexpr bool const& __cordl_internal_get_CanInitialize() const;

  constexpr bool& __cordl_internal_get_CanInitialize();

  constexpr ::Unity::Services::Core::Internal::CoreDiagnostics*& __cordl_internal_get__Diagnostics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreDiagnostics*> const& __cordl_internal_get__Diagnostics_k__BackingField() const;

  constexpr ::Unity::Services::Core::Internal::CoreMetrics*& __cordl_internal_get__Metrics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreMetrics*> const& __cordl_internal_get__Metrics_k__BackingField() const;

  constexpr ::Unity::Services::Core::InitializationOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::InitializationOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Unity::Services::Core::Internal::CoreRegistry*& __cordl_internal_get__Registry_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreRegistry*> const& __cordl_internal_get__Registry_k__BackingField() const;

  constexpr ::Unity::Services::Core::ServicesInitializationState const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::Unity::Services::Core::ServicesInitializationState& __cordl_internal_get__State_k__BackingField();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_m_Initialization();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const& __cordl_internal_get_m_Initialization() const;

  constexpr void __cordl_internal_set_CanInitialize(bool value);

  constexpr void __cordl_internal_set__Diagnostics_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics* value);

  constexpr void __cordl_internal_set__Metrics_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics* value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Unity::Services::Core::InitializationOptions* value);

  constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::CoreRegistry* value);

  constexpr void __cordl_internal_set__State_k__BackingField(::Unity::Services::Core::ServicesInitializationState value);

  constexpr void __cordl_internal_set_m_Initialization(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x2670a48, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Internal::CoreRegistry* registry, ::Unity::Services::Core::Internal::CoreMetrics* metrics,
                    ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics);

  /// @brief Method get_Diagnostics, addr 0x2670e30, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::CoreDiagnostics* get_Diagnostics();

  /// @brief Method get_Metrics, addr 0x2670e28, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::CoreMetrics* get_Metrics();

  /// @brief Method get_Options, addr 0x2670e10, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::InitializationOptions* get_Options();

  /// @brief Method get_Registry, addr 0x2670e20, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::CoreRegistry* get_Registry();

  /// @brief Method get_State, addr 0x2670e00, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::ServicesInitializationState get_State();

  /// @brief Convert to "::Unity::Services::Core::IUnityServices"
  constexpr ::Unity::Services::Core::IUnityServices* i___Unity__Services__Core__IUnityServices() noexcept;

  /// @brief Method set_Options, addr 0x2670e18, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Unity::Services::Core::InitializationOptions* value);

  /// @brief Method set_State, addr 0x2670e08, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Unity::Services::Core::ServicesInitializationState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityServicesInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityServicesInternal(UnityServicesInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityServicesInternal(UnityServicesInternal const&) = delete;

  /// @brief Field <State>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Unity::Services::Core::ServicesInitializationState ____State_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* ____Options_k__BackingField;

  /// @brief Field CanInitialize, offset: 0x20, size: 0x1, def value: None
  bool ___CanInitialize;

  /// @brief Field m_Initialization, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___m_Initialization;

  /// @brief Field <Registry>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreRegistry* ____Registry_k__BackingField;

  /// @brief Field <Metrics>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreMetrics* ____Metrics_k__BackingField;

  /// @brief Field <Diagnostics>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreDiagnostics* ____Diagnostics_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Options_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ___CanInitialize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ___m_Initialization) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Registry_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Metrics_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Diagnostics_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityServicesInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal*, "Unity.Services.Core.Internal", "UnityServicesInternal");
NEED_NO_BOX(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*, "Unity.Services.Core.Internal", "UnityServicesInternal/<>c__DisplayClass22_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d, "Unity.Services.Core.Internal",
                       "UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24, "Unity.Services.Core.Internal",
                       "UnityServicesInternal/<EnableInitializationAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20, "Unity.Services.Core.Internal", "UnityServicesInternal/<InitializeAsync>d__20");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22, "Unity.Services.Core.Internal",
                       "UnityServicesInternal/<InitializeServicesAsync>d__22");
