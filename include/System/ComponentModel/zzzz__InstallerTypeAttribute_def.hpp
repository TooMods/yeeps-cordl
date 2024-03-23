#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstallerTypeAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InstallerTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InstallerTypeAttribute);
// Type: System.ComponentModel::InstallerTypeAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::InstallerTypeAttribute*
class CORDL_TYPE InstallerTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_InstallerType))::System::Type* InstallerType;

  /// @brief Field _typeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName))::StringW _typeName;

  /// @brief Method Equals, addr 0x1af9584, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1af9630, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::InstallerTypeAttribute* New_ctor(::System::Type* installerType);

  static inline ::System::ComponentModel::InstallerTypeAttribute* New_ctor(::StringW typeName);

  constexpr ::StringW const& __cordl_internal_get__typeName() const;

  constexpr ::StringW& __cordl_internal_get__typeName();

  constexpr void __cordl_internal_set__typeName(::StringW value);

  /// @brief Method .ctor, addr 0x1af9490, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* installerType);

  /// @brief Method .ctor, addr 0x1af94d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

  /// @brief Method get_InstallerType, addr 0x1af94fc, size 0x88, virtual true, abstract: false, final false
  inline ::System::Type* get_InstallerType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstallerTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstallerTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstallerTypeAttribute(InstallerTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstallerTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstallerTypeAttribute(InstallerTypeAttribute const&) = delete;

  /// @brief Field _typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InstallerTypeAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::InstallerTypeAttribute, ____typeName) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InstallerTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InstallerTypeAttribute*, "System.ComponentModel", "InstallerTypeAttribute");
