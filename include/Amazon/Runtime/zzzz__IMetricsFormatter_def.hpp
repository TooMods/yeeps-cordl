#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMetricsFormatter)
namespace Amazon::Runtime {
class IRequestMetrics;
}
// Forward declare root types
namespace Amazon::Runtime {
class IMetricsFormatter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IMetricsFormatter);
// Type: Amazon.Runtime::IMetricsFormatter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IMetricsFormatter*
class CORDL_TYPE IMetricsFormatter {
public:
  // Declarations
  /// @brief Method FormatMetrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW FormatMetrics(::Amazon::Runtime::IRequestMetrics* metrics);

  // Ctor Parameters [CppParam { name: "", ty: "IMetricsFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMetricsFormatter(IMetricsFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMetricsFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMetricsFormatter(IMetricsFormatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IMetricsFormatter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IMetricsFormatter*, "Amazon.Runtime", "IMetricsFormatter");
