#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityServicesInitializer)
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInitializer___EnableServicesInitializationAsync_d__1;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class UnityServicesInitializer;
}
namespace Unity::Services::Core::Internal {
struct __UnityServicesInitializer___EnableServicesInitializationAsync_d__1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityServicesInitializer);
MARK_VAL_T(::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1);
// Type: ::<EnableServicesInitializationAsync>d__1
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::UnityServicesInitializer::<EnableServicesInitializationAsync>d__1
struct CORDL_TYPE __UnityServicesInitializer___EnableServicesInitializationAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2670b0c, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2670df4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServicesInitializer___EnableServicesInitializationAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __UnityServicesInitializer___EnableServicesInitializationAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::UnityServicesInitializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::UnityServicesInitializer*
class CORDL_TYPE UnityServicesInitializer : public ::System::Object {
public:
  // Declarations
  using _EnableServicesInitializationAsync_d__1 = ::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1;

  /// @brief Method CreateStaticInstance, addr 0x2670794, size 0x2b4, virtual false, abstract: false, final false
  static inline void CreateStaticInstance();

  /// @brief Method EnableServicesInitializationAsync, addr 0x2670a84, size 0x88, virtual false, abstract: false, final false
  static inline void EnableServicesInitializationAsync();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityServicesInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityServicesInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityServicesInitializer(UnityServicesInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityServicesInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityServicesInitializer(UnityServicesInitializer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInitializer, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityServicesInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInitializer*, "Unity.Services.Core.Internal", "UnityServicesInitializer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__UnityServicesInitializer___EnableServicesInitializationAsync_d__1, "Unity.Services.Core.Internal",
                       "UnityServicesInitializer/<EnableServicesInitializationAsync>d__1");
