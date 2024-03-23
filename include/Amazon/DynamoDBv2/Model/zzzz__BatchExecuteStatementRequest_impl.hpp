#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchExecuteStatementRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchStatementRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest.get_Statements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* (
    ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::*)()>(&::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::get_Statements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122674c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(), "get_Statements",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest.set_Statements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*)>(&::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::set_Statements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1226754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(), "set_Statements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest.IsSetStatements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::IsSetStatements)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x122675c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(), "IsSetStatements",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x12267b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*& Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::__cordl_internal_get__statements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*> const&
Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::__cordl_internal_get__statements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statements;
}
constexpr void
Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::__cordl_internal_set__statements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::get_Statements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(),
                                                                             "get_Statements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::set_Statements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(), "set_Statements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BatchStatementRequest*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::IsSetStatements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(),
                                                                             "IsSetStatements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest* Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>());
}
inline void Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest::BatchExecuteStatementRequest() {}
