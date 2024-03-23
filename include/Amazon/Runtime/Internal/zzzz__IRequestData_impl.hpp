#pragma once
#include "Amazon/Runtime/Internal/zzzz__IRequestData_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRequestData.get_Unmarshaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* (::Amazon::Runtime::Internal::IRequestData::*)()>(
    &::Amazon::Runtime::Internal::IRequestData::get_Unmarshaller)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRequestData.get_Metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::RequestMetrics* (::Amazon::Runtime::Internal::IRequestData::*)()>(
    &::Amazon::Runtime::Internal::IRequestData::get_Metrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRequestData.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::Runtime::Internal::IRequestData::*)()>(
    &::Amazon::Runtime::Internal::IRequestData::get_Request)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRequestData.get_Signer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::Internal::IRequestData::*)()>(
    &::Amazon::Runtime::Internal::IRequestData::get_Signer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRequestData.get_RetriesAttempt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::IRequestData::*)()>(
    &::Amazon::Runtime::Internal::IRequestData::get_RetriesAttempt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 4));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Amazon::Runtime::Internal::IRequestData::get_Unmarshaller() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Util::RequestMetrics* Amazon::Runtime::Internal::IRequestData::get_Metrics() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::RequestMetrics*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::IRequest* Amazon::Runtime::Internal::IRequestData::get_Request() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::Internal::IRequestData::get_Signer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::IRequestData::get_RetriesAttempt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRequestData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
