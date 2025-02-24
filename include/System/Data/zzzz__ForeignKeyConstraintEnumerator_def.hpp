#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ConstraintEnumerator_def.hpp"
CORDL_MODULE_EXPORT(ForeignKeyConstraintEnumerator)
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class ForeignKeyConstraint;
}
// Forward declare root types
namespace System::Data {
class ForeignKeyConstraintEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ForeignKeyConstraintEnumerator);
// Type: System.Data::ForeignKeyConstraintEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ForeignKeyConstraintEnumerator*
class CORDL_TYPE ForeignKeyConstraintEnumerator : public ::System::Data::ConstraintEnumerator {
public:
  // Declarations
  /// @brief Method GetForeignKeyConstraint, addr 0x240a118, size 0x78, virtual false, abstract: false, final false
  inline ::System::Data::ForeignKeyConstraint* GetForeignKeyConstraint();

  /// @brief Method IsValidCandidate, addr 0x240a0a0, size 0x78, virtual true, abstract: false, final false
  inline bool IsValidCandidate(::System::Data::Constraint* constraint);

  static inline ::System::Data::ForeignKeyConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet);

  /// @brief Method .ctor, addr 0x240a09c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForeignKeyConstraintEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForeignKeyConstraintEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForeignKeyConstraintEnumerator(ForeignKeyConstraintEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForeignKeyConstraintEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForeignKeyConstraintEnumerator(ForeignKeyConstraintEnumerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ForeignKeyConstraintEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ForeignKeyConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ForeignKeyConstraintEnumerator*, "System.Data", "ForeignKeyConstraintEnumerator");
