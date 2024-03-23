#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactWriteItemsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactWriteItem_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnConsumedCapacity_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnItemCollectionMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.get_ClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ClientRequestToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10537c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "get_ClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.set_ClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ClientRequestToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10537d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ClientRequestToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.IsSetClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetClientRequestToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10537d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "IsSetClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.get_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnConsumedCapacity* (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10537e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.set_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)(::Amazon::DynamoDBv2::ReturnConsumedCapacity*)>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10537f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.IsSetReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10537f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.get_ReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                 "get_ReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.set_ReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*)>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ReturnItemCollectionMetrics",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.IsSetReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1053868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                 "IsSetReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.get_TransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* (
    ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(&::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_TransactItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10538c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "get_TransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.set_TransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*)>(&::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_TransactItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10538d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_TransactItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest.IsSetTransactItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetTransactItems)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10538d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               "IsSetTransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x105392c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__clientRequestToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRequestToken;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__clientRequestToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRequestToken;
}
constexpr void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_set__clientRequestToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientRequestToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__returnConsumedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const&
Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__returnConsumedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnConsumedCapacity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*& Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__returnItemCollectionMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnItemCollectionMetrics;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*> const&
Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__returnItemCollectionMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnItemCollectionMetrics;
}
constexpr void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnItemCollectionMetrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*& Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__transactItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*> const&
Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_get__transactItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactItems;
}
constexpr void
Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::__cordl_internal_set__transactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transactItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ClientRequestToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "get_ClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ClientRequestToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ClientRequestToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetClientRequestToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "IsSetClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_ReturnItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "get_ReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_ReturnItemCollectionMetrics",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetReturnItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "IsSetReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::get_TransactItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "get_TransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::set_TransactItems(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(), "set_TransactItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::TransactWriteItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::IsSetTransactItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             "IsSetTransactItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest* Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>());
}
inline void Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest::TransactWriteItemsRequest() {}
