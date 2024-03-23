#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ChallengesBoard)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ChallengesBoard;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ChallengesBoard);
// Type: ::ChallengesBoard
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengesBoard*
class CORDL_TYPE ChallengesBoard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field isActive, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  static inline ::GlobalNamespace::ChallengesBoard* New_ctor();

  /// @brief Method OnDisable, addr 0x275c4d0, size 0x128, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x275c370, size 0x140, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsTechWebModeUpdated, addr 0x275c4b0, size 0x20, virtual false, abstract: false, final false
  inline void OnIsTechWebModeUpdated(bool newTechWebMode);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  /// @brief Method .ctor, addr 0x275c5f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengesBoard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengesBoard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengesBoard(ChallengesBoard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengesBoard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengesBoard(ChallengesBoard const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field isActive, offset: 0x20, size: 0x1, def value: None
  bool ___isActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ChallengesBoard, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengesBoard, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengesBoard, ___isActive) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ChallengesBoard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChallengesBoard*, "", "ChallengesBoard");
