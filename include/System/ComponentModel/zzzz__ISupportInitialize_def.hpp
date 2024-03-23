#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISupportInitialize)
// Forward declare root types
namespace System::ComponentModel {
class ISupportInitialize;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ISupportInitialize);
// Type: System.ComponentModel::ISupportInitialize
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ISupportInitialize*
class CORDL_TYPE ISupportInitialize {
public:
  // Declarations
  /// @brief Method BeginInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BeginInit();

  /// @brief Method EndInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndInit();

  // Ctor Parameters [CppParam { name: "", ty: "ISupportInitialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISupportInitialize(ISupportInitialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISupportInitialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISupportInitialize(ISupportInitialize const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ISupportInitialize);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISupportInitialize*, "System.ComponentModel", "ISupportInitialize");
