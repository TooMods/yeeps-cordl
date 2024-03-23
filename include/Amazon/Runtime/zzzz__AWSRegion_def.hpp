#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSRegion)
namespace Amazon {
class RegionEndpoint;
}
// Forward declare root types
namespace Amazon::Runtime {
class AWSRegion;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AWSRegion);
// Type: Amazon.Runtime::AWSRegion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AWSRegion*
class CORDL_TYPE AWSRegion : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Region, put = set_Region))::Amazon::RegionEndpoint* Region;

  /// @brief Field <Region>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::Amazon::RegionEndpoint* _Region_k__BackingField;

  static inline ::Amazon::Runtime::AWSRegion* New_ctor();

  /// @brief Method SetRegionFromName, addr 0x1fdf5b8, size 0x6c, virtual false, abstract: false, final false
  inline void SetRegionFromName(::StringW regionSystemName);

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get__Region_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr void __cordl_internal_set__Region_k__BackingField(::Amazon::RegionEndpoint* value);

  /// @brief Method .ctor, addr 0x1fdf624, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Region, addr 0x1fdf5a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_Region();

  /// @brief Method set_Region, addr 0x1fdf5b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::Amazon::RegionEndpoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSRegion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSRegion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSRegion(AWSRegion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSRegion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSRegion(AWSRegion const&) = delete;

  /// @brief Field <Region>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ____Region_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AWSRegion, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AWSRegion, ____Region_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AWSRegion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AWSRegion*, "Amazon.Runtime", "AWSRegion");
