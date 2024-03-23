#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugData)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDebugData);
// Type: UnityEngine.Rendering::IDebugData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IDebugData*
class CORDL_TYPE IDebugData {
public:
  // Declarations
  /// @brief Method GetReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* GetReset();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDebugData(IDebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugData(IDebugData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDebugData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugData*, "UnityEngine.Rendering", "IDebugData");
