#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "AWSSDK/Runtime/Internal/Util/zzzz__ExceptionUtils_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::AWSSDK::Runtime::Internal::Util::ExceptionUtils.DetermineHttpStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Net::HttpStatusCode> (*)(::System::Exception*)>(
    &::AWSSDK::Runtime::Internal::Util::ExceptionUtils::DetermineHttpStatusCode)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x21f0d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AWSSDK::Runtime::Internal::Util::ExceptionUtils*>::get(), "DetermineHttpStatusCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::System::Net::HttpStatusCode> AWSSDK::Runtime::Internal::Util::ExceptionUtils::DetermineHttpStatusCode(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AWSSDK::Runtime::Internal::Util::ExceptionUtils*>::get(), "DetermineHttpStatusCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::HttpStatusCode>, false>(nullptr, ___internal_method, e);
}
template <typename T> inline bool AWSSDK::Runtime::Internal::Util::ExceptionUtils::IsInnerException(::System::Exception* exception) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AWSSDK::Runtime::Internal::Util::ExceptionUtils*>::get(), "IsInnerException",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
template <typename T> inline bool AWSSDK::Runtime::Internal::Util::ExceptionUtils::IsInnerException(::System::Exception* exception, ByRef<T> inner) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AWSSDK::Runtime::Internal::Util::ExceptionUtils*>::get(), "IsInnerException",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception, inner);
}
// Ctor Parameters []
constexpr ::AWSSDK::Runtime::Internal::Util::ExceptionUtils::ExceptionUtils() {}
