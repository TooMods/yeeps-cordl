#pragma once
#include "Amazon/DynamoDBv2/zzzz__PrimitiveCollectionConverterV1_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__CollectionConverterV2_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::CollectionConverterV2.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::CollectionConverterV2::*)(
    ::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>)>(&::Amazon::DynamoDBv2::CollectionConverterV2::TryTo)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x120e87c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::CollectionConverterV2.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::CollectionConverterV2::*)(
    ::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>)>(&::Amazon::DynamoDBv2::CollectionConverterV2::TryTo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x120eaf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::CollectionConverterV2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::CollectionConverterV2::*)()>(&::Amazon::DynamoDBv2::CollectionConverterV2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120ec60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::CollectionConverterV2::setStaticF_setTypeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::ITypeInfo*, "setTypeInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get>(
      std::forward<::Amazon::Util::Internal::ITypeInfo*>(value));
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::DynamoDBv2::CollectionConverterV2::getStaticF_setTypeInfo() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::ITypeInfo*, "setTypeInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get>();
}
inline void Amazon::DynamoDBv2::CollectionConverterV2::setStaticF_enumerableType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "enumerableType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::DynamoDBv2::CollectionConverterV2::getStaticF_enumerableType() {
  return ::cordl_internals::getStaticField<::System::Type*, "enumerableType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get>();
}
inline bool Amazon::DynamoDBv2::CollectionConverterV2::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, pl);
}
inline bool Amazon::DynamoDBv2::CollectionConverterV2::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, l);
}
inline ::Amazon::DynamoDBv2::CollectionConverterV2* Amazon::DynamoDBv2::CollectionConverterV2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::CollectionConverterV2*>());
}
inline void Amazon::DynamoDBv2::CollectionConverterV2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::CollectionConverterV2*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::CollectionConverterV2::CollectionConverterV2() {}
