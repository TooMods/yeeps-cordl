#pragma once
#include "Amazon/Runtime/zzzz__IMetricsFormatter_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestMetrics_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IMetricsFormatter.FormatMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::IMetricsFormatter::*)(::Amazon::Runtime::IRequestMetrics*)>(
    &::Amazon::Runtime::IMetricsFormatter::FormatMetrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IMetricsFormatter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IMetricsFormatter*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Runtime::IMetricsFormatter::FormatMetrics(::Amazon::Runtime::IRequestMetrics* metrics) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IMetricsFormatter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, metrics);
}
