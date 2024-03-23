#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ExportStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ExportStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::ExportStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x121161c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ExportStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::ExportStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ExportStatus.op_Implicit___Amazon__DynamoDBv2__ExportStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ExportStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ExportStatus::op_Implicit___Amazon__DynamoDBv2__ExportStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12116f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ExportStatus::setStaticF_COMPLETED(::Amazon::DynamoDBv2::ExportStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ExportStatus*, "COMPLETED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ExportStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::getStaticF_COMPLETED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ExportStatus*, "COMPLETED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ExportStatus::setStaticF_FAILED(::Amazon::DynamoDBv2::ExportStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ExportStatus*, "FAILED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ExportStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::getStaticF_FAILED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ExportStatus*, "FAILED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ExportStatus::setStaticF_IN_PROGRESS(::Amazon::DynamoDBv2::ExportStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ExportStatus*, "IN_PROGRESS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ExportStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::getStaticF_IN_PROGRESS() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ExportStatus*, "IN_PROGRESS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ExportStatus*>(value));
}
inline void Amazon::DynamoDBv2::ExportStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ExportStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ExportStatus* Amazon::DynamoDBv2::ExportStatus::op_Implicit___Amazon__DynamoDBv2__ExportStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ExportStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ExportStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ExportStatus::ExportStatus() {}
