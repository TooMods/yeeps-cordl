#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__StreamViewType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::StreamViewType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::StreamViewType::*)(::StringW)>(&::Amazon::DynamoDBv2::StreamViewType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12137e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::StreamViewType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::StreamViewType* (*)(::StringW)>(&::Amazon::DynamoDBv2::StreamViewType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1213848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::StreamViewType.op_Implicit___Amazon__DynamoDBv2__StreamViewType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::StreamViewType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::StreamViewType::op_Implicit___Amazon__DynamoDBv2__StreamViewType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12138b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::StreamViewType::setStaticF_KEYS_ONLY(::Amazon::DynamoDBv2::StreamViewType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::StreamViewType*, "KEYS_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>(
      std::forward<::Amazon::DynamoDBv2::StreamViewType*>(value));
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::getStaticF_KEYS_ONLY() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::StreamViewType*, "KEYS_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>();
}
inline void Amazon::DynamoDBv2::StreamViewType::setStaticF_NEW_AND_OLD_IMAGES(::Amazon::DynamoDBv2::StreamViewType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::StreamViewType*, "NEW_AND_OLD_IMAGES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>(
      std::forward<::Amazon::DynamoDBv2::StreamViewType*>(value));
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::getStaticF_NEW_AND_OLD_IMAGES() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::StreamViewType*, "NEW_AND_OLD_IMAGES",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>();
}
inline void Amazon::DynamoDBv2::StreamViewType::setStaticF_NEW_IMAGE(::Amazon::DynamoDBv2::StreamViewType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::StreamViewType*, "NEW_IMAGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>(
      std::forward<::Amazon::DynamoDBv2::StreamViewType*>(value));
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::getStaticF_NEW_IMAGE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::StreamViewType*, "NEW_IMAGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>();
}
inline void Amazon::DynamoDBv2::StreamViewType::setStaticF_OLD_IMAGE(::Amazon::DynamoDBv2::StreamViewType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::StreamViewType*, "OLD_IMAGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>(
      std::forward<::Amazon::DynamoDBv2::StreamViewType*>(value));
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::getStaticF_OLD_IMAGE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::StreamViewType*, "OLD_IMAGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get>();
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::StreamViewType*>(value));
}
inline void Amazon::DynamoDBv2::StreamViewType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::StreamViewType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::StreamViewType::op_Implicit___Amazon__DynamoDBv2__StreamViewType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::StreamViewType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::StreamViewType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::StreamViewType::StreamViewType() {}
