#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TechWebBoard)
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
class TechWeb;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TechWebBoard;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TechWebBoard);
// Type: ::TechWebBoard
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 67, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWebBoard*
class CORDL_TYPE TechWebBoard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field createOnStart, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_createOnStart, put = __cordl_internal_set_createOnStart)) bool createOnStart;

  /// @brief Field debugContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_debugContainer, put = __cordl_internal_set_debugContainer))::UnityW<::UnityEngine::GameObject> debugContainer;

  /// @brief Field isActive, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isCreatingBoard, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_isCreatingBoard, put = __cordl_internal_set_isCreatingBoard)) bool isCreatingBoard;

  /// @brief Field techWeb, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_techWeb, put = __cordl_internal_set_techWeb))::UnityW<::GlobalNamespace::TechWeb> techWeb;

  /// @brief Field techWebAnchor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebAnchor, put = __cordl_internal_set_techWebAnchor))::UnityW<::UnityEngine::Transform> techWebAnchor;

  /// @brief Field techWebOverrideZone, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_techWebOverrideZone, put = __cordl_internal_set_techWebOverrideZone))::UnityW<::UnityEngine::GameObject> techWebOverrideZone;

  /// @brief Method CreateBoard, addr 0x1442354, size 0x37c, virtual false, abstract: false, final false
  inline void CreateBoard();

  static inline ::GlobalNamespace::TechWebBoard* New_ctor();

  /// @brief Method OnDisable, addr 0x1442124, size 0x128, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1441f58, size 0x11c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsTechWebModeUpdated, addr 0x1442074, size 0xb0, virtual false, abstract: false, final false
  inline void OnIsTechWebModeUpdated(bool newTechWebMode);

  /// @brief Method OnResetButtonPressed, addr 0x1442994, size 0x8, virtual false, abstract: false, final false
  inline void OnResetButtonPressed();

  /// @brief Method OnUnlockAllPatternsButtonPressed, addr 0x1442760, size 0x234, virtual false, abstract: false, final false
  inline void OnUnlockAllPatternsButtonPressed();

  /// @brief Method Start, addr 0x144224c, size 0x108, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <CreateBoard>b__12_0, addr 0x14429a4, size 0x2ec, virtual false, abstract: false, final false
  inline void _CreateBoard_b__12_0(::GlobalNamespace::GlobalRotation globalRotation);

  /// @brief Method <CreateBoard>b__12_1, addr 0x1442c90, size 0x184, virtual false, abstract: false, final false
  inline void _CreateBoard_b__12_1(::StringW errorType);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr bool const& __cordl_internal_get_createOnStart() const;

  constexpr bool& __cordl_internal_get_createOnStart();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_debugContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_debugContainer();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isCreatingBoard() const;

  constexpr bool& __cordl_internal_get_isCreatingBoard();

  constexpr ::UnityW<::GlobalNamespace::TechWeb> const& __cordl_internal_get_techWeb() const;

  constexpr ::UnityW<::GlobalNamespace::TechWeb>& __cordl_internal_get_techWeb();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_techWebAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_techWebAnchor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_techWebOverrideZone() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_techWebOverrideZone();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_createOnStart(bool value);

  constexpr void __cordl_internal_set_debugContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isCreatingBoard(bool value);

  constexpr void __cordl_internal_set_techWeb(::UnityW<::GlobalNamespace::TechWeb> value);

  constexpr void __cordl_internal_set_techWebAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_techWebOverrideZone(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x144299c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TechWebBoard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TechWebBoard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TechWebBoard(TechWebBoard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TechWebBoard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TechWebBoard(TechWebBoard const&) = delete;

  /// @brief Field techWebAnchor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___techWebAnchor;

  /// @brief Field techWeb, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TechWeb> ___techWeb;

  /// @brief Field techWebOverrideZone, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___techWebOverrideZone;

  /// @brief Field activeContainer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field debugContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___debugContainer;

  /// @brief Field createOnStart, offset: 0x40, size: 0x1, def value: None
  bool ___createOnStart;

  /// @brief Field isActive, offset: 0x41, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isCreatingBoard, offset: 0x42, size: 0x1, def value: None
  bool ___isCreatingBoard;

  /// @brief Field globalRotationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString globalRotationKey{ u"techWeb" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TechWebBoard, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___techWebAnchor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___techWeb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___techWebOverrideZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___activeContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___debugContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___createOnStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___isActive) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebBoard, ___isCreatingBoard) == 0x42, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TechWebBoard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TechWebBoard*, "", "TechWebBoard");
