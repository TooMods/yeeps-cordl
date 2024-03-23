#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnityThreadUtils)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Threading::Internal {
class IUnityThreadUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils);
// Type: Unity.Services.Core.Threading.Internal::IUnityThreadUtils
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Threading::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Threading.Internal::IUnityThreadUtils*
class CORDL_TYPE IUnityThreadUtils {
public:
  // Declarations
  __declspec(property(get = get_IsRunningOnUnityThread)) bool IsRunningOnUnityThread;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* PostAsync(::System::Action* action);

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* PostAsync(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::System::Func_1<T>* action);

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T Send(::System::Func_1<T>* action);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T Send(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Send(::System::Action* action);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Send(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method get_IsRunningOnUnityThread, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsRunningOnUnityThread();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUnityThreadUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnityThreadUtils(IUnityThreadUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnityThreadUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnityThreadUtils(IUnityThreadUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Threading::Internal
NEED_NO_BOX(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*, "Unity.Services.Core.Threading.Internal", "IUnityThreadUtils");
