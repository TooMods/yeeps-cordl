#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExecuteTransactionRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ParameterizedStatement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.get_ClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::get_ClientRequestToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122af10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                               "get_ClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.set_ClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::set_ClientRequestToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122af18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(), "set_ClientRequestToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.IsSetClientRequestToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::IsSetClientRequestToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122af20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                               "IsSetClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.get_TransactStatements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* (
    ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)()>(&::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::get_TransactStatements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122af30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                               "get_TransactStatements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.set_TransactStatements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*)>(&::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::set_TransactStatements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122af38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(), "set_TransactStatements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest.IsSetTransactStatements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::IsSetTransactStatements)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x122af40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                               "IsSetTransactStatements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x122af94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_get__clientRequestToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRequestToken;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_get__clientRequestToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRequestToken;
}
constexpr void Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_set__clientRequestToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientRequestToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*&
Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_get__transactStatements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactStatements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*> const&
Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_get__transactStatements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transactStatements;
}
constexpr void
Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::__cordl_internal_set__transactStatements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transactStatements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::get_ClientRequestToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                             "get_ClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::set_ClientRequestToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(), "set_ClientRequestToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::IsSetClientRequestToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                             "IsSetClientRequestToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::get_TransactStatements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                             "get_TransactStatements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::set_TransactStatements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(), "set_TransactStatements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::IsSetTransactStatements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                             "IsSetTransactStatements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest* Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>());
}
inline void Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest::ExecuteTransactionRequest() {}
