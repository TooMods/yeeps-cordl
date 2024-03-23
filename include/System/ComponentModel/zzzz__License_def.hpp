#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(License)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel {
class License;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::License);
// Type: System.ComponentModel::License
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::License*
class CORDL_TYPE License : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LicenseKey))::StringW LicenseKey;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose();

  static inline ::System::ComponentModel::License* New_ctor();

  /// @brief Method .ctor, addr 0x1afa230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LicenseKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LicenseKey();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr License();

public:
  // Ctor Parameters [CppParam { name: "", ty: "License", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  License(License&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "License", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  License(License const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::License, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::License);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::License*, "System.ComponentModel", "License");
