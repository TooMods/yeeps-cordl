#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMetricsTiming)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime {
class IMetricsTiming;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IMetricsTiming);
// Type: Amazon.Runtime::IMetricsTiming
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IMetricsTiming*
class CORDL_TYPE IMetricsTiming {
public:
  // Declarations
  __declspec(property(get = get_ElapsedTicks)) int64_t ElapsedTicks;

  __declspec(property(get = get_ElapsedTime))::System::TimeSpan ElapsedTime;

  __declspec(property(get = get_IsFinished)) bool IsFinished;

  /// @brief Method get_ElapsedTicks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_ElapsedTicks();

  /// @brief Method get_ElapsedTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan get_ElapsedTime();

  /// @brief Method get_IsFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsFinished();

  // Ctor Parameters [CppParam { name: "", ty: "IMetricsTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMetricsTiming(IMetricsTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMetricsTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMetricsTiming(IMetricsTiming const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IMetricsTiming);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IMetricsTiming*, "Amazon.Runtime", "IMetricsTiming");
