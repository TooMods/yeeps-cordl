#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FollowPlayerIndicator)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class FollowPlayerIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FollowPlayerIndicator);
// Type: ::FollowPlayerIndicator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FollowPlayerIndicator*
class CORDL_TYPE FollowPlayerIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field avatar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field headVoiceChatSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_headVoiceChatSource, put = __cordl_internal_set_headVoiceChatSource))::UnityW<::GlobalNamespace::ExpressionController> headVoiceChatSource;

  /// @brief Field isFollowingPlayerContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_isFollowingPlayerContainer, put = __cordl_internal_set_isFollowingPlayerContainer))::UnityW<::UnityEngine::GameObject> isFollowingPlayerContainer;

  /// @brief Field notFollowingPlayerContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_notFollowingPlayerContainer, put = __cordl_internal_set_notFollowingPlayerContainer))::UnityW<::UnityEngine::GameObject> notFollowingPlayerContainer;

  static inline ::GlobalNamespace::FollowPlayerIndicator* New_ctor();

  /// @brief Method OnDisable, addr 0x308652c, size 0x128, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x308627c, size 0x11c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPlayerToFollowUpdated, addr 0x3086398, size 0x194, virtual false, abstract: false, final false
  inline void OnPlayerToFollowUpdated(::StringW userID);

  /// @brief Method Start, addr 0x3086254, size 0x28, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_headVoiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_headVoiceChatSource();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_isFollowingPlayerContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_isFollowingPlayerContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_notFollowingPlayerContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_notFollowingPlayerContainer();

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_isFollowingPlayerContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_notFollowingPlayerContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3086654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FollowPlayerIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FollowPlayerIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FollowPlayerIndicator(FollowPlayerIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FollowPlayerIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FollowPlayerIndicator(FollowPlayerIndicator const&) = delete;

  /// @brief Field isFollowingPlayerContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___isFollowingPlayerContainer;

  /// @brief Field notFollowingPlayerContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___notFollowingPlayerContainer;

  /// @brief Field avatar, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field headVoiceChatSource, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___headVoiceChatSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FollowPlayerIndicator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerIndicator, ___isFollowingPlayerContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerIndicator, ___notFollowingPlayerContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerIndicator, ___avatar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerIndicator, ___headVoiceChatSource) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FollowPlayerIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FollowPlayerIndicator*, "", "FollowPlayerIndicator");
