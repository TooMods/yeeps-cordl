#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRequestMetrics)
namespace Amazon::Runtime {
class IMetricsTiming;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class IRequestMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IRequestMetrics);
// Type: Amazon.Runtime::IRequestMetrics
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IRequestMetrics*
class CORDL_TYPE IRequestMetrics {
public:
  // Declarations
  __declspec(property(get = get_Counters))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* Counters;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Properties))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* Properties;

  __declspec(property(get = get_Timings))::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* Timings;

  /// @brief Method ToJSON, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToJSON();

  /// @brief Method get_Counters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, int64_t>* get_Counters();

  /// @brief Method get_IsEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEnabled();

  /// @brief Method get_Properties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::System::Object*>*>* get_Properties();

  /// @brief Method get_Timings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::Metric, ::System::Collections::Generic::List_1<::Amazon::Runtime::IMetricsTiming*>*>* get_Timings();

  // Ctor Parameters [CppParam { name: "", ty: "IRequestMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRequestMetrics(IRequestMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRequestMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestMetrics(IRequestMetrics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IRequestMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IRequestMetrics*, "Amazon.Runtime", "IRequestMetrics");
