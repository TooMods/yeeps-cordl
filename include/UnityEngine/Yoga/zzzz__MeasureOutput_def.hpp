#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeasureOutput)
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureOutput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::MeasureOutput);
// Type: UnityEngine.Yoga::MeasureOutput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::MeasureOutput*
class CORDL_TYPE MeasureOutput : public ::System::Object {
public:
  // Declarations
  /// @brief Method Make, addr 0x264e5a4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaSize Make(float_t width, float_t height);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeasureOutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeasureOutput(MeasureOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeasureOutput(MeasureOutput const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::MeasureOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::MeasureOutput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureOutput*, "UnityEngine.Yoga", "MeasureOutput");
