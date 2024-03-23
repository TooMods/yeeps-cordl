#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAdditionalData)
// Forward declare root types
namespace UnityEngine::Rendering {
class IAdditionalData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IAdditionalData);
// Type: UnityEngine.Rendering::IAdditionalData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IAdditionalData*
class CORDL_TYPE IAdditionalData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IAdditionalData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAdditionalData(IAdditionalData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAdditionalData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAdditionalData(IAdditionalData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IAdditionalData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IAdditionalData*, "UnityEngine.Rendering", "IAdditionalData");
