#pragma once
#include "Amazon/DynamoDBv2/zzzz__BoolConverterV1_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BoolConverterV2_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBBool_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolConverterV2.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::BoolConverterV2::*)(bool, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*>)>(
    &::Amazon::DynamoDBv2::BoolConverterV2::TryTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x120e7f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolConverterV2.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::BoolConverterV2::*)(bool, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>)>(
    &::Amazon::DynamoDBv2::BoolConverterV2::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120e86c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolConverterV2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BoolConverterV2::*)()>(&::Amazon::DynamoDBv2::BoolConverterV2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120e878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Amazon::DynamoDBv2::BoolConverterV2::TryTo(bool value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, b);
}
inline bool Amazon::DynamoDBv2::BoolConverterV2::TryTo(bool value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, p);
}
inline ::Amazon::DynamoDBv2::BoolConverterV2* Amazon::DynamoDBv2::BoolConverterV2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BoolConverterV2*>());
}
inline void Amazon::DynamoDBv2::BoolConverterV2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolConverterV2*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BoolConverterV2::BoolConverterV2() {}
