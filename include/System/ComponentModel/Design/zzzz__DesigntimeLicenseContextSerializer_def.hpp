#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DesigntimeLicenseContextSerializer)
namespace System::ComponentModel::Design {
class RuntimeLicenseContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class DesigntimeLicenseContextSerializer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer);
// Type: System.ComponentModel.Design::DesigntimeLicenseContextSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::DesigntimeLicenseContextSerializer*
class CORDL_TYPE DesigntimeLicenseContextSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method Deserialize, addr 0x18eac24, size 0x1fc, virtual false, abstract: false, final false
  static inline void Deserialize(::System::IO::Stream* o, ::StringW cryptoKey, ::System::ComponentModel::Design::RuntimeLicenseContext* context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesigntimeLicenseContextSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesigntimeLicenseContextSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesigntimeLicenseContextSerializer(DesigntimeLicenseContextSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesigntimeLicenseContextSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesigntimeLicenseContextSerializer(DesigntimeLicenseContextSerializer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesigntimeLicenseContextSerializer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*, "System.ComponentModel.Design", "DesigntimeLicenseContextSerializer");
