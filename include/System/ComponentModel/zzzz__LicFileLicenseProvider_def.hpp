#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__LicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LicFileLicenseProvider)
namespace System::ComponentModel {
class LicenseContext;
}
namespace System::ComponentModel {
class License;
}
namespace System::ComponentModel {
class __LicFileLicenseProvider__LicFileLicense;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicFileLicenseProvider;
}
namespace System::ComponentModel {
class __LicFileLicenseProvider__LicFileLicense;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicFileLicenseProvider);
MARK_REF_PTR_T(::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense);
// Type: ::LicFileLicense
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::LicFileLicenseProvider::LicFileLicense*
class CORDL_TYPE __LicFileLicenseProvider__LicFileLicense : public ::System::ComponentModel::License {
public:
  // Declarations
  __declspec(property(get = get_LicenseKey))::StringW LicenseKey;

  /// @brief Field <LicenseKey>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__LicenseKey_k__BackingField, put = __cordl_internal_set__LicenseKey_k__BackingField))::StringW _LicenseKey_k__BackingField;

  /// @brief Field _owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__owner, put = __cordl_internal_set__owner))::System::ComponentModel::LicFileLicenseProvider* _owner;

  /// @brief Method Dispose, addr 0x1afa240, size 0x58, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense* New_ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::StringW key);

  constexpr ::StringW const& __cordl_internal_get__LicenseKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LicenseKey_k__BackingField();

  constexpr ::System::ComponentModel::LicFileLicenseProvider*& __cordl_internal_get__owner();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::LicFileLicenseProvider*> const& __cordl_internal_get__owner() const;

  constexpr void __cordl_internal_set__LicenseKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__owner(::System::ComponentModel::LicFileLicenseProvider* value);

  /// @brief Method .ctor, addr 0x1afa1f4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::StringW key);

  /// @brief Method get_LicenseKey, addr 0x1afa238, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LicenseKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LicFileLicenseProvider__LicFileLicense();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LicFileLicenseProvider__LicFileLicense", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LicFileLicenseProvider__LicFileLicense(__LicFileLicenseProvider__LicFileLicense&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LicFileLicenseProvider__LicFileLicense", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LicFileLicenseProvider__LicFileLicense(__LicFileLicenseProvider__LicFileLicense const&) = delete;

  /// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::LicFileLicenseProvider* ____owner;

  /// @brief Field <LicenseKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____LicenseKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense, ____owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense, ____LicenseKey_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::LicFileLicenseProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicFileLicenseProvider*
class CORDL_TYPE LicFileLicenseProvider : public ::System::ComponentModel::LicenseProvider {
public:
  // Declarations
  using LicFileLicense = ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense;

  /// @brief Method GetKey, addr 0x1af9d64, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW GetKey(::System::Type* type);

  /// @brief Method GetLicense, addr 0x1af9e00, size 0x3f4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::System::Object* instance, bool allowExceptions);

  /// @brief Method IsKeyValid, addr 0x1af9d28, size 0x3c, virtual true, abstract: false, final false
  inline bool IsKeyValid(::StringW key, ::System::Type* type);

  static inline ::System::ComponentModel::LicFileLicenseProvider* New_ctor();

  /// @brief Method .ctor, addr 0x1afa220, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicFileLicenseProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicFileLicenseProvider(LicFileLicenseProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicFileLicenseProvider(LicFileLicenseProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicFileLicenseProvider, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicFileLicenseProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicFileLicenseProvider*, "System.ComponentModel", "LicFileLicenseProvider");
NEED_NO_BOX(::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*, "System.ComponentModel", "LicFileLicenseProvider/LicFileLicense");
