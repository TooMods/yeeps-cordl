#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationExtensions)
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
class Object;
}
namespace Unity::Services::Core::Internal {
template <typename T> struct AsyncOperationAwaiter_1;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationAwaiter;
}
namespace Unity::Services::Core::Internal {
template <typename T> class IAsyncOperation_1;
}
namespace Unity::Services::Core::Internal {
class IAsyncOperation;
}
namespace Unity::Services::Core::Internal {
class __AsyncOperationExtensions____c__DisplayClass1_0;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __AsyncOperationExtensions____c__DisplayClass3_0_1;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class AsyncOperationExtensions;
}
namespace Unity::Services::Core::Internal {
class __AsyncOperationExtensions____c__DisplayClass1_0;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __AsyncOperationExtensions____c__DisplayClass3_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::AsyncOperationExtensions);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::AsyncOperationExtensions::<>c__DisplayClass1_0*
class CORDL_TYPE __AsyncOperationExtensions____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskCompletionSource,
                      put = __cordl_internal_set_taskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* taskCompletionSource;

  static inline ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0* New_ctor();

  /// @brief Method <AsTask>g__CompleteTask|0, addr 0x266a2ac, size 0x1dc, virtual false, abstract: false, final false
  inline void _AsTask_g__CompleteTask_0(::Unity::Services::Core::Internal::IAsyncOperation* operation);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_taskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const& __cordl_internal_get_taskCompletionSource() const;

  constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x266a2a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncOperationExtensions____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationExtensions____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOperationExtensions____c__DisplayClass1_0(__AsyncOperationExtensions____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationExtensions____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOperationExtensions____c__DisplayClass1_0(__AsyncOperationExtensions____c__DisplayClass1_0 const&) = delete;

  /// @brief Field taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0, ___taskCompletionSource) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<>c__DisplayClass3_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncOperationExtensions::<>c__DisplayClass3_0`1<T>*
class CORDL_TYPE __AsyncOperationExtensions____c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskCompletionSource, put = __cordl_internal_set_taskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<T>* taskCompletionSource;

  static inline ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>* New_ctor();

  /// @brief Method <AsTask>g__CompleteTask|0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AsTask_g__CompleteTask_0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* operation);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get_taskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const& __cordl_internal_get_taskCompletionSource() const;

  constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncOperationExtensions____c__DisplayClass3_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationExtensions____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOperationExtensions____c__DisplayClass3_0_1(__AsyncOperationExtensions____c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationExtensions____c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOperationExtensions____c__DisplayClass3_0_1(__AsyncOperationExtensions____c__DisplayClass3_0_1 const&) = delete;

  /// @brief Field taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ___taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::AsyncOperationExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::AsyncOperationExtensions*
class CORDL_TYPE AsyncOperationExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0;

  template <typename T> using __c__DisplayClass3_0_1 = ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>;

  /// @brief Method AsTask, addr 0x2669ff0, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* AsTask(::Unity::Services::Core::Internal::IAsyncOperation* self);

  /// @brief Method AsTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* AsTask(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* self);

  /// @brief Method GetAwaiter, addr 0x2669fec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::AsyncOperationAwaiter GetAwaiter(::Unity::Services::Core::Internal::IAsyncOperation* self);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T> GetAwaiter(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperationExtensions(AsyncOperationExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperationExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperationExtensions(AsyncOperationExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::AsyncOperationExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::AsyncOperationExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::AsyncOperationExtensions*, "Unity.Services.Core.Internal", "AsyncOperationExtensions");
NEED_NO_BOX(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*, "Unity.Services.Core.Internal", "AsyncOperationExtensions/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1, "Unity.Services.Core.Internal",
                                     "AsyncOperationExtensions/<>c__DisplayClass3_0`1");
