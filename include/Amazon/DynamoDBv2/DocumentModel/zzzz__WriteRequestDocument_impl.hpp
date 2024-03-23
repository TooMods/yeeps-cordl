#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__WriteRequestDocument_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__WriteRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument.get_WriteRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::WriteRequest* (::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::get_WriteRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164ca00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "get_WriteRequest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument.set_WriteRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::*)(::Amazon::DynamoDBv2::Model::WriteRequest*)>(
    &::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::set_WriteRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164ca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "set_WriteRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::WriteRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument.get_Document
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::get_Document)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164ca10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "get_Document",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument.set_Document
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::*)(::Amazon::DynamoDBv2::DocumentModel::Document*)>(
    &::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::set_Document)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164ca18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "set_Document", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164b5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::WriteRequest*& Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_get__WriteRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteRequest_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::WriteRequest*> const&
Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_get__WriteRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteRequest_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_set__WriteRequest_k__BackingField(::Amazon::DynamoDBv2::Model::WriteRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WriteRequest_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::Document*& Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_get__Document_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Document_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Document*> const&
Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_get__Document_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Document_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::__cordl_internal_set__Document_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Document* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Document_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::WriteRequest* Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::get_WriteRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(),
                                                                             "get_WriteRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::WriteRequest*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::set_WriteRequest(::Amazon::DynamoDBv2::Model::WriteRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "set_WriteRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::WriteRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::get_Document() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(),
                                                                             "get_Document", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::set_Document(::Amazon::DynamoDBv2::DocumentModel::Document* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(), "set_Document", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument* Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument::WriteRequestDocument() {}
