#pragma once
#include "Amazon/DynamoDBv2/zzzz__CollectionConverter_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__PrimitiveCollectionConverterV1_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::*)()>(
    &::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x120df64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::*)(
    ::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>)>(&::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryTo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x120dfd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::*)(
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryFrom)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x120e060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::*)(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryFrom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x120e118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1* Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>());
}
inline void Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, pl);
}
inline bool Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pl, targetType, result);
}
inline bool Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l, targetType, result);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1::PrimitiveCollectionConverterV1() {}
