#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Amazon/Runtime/zzzz__FederatedAuthenticationCancelledException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::FederatedAuthenticationCancelledException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAuthenticationCancelledException::*)(::StringW)>(
    &::Amazon::Runtime::FederatedAuthenticationCancelledException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1feae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAuthenticationCancelledException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAuthenticationCancelledException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAuthenticationCancelledException::*)(::StringW, ::System::Exception*)>(
    &::Amazon::Runtime::FederatedAuthenticationCancelledException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1feaee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAuthenticationCancelledException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::FederatedAuthenticationCancelledException* Amazon::Runtime::FederatedAuthenticationCancelledException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::FederatedAuthenticationCancelledException*>(msg));
}
inline void Amazon::Runtime::FederatedAuthenticationCancelledException::_ctor(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAuthenticationCancelledException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::Amazon::Runtime::FederatedAuthenticationCancelledException* Amazon::Runtime::FederatedAuthenticationCancelledException::New_ctor(::StringW msg, ::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::FederatedAuthenticationCancelledException*>(msg, inner));
}
inline void Amazon::Runtime::FederatedAuthenticationCancelledException::_ctor(::StringW msg, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAuthenticationCancelledException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, inner);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::FederatedAuthenticationCancelledException::FederatedAuthenticationCancelledException() {}
