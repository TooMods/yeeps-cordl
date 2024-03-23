#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LicenseProvider)
namespace System::ComponentModel {
class LicenseContext;
}
namespace System::ComponentModel {
class License;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicenseProvider);
// Type: System.ComponentModel::LicenseProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicenseProvider*
class CORDL_TYPE LicenseProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLicense, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::System::Object* instance, bool allowExceptions);

  static inline ::System::ComponentModel::LicenseProvider* New_ctor();

  /// @brief Method .ctor, addr 0x1afa228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicenseProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicenseProvider(LicenseProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicenseProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicenseProvider(LicenseProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseProvider, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicenseProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseProvider*, "System.ComponentModel", "LicenseProvider");
