#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Registration/zzzz__CorePackageInitializer_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CorePackageInitializer)
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
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
class ExternalUserId;
}
namespace Unity::Services::Core::Configuration {
class ProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
namespace Unity::Services::Core::Device {
class InstallationId;
}
namespace Unity::Services::Core::Environments::Internal {
class Environments;
}
namespace Unity::Services::Core::Environments::Internal {
class IEnvironments;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___CreateDiagnosticsComponents_d__54;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GenerateProjectConfigurationAsync_d__46;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___InitializeProjectConfigAsync_d__45;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___Initialize_d__40;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer____c__DisplayClass40_0;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ActionScheduler;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsComponentProvider;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Threading::Internal {
class UnityThreadUtilsInternal;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Core::Registration {
class CorePackageInitializer;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___CreateDiagnosticsComponents_d__54;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GenerateProjectConfigurationAsync_d__46;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___InitializeProjectConfigAsync_d__45;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer___Initialize_d__40;
}
namespace Unity::Services::Core::Registration {
struct __CorePackageInitializer____c__DisplayClass40_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Registration::CorePackageInitializer);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40);
MARK_VAL_T(::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0);
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<>c__DisplayClass40_0
struct CORDL_TYPE __CorePackageInitializer____c__DisplayClass40_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer____c__DisplayClass40_0();

  // Ctor Parameters [CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }]
  constexpr __CorePackageInitializer____c__DisplayClass40_0(::Unity::Services::Core::Internal::CoreRegistry* registry,
                                                            ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this) noexcept;

  /// @brief Field registry, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreRegistry* registry;

  /// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
  ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0, registry) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0, __4__this) == 0x8, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<Initialize>d__40
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<Initialize>d__40
struct CORDL_TYPE __CorePackageInitializer___Initialize_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df8774, size 0x6b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df8e2c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___Initialize_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __CorePackageInitializer___Initialize_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                        ::Unity::Services::Core::Internal::CoreRegistry* registry, ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this,
                                                        ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0 __8__1,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field registry, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreRegistry* registry;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this;

  /// @brief Field <>8__1, offset: 0x30, size: 0x10, def value: None
  ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0 __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, registry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<InitializeProjectConfigAsync>d__45
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<InitializeProjectConfigAsync>d__45
struct CORDL_TYPE __CorePackageInitializer___InitializeProjectConfigAsync_d__45 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df8e38, size 0x21c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df9054, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___InitializeProjectConfigAsync_d__45();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>", modifiers: "",
  // def_value: None }]
  constexpr __CorePackageInitializer___InitializeProjectConfigAsync_d__45(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this,
      ::Unity::Services::Core::InitializationOptions* options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this;

  /// @brief Field options, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* options;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<GenerateProjectConfigurationAsync>d__46
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<GenerateProjectConfigurationAsync>d__46
struct CORDL_TYPE __CorePackageInitializer___GenerateProjectConfigurationAsync_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df9060, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df9318, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___GenerateProjectConfigurationAsync_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>", modifiers: "", def_value: None }, CppParam { name: "options", ty:
  // "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }]
  constexpr __CorePackageInitializer___GenerateProjectConfigurationAsync_d__46(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __t__builder,
      ::Unity::Services::Core::InitializationOptions* options,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __t__builder;

  /// @brief Field options, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* options;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<GetSerializedConfigOrEmptyAsync>d__47
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<GetSerializedConfigOrEmptyAsync>d__47
struct CORDL_TYPE __CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df9370, size 0x3c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df9730, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }]
  constexpr __CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47, __u__1) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<CreateDiagnosticsComponents>d__54
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<CreateDiagnosticsComponents>d__54
struct CORDL_TYPE __CorePackageInitializer___CreateDiagnosticsComponents_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df9788, size 0x308, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df9a90, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___CreateDiagnosticsComponents_d__54();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __CorePackageInitializer___CreateDiagnosticsComponents_d__54(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __t__builder,
      ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: ::<GetSerializedProjectConfigurationAsync>d__56
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: ::CorePackageInitializer::<GetSerializedProjectConfigurationAsync>d__56
struct CORDL_TYPE __CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1df9ae8, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1df9da0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                    ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this,
                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
// Type: Unity.Services.Core.Registration::CorePackageInitializer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Registration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Registration::CorePackageInitializer*
class CORDL_TYPE CorePackageInitializer : public ::System::Object {
public:
  // Declarations
  using _CreateDiagnosticsComponents_d__54 = ::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54;

  using _GenerateProjectConfigurationAsync_d__46 = ::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46;

  using _GetSerializedConfigOrEmptyAsync_d__47 = ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47;

  using _GetSerializedProjectConfigurationAsync_d__56 = ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56;

  using _InitializeProjectConfigAsync_d__45 = ::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45;

  using _Initialize_d__40 = ::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40;

  using __c__DisplayClass40_0 = ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0;

  __declspec(property(get = get_ActionScheduler, put = set_ActionScheduler))::Unity::Services::Core::Scheduler::Internal::ActionScheduler* ActionScheduler;

  __declspec(property(get = get_CloudProjectId, put = set_CloudProjectId))::Unity::Services::Core::Configuration::Internal::ICloudProjectId* CloudProjectId;

  __declspec(property(get = get_DiagnosticsFactory, put = set_DiagnosticsFactory))::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* DiagnosticsFactory;

  __declspec(property(get = get_Environments, put = set_Environments))::Unity::Services::Core::Environments::Internal::Environments* Environments;

  __declspec(property(get = get_ExternalUserId, put = set_ExternalUserId))::Unity::Services::Core::Configuration::ExternalUserId* ExternalUserId;

  __declspec(property(get = get_InstallationId, put = set_InstallationId))::Unity::Services::Core::Device::InstallationId* InstallationId;

  __declspec(property(get = get_MetricsFactory, put = set_MetricsFactory))::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* MetricsFactory;

  __declspec(property(get = get_ProjectConfig, put = set_ProjectConfig))::Unity::Services::Core::Configuration::ProjectConfiguration* ProjectConfig;

  __declspec(property(get = get_UnityThreadUtils, put = set_UnityThreadUtils))::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* UnityThreadUtils;

  /// @brief Field <ActionScheduler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ActionScheduler_k__BackingField,
                      put = __cordl_internal_set__ActionScheduler_k__BackingField))::Unity::Services::Core::Scheduler::Internal::ActionScheduler* _ActionScheduler_k__BackingField;

  /// @brief Field <CloudProjectId>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CloudProjectId_k__BackingField,
                      put = __cordl_internal_set__CloudProjectId_k__BackingField))::Unity::Services::Core::Configuration::Internal::ICloudProjectId* _CloudProjectId_k__BackingField;

  /// @brief Field <DiagnosticsFactory>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__DiagnosticsFactory_k__BackingField,
                      put = __cordl_internal_set__DiagnosticsFactory_k__BackingField))::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* _DiagnosticsFactory_k__BackingField;

  /// @brief Field <Environments>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Environments_k__BackingField,
                      put = __cordl_internal_set__Environments_k__BackingField))::Unity::Services::Core::Environments::Internal::Environments* _Environments_k__BackingField;

  /// @brief Field <ExternalUserId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ExternalUserId_k__BackingField,
                      put = __cordl_internal_set__ExternalUserId_k__BackingField))::Unity::Services::Core::Configuration::ExternalUserId* _ExternalUserId_k__BackingField;

  /// @brief Field <InstallationId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__InstallationId_k__BackingField,
                      put = __cordl_internal_set__InstallationId_k__BackingField))::Unity::Services::Core::Device::InstallationId* _InstallationId_k__BackingField;

  /// @brief Field <MetricsFactory>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__MetricsFactory_k__BackingField,
                      put = __cordl_internal_set__MetricsFactory_k__BackingField))::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* _MetricsFactory_k__BackingField;

  /// @brief Field <ProjectConfig>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ProjectConfig_k__BackingField,
                      put = __cordl_internal_set__ProjectConfig_k__BackingField))::Unity::Services::Core::Configuration::ProjectConfiguration* _ProjectConfig_k__BackingField;

  /// @brief Field <UnityThreadUtils>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityThreadUtils_k__BackingField,
                      put = __cordl_internal_set__UnityThreadUtils_k__BackingField))::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* _UnityThreadUtils_k__BackingField;

  /// @brief Field m_CurrentInitializationOptions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentInitializationOptions,
                      put = __cordl_internal_set_m_CurrentInitializationOptions))::Unity::Services::Core::InitializationOptions* m_CurrentInitializationOptions;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
  constexpr operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*() noexcept;

  /// @brief Method CreateDiagnosticsComponents, addr 0x1df8398, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>* CreateDiagnosticsComponents();

  /// @brief Method FreeOptionsDependantComponents, addr 0x1df7c1c, size 0xc, virtual false, abstract: false, final false
  inline void FreeOptionsDependantComponents();

  /// @brief Method GenerateProjectConfigurationAsync, addr 0x1df7dec, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>*
  GenerateProjectConfigurationAsync(::Unity::Services::Core::InitializationOptions* options);

  /// @brief Method GetSerializedConfigOrEmptyAsync, addr 0x1df7edc, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* GetSerializedConfigOrEmptyAsync();

  /// @brief Method GetSerializedProjectConfigurationAsync, addr 0x1df8488, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetSerializedProjectConfigurationAsync();

  /// @brief Method HaveInitOptionsChanged, addr 0x1df7adc, size 0x140, virtual false, abstract: false, final false
  inline bool HaveInitOptionsChanged();

  /// @brief Method Initialize, addr 0x1df7a00, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry* registry);

  /// @brief Method InitializeActionScheduler, addr 0x1df7c9c, size 0x74, virtual false, abstract: false, final false
  inline void InitializeActionScheduler();

  /// @brief Method InitializeCloudProjectId, addr 0x1df8258, size 0x70, virtual false, abstract: false, final false
  inline void InitializeCloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId);

  /// @brief Method InitializeDiagnostics, addr 0x1df82c8, size 0x34, virtual false, abstract: false, final false
  inline void InitializeDiagnostics(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                    ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                                    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method InitializeEnvironments, addr 0x1df812c, size 0x12c, virtual false, abstract: false, final false
  inline void InitializeEnvironments(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration);

  /// @brief Method InitializeExternalUserId, addr 0x1df7fc8, size 0x164, virtual false, abstract: false, final false
  inline void InitializeExternalUserId(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration);

  /// @brief Method InitializeInstallationId, addr 0x1df7c28, size 0x74, virtual false, abstract: false, final false
  inline void InitializeInstallationId();

  /// @brief Method InitializeMetrics, addr 0x1df82fc, size 0x34, virtual false, abstract: false, final false
  inline void InitializeMetrics(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                                ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method InitializeProjectConfigAsync, addr 0x1df7d10, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeProjectConfigAsync(::Unity::Services::Core::InitializationOptions* options);

  /// @brief Method InitializeUnityThreadUtils, addr 0x1df8330, size 0x68, virtual false, abstract: false, final false
  inline void InitializeUnityThreadUtils();

  static inline ::Unity::Services::Core::Registration::CorePackageInitializer* New_ctor();

  /// @brief Method Register, addr 0x1df7778, size 0x280, virtual false, abstract: false, final false
  static inline void Register();

  /// @brief Method <Initialize>g__RegisterProvidedComponents|40_0, addr 0x1df8578, size 0x198, virtual false, abstract: false, final false
  inline void _Initialize_g__RegisterProvidedComponents_40_0(ByRef<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Initialize>g__SendFailedInitDiagnostic|40_1, addr 0x1df8710, size 0x64, virtual false, abstract: false, final false
  static inline bool _Initialize_g__SendFailedInitDiagnostic_40_1(::System::Exception* reason);

  constexpr ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*& __cordl_internal_get__ActionScheduler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*> const& __cordl_internal_get__ActionScheduler_k__BackingField() const;

  constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& __cordl_internal_get__CloudProjectId_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*> const& __cordl_internal_get__CloudProjectId_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*& __cordl_internal_get__DiagnosticsFactory_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> const& __cordl_internal_get__DiagnosticsFactory_k__BackingField() const;

  constexpr ::Unity::Services::Core::Environments::Internal::Environments*& __cordl_internal_get__Environments_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Environments::Internal::Environments*> const& __cordl_internal_get__Environments_k__BackingField() const;

  constexpr ::Unity::Services::Core::Configuration::ExternalUserId*& __cordl_internal_get__ExternalUserId_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::ExternalUserId*> const& __cordl_internal_get__ExternalUserId_k__BackingField() const;

  constexpr ::Unity::Services::Core::Device::InstallationId*& __cordl_internal_get__InstallationId_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Device::InstallationId*> const& __cordl_internal_get__InstallationId_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*& __cordl_internal_get__MetricsFactory_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*> const& __cordl_internal_get__MetricsFactory_k__BackingField() const;

  constexpr ::Unity::Services::Core::Configuration::ProjectConfiguration*& __cordl_internal_get__ProjectConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::ProjectConfiguration*> const& __cordl_internal_get__ProjectConfig_k__BackingField() const;

  constexpr ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*& __cordl_internal_get__UnityThreadUtils_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*> const& __cordl_internal_get__UnityThreadUtils_k__BackingField() const;

  constexpr ::Unity::Services::Core::InitializationOptions*& __cordl_internal_get_m_CurrentInitializationOptions();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::InitializationOptions*> const& __cordl_internal_get_m_CurrentInitializationOptions() const;

  constexpr void __cordl_internal_set__ActionScheduler_k__BackingField(::Unity::Services::Core::Scheduler::Internal::ActionScheduler* value);

  constexpr void __cordl_internal_set__CloudProjectId_k__BackingField(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* value);

  constexpr void __cordl_internal_set__DiagnosticsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* value);

  constexpr void __cordl_internal_set__Environments_k__BackingField(::Unity::Services::Core::Environments::Internal::Environments* value);

  constexpr void __cordl_internal_set__ExternalUserId_k__BackingField(::Unity::Services::Core::Configuration::ExternalUserId* value);

  constexpr void __cordl_internal_set__InstallationId_k__BackingField(::Unity::Services::Core::Device::InstallationId* value);

  constexpr void __cordl_internal_set__MetricsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* value);

  constexpr void __cordl_internal_set__ProjectConfig_k__BackingField(::Unity::Services::Core::Configuration::ProjectConfiguration* value);

  constexpr void __cordl_internal_set__UnityThreadUtils_k__BackingField(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* value);

  constexpr void __cordl_internal_set_m_CurrentInitializationOptions(::Unity::Services::Core::InitializationOptions* value);

  /// @brief Method .ctor, addr 0x1df79f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActionScheduler, addr 0x1df76e8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* get_ActionScheduler();

  /// @brief Method get_CloudProjectId, addr 0x1df7738, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* get_CloudProjectId();

  /// @brief Method get_DiagnosticsFactory, addr 0x1df7748, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* get_DiagnosticsFactory();

  /// @brief Method get_Environments, addr 0x1df7718, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Environments::Internal::Environments* get_Environments();

  /// @brief Method get_ExternalUserId, addr 0x1df7728, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Configuration::ExternalUserId* get_ExternalUserId();

  /// @brief Method get_InstallationId, addr 0x1df76f8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Device::InstallationId* get_InstallationId();

  /// @brief Method get_MetricsFactory, addr 0x1df7758, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* get_MetricsFactory();

  /// @brief Method get_ProjectConfig, addr 0x1df7708, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Configuration::ProjectConfiguration* get_ProjectConfig();

  /// @brief Method get_UnityThreadUtils, addr 0x1df7768, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* get_UnityThreadUtils();

  /// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
  constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsComponentProvider() noexcept;

  /// @brief Method set_ActionScheduler, addr 0x1df76f0, size 0x8, virtual false, abstract: false, final false
  inline void set_ActionScheduler(::Unity::Services::Core::Scheduler::Internal::ActionScheduler* value);

  /// @brief Method set_CloudProjectId, addr 0x1df7740, size 0x8, virtual false, abstract: false, final false
  inline void set_CloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* value);

  /// @brief Method set_DiagnosticsFactory, addr 0x1df7750, size 0x8, virtual false, abstract: false, final false
  inline void set_DiagnosticsFactory(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* value);

  /// @brief Method set_Environments, addr 0x1df7720, size 0x8, virtual false, abstract: false, final false
  inline void set_Environments(::Unity::Services::Core::Environments::Internal::Environments* value);

  /// @brief Method set_ExternalUserId, addr 0x1df7730, size 0x8, virtual false, abstract: false, final false
  inline void set_ExternalUserId(::Unity::Services::Core::Configuration::ExternalUserId* value);

  /// @brief Method set_InstallationId, addr 0x1df7700, size 0x8, virtual false, abstract: false, final false
  inline void set_InstallationId(::Unity::Services::Core::Device::InstallationId* value);

  /// @brief Method set_MetricsFactory, addr 0x1df7760, size 0x8, virtual false, abstract: false, final false
  inline void set_MetricsFactory(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* value);

  /// @brief Method set_ProjectConfig, addr 0x1df7710, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectConfig(::Unity::Services::Core::Configuration::ProjectConfiguration* value);

  /// @brief Method set_UnityThreadUtils, addr 0x1df7770, size 0x8, virtual false, abstract: false, final false
  inline void set_UnityThreadUtils(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CorePackageInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CorePackageInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CorePackageInitializer(CorePackageInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CorePackageInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CorePackageInitializer(CorePackageInitializer const&) = delete;

  /// @brief Field <ActionScheduler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* ____ActionScheduler_k__BackingField;

  /// @brief Field <InstallationId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Device::InstallationId* ____InstallationId_k__BackingField;

  /// @brief Field <ProjectConfig>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Configuration::ProjectConfiguration* ____ProjectConfig_k__BackingField;

  /// @brief Field <Environments>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Core::Environments::Internal::Environments* ____Environments_k__BackingField;

  /// @brief Field <ExternalUserId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Core::Configuration::ExternalUserId* ____ExternalUserId_k__BackingField;

  /// @brief Field <CloudProjectId>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* ____CloudProjectId_k__BackingField;

  /// @brief Field <DiagnosticsFactory>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* ____DiagnosticsFactory_k__BackingField;

  /// @brief Field <MetricsFactory>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* ____MetricsFactory_k__BackingField;

  /// @brief Field <UnityThreadUtils>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* ____UnityThreadUtils_k__BackingField;

  /// @brief Field m_CurrentInitializationOptions, offset: 0x58, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* ___m_CurrentInitializationOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ActionScheduler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____InstallationId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ProjectConfig_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____Environments_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ExternalUserId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____CloudProjectId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____DiagnosticsFactory_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____MetricsFactory_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____UnityThreadUtils_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ___m_CurrentInitializationOptions) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Core::Registration
NEED_NO_BOX(::Unity::Services::Core::Registration::CorePackageInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer*, "Unity.Services.Core.Registration", "CorePackageInitializer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54, "Unity.Services.Core.Registration",
                       "CorePackageInitializer/<CreateDiagnosticsComponents>d__54");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46, "Unity.Services.Core.Registration",
                       "CorePackageInitializer/<GenerateProjectConfigurationAsync>d__46");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47, "Unity.Services.Core.Registration",
                       "CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__47");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56, "Unity.Services.Core.Registration",
                       "CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__56");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45, "Unity.Services.Core.Registration",
                       "CorePackageInitializer/<InitializeProjectConfigAsync>d__45");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40, "Unity.Services.Core.Registration", "CorePackageInitializer/<Initialize>d__40");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0, "Unity.Services.Core.Registration", "CorePackageInitializer/<>c__DisplayClass40_0");
