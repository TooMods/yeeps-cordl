#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DelegateUtility)
namespace System {
class Delegate;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DelegateUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DelegateUtility);
// Type: UnityEngine.Rendering::DelegateUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DelegateUtility*
class CORDL_TYPE DelegateUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method Cast, addr 0x17cf334, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Delegate* Cast(::System::Delegate* source, ::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateUtility(DelegateUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateUtility(DelegateUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DelegateUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DelegateUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DelegateUtility*, "UnityEngine.Rendering", "DelegateUtility");
