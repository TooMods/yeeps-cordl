#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__SSEType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::SSEType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::SSEType::*)(::StringW)>(&::Amazon::DynamoDBv2::SSEType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1213608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::SSEType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::SSEType* (*)(::StringW)>(&::Amazon::DynamoDBv2::SSEType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1213670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::SSEType.op_Implicit___Amazon__DynamoDBv2__SSEType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::SSEType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::SSEType::op_Implicit___Amazon__DynamoDBv2__SSEType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12136dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::SSEType::setStaticF_AES256(::Amazon::DynamoDBv2::SSEType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::SSEType*, "AES256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get>(
      std::forward<::Amazon::DynamoDBv2::SSEType*>(value));
}
inline ::Amazon::DynamoDBv2::SSEType* Amazon::DynamoDBv2::SSEType::getStaticF_AES256() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::SSEType*, "AES256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get>();
}
inline void Amazon::DynamoDBv2::SSEType::setStaticF_KMS(::Amazon::DynamoDBv2::SSEType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::SSEType*, "KMS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get>(
      std::forward<::Amazon::DynamoDBv2::SSEType*>(value));
}
inline ::Amazon::DynamoDBv2::SSEType* Amazon::DynamoDBv2::SSEType::getStaticF_KMS() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::SSEType*, "KMS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get>();
}
inline ::Amazon::DynamoDBv2::SSEType* Amazon::DynamoDBv2::SSEType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::SSEType*>(value));
}
inline void Amazon::DynamoDBv2::SSEType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::SSEType* Amazon::DynamoDBv2::SSEType::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::SSEType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::SSEType* Amazon::DynamoDBv2::SSEType::op_Implicit___Amazon__DynamoDBv2__SSEType_(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SSEType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::SSEType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::SSEType::SSEType() {}
