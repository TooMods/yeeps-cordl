#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetShardIteratorResponse_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse.get_ShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::get_ShardIterator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10490b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                               "get_ShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse.set_ShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::set_ShardIterator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10490bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(), "set_ShardIterator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse.IsSetShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::IsSetShardIterator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10490c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                               "IsSetShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10490d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::GetShardIteratorResponse::__cordl_internal_get__shardIterator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shardIterator;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::GetShardIteratorResponse::__cordl_internal_get__shardIterator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shardIterator;
}
constexpr void Amazon::DynamoDBv2::Model::GetShardIteratorResponse::__cordl_internal_set__shardIterator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shardIterator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::GetShardIteratorResponse::get_ShardIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                             "get_ShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::GetShardIteratorResponse::set_ShardIterator(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(), "set_ShardIterator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::GetShardIteratorResponse::IsSetShardIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                             "IsSetShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse* Amazon::DynamoDBv2::Model::GetShardIteratorResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>());
}
inline void Amazon::DynamoDBv2::Model::GetShardIteratorResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse::GetShardIteratorResponse() {}
