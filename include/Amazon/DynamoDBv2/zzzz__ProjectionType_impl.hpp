#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ProjectionType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ProjectionType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ProjectionType::*)(::StringW)>(&::Amazon::DynamoDBv2::ProjectionType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1212058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ProjectionType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ProjectionType* (*)(::StringW)>(&::Amazon::DynamoDBv2::ProjectionType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12120c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ProjectionType.op_Implicit___Amazon__DynamoDBv2__ProjectionType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ProjectionType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ProjectionType::op_Implicit___Amazon__DynamoDBv2__ProjectionType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x121212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ProjectionType::setStaticF_ALL(::Amazon::DynamoDBv2::ProjectionType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ProjectionType*, "ALL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>(
      std::forward<::Amazon::DynamoDBv2::ProjectionType*>(value));
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::getStaticF_ALL() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ProjectionType*, "ALL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>();
}
inline void Amazon::DynamoDBv2::ProjectionType::setStaticF_INCLUDE(::Amazon::DynamoDBv2::ProjectionType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ProjectionType*, "INCLUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>(
      std::forward<::Amazon::DynamoDBv2::ProjectionType*>(value));
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::getStaticF_INCLUDE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ProjectionType*, "INCLUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>();
}
inline void Amazon::DynamoDBv2::ProjectionType::setStaticF_KEYS_ONLY(::Amazon::DynamoDBv2::ProjectionType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ProjectionType*, "KEYS_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>(
      std::forward<::Amazon::DynamoDBv2::ProjectionType*>(value));
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::getStaticF_KEYS_ONLY() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ProjectionType*, "KEYS_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get>();
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ProjectionType*>(value));
}
inline void Amazon::DynamoDBv2::ProjectionType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ProjectionType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ProjectionType* Amazon::DynamoDBv2::ProjectionType::op_Implicit___Amazon__DynamoDBv2__ProjectionType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ProjectionType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ProjectionType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ProjectionType::ProjectionType() {}
