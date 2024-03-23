#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IRetryPolicy_1)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class RetryPolicyConfig;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class IRetryPolicy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1);
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::IRetryPolicy`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::IRetryPolicy`1<T>*
class CORDL_TYPE IRetryPolicy_1 {
public:
  // Declarations
  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TException> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* HandleException();

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TException> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* HandleException(::System::Func_2<TException, bool>* condition);

  /// @brief Method RunAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<T>* RunAsync(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig);

  /// @brief Method UptoMaximumRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* UptoMaximumRetries(uint32_t amount);

  /// @brief Method WithDelayScale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithDelayScale(float_t scale);

  /// @brief Method WithJitterMagnitude, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithJitterMagnitude(float_t magnitude);

  /// @brief Method WithMaxDelayTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithMaxDelayTime(float_t time);

  /// @brief Method WithRetryCondition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithRetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* shouldRetry);

  // Ctor Parameters [CppParam { name: "", ty: "IRetryPolicy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRetryPolicy_1(IRetryPolicy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRetryPolicy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRetryPolicy_1(IRetryPolicy_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1, "Unity.Services.Vivox.Mint.ErrorMitigation", "IRetryPolicy`1");
