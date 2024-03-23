#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__Metric_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimingEvent)
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime {
struct Metric;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::TimingEvent);
// Type: Amazon.Runtime.Internal.Util::TimingEvent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::TimingEvent*
class CORDL_TYPE TimingEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field metric, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_metric, put = __cordl_internal_set_metric))::Amazon::Runtime::Metric metric;

  /// @brief Field metrics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_metrics, put = __cordl_internal_set_metrics))::Amazon::Runtime::Internal::Util::RequestMetrics* metrics;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2443c98, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2443c60, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2443d04, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Amazon::Runtime::Internal::Util::TimingEvent* New_ctor(::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::Amazon::Runtime::Metric metric);

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::Amazon::Runtime::Metric const& __cordl_internal_get_metric() const;

  constexpr ::Amazon::Runtime::Metric& __cordl_internal_get_metric();

  constexpr ::Amazon::Runtime::Internal::Util::RequestMetrics*& __cordl_internal_get_metrics();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::RequestMetrics*> const& __cordl_internal_get_metrics() const;

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_metric(::Amazon::Runtime::Metric value);

  constexpr void __cordl_internal_set_metrics(::Amazon::Runtime::Internal::Util::RequestMetrics* value);

  /// @brief Method .ctor, addr 0x24414e0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::Amazon::Runtime::Metric metric);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimingEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimingEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimingEvent(TimingEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimingEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimingEvent(TimingEvent const&) = delete;

  /// @brief Field metric, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Runtime::Metric ___metric;

  /// @brief Field metrics, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::RequestMetrics* ___metrics;

  /// @brief Field disposed, offset: 0x20, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::TimingEvent, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::TimingEvent, ___metric) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::TimingEvent, ___metrics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::TimingEvent, ___disposed) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::TimingEvent);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::TimingEvent*, "Amazon.Runtime.Internal.Util", "TimingEvent");
