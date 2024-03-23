#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__CreateGlobalTableRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Replica_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.get_GlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::get_GlobalTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12285fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                               "get_GlobalTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.set_GlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::set_GlobalTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(), "set_GlobalTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.IsSetGlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::IsSetGlobalTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                               "IsSetGlobalTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.get_ReplicationGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* (
    ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)()>(&::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::get_ReplicationGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                               "get_ReplicationGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.set_ReplicationGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*)>(&::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::set_ReplicationGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(), "set_ReplicationGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest.IsSetReplicationGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::IsSetReplicationGroup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x122862c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                               "IsSetReplicationGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1228680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_get__globalTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_get__globalTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableName;
}
constexpr void Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_set__globalTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*& Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_get__replicationGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicationGroup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*> const&
Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_get__replicationGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicationGroup;
}
constexpr void Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::__cordl_internal_set__replicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicationGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::get_GlobalTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                             "get_GlobalTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::set_GlobalTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(), "set_GlobalTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::IsSetGlobalTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                             "IsSetGlobalTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::get_ReplicationGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                             "get_ReplicationGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::set_ReplicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(), "set_ReplicationGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::IsSetReplicationGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                             "IsSetReplicationGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest* Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>());
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest::CreateGlobalTableRequest() {}
