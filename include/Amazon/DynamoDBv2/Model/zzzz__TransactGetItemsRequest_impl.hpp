#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactGetItemsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactGetItem_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnConsumedCapacity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.get_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnConsumedCapacity* (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::get_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                               "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.set_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)(::Amazon::DynamoDBv2::ReturnConsumedCapacity*)>(
    &::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::set_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.IsSetReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::IsSetReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1053098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                               "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.get_TransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* (
    ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)()>(&::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::get_TransactItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10530f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                               "get_TransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.set_TransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*)>(&::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::set_TransactItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(), "set_TransactItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest.IsSetTransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::IsSetTransactItems)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1053108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                               "IsSetTransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x105315c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_get__returnConsumedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const&
Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_get__returnConsumedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr void Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnConsumedCapacity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*& Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_get__transactItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*> const&
Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_get__transactItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactItems;
}
constexpr void Amazon::DynamoDBv2::Model::TransactGetItemsRequest::__cordl_internal_set__transactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transactItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::Model::TransactGetItemsRequest::get_ReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                             "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactGetItemsRequest::set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactGetItemsRequest::IsSetReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                             "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* Amazon::DynamoDBv2::Model::TransactGetItemsRequest::get_TransactItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                             "get_TransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactGetItemsRequest::set_TransactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(), "set_TransactItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactGetItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactGetItemsRequest::IsSetTransactItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                             "IsSetTransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest* Amazon::DynamoDBv2::Model::TransactGetItemsRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>());
}
inline void Amazon::DynamoDBv2::Model::TransactGetItemsRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItemsRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::TransactGetItemsRequest::TransactGetItemsRequest() {}
