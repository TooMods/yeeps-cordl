#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SatelliteContractVersionAttribute)
// Forward declare root types
namespace System::Resources {
class SatelliteContractVersionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::SatelliteContractVersionAttribute);
// Type: System.Resources::SatelliteContractVersionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::SatelliteContractVersionAttribute*
class CORDL_TYPE SatelliteContractVersionAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Version))::StringW Version;

  /// @brief Field <Version>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField))::StringW _Version_k__BackingField;

  static inline ::System::Resources::SatelliteContractVersionAttribute* New_ctor(::StringW version);

  constexpr ::StringW const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Version_k__BackingField();

  constexpr void __cordl_internal_set__Version_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1b48488, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW version);

  /// @brief Method get_Version, addr 0x1b48500, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SatelliteContractVersionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SatelliteContractVersionAttribute(SatelliteContractVersionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SatelliteContractVersionAttribute(SatelliteContractVersionAttribute const&) = delete;

  /// @brief Field <Version>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Version_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::SatelliteContractVersionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Resources::SatelliteContractVersionAttribute, ____Version_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::SatelliteContractVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::SatelliteContractVersionAttribute*, "System.Resources", "SatelliteContractVersionAttribute");
