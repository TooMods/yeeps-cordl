#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityThreadUtilsInternal)
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
namespace Unity::Services::Core::Threading::Internal {
class IUnityThreadUtils;
}
// Forward declare root types
namespace Unity::Services::Core::Threading::Internal {
class UnityThreadUtilsInternal;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal);
// Type: Unity.Services.Core.Threading.Internal::UnityThreadUtilsInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Threading::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Threading.Internal::UnityThreadUtilsInternal*
class CORDL_TYPE UnityThreadUtilsInternal : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Services_Core_Threading_Internal_IUnityThreadUtils_get_IsRunningOnUnityThread)) bool Unity_Services_Core_Threading_Internal_IUnityThreadUtils_IsRunningOnUnityThread;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
  constexpr operator ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*() noexcept;

  static inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* New_ctor();

  /// @brief Method PostAsync, addr 0x27c73c8, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* PostAsync(::System::Action* action);

  /// @brief Method PostAsync, addr 0x27c74e0, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* PostAsync(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::System::Func_1<T>* action);

  /// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Send(::System::Func_1<T>* action);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Send(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Send, addr 0x27c7600, size 0x48, virtual false, abstract: false, final false
  static inline void Send(::System::Action* action);

  /// @brief Method Send, addr 0x27c7648, size 0x60, virtual false, abstract: false, final false
  static inline void Send(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync, addr 0x27c76b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Unity_Services_Core_Threading_Internal_IUnityThreadUtils_PostAsync(::System::Action* action);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync, addr 0x27c76b8, size 0xc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Unity_Services_Core_Threading_Internal_IUnityThreadUtils_PostAsync(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Unity_Services_Core_Threading_Internal_IUnityThreadUtils_PostAsync(::System::Func_1<T>* action);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* Unity_Services_Core_Threading_Internal_IUnityThreadUtils_PostAsync(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T Unity_Services_Core_Threading_Internal_IUnityThreadUtils_Send(::System::Func_1<T>* action);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T Unity_Services_Core_Threading_Internal_IUnityThreadUtils_Send(::System::Func_2<::System::Object*, T>* action, ::System::Object* state);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send, addr 0x27c76c4, size 0x8, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Threading_Internal_IUnityThreadUtils_Send(::System::Action* action);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send, addr 0x27c76cc, size 0xc, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Threading_Internal_IUnityThreadUtils_Send(::System::Action_1<::System::Object*>* action, ::System::Object* state);

  /// @brief Method Unity.Services.Core.Threading.Internal.IUnityThreadUtils.get_IsRunningOnUnityThread, addr 0x27c76a8, size 0x8, virtual true, abstract: false, final true
  inline bool Unity_Services_Core_Threading_Internal_IUnityThreadUtils_get_IsRunningOnUnityThread();

  /// @brief Method .ctor, addr 0x27c76d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
  constexpr ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils* i___Unity__Services__Core__Threading__Internal__IUnityThreadUtils() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityThreadUtilsInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtilsInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityThreadUtilsInternal(UnityThreadUtilsInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtilsInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityThreadUtilsInternal(UnityThreadUtilsInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Threading::Internal
NEED_NO_BOX(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*, "Unity.Services.Core.Threading.Internal", "UnityThreadUtilsInternal");
