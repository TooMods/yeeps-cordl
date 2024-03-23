#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompModSwitches)
namespace System::Diagnostics {
class BooleanSwitch;
}
namespace System::Diagnostics {
class TraceSwitch;
}
// Forward declare root types
namespace System::ComponentModel {
class CompModSwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CompModSwitches);
// Type: System.ComponentModel::CompModSwitches
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CompModSwitches*
class CORDL_TYPE CompModSwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field commonDesignerServices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_commonDesignerServices, put = setStaticF_commonDesignerServices))::System::Diagnostics::BooleanSwitch* commonDesignerServices;

  /// @brief Field eventLog, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_eventLog, put = setStaticF_eventLog))::System::Diagnostics::TraceSwitch* eventLog;

  static inline ::System::Diagnostics::BooleanSwitch* getStaticF_commonDesignerServices();

  static inline ::System::Diagnostics::TraceSwitch* getStaticF_eventLog();

  /// @brief Method get_CommonDesignerServices, addr 0x1b11180, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::BooleanSwitch* get_CommonDesignerServices();

  /// @brief Method get_EventLog, addr 0x1b11254, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceSwitch* get_EventLog();

  static inline void setStaticF_commonDesignerServices(::System::Diagnostics::BooleanSwitch* value);

  static inline void setStaticF_eventLog(::System::Diagnostics::TraceSwitch* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompModSwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompModSwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompModSwitches(CompModSwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompModSwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompModSwitches(CompModSwitches const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CompModSwitches, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CompModSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CompModSwitches*, "System.ComponentModel", "CompModSwitches");
