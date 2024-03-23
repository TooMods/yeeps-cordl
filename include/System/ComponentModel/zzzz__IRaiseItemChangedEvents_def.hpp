#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRaiseItemChangedEvents)
// Forward declare root types
namespace System::ComponentModel {
class IRaiseItemChangedEvents;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IRaiseItemChangedEvents);
// Type: System.ComponentModel::IRaiseItemChangedEvents
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IRaiseItemChangedEvents*
class CORDL_TYPE IRaiseItemChangedEvents {
public:
  // Declarations
  __declspec(property(get = get_RaisesItemChangedEvents)) bool RaisesItemChangedEvents;

  /// @brief Method get_RaisesItemChangedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_RaisesItemChangedEvents();

  // Ctor Parameters [CppParam { name: "", ty: "IRaiseItemChangedEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRaiseItemChangedEvents(IRaiseItemChangedEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRaiseItemChangedEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRaiseItemChangedEvents(IRaiseItemChangedEvents const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IRaiseItemChangedEvents);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IRaiseItemChangedEvents*, "System.ComponentModel", "IRaiseItemChangedEvents");
