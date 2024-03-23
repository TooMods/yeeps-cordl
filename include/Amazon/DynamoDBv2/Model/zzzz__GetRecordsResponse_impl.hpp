#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetRecordsResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Record_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.get_NextShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetRecordsResponse::get_NextShardIterator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                               "get_NextShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.set_NextShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::GetRecordsResponse::set_NextShardIterator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), "set_NextShardIterator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.IsSetNextShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetRecordsResponse::IsSetNextShardIterator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1048eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                               "IsSetNextShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.get_Records
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* (
    ::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)()>(&::Amazon::DynamoDBv2::Model::GetRecordsResponse::get_Records)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                               "get_Records", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.set_Records
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*)>(&::Amazon::DynamoDBv2::Model::GetRecordsResponse::set_Records)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), "set_Records", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse.IsSetRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetRecordsResponse::IsSetRecords)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1048f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                               "IsSetRecords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::GetRecordsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::GetRecordsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::GetRecordsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1048f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_get__nextShardIterator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextShardIterator;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_get__nextShardIterator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextShardIterator;
}
constexpr void Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_set__nextShardIterator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextShardIterator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*& Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_get__records() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____records;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*> const&
Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_get__records() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____records;
}
constexpr void Amazon::DynamoDBv2::Model::GetRecordsResponse::__cordl_internal_set__records(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____records)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::GetRecordsResponse::get_NextShardIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                             "get_NextShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::GetRecordsResponse::set_NextShardIterator(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), "set_NextShardIterator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::GetRecordsResponse::IsSetNextShardIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                             "IsSetNextShardIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* Amazon::DynamoDBv2::Model::GetRecordsResponse::get_Records() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                             "get_Records", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::GetRecordsResponse::set_Records(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), "set_Records", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::GetRecordsResponse::IsSetRecords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(),
                                                                             "IsSetRecords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::GetRecordsResponse* Amazon::DynamoDBv2::Model::GetRecordsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>());
}
inline void Amazon::DynamoDBv2::Model::GetRecordsResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::GetRecordsResponse::GetRecordsResponse() {}
