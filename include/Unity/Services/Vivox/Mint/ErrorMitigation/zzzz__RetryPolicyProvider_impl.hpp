#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicyProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicyProvider_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicy_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider"
constexpr Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::operator ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider"
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::i___Unity__Services__Vivox__Mint__ErrorMitigation__IRetryPolicyProvider() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*>(static_cast<void*>(this));
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*>::get(), "ForOperation",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, operation);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*>::get(), "ForOperation",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, operation);
}
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*>());
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyProvider::RetryPolicyProvider() {}
