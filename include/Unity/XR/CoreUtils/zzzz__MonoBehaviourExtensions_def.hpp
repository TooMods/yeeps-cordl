#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourExtensions)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MonoBehaviourExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::MonoBehaviourExtensions);
// Type: Unity.XR.CoreUtils::MonoBehaviourExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::MonoBehaviourExtensions*
class CORDL_TYPE MonoBehaviourExtensions : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviourExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviourExtensions(MonoBehaviourExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviourExtensions(MonoBehaviourExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::MonoBehaviourExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::MonoBehaviourExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::MonoBehaviourExtensions*, "Unity.XR.CoreUtils", "MonoBehaviourExtensions");
