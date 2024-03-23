#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StopwatchExtensions)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class StopwatchExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::StopwatchExtensions);
// Type: Unity.XR.CoreUtils::StopwatchExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::StopwatchExtensions*
class CORDL_TYPE StopwatchExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Restart, addr 0x2874b04, size 0x34, virtual false, abstract: false, final false
  static inline void Restart(::System::Diagnostics::Stopwatch* stopwatch);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StopwatchExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StopwatchExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StopwatchExtensions(StopwatchExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StopwatchExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StopwatchExtensions(StopwatchExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::StopwatchExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::StopwatchExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::StopwatchExtensions*, "Unity.XR.CoreUtils", "StopwatchExtensions");
