#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingAssetsConfigurationLoader)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Core::Configuration {
class IConfigurationLoader;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
struct __StreamingAssetsConfigurationLoader___GetConfigAsync_d__0;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class StreamingAssetsConfigurationLoader;
}
namespace Unity::Services::Core::Configuration {
struct __StreamingAssetsConfigurationLoader___GetConfigAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader);
MARK_VAL_T(::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0);
// Type: ::<GetConfigAsync>d__0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: true
// CS Name: ::StreamingAssetsConfigurationLoader::<GetConfigAsync>d__0
struct CORDL_TYPE __StreamingAssetsConfigurationLoader___GetConfigAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x264b3ac, size 0x238, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x264b658, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamingAssetsConfigurationLoader___GetConfigAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __StreamingAssetsConfigurationLoader___GetConfigAsync_d__0(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0, __u__1) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Configuration
// Type: Unity.Services.Core.Configuration::StreamingAssetsConfigurationLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration::StreamingAssetsConfigurationLoader*
class CORDL_TYPE StreamingAssetsConfigurationLoader : public ::System::Object {
public:
  // Declarations
  using _GetConfigAsync_d__0 = ::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0;

  /// @brief Convert operator to "::Unity::Services::Core::Configuration::IConfigurationLoader"
  constexpr operator ::Unity::Services::Core::Configuration::IConfigurationLoader*() noexcept;

  /// @brief Method GetConfigAsync, addr 0x264b2c0, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* GetConfigAsync();

  static inline ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader* New_ctor();

  /// @brief Method .ctor, addr 0x264ab48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Configuration::IConfigurationLoader"
  constexpr ::Unity::Services::Core::Configuration::IConfigurationLoader* i___Unity__Services__Core__Configuration__IConfigurationLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamingAssetsConfigurationLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsConfigurationLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamingAssetsConfigurationLoader(StreamingAssetsConfigurationLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsConfigurationLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamingAssetsConfigurationLoader(StreamingAssetsConfigurationLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*, "Unity.Services.Core.Configuration", "StreamingAssetsConfigurationLoader");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0, "Unity.Services.Core.Configuration",
                       "StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0");
