#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ReadOnlyAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::ReadOnlyAttribute);
// Type: Unity.XR.CoreUtils::ReadOnlyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ReadOnlyAttribute*
class CORDL_TYPE ReadOnlyAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::ReadOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2872868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyAttribute(ReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyAttribute(ReadOnlyAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ReadOnlyAttribute*, "Unity.XR.CoreUtils", "ReadOnlyAttribute");
