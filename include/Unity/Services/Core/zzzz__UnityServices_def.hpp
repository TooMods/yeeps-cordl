#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityServices)
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
class Task;
}
namespace System {
class Object;
}
namespace Unity::Services::Core {
class ExternalUserIdProperty;
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
namespace Unity::Services::Core {
struct __UnityServices___InitializeAsync_d__15;
}
// Forward declare root types
namespace Unity::Services::Core {
class UnityServices;
}
namespace Unity::Services::Core {
struct __UnityServices___InitializeAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::UnityServices);
MARK_VAL_T(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15);
// Type: ::<InitializeAsync>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: true
// CS Name: ::UnityServices::<InitializeAsync>d__15
struct CORDL_TYPE __UnityServices___InitializeAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23bad64, size 0x5f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23bb354, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityServices___InitializeAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __UnityServices___InitializeAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                    ::Unity::Services::Core::InitializationOptions* options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__1,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field options, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::InitializationOptions* options;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, __u__2) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Core
// Type: Unity.Services.Core::UnityServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::UnityServices*
class CORDL_TYPE UnityServices : public ::System::Object {
public:
  // Declarations
  using _InitializeAsync_d__15 = ::Unity::Services::Core::__UnityServices___InitializeAsync_d__15;

  /// @brief Field ExternalUserIdProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExternalUserIdProperty, put = setStaticF_ExternalUserIdProperty))::Unity::Services::Core::ExternalUserIdProperty* ExternalUserIdProperty;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::Unity::Services::Core::IUnityServices* _Instance_k__BackingField;

  /// @brief Field <InstantiationCompletion>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__InstantiationCompletion_k__BackingField,
                             put = setStaticF__InstantiationCompletion_k__BackingField))::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* _InstantiationCompletion_k__BackingField;

  /// @brief Method InitializeAsync, addr 0x23baba4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x23bac20, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Core::InitializationOptions* options);

  static inline ::Unity::Services::Core::ExternalUserIdProperty* getStaticF_ExternalUserIdProperty();

  static inline ::Unity::Services::Core::IUnityServices* getStaticF__Instance_k__BackingField();

  static inline ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* getStaticF__InstantiationCompletion_k__BackingField();

  /// @brief Method get_ExternalUserId, addr 0x23baab4, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_ExternalUserId();

  /// @brief Method get_Instance, addr 0x23ba6d0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::IUnityServices* get_Instance();

  /// @brief Method get_InstantiationCompletion, addr 0x23ba784, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* get_InstantiationCompletion();

  /// @brief Method get_State, addr 0x23ba838, size 0x21c, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::ServicesInitializationState get_State();

  static inline void setStaticF_ExternalUserIdProperty(::Unity::Services::Core::ExternalUserIdProperty* value);

  static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::IUnityServices* value);

  static inline void setStaticF__InstantiationCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method set_ExternalUserId, addr 0x23bab18, size 0x8c, virtual false, abstract: false, final false
  static inline void set_ExternalUserId(::StringW value);

  /// @brief Method set_Instance, addr 0x23ba728, size 0x5c, virtual false, abstract: false, final false
  static inline void set_Instance(::Unity::Services::Core::IUnityServices* value);

  /// @brief Method set_InstantiationCompletion, addr 0x23ba7dc, size 0x5c, virtual false, abstract: false, final false
  static inline void set_InstantiationCompletion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityServices(UnityServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityServices(UnityServices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::UnityServices, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::UnityServices);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::UnityServices*, "Unity.Services.Core", "UnityServices");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::__UnityServices___InitializeAsync_d__15, "Unity.Services.Core", "UnityServices/<InitializeAsync>d__15");
