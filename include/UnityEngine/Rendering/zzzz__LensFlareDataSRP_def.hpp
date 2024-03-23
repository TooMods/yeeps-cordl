#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LensFlareDataSRP)
namespace UnityEngine::Rendering {
class LensFlareDataElementSRP;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareDataSRP);
// Type: UnityEngine.Rendering::LensFlareDataSRP
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::LensFlareDataSRP*
class CORDL_TYPE LensFlareDataSRP : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elements,
                      put = __cordl_internal_set_elements))::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> elements;

  static inline ::UnityEngine::Rendering::LensFlareDataSRP* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>& __cordl_internal_get_elements();

  constexpr void __cordl_internal_set_elements(::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> value);

  /// @brief Method .ctor, addr 0x1a04644, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareDataSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareDataSRP(LensFlareDataSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareDataSRP(LensFlareDataSRP const&) = delete;

  /// @brief Field elements, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareDataSRP, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataSRP, ___elements) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareDataSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareDataSRP*, "UnityEngine.Rendering", "LensFlareDataSRP");
