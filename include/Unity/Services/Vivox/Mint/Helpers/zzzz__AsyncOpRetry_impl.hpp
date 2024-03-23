#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Helpers/zzzz__AsyncOpRetry_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/Helpers/zzzz__AsyncOpRetry_1_def.hpp"
template <typename T> inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry::FromCreateAsync(::System::Func_2<int32_t, T>* op) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry*>::get(), "FromCreateAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*, false>(nullptr, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry::AsyncOpRetry() {}
