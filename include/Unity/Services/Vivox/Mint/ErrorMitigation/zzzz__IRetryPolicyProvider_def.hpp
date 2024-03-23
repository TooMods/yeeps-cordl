#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRetryPolicyProvider)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class IRetryPolicy_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class IRetryPolicyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider);
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::IRetryPolicyProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::IRetryPolicyProvider*
class CORDL_TYPE IRetryPolicyProvider {
public:
  // Declarations
  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation);

  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation);

  // Ctor Parameters [CppParam { name: "", ty: "IRetryPolicyProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRetryPolicyProvider(IRetryPolicyProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRetryPolicyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRetryPolicyProvider(IRetryPolicyProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
NEED_NO_BOX(::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*, "Unity.Services.Vivox.Mint.ErrorMitigation", "IRetryPolicyProvider");
