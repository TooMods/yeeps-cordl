#pragma once
#include "Amazon/DynamoDBv2/zzzz__Converter_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__GuidConverterV1_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::GuidConverterV1.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::GuidConverterV1::*)(::System::Guid, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>)>(&::Amazon::DynamoDBv2::GuidConverterV1::TryTo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x120cd20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::GuidConverterV1.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::GuidConverterV1::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::System::Type*, ByRef<::System::Guid>)>(&::Amazon::DynamoDBv2::GuidConverterV1::TryFrom)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x120cdcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::GuidConverterV1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::GuidConverterV1::*)()>(&::Amazon::DynamoDBv2::GuidConverterV1::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x120ce18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Amazon::DynamoDBv2::GuidConverterV1::TryTo(::System::Guid value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, p);
}
inline bool Amazon::DynamoDBv2::GuidConverterV1::TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::System::Guid> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p, targetType, result);
}
inline ::Amazon::DynamoDBv2::GuidConverterV1* Amazon::DynamoDBv2::GuidConverterV1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::GuidConverterV1*>());
}
inline void Amazon::DynamoDBv2::GuidConverterV1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GuidConverterV1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::GuidConverterV1::GuidConverterV1() {}
