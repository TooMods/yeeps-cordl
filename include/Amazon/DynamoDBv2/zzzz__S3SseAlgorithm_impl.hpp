#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__S3SseAlgorithm_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::S3SseAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::S3SseAlgorithm::*)(::StringW)>(&::Amazon::DynamoDBv2::S3SseAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1212d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::S3SseAlgorithm.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::S3SseAlgorithm* (*)(::StringW)>(&::Amazon::DynamoDBv2::S3SseAlgorithm::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1212dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::S3SseAlgorithm.op_Implicit___Amazon__DynamoDBv2__S3SseAlgorithm_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::S3SseAlgorithm* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::S3SseAlgorithm::op_Implicit___Amazon__DynamoDBv2__S3SseAlgorithm_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1212e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::S3SseAlgorithm::setStaticF_AES256(::Amazon::DynamoDBv2::S3SseAlgorithm* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::S3SseAlgorithm*, "AES256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get>(
      std::forward<::Amazon::DynamoDBv2::S3SseAlgorithm*>(value));
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::S3SseAlgorithm::getStaticF_AES256() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::S3SseAlgorithm*, "AES256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get>();
}
inline void Amazon::DynamoDBv2::S3SseAlgorithm::setStaticF_KMS(::Amazon::DynamoDBv2::S3SseAlgorithm* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::S3SseAlgorithm*, "KMS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get>(
      std::forward<::Amazon::DynamoDBv2::S3SseAlgorithm*>(value));
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::S3SseAlgorithm::getStaticF_KMS() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::S3SseAlgorithm*, "KMS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get>();
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::S3SseAlgorithm::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::S3SseAlgorithm*>(value));
}
inline void Amazon::DynamoDBv2::S3SseAlgorithm::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::S3SseAlgorithm::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::S3SseAlgorithm*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::S3SseAlgorithm::op_Implicit___Amazon__DynamoDBv2__S3SseAlgorithm_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::S3SseAlgorithm*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::S3SseAlgorithm::S3SseAlgorithm() {}
