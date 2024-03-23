#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ThrottleReason)
// Forward declare root types
namespace Amazon::Lambda {
class ThrottleReason;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::ThrottleReason);
// Type: Amazon.Lambda::ThrottleReason
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::ThrottleReason*
class CORDL_TYPE ThrottleReason : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field CallerRateLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CallerRateLimitExceeded, put = setStaticF_CallerRateLimitExceeded))::Amazon::Lambda::ThrottleReason* CallerRateLimitExceeded;

  /// @brief Field ConcurrentInvocationLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConcurrentInvocationLimitExceeded,
                             put = setStaticF_ConcurrentInvocationLimitExceeded))::Amazon::Lambda::ThrottleReason* ConcurrentInvocationLimitExceeded;

  /// @brief Field FunctionInvocationRateLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FunctionInvocationRateLimitExceeded,
                             put = setStaticF_FunctionInvocationRateLimitExceeded))::Amazon::Lambda::ThrottleReason* FunctionInvocationRateLimitExceeded;

  /// @brief Field ReservedFunctionConcurrentInvocationLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReservedFunctionConcurrentInvocationLimitExceeded,
                             put = setStaticF_ReservedFunctionConcurrentInvocationLimitExceeded))::Amazon::Lambda::ThrottleReason* ReservedFunctionConcurrentInvocationLimitExceeded;

  /// @brief Field ReservedFunctionInvocationRateLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReservedFunctionInvocationRateLimitExceeded,
                             put = setStaticF_ReservedFunctionInvocationRateLimitExceeded))::Amazon::Lambda::ThrottleReason* ReservedFunctionInvocationRateLimitExceeded;

  /// @brief Method FindValue, addr 0x2bb76b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::ThrottleReason* FindValue(::StringW value);

  static inline ::Amazon::Lambda::ThrottleReason* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb7650, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::ThrottleReason* getStaticF_CallerRateLimitExceeded();

  static inline ::Amazon::Lambda::ThrottleReason* getStaticF_ConcurrentInvocationLimitExceeded();

  static inline ::Amazon::Lambda::ThrottleReason* getStaticF_FunctionInvocationRateLimitExceeded();

  static inline ::Amazon::Lambda::ThrottleReason* getStaticF_ReservedFunctionConcurrentInvocationLimitExceeded();

  static inline ::Amazon::Lambda::ThrottleReason* getStaticF_ReservedFunctionInvocationRateLimitExceeded();

  /// @brief Method op_Implicit, addr 0x2bb7724, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::ThrottleReason* op_Implicit___Amazon__Lambda__ThrottleReason_(::StringW value);

  static inline void setStaticF_CallerRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value);

  static inline void setStaticF_ConcurrentInvocationLimitExceeded(::Amazon::Lambda::ThrottleReason* value);

  static inline void setStaticF_FunctionInvocationRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value);

  static inline void setStaticF_ReservedFunctionConcurrentInvocationLimitExceeded(::Amazon::Lambda::ThrottleReason* value);

  static inline void setStaticF_ReservedFunctionInvocationRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrottleReason();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrottleReason", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrottleReason(ThrottleReason&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrottleReason", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrottleReason(ThrottleReason const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::ThrottleReason, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::ThrottleReason);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::ThrottleReason*, "Amazon.Lambda", "ThrottleReason");
