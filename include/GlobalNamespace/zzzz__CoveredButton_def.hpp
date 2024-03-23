#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoveredButton)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CoveredButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoveredButton);
// Type: ::CoveredButton
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CoveredButton*
class CORDL_TYPE CoveredButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button))::UnityW<::GlobalNamespace::SimpleButtonController> button;

  /// @brief Field buttonCover, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonCover, put = __cordl_internal_set_buttonCover))::UnityW<::UnityEngine::Transform> buttonCover;

  /// @brief Field coverP, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_coverP, put = __cordl_internal_set_coverP)) float_t coverP;

  /// @brief Field initialCoverAngle, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_initialCoverAngle, put = __cordl_internal_set_initialCoverAngle)) float_t initialCoverAngle;

  /// @brief Field isAnimating, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isAnimating, put = __cordl_internal_set_isAnimating)) bool isAnimating;

  /// @brief Field isCovered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isCovered, put = __cordl_internal_set_isCovered)) bool isCovered;

  /// @brief Field openCoverAngle, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_openCoverAngle, put = __cordl_internal_set_openCoverAngle)) float_t openCoverAngle;

  static inline ::GlobalNamespace::CoveredButton* New_ctor();

  /// @brief Method OnDisable, addr 0x29d66a8, size 0x4c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetIsCovered, addr 0x29d655c, size 0x9c, virtual false, abstract: false, final false
  inline void SetIsCovered(bool newIsCovered, bool instant);

  /// @brief Method Update, addr 0x29d65f8, size 0xb0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_button() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_button();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_buttonCover() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_buttonCover();

  constexpr float_t const& __cordl_internal_get_coverP() const;

  constexpr float_t& __cordl_internal_get_coverP();

  constexpr float_t const& __cordl_internal_get_initialCoverAngle() const;

  constexpr float_t& __cordl_internal_get_initialCoverAngle();

  constexpr bool const& __cordl_internal_get_isAnimating() const;

  constexpr bool& __cordl_internal_get_isAnimating();

  constexpr bool const& __cordl_internal_get_isCovered() const;

  constexpr bool& __cordl_internal_get_isCovered();

  constexpr float_t const& __cordl_internal_get_openCoverAngle() const;

  constexpr float_t& __cordl_internal_get_openCoverAngle();

  constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_buttonCover(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_coverP(float_t value);

  constexpr void __cordl_internal_set_initialCoverAngle(float_t value);

  constexpr void __cordl_internal_set_isAnimating(bool value);

  constexpr void __cordl_internal_set_isCovered(bool value);

  constexpr void __cordl_internal_set_openCoverAngle(float_t value);

  /// @brief Method .ctor, addr 0x29d66f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoveredButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoveredButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoveredButton(CoveredButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoveredButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoveredButton(CoveredButton const&) = delete;

  /// @brief Field buttonCover, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___buttonCover;

  /// @brief Field openCoverAngle, offset: 0x20, size: 0x4, def value: None
  float_t ___openCoverAngle;

  /// @brief Field button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___button;

  /// @brief Field isCovered, offset: 0x30, size: 0x1, def value: None
  bool ___isCovered;

  /// @brief Field coverP, offset: 0x34, size: 0x4, def value: None
  float_t ___coverP;

  /// @brief Field isAnimating, offset: 0x38, size: 0x1, def value: None
  bool ___isAnimating;

  /// @brief Field initialCoverAngle, offset: 0x3c, size: 0x4, def value: None
  float_t ___initialCoverAngle;

  /// @brief Field coverDuration offset 0xffffffff size 0x4
  static constexpr float_t coverDuration{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoveredButton, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___buttonCover) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___openCoverAngle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___isCovered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___coverP) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___isAnimating) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoveredButton, ___initialCoverAngle) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoveredButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoveredButton*, "", "CoveredButton");
