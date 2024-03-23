#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ExportFormat_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportFormat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ExportFormat::*)(::StringW)>(&::Amazon::DynamoDBv2::ExportFormat::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1211444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportFormat.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ExportFormat* (*)(::StringW)>(&::Amazon::DynamoDBv2::ExportFormat::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12114ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportFormat.op_Implicit___Amazon__DynamoDBv2__ExportFormat_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ExportFormat* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ExportFormat::op_Implicit___Amazon__DynamoDBv2__ExportFormat_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1211518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ExportFormat::setStaticF_DYNAMODB_JSON(::Amazon::DynamoDBv2::ExportFormat* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ExportFormat*, "DYNAMODB_JSON", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get>(
      std::forward<::Amazon::DynamoDBv2::ExportFormat*>(value));
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::ExportFormat::getStaticF_DYNAMODB_JSON() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ExportFormat*, "DYNAMODB_JSON", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get>();
}
inline void Amazon::DynamoDBv2::ExportFormat::setStaticF_ION(::Amazon::DynamoDBv2::ExportFormat* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ExportFormat*, "ION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get>(
      std::forward<::Amazon::DynamoDBv2::ExportFormat*>(value));
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::ExportFormat::getStaticF_ION() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ExportFormat*, "ION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get>();
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::ExportFormat::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ExportFormat*>(value));
}
inline void Amazon::DynamoDBv2::ExportFormat::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::ExportFormat::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ExportFormat*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::ExportFormat::op_Implicit___Amazon__DynamoDBv2__ExportFormat_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportFormat*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ExportFormat*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ExportFormat::ExportFormat() {}
