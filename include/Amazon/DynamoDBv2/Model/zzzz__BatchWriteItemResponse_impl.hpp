#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchWriteItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ConsumedCapacity_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ItemCollectionMetrics_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__WriteRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.get_ConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* (
    ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(&::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_ConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12272b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "get_ConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.set_ConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*)>(&::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_ConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12272bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_ConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.IsSetConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetConsumedCapacity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12272c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "IsSetConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.get_ItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* (
        ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(&::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_ItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1227318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "get_ItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.set_ItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*)>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_ItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1227320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_ItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.IsSetItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1227328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "IsSetItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.get_UnprocessedItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* (
        ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(&::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_UnprocessedItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1227380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "get_UnprocessedItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.set_UnprocessedItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*)>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_UnprocessedItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1227388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_UnprocessedItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse.IsSetUnprocessedItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetUnprocessedItems)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1227390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               "IsSetUnprocessedItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12273e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*& Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__consumedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumedCapacity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*> const&
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__consumedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumedCapacity;
}
constexpr void
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_set__consumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____consumedCapacity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*&
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__itemCollectionMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemCollectionMetrics;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*> const&
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__itemCollectionMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemCollectionMetrics;
}
constexpr void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_set__itemCollectionMetrics(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____itemCollectionMetrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*&
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__unprocessedItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*> const&
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_get__unprocessedItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedItems;
}
constexpr void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::__cordl_internal_set__unprocessedItems(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unprocessedItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_ConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "get_ConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_ConsumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_ConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "IsSetConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_ItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "get_ItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*,
                                             false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_ItemCollectionMetrics(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_ItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ItemCollectionMetrics*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "IsSetItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*
Amazon::DynamoDBv2::Model::BatchWriteItemResponse::get_UnprocessedItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "get_UnprocessedItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*, false>(
      this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::set_UnprocessedItems(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(), "set_UnprocessedItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::BatchWriteItemResponse::IsSetUnprocessedItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             "IsSetUnprocessedItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse* Amazon::DynamoDBv2::Model::BatchWriteItemResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>());
}
inline void Amazon::DynamoDBv2::Model::BatchWriteItemResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse::BatchWriteItemResponse() {}
