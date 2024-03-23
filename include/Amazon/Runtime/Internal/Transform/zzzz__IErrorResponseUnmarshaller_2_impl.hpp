#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__IErrorResponseUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorResponse_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller,TUnmarshalleContext>"
template <typename TUnmarshaller, typename TUnmarshalleContext>
constexpr Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    TUnmarshaller, TUnmarshalleContext>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller,TUnmarshalleContext>"
template <typename TUnmarshaller, typename TUnmarshalleContext>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*
Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<TUnmarshaller,
                                                                   TUnmarshalleContext>::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_TUnmarshaller_TUnmarshalleContext_() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*>(static_cast<void*>(this));
}
template <typename TUnmarshaller, typename TUnmarshalleContext>
inline TUnmarshaller Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>::Unmarshall(TUnmarshalleContext input,
                                                                                                                                        ::Amazon::Runtime::Internal::ErrorResponse* errorResponse) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<TUnmarshaller, TUnmarshalleContext>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TUnmarshaller, false>(this, ___internal_method, input, errorResponse);
}
