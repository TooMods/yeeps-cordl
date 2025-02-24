#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEventTools)
// Forward declare root types
namespace UnityEngine::Events {
class UnityEventTools;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityEventTools);
// Type: UnityEngine.Events::UnityEventTools
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// CS Name: ::UnityEngine.Events::UnityEventTools*
class CORDL_TYPE UnityEventTools : public ::System::Object {
public:
  // Declarations
  /// @brief Method TidyAssemblyTypeName, addr 0x29e1fc8, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW TidyAssemblyTypeName(::StringW assemblyTypeName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEventTools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEventTools(UnityEventTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEventTools(UnityEventTools const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEventTools, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEventTools);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventTools*, "UnityEngine.Events", "UnityEventTools");
