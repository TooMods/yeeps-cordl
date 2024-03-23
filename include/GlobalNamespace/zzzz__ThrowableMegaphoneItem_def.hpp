#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableEmbeddingItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ThrowableMegaphoneItem)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class VoiceChatSource;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableMegaphoneItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableMegaphoneItem);
// Type: ::ThrowableMegaphoneItem
// SizeInfo { instance_size: 392, native_size: -1, calculated_instance_size: 392, calculated_native_size: 392, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableMegaphoneItem*
class CORDL_TYPE ThrowableMegaphoneItem : public ::GlobalNamespace::ThrowableEmbeddingItem {
public:
  // Declarations
  /// @brief Field avatar, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field expressionController, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_expressionController, put = __cordl_internal_set_expressionController))::UnityW<::GlobalNamespace::ExpressionController> expressionController;

  /// @brief Field voiceChatSource, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_voiceChatSource, put = __cordl_internal_set_voiceChatSource))::UnityW<::GlobalNamespace::VoiceChatSource> voiceChatSource;

  /// @brief Method EmbedAtRightAngle, addr 0x2f67360, size 0x8, virtual true, abstract: false, final false
  inline bool EmbedAtRightAngle();

  /// @brief Method Initialize, addr 0x2f67198, size 0x1c, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method MakeVisualOnly, addr 0x2f670c0, size 0xd8, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::ThrowableMegaphoneItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2f67368, size 0xf8, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnIsMasterUpdated, addr 0x2f6735c, size 0x4, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method Refresh, addr 0x2f671b4, size 0x1a8, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_expressionController() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_expressionController();

  constexpr ::UnityW<::GlobalNamespace::VoiceChatSource> const& __cordl_internal_get_voiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::VoiceChatSource>& __cordl_internal_get_voiceChatSource();

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_expressionController(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_voiceChatSource(::UnityW<::GlobalNamespace::VoiceChatSource> value);

  /// @brief Method .ctor, addr 0x2f67460, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableMegaphoneItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableMegaphoneItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableMegaphoneItem(ThrowableMegaphoneItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableMegaphoneItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableMegaphoneItem(ThrowableMegaphoneItem const&) = delete;

  /// @brief Field voiceChatSource, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatSource> ___voiceChatSource;

  /// @brief Field expressionController, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___expressionController;

  /// @brief Field avatar, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableMegaphoneItem, 0x188>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableMegaphoneItem, ___voiceChatSource) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableMegaphoneItem, ___expressionController) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableMegaphoneItem, ___avatar) == 0x180, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableMegaphoneItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableMegaphoneItem*, "", "ThrowableMegaphoneItem");
