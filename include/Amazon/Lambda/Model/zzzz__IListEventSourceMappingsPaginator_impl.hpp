#pragma once
#include "Amazon/Lambda/Model/zzzz__IListEventSourceMappingsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__EventSourceMappingConfiguration_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListEventSourceMappingsResponse_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginatedEnumerable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator.get_Responses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListEventSourceMappingsResponse*>* (
    ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator::*)()>(&::Amazon::Lambda::Model::IListEventSourceMappingsPaginator::get_Responses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator.get_EventSourceMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* (
    ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator::*)()>(&::Amazon::Lambda::Model::IListEventSourceMappingsPaginator::get_EventSourceMappings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(), 1));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListEventSourceMappingsResponse*>* Amazon::Lambda::Model::IListEventSourceMappingsPaginator::get_Responses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListEventSourceMappingsResponse*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>* Amazon::Lambda::Model::IListEventSourceMappingsPaginator::get_EventSourceMappings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::EventSourceMappingConfiguration*>*, false>(this, ___internal_method);
}
