#pragma once
#include "Amazon/DynamoDBv2/Model/zzzz__IQueryPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginatedEnumerable_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::IQueryPaginator.get_Responses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* (
    ::Amazon::DynamoDBv2::Model::IQueryPaginator::*)()>(&::Amazon::DynamoDBv2::Model::IQueryPaginator::get_Responses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IQueryPaginator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IQueryPaginator*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* Amazon::DynamoDBv2::Model::IQueryPaginator::get_Responses() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IQueryPaginator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*, false>(this, ___internal_method);
}
