#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SourceSwitch)
namespace System::Diagnostics {
struct TraceEventType;
}
// Forward declare root types
namespace System::Diagnostics {
class SourceSwitch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::SourceSwitch);
// Type: System.Diagnostics::SourceSwitch
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::SourceSwitch*
class CORDL_TYPE SourceSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  static inline ::System::Diagnostics::SourceSwitch* New_ctor(::StringW displayName, ::StringW defaultSwitchValue);

  /// @brief Method OnValueChanged, addr 0x12b552c, size 0x10c, virtual true, abstract: false, final false
  inline void OnValueChanged();

  /// @brief Method ShouldTrace, addr 0x12b54cc, size 0x1c, virtual false, abstract: false, final false
  inline bool ShouldTrace(::System::Diagnostics::TraceEventType eventType);

  /// @brief Method .ctor, addr 0x12b51e8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW defaultSwitchValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceSwitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceSwitch(SourceSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceSwitch(SourceSwitch const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SourceSwitch, 0x48>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::SourceSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SourceSwitch*, "System.Diagnostics", "SourceSwitch");
