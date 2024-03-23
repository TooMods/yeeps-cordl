#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__IResponseUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T,R>"
template <typename T, typename R> constexpr Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<T, R>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T,R>"
template <typename T, typename R>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>*
Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<T, R>::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_T_R_() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<T, R>*>(static_cast<void*>(this));
}
template <typename T, typename R>
inline ::Amazon::Runtime::AmazonServiceException* Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<T, R>::UnmarshallException(R input, ::System::Exception* innerException,
                                                                                                                                           ::System::Net::HttpStatusCode statusCode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<T, R>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonServiceException*, false>(this, ___internal_method, input, innerException, statusCode);
}
