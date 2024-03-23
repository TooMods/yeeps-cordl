#pragma once
#include "Amazon/DynamoDBv2/zzzz__Converter_1_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__EnumConverterV1_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::EnumConverterV1.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::EnumConverterV1::*)(::bs_hook::EnumPtr, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>)>(&::Amazon::DynamoDBv2::EnumConverterV1::TryTo)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x120d0f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::EnumConverterV1.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::EnumConverterV1::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::System::Type*, ByRef<::bs_hook::EnumPtr>)>(&::Amazon::DynamoDBv2::EnumConverterV1::TryFrom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x120d288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::EnumConverterV1.ConvertEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::bs_hook::EnumPtr (::Amazon::DynamoDBv2::EnumConverterV1::*)(::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::System::Type*)>(&::Amazon::DynamoDBv2::EnumConverterV1::ConvertEnum)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x120d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), "ConvertEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::EnumConverterV1.ConvertEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::EnumPtr (*)(::StringW, ::System::Type*)>(&::Amazon::DynamoDBv2::EnumConverterV1::ConvertEnum)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x120d3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), "ConvertEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::EnumConverterV1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::EnumConverterV1::*)()>(&::Amazon::DynamoDBv2::EnumConverterV1::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x120d508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Amazon::DynamoDBv2::EnumConverterV1::TryTo(::bs_hook::EnumPtr value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, p);
}
inline bool Amazon::DynamoDBv2::EnumConverterV1::TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::bs_hook::EnumPtr> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p, targetType, result);
}
inline ::bs_hook::EnumPtr Amazon::DynamoDBv2::EnumConverterV1::ConvertEnum(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), "ConvertEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::bs_hook::EnumPtr, false>(this, ___internal_method, p, targetType);
}
inline ::bs_hook::EnumPtr Amazon::DynamoDBv2::EnumConverterV1::ConvertEnum(::StringW s, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), "ConvertEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::bs_hook::EnumPtr, false>(nullptr, ___internal_method, s, targetType);
}
inline ::Amazon::DynamoDBv2::EnumConverterV1* Amazon::DynamoDBv2::EnumConverterV1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::EnumConverterV1*>());
}
inline void Amazon::DynamoDBv2::EnumConverterV1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::EnumConverterV1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::EnumConverterV1::EnumConverterV1() {}
