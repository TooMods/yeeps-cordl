#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrgScopedID)
// Forward declare root types
namespace Oculus::Platform::Models {
class OrgScopedID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::OrgScopedID);
// Type: Oculus.Platform.Models::OrgScopedID
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::OrgScopedID*
class CORDL_TYPE OrgScopedID : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::OrgScopedID* New_ctor(void* o);

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x1e62f20, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrgScopedID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrgScopedID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrgScopedID(OrgScopedID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrgScopedID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrgScopedID(OrgScopedID const&) = delete;

  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::OrgScopedID, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::OrgScopedID, ____cordl_ID) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::OrgScopedID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::OrgScopedID*, "Oculus.Platform.Models", "OrgScopedID");
