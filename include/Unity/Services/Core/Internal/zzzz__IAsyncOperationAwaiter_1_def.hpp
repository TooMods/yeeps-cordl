#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOperationAwaiter_1)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
template <typename T> class IAsyncOperationAwaiter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1);
// Type: Unity.Services.Core.Internal::IAsyncOperationAwaiter`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IAsyncOperationAwaiter`1<T>*
class CORDL_TYPE IAsyncOperationAwaiter_1 {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T GetResult();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() noexcept;

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperationAwaiter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncOperationAwaiter_1(IAsyncOperationAwaiter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperationAwaiter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncOperationAwaiter_1(IAsyncOperationAwaiter_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1, "Unity.Services.Core.Internal", "IAsyncOperationAwaiter`1");
