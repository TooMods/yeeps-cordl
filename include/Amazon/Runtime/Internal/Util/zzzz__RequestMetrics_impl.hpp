#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__MetricError_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__TimingEvent_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Timing_def.hpp"
#include "Amazon/Runtime/zzzz__IMetricsTiming_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestMetrics_def.hpp"
#include "Amazon/Runtime/zzzz__Metric_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__RequestMetrics____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__RequestMetrics____c::*)()>(
    &::Amazon::Runtime::Internal::Util::__RequestMetrics____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2443b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__RequestMetrics____c._GetErrors_b__33_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Util::__RequestMetrics____c::*)(::Amazon::Runtime::Metric)>(
    &::Amazon::Runtime::Internal::Util::__RequestMetrics____c::_GetErrors_b__33_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2443b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get(), "<GetErrors>b__33_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::__RequestMetrics____c::setStaticF___9(::Amazon::Runtime::Internal::Util::__RequestMetrics____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get>(
      std::forward<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>(value));
}
inline ::Amazon::Runtime::Internal::Util::__RequestMetrics____c* Amazon::Runtime::Internal::Util::__RequestMetrics____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get>();
}
inline void Amazon::Runtime::Internal::Util::__RequestMetrics____c::setStaticF___9__33_0(::System::Func_2<::Amazon::Runtime::Metric, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Metric, ::StringW>*, "<>9__33_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Metric, ::StringW>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Metric, ::StringW>* Amazon::Runtime::Internal::Util::__RequestMetrics____c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Metric, ::StringW>*, "<>9__33_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get>();
}
inline ::Amazon::Runtime::Internal::Util::__RequestMetrics____c* Amazon::Runtime::Internal::Util::__RequestMetrics____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>());
}
inline void Amazon::Runtime::Internal::Util::__RequestMetrics____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Util::__RequestMetrics____c::_GetErrors_b__33_0(::Amazon::Runtime::Metric k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__RequestMetrics____c*>::get(), "<GetErrors>b__33_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, k);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__RequestMetrics____c::__RequestMetrics____c() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.get_CurrentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::get_CurrentTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2440b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "get_CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.LogError_Locked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(
    ::Amazon::Runtime::Metric, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::LogError_Locked)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2440b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "LogError_Locked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::Amazon::Runtime::Metric, ::System::Object*)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::Log)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2440cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Text::StringBuilder*, ::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::Log)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2440ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.LogHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Text::StringBuilder*, ::Amazon::Runtime::Metric, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::LogHelper)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2440d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "LogHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.ObjectToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::ObjectToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2440fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "ObjectToString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "get_Properties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.set_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::set_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Properties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.get_Timings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* (
        ::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(&::Amazon::Runtime::Internal::Util::RequestMetrics::get_Timings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "get_Timings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.set_Timings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::set_Timings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Timings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.get_Counters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* (
    ::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(&::Amazon::Runtime::Internal::Util::RequestMetrics::get_Counters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "get_Counters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.set_Counters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::set_Counters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Counters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::get_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "get_IsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.set_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(bool)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::set_IsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2441050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_IsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x244105c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.StartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::TimingEvent* (
    ::Amazon::Runtime::Internal::Util::RequestMetrics::*)(::Amazon::Runtime::Metric)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::StartEvent)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2441258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "StartEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.StopEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::Timing* (
    ::Amazon::Runtime::Internal::Util::RequestMetrics::*)(::Amazon::Runtime::Metric)>(&::Amazon::Runtime::Internal::Util::RequestMetrics::StopEvent)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2441510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "StopEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.AddProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(::Amazon::Runtime::Metric, ::System::Object*)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::AddProperty)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x24418f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.SetCounter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(::Amazon::Runtime::Metric, int64_t)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::SetCounter)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2441b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "SetCounter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.IncrementCounter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::RequestMetrics::*)(::Amazon::Runtime::Metric)>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::IncrementCounter)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2441c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "IncrementCounter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.GetErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::GetErrors)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x2441d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "GetErrors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::ToString)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0x244255c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::RequestMetrics.ToJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Util::RequestMetrics::*)()>(
    &::Amazon::Runtime::Internal::Util::RequestMetrics::ToJSON)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x24430c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                               "ToJSON", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IRequestMetrics"
constexpr Amazon::Runtime::Internal::Util::RequestMetrics::operator ::Amazon::Runtime::IRequestMetrics*() noexcept {
  return static_cast<::Amazon::Runtime::IRequestMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IRequestMetrics"
constexpr ::Amazon::Runtime::IRequestMetrics* Amazon::Runtime::Internal::Util::RequestMetrics::i___Amazon__Runtime__IRequestMetrics() noexcept {
  return static_cast<::Amazon::Runtime::IRequestMetrics*>(static_cast<void*>(this));
}
constexpr ::System::Object*& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_metricsLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metricsLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_metricsLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metricsLock;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set_metricsLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___metricsLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::Stopwatch*& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_stopWatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopWatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_stopWatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopWatch;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set_stopWatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopWatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>*&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_inFlightTimings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inFlightTimings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>*> const&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_inFlightTimings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inFlightTimings;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set_inFlightTimings(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inFlightTimings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>*& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_errors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errors;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>*> const&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get_errors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errors;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set_errors(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___errors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Properties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*> const&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Properties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set__Properties_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Properties_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Timings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Timings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*> const&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Timings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Timings_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set__Timings_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Timings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Counters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Counters_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*> const&
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__Counters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Counters_k__BackingField;
}
constexpr void
Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set__Counters_k__BackingField(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Counters_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__IsEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEnabled_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_get__IsEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEnabled_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::RequestMetrics::__cordl_internal_set__IsEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsEnabled_k__BackingField = value;
}
inline int64_t Amazon::Runtime::Internal::Util::RequestMetrics::get_CurrentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "get_CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::LogError_Locked(::Amazon::Runtime::Metric metric, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "LogError_Locked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metric, messageFormat, args);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::Log(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric, ::System::Object* metricValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, metric, metricValue);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::Log(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric,
                                                                 ::System::Collections::Generic::List_1<::System::Object*>* metricValues) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, metric, metricValues);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::LogHelper(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric,
                                                                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> metricValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "LogHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, metric, metricValues);
}
inline ::StringW Amazon::Runtime::Internal::Util::RequestMetrics::ObjectToString(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "ObjectToString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*
Amazon::Runtime::Internal::Util::RequestMetrics::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "get_Properties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*, false>(
      this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::set_Properties(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Properties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*
Amazon::Runtime::Internal::Util::RequestMetrics::get_Timings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "get_Timings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*,
                                             false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::set_Timings(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Timings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* Amazon::Runtime::Internal::Util::RequestMetrics::get_Counters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "get_Counters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::set_Counters(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_Counters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::Util::RequestMetrics::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "get_IsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::set_IsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "set_IsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Util::RequestMetrics* Amazon::Runtime::Internal::Util::RequestMetrics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::RequestMetrics*>());
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Util::TimingEvent* Amazon::Runtime::Internal::Util::RequestMetrics::StartEvent(::Amazon::Runtime::Metric metric) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "StartEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::TimingEvent*, false>(this, ___internal_method, metric);
}
inline ::Amazon::Runtime::Internal::Util::Timing* Amazon::Runtime::Internal::Util::RequestMetrics::StopEvent(::Amazon::Runtime::Metric metric) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "StopEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::Timing*, false>(this, ___internal_method, metric);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::AddProperty(::Amazon::Runtime::Metric metric, ::System::Object* property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metric, property);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::SetCounter(::Amazon::Runtime::Metric metric, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "SetCounter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metric, value);
}
inline void Amazon::Runtime::Internal::Util::RequestMetrics::IncrementCounter(::Amazon::Runtime::Metric metric) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), "IncrementCounter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Metric>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metric);
}
inline ::StringW Amazon::Runtime::Internal::Util::RequestMetrics::GetErrors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "GetErrors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Util::RequestMetrics::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Util::RequestMetrics::ToJSON() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                                                             "ToJSON", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::RequestMetrics::RequestMetrics() {}
