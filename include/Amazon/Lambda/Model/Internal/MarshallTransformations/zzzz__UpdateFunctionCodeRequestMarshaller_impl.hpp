#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__UpdateFunctionCodeRequestMarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__UpdateFunctionCodeRequest_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28fa39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::*)(::Amazon::Lambda::Model::UpdateFunctionCodeRequest*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x28fa418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                    "Marshall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28faed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                    "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28faf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28faf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Lambda__Model__UpdateFunctionCodeRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::IRequest*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, input);
}
inline ::Amazon::Runtime::Internal::IRequest*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::Marshall(::Amazon::Lambda::Model::UpdateFunctionCodeRequest* publicRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                  "Marshall", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::UpdateFunctionCodeRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, publicRequest);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                  "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::UpdateFunctionCodeRequestMarshaller::UpdateFunctionCodeRequestMarshaller() {}
