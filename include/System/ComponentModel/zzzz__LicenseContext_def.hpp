#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LicenseContext)
namespace System::ComponentModel {
struct LicenseUsageMode;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseContext;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicenseContext);
// Type: System.ComponentModel::LicenseContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicenseContext*
class CORDL_TYPE LicenseContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UsageMode))::System::ComponentModel::LicenseUsageMode UsageMode;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method GetSavedLicenseKey, addr 0x1afa2a0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly);

  /// @brief Method GetService, addr 0x1afa2a8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* type);

  static inline ::System::ComponentModel::LicenseContext* New_ctor();

  /// @brief Method SetSavedLicenseKey, addr 0x1afa2b0, size 0x4, virtual true, abstract: false, final false
  inline void SetSavedLicenseKey(::System::Type* type, ::StringW key);

  /// @brief Method .ctor, addr 0x1afa2b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UsageMode, addr 0x1afa298, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::LicenseUsageMode get_UsageMode();

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicenseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicenseContext(LicenseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicenseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicenseContext(LicenseContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseContext, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicenseContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseContext*, "System.ComponentModel", "LicenseContext");
