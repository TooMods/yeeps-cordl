#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TraceSwitch)
// Forward declare root types
namespace System::Diagnostics {
class TraceSwitch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceSwitch);
// Type: System.Diagnostics::TraceSwitch
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::TraceSwitch*
class CORDL_TYPE TraceSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  static inline ::System::Diagnostics::TraceSwitch* New_ctor(::StringW displayName, ::StringW description);

  /// @brief Method OnSwitchSettingChanged, addr 0x12ba414, size 0x38, virtual true, abstract: false, final false
  inline void OnSwitchSettingChanged();

  /// @brief Method OnValueChanged, addr 0x12ba44c, size 0x10c, virtual true, abstract: false, final false
  inline void OnValueChanged();

  /// @brief Method .ctor, addr 0x12ba3a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceSwitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceSwitch(TraceSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceSwitch(TraceSwitch const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceSwitch, 0x48>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceSwitch*, "System.Diagnostics", "TraceSwitch");
