#pragma once
#include "Amazon/Runtime/zzzz__IRequestMetrics_def.hpp"
#include "Amazon/Runtime/zzzz__IMetricsTiming_def.hpp"
#include "Amazon/Runtime/zzzz__Metric_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IRequestMetrics.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* (::Amazon::Runtime::IRequestMetrics::*)()>(
        &::Amazon::Runtime::IRequestMetrics::get_Properties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IRequestMetrics.get_Timings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* (::Amazon::Runtime::IRequestMetrics::*)()>(
    &::Amazon::Runtime::IRequestMetrics::get_Timings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IRequestMetrics.get_Counters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* (::Amazon::Runtime::IRequestMetrics::*)()>(&::Amazon::Runtime::IRequestMetrics::get_Counters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IRequestMetrics.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::IRequestMetrics::*)()>(&::Amazon::Runtime::IRequestMetrics::get_IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IRequestMetrics.ToJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::IRequestMetrics::*)()>(&::Amazon::Runtime::IRequestMetrics::ToJSON)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* Amazon::Runtime::IRequestMetrics::get_Properties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*, false>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*
Amazon::Runtime::IRequestMetrics::get_Timings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* Amazon::Runtime::IRequestMetrics::get_Counters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::IRequestMetrics::get_IsEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::IRequestMetrics::ToJSON() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IRequestMetrics*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
