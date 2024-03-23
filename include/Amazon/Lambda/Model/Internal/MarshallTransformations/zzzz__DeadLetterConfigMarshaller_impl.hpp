#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__DeadLetterConfigMarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__DeadLetterConfig_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IRequestMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::*)(
    ::Amazon::Lambda::Model::DeadLetterConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2eb3ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb3d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::DeadLetterConfig*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<
    ::Amazon::Lambda::Model::DeadLetterConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::DeadLetterConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::DeadLetterConfig*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::DeadLetterConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::
    i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__Lambda__Model__DeadLetterConfig____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::DeadLetterConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::setStaticF_Instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get>();
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::Marshall(::Amazon::Lambda::Model::DeadLetterConfig* requestObject,
                                                                                                           ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get(), "Marshall",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestObject, context);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller* Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeadLetterConfigMarshaller::DeadLetterConfigMarshaller() {}
