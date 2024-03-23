#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LicenseProviderAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicenseProviderAttribute);
// Type: System.ComponentModel::LicenseProviderAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicenseProviderAttribute*
class CORDL_TYPE LicenseProviderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::LicenseProviderAttribute* Default;

  __declspec(property(get = get_LicenseProvider))::System::Type* LicenseProvider;

  __declspec(property(get = get_TypeId))::System::Object* TypeId;

  /// @brief Field _licenseProviderName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__licenseProviderName, put = __cordl_internal_set__licenseProviderName))::StringW _licenseProviderName;

  /// @brief Field _licenseProviderType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__licenseProviderType, put = __cordl_internal_set__licenseProviderType))::System::Type* _licenseProviderType;

  /// @brief Method Equals, addr 0x1afbb24, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x1afbc38, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor();

  static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor(::System::Type* type);

  static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor(::StringW typeName);

  constexpr ::StringW const& __cordl_internal_get__licenseProviderName() const;

  constexpr ::StringW& __cordl_internal_get__licenseProviderName();

  constexpr ::System::Type*& __cordl_internal_get__licenseProviderType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__licenseProviderType() const;

  constexpr void __cordl_internal_set__licenseProviderName(::StringW value);

  constexpr void __cordl_internal_set__licenseProviderType(::System::Type* value);

  /// @brief Method .ctor, addr 0x1afb9fc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1afba40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x1afba18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

  static inline ::System::ComponentModel::LicenseProviderAttribute* getStaticF_Default();

  /// @brief Method get_LicenseProvider, addr 0x1afb70c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Type* get_LicenseProvider();

  /// @brief Method get_TypeId, addr 0x1afba68, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

  static inline void setStaticF_Default(::System::ComponentModel::LicenseProviderAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseProviderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicenseProviderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicenseProviderAttribute(LicenseProviderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicenseProviderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicenseProviderAttribute(LicenseProviderAttribute const&) = delete;

  /// @brief Field _licenseProviderType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____licenseProviderType;

  /// @brief Field _licenseProviderName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____licenseProviderName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseProviderAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseProviderAttribute, ____licenseProviderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseProviderAttribute, ____licenseProviderName) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicenseProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseProviderAttribute*, "System.ComponentModel", "LicenseProviderAttribute");
