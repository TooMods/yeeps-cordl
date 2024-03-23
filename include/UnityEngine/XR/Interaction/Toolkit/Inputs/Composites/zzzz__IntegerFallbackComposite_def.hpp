#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerFallbackComposite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
class IntegerFallbackComposite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites::IntegerFallbackComposite
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Composites::IntegerFallbackComposite*
class CORDL_TYPE IntegerFallbackComposite : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<int32_t> {
public:
  // Declarations
  /// @brief Field first, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) int32_t first;

  /// @brief Field second, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) int32_t second;

  /// @brief Field third, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_third, put = __cordl_internal_set_third)) int32_t third;

  /// @brief Method Initialize, addr 0x2a2a4bc, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite* New_ctor();

  /// @brief Method ReadValue, addr 0x2a2a410, size 0xac, virtual true, abstract: false, final false
  inline int32_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_first() const;

  constexpr int32_t& __cordl_internal_get_first();

  constexpr int32_t const& __cordl_internal_get_second() const;

  constexpr int32_t& __cordl_internal_get_second();

  constexpr int32_t const& __cordl_internal_get_third() const;

  constexpr int32_t& __cordl_internal_get_third();

  constexpr void __cordl_internal_set_first(int32_t value);

  constexpr void __cordl_internal_set_second(int32_t value);

  constexpr void __cordl_internal_set_third(int32_t value);

  /// @brief Method .ctor, addr 0x2a2a528, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerFallbackComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerFallbackComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerFallbackComposite(IntegerFallbackComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerFallbackComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerFallbackComposite(IntegerFallbackComposite const&) = delete;

  /// @brief Field first, offset: 0x10, size: 0x4, def value: None
  int32_t ___first;

  /// @brief Field second, offset: 0x14, size: 0x4, def value: None
  int32_t ___second;

  /// @brief Field third, offset: 0x18, size: 0x4, def value: None
  int32_t ___third;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite, ___first) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite, ___second) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite, ___third) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::IntegerFallbackComposite*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "IntegerFallbackComposite");
