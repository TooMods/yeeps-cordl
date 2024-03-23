#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRGraphicsAutomatedTests)
// Forward declare root types
namespace UnityEngine::Rendering {
class XRGraphicsAutomatedTests;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::XRGraphicsAutomatedTests);
// Type: UnityEngine.Rendering::XRGraphicsAutomatedTests
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::XRGraphicsAutomatedTests*
class CORDL_TYPE XRGraphicsAutomatedTests : public ::System::Object {
public:
  // Declarations
  /// @brief Field <enabled>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__enabled_k__BackingField, put = setStaticF__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field running, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_running, put = setStaticF_running)) bool running;

  static inline bool getStaticF__enabled_k__BackingField();

  static inline bool getStaticF_running();

  /// @brief Method get_activatedFromCommandLine, addr 0x1d908a4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_activatedFromCommandLine();

  /// @brief Method get_enabled, addr 0x1d908ac, size 0x58, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF__enabled_k__BackingField(bool value);

  static inline void setStaticF_running(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGraphicsAutomatedTests();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGraphicsAutomatedTests", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGraphicsAutomatedTests(XRGraphicsAutomatedTests&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGraphicsAutomatedTests", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGraphicsAutomatedTests(XRGraphicsAutomatedTests const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::XRGraphicsAutomatedTests, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::XRGraphicsAutomatedTests);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::XRGraphicsAutomatedTests*, "UnityEngine.Rendering", "XRGraphicsAutomatedTests");
