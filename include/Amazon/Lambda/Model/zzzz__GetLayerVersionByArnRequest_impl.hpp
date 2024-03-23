#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetLayerVersionByArnRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetLayerVersionByArnRequest.get_Arn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetLayerVersionByArnRequest::*)()>(
    &::Amazon::Lambda::Model::GetLayerVersionByArnRequest::get_Arn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                               "get_Arn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetLayerVersionByArnRequest.set_Arn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetLayerVersionByArnRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetLayerVersionByArnRequest::set_Arn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(), "set_Arn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetLayerVersionByArnRequest.IsSetArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetLayerVersionByArnRequest::*)()>(
    &::Amazon::Lambda::Model::GetLayerVersionByArnRequest::IsSetArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                               "IsSetArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetLayerVersionByArnRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetLayerVersionByArnRequest::*)()>(
    &::Amazon::Lambda::Model::GetLayerVersionByArnRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::GetLayerVersionByArnRequest::__cordl_internal_get__arn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetLayerVersionByArnRequest::__cordl_internal_get__arn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arn;
}
constexpr void Amazon::Lambda::Model::GetLayerVersionByArnRequest::__cordl_internal_set__arn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::GetLayerVersionByArnRequest::get_Arn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                             "get_Arn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetLayerVersionByArnRequest::set_Arn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(), "set_Arn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetLayerVersionByArnRequest::IsSetArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                             "IsSetArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetLayerVersionByArnRequest* Amazon::Lambda::Model::GetLayerVersionByArnRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>());
}
inline void Amazon::Lambda::Model::GetLayerVersionByArnRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetLayerVersionByArnRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetLayerVersionByArnRequest::GetLayerVersionByArnRequest() {}
