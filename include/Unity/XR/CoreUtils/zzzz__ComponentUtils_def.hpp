#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentUtils)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ComponentUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::ComponentUtils);
// Type: Unity.XR.CoreUtils::ComponentUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ComponentUtils*
class CORDL_TYPE ComponentUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOrAddIf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddIf(::UnityEngine::GameObject* gameObject, bool add);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentUtils(ComponentUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentUtils(ComponentUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ComponentUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::ComponentUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ComponentUtils*, "Unity.XR.CoreUtils", "ComponentUtils");
