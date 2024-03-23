#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestMetrics)
namespace Amazon::Runtime::Internal::Util {
class MetricError;
}
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
namespace Amazon::Runtime::Internal::Util {
class Timing;
}
namespace Amazon::Runtime::Internal::Util {
class __RequestMetrics____c;
}
namespace Amazon::Runtime {
class IMetricsTiming;
}
namespace Amazon::Runtime {
class IRequestMetrics;
}
namespace Amazon::Runtime {
struct Metric;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal::Util {
class __RequestMetrics____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::RequestMetrics);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__RequestMetrics____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::RequestMetrics::<>c*
class CORDL_TYPE __RequestMetrics____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Util::__RequestMetrics____c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0))::System::Func_2<::Amazon::Runtime::Metric, ::StringW>* __9__33_0;

  static inline ::Amazon::Runtime::Internal::Util::__RequestMetrics____c* New_ctor();

  /// @brief Method <GetErrors>b__33_0, addr 0x2443b5c, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _GetErrors_b__33_0(::Amazon::Runtime::Metric k);

  /// @brief Method .ctor, addr 0x2443b54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Util::__RequestMetrics____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::Metric, ::StringW>* getStaticF___9__33_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Util::__RequestMetrics____c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::Amazon::Runtime::Metric, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RequestMetrics____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RequestMetrics____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RequestMetrics____c(__RequestMetrics____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RequestMetrics____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RequestMetrics____c(__RequestMetrics____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__RequestMetrics____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::RequestMetrics
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::RequestMetrics*
class CORDL_TYPE RequestMetrics : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::Internal::Util::__RequestMetrics____c;

  __declspec(property(get = get_Counters, put = set_Counters))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* Counters;

  __declspec(property(get = get_CurrentTime)) int64_t CurrentTime;

  __declspec(property(get = get_IsEnabled, put = set_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Properties,
                      put = set_Properties))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* Properties;

  __declspec(property(get = get_Timings,
                      put = set_Timings))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* Timings;

  /// @brief Field <Counters>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Counters_k__BackingField,
                      put = __cordl_internal_set__Counters_k__BackingField))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* _Counters_k__BackingField;

  /// @brief Field <IsEnabled>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEnabled_k__BackingField, put = __cordl_internal_set__IsEnabled_k__BackingField)) bool _IsEnabled_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Properties_k__BackingField, put = __cordl_internal_set__Properties_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* _Properties_k__BackingField;

  /// @brief Field <Timings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Timings_k__BackingField, put = __cordl_internal_set__Timings_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* _Timings_k__BackingField;

  /// @brief Field errors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_errors, put = __cordl_internal_set_errors))::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>* errors;

  /// @brief Field inFlightTimings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inFlightTimings,
                      put = __cordl_internal_set_inFlightTimings))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>* inFlightTimings;

  /// @brief Field metricsLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_metricsLock, put = __cordl_internal_set_metricsLock))::System::Object* metricsLock;

  /// @brief Field stopWatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stopWatch, put = __cordl_internal_set_stopWatch))::System::Diagnostics::Stopwatch* stopWatch;

  /// @brief Convert operator to "::Amazon::Runtime::IRequestMetrics"
  constexpr operator ::Amazon::Runtime::IRequestMetrics*() noexcept;

  /// @brief Method AddProperty, addr 0x24418f0, size 0x228, virtual false, abstract: false, final false
  inline void AddProperty(::Amazon::Runtime::Metric metric, ::System::Object* property);

  /// @brief Method GetErrors, addr 0x2441d80, size 0x7dc, virtual false, abstract: false, final false
  inline ::StringW GetErrors();

  /// @brief Method IncrementCounter, addr 0x2441c28, size 0x158, virtual false, abstract: false, final false
  inline void IncrementCounter(::Amazon::Runtime::Metric metric);

  /// @brief Method Log, addr 0x2440cb0, size 0xa8, virtual false, abstract: false, final false
  static inline void Log(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric, ::System::Object* metricValue);

  /// @brief Method Log, addr 0x2440ee0, size 0xd8, virtual false, abstract: false, final false
  static inline void Log(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric, ::System::Collections::Generic::List_1<::System::Object*>* metricValues);

  /// @brief Method LogError_Locked, addr 0x2440b9c, size 0x104, virtual false, abstract: false, final false
  inline void LogError_Locked(::Amazon::Runtime::Metric metric, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogHelper, addr 0x2440d58, size 0x188, virtual false, abstract: false, final false
  static inline void LogHelper(::System::Text::StringBuilder* builder, ::Amazon::Runtime::Metric metric, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> metricValues);

  static inline ::Amazon::Runtime::Internal::Util::RequestMetrics* New_ctor();

  /// @brief Method ObjectToString, addr 0x2440fb8, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ObjectToString(::System::Object* data);

  /// @brief Method SetCounter, addr 0x2441b18, size 0x110, virtual false, abstract: false, final false
  inline void SetCounter(::Amazon::Runtime::Metric metric, int64_t value);

  /// @brief Method StartEvent, addr 0x2441258, size 0x25c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::TimingEvent* StartEvent(::Amazon::Runtime::Metric metric);

  /// @brief Method StopEvent, addr 0x2441510, size 0x3ac, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::Timing* StopEvent(::Amazon::Runtime::Metric metric);

  /// @brief Method ToJSON, addr 0x24430c4, size 0xa2c, virtual true, abstract: false, final true
  inline ::StringW ToJSON();

  /// @brief Method ToString, addr 0x244255c, size 0xb68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*& __cordl_internal_get__Counters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>*> const& __cordl_internal_get__Counters_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEnabled_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>*> const&
  __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*&
  __cordl_internal_get__Timings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>*> const&
  __cordl_internal_get__Timings_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>*& __cordl_internal_get_errors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>*> const& __cordl_internal_get_errors() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>*& __cordl_internal_get_inFlightTimings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>*> const&
  __cordl_internal_get_inFlightTimings() const;

  constexpr ::System::Object*& __cordl_internal_get_metricsLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_metricsLock() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopWatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_stopWatch() const;

  constexpr void __cordl_internal_set__Counters_k__BackingField(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* value);

  constexpr void __cordl_internal_set__IsEnabled_k__BackingField(bool value);

  constexpr void
  __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* value);

  constexpr void __cordl_internal_set__Timings_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* value);

  constexpr void __cordl_internal_set_errors(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>* value);

  constexpr void __cordl_internal_set_inFlightTimings(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>* value);

  constexpr void __cordl_internal_set_metricsLock(::System::Object* value);

  constexpr void __cordl_internal_set_stopWatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x244105c, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Counters, addr 0x2441038, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* get_Counters();

  /// @brief Method get_CurrentTime, addr 0x2440b44, size 0x58, virtual false, abstract: false, final false
  inline int64_t get_CurrentTime();

  /// @brief Method get_IsEnabled, addr 0x2441048, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_Properties, addr 0x2441018, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* get_Properties();

  /// @brief Method get_Timings, addr 0x2441028, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* get_Timings();

  /// @brief Convert to "::Amazon::Runtime::IRequestMetrics"
  constexpr ::Amazon::Runtime::IRequestMetrics* i___Amazon__Runtime__IRequestMetrics() noexcept;

  /// @brief Method set_Counters, addr 0x2441040, size 0x8, virtual false, abstract: false, final false
  inline void set_Counters(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* value);

  /// @brief Method set_IsEnabled, addr 0x2441050, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEnabled(bool value);

  /// @brief Method set_Properties, addr 0x2441020, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* value);

  /// @brief Method set_Timings, addr 0x2441030, size 0x8, virtual false, abstract: false, final false
  inline void set_Timings(::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestMetrics(RequestMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestMetrics(RequestMetrics const&) = delete;

  /// @brief Field metricsLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___metricsLock;

  /// @brief Field stopWatch, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___stopWatch;

  /// @brief Field inFlightTimings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::Amazon::Runtime::Internal::Util::Timing*>* ___inFlightTimings;

  /// @brief Field errors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::Util::MetricError*>* ___errors;

  /// @brief Field <Properties>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* ____Properties_k__BackingField;

  /// @brief Field <Timings>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* ____Timings_k__BackingField;

  /// @brief Field <Counters>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* ____Counters_k__BackingField;

  /// @brief Field <IsEnabled>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____IsEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::RequestMetrics, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ___metricsLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ___stopWatch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ___inFlightTimings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ___errors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ____Properties_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ____Timings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ____Counters_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::RequestMetrics, ____IsEnabled_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::RequestMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::RequestMetrics*, "Amazon.Runtime.Internal.Util", "RequestMetrics");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__RequestMetrics____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__RequestMetrics____c*, "Amazon.Runtime.Internal.Util", "RequestMetrics/<>c");
