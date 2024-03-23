#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__OperationType_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::OperationType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::OperationType::*)(::StringW)>(&::Amazon::DynamoDBv2::OperationType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1213f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::OperationType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::OperationType* (*)(::StringW)>(&::Amazon::DynamoDBv2::OperationType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1213fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::OperationType.op_Implicit___Amazon__DynamoDBv2__OperationType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::OperationType* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::OperationType::op_Implicit___Amazon__DynamoDBv2__OperationType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1214010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::OperationType::setStaticF_INSERT(::Amazon::DynamoDBv2::OperationType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::OperationType*, "INSERT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>(
      std::forward<::Amazon::DynamoDBv2::OperationType*>(value));
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::getStaticF_INSERT() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::OperationType*, "INSERT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>();
}
inline void Amazon::DynamoDBv2::OperationType::setStaticF_MODIFY(::Amazon::DynamoDBv2::OperationType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::OperationType*, "MODIFY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>(
      std::forward<::Amazon::DynamoDBv2::OperationType*>(value));
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::getStaticF_MODIFY() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::OperationType*, "MODIFY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>();
}
inline void Amazon::DynamoDBv2::OperationType::setStaticF_REMOVE(::Amazon::DynamoDBv2::OperationType* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::OperationType*, "REMOVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>(
      std::forward<::Amazon::DynamoDBv2::OperationType*>(value));
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::getStaticF_REMOVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::OperationType*, "REMOVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get>();
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::OperationType*>(value));
}
inline void Amazon::DynamoDBv2::OperationType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::OperationType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::OperationType* Amazon::DynamoDBv2::OperationType::op_Implicit___Amazon__DynamoDBv2__OperationType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::OperationType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::OperationType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::OperationType::OperationType() {}
