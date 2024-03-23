#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BackupType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BackupType::*)(::StringW)>(&::Amazon::DynamoDBv2::BackupType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x120fbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BackupType* (*)(::StringW)>(&::Amazon::DynamoDBv2::BackupType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x120fc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupType.op_Implicit___Amazon__DynamoDBv2__BackupType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BackupType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::BackupType::op_Implicit___Amazon__DynamoDBv2__BackupType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x120fcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::BackupType::setStaticF_AWS_BACKUP(::Amazon::DynamoDBv2::BackupType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupType*, "AWS_BACKUP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupType*>(value));
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::getStaticF_AWS_BACKUP() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupType*, "AWS_BACKUP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>();
}
inline void Amazon::DynamoDBv2::BackupType::setStaticF_SYSTEM(::Amazon::DynamoDBv2::BackupType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupType*, "SYSTEM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupType*>(value));
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::getStaticF_SYSTEM() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupType*, "SYSTEM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>();
}
inline void Amazon::DynamoDBv2::BackupType::setStaticF_USER(::Amazon::DynamoDBv2::BackupType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupType*, "USER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupType*>(value));
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::getStaticF_USER() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupType*, "USER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get>();
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BackupType*>(value));
}
inline void Amazon::DynamoDBv2::BackupType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BackupType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BackupType* Amazon::DynamoDBv2::BackupType::op_Implicit___Amazon__DynamoDBv2__BackupType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BackupType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BackupType::BackupType() {}
