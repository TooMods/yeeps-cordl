#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__KeyType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::KeyType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::KeyType::*)(::StringW)>(&::Amazon::DynamoDBv2::KeyType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1211ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::KeyType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::KeyType* (*)(::StringW)>(&::Amazon::DynamoDBv2::KeyType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::KeyType.op_Implicit___Amazon__DynamoDBv2__KeyType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::KeyType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::KeyType::op_Implicit___Amazon__DynamoDBv2__KeyType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1211d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::KeyType::setStaticF_HASH(::Amazon::DynamoDBv2::KeyType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::KeyType*, "HASH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get>(
      std::forward<::Amazon::DynamoDBv2::KeyType*>(value));
}
inline ::Amazon::DynamoDBv2::KeyType* Amazon::DynamoDBv2::KeyType::getStaticF_HASH() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::KeyType*, "HASH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get>();
}
inline void Amazon::DynamoDBv2::KeyType::setStaticF_RANGE(::Amazon::DynamoDBv2::KeyType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::KeyType*, "RANGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get>(
      std::forward<::Amazon::DynamoDBv2::KeyType*>(value));
}
inline ::Amazon::DynamoDBv2::KeyType* Amazon::DynamoDBv2::KeyType::getStaticF_RANGE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::KeyType*, "RANGE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get>();
}
inline ::Amazon::DynamoDBv2::KeyType* Amazon::DynamoDBv2::KeyType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::KeyType*>(value));
}
inline void Amazon::DynamoDBv2::KeyType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::KeyType* Amazon::DynamoDBv2::KeyType::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::KeyType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::KeyType* Amazon::DynamoDBv2::KeyType::op_Implicit___Amazon__DynamoDBv2__KeyType_(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::KeyType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::KeyType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::KeyType::KeyType() {}
