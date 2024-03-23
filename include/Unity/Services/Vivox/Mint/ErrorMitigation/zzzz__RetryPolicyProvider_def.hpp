#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RetryPolicyProvider)
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
class IRetryPolicyProvider;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class IRetryPolicy_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class RetryPolicyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider);
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicyProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicyProvider*
class CORDL_TYPE RetryPolicyProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider"
  constexpr operator ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*() noexcept;

  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation);

  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider* New_ctor();

  /// @brief Method .ctor, addr 0x1707528, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider"
  constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider* i___Unity__Services__Vivox__Mint__ErrorMitigation__IRetryPolicyProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryPolicyProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicyProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryPolicyProvider(RetryPolicyProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryPolicyProvider(RetryPolicyProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
NEED_NO_BOX(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*, "Unity.Services.Vivox.Mint.ErrorMitigation", "RetryPolicyProvider");
