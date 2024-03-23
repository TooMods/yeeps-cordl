#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IMetrics.SendGaugeMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IMetrics::*)(
    ::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::IMetrics::SendGaugeMetric)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IMetrics.SendHistogramMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IMetrics::*)(
    ::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::IMetrics::SendHistogramMetric)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IMetrics.SendSumMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IMetrics::*)(
    ::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::IMetrics::SendSumMetric)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 2));
    return ___internal_method;
  }
};
/// @param value: double_t (default: 0.0)
/// @param tags: ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (default: nullptr)
inline void Unity::Services::Core::Telemetry::Internal::IMetrics::SendGaugeMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
/// @param tags: ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (default: nullptr)
inline void Unity::Services::Core::Telemetry::Internal::IMetrics::SendHistogramMetric(::StringW name, double_t time, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, time, tags);
}
/// @param value: double_t (default: 1.0)
/// @param tags: ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (default: nullptr)
inline void Unity::Services::Core::Telemetry::Internal::IMetrics::SendSumMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
