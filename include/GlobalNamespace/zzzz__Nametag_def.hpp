#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Nametag)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Nametag;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Nametag);
// Type: ::Nametag
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Nametag*
class CORDL_TYPE Nametag : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field followTarget, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_followTarget, put = __cordl_internal_set_followTarget))::UnityW<::UnityEngine::Transform> followTarget;

  /// @brief Field masterPlayer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field nameText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameText, put = __cordl_internal_set_nameText))::UnityW<::UnityEngine::UI::Text> nameText;

  /// @brief Field offset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  /// @brief Method Clear, addr 0x2e08bc0, size 0x24, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DestorySelf, addr 0x2e08be4, size 0x6c, virtual false, abstract: false, final false
  inline void DestorySelf();

  /// @brief Method Display, addr 0x2e0897c, size 0x90, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::MasterPlayer* masterPlayer, ::GlobalNamespace::Player* player, ::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::Nametag* New_ctor();

  /// @brief Method Update, addr 0x2e08a0c, size 0x1b4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTarget();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameText();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_nameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2e08c50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nametag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nametag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nametag(Nametag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nametag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nametag(Nametag const&) = delete;

  /// @brief Field nameText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameText;

  /// @brief Field offset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field followTarget, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___followTarget;

  /// @brief Field masterPlayer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Nametag, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Nametag, ___nameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Nametag, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Nametag, ___followTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Nametag, ___masterPlayer) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Nametag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Nametag*, "", "Nametag");
