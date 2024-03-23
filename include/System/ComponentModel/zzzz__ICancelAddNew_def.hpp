#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICancelAddNew)
// Forward declare root types
namespace System::ComponentModel {
class ICancelAddNew;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ICancelAddNew);
// Type: System.ComponentModel::ICancelAddNew
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ICancelAddNew*
class CORDL_TYPE ICancelAddNew {
public:
  // Declarations
  /// @brief Method CancelNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelNew(int32_t itemIndex);

  /// @brief Method EndNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndNew(int32_t itemIndex);

  // Ctor Parameters [CppParam { name: "", ty: "ICancelAddNew", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICancelAddNew(ICancelAddNew&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICancelAddNew", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICancelAddNew(ICancelAddNew const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ICancelAddNew);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ICancelAddNew*, "System.ComponentModel", "ICancelAddNew");
