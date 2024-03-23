#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__Select_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Select._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Select::*)(::StringW)>(&::Amazon::DynamoDBv2::Select::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1213154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Select.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Select* (*)(::StringW)>(&::Amazon::DynamoDBv2::Select::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12131bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Select.op_Implicit___Amazon__DynamoDBv2__Select_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Select* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::Select::op_Implicit___Amazon__DynamoDBv2__Select_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1213228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::Select::setStaticF_ALL_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Select*, "ALL_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>(
      std::forward<::Amazon::DynamoDBv2::Select*>(value));
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::getStaticF_ALL_ATTRIBUTES() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Select*, "ALL_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>();
}
inline void Amazon::DynamoDBv2::Select::setStaticF_ALL_PROJECTED_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Select*, "ALL_PROJECTED_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>(
      std::forward<::Amazon::DynamoDBv2::Select*>(value));
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::getStaticF_ALL_PROJECTED_ATTRIBUTES() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Select*, "ALL_PROJECTED_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>();
}
inline void Amazon::DynamoDBv2::Select::setStaticF_COUNT(::Amazon::DynamoDBv2::Select* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Select*, "COUNT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>(
      std::forward<::Amazon::DynamoDBv2::Select*>(value));
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::getStaticF_COUNT() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Select*, "COUNT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>();
}
inline void Amazon::DynamoDBv2::Select::setStaticF_SPECIFIC_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Select*, "SPECIFIC_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>(
      std::forward<::Amazon::DynamoDBv2::Select*>(value));
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::getStaticF_SPECIFIC_ATTRIBUTES() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Select*, "SPECIFIC_ATTRIBUTES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get>();
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Select*>(value));
}
inline void Amazon::DynamoDBv2::Select::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Select*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Select* Amazon::DynamoDBv2::Select::op_Implicit___Amazon__DynamoDBv2__Select_(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Select*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Select*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Select::Select() {}
