#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
CORDL_MODULE_EXPORT(SymbolThoughtBubble)
namespace GlobalNamespace {
class __ThoughtBubble__OnHovered;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SymbolThoughtBubble;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SymbolThoughtBubble);
// Type: ::SymbolThoughtBubble
// SizeInfo { instance_size: 440, native_size: -1, calculated_instance_size: 440, calculated_native_size: 440, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SymbolThoughtBubble*
class CORDL_TYPE SymbolThoughtBubble : public ::GlobalNamespace::ThoughtBubble {
public:
  // Declarations
  /// @brief Field symbol, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_symbol, put = __cordl_internal_set_symbol))::UnityW<::UnityEngine::GameObject> symbol;

  /// @brief Method Initialize, addr 0xf4f660, size 0x38, virtual true, abstract: false, final false
  inline void Initialize(::UnityEngine::Vector3 initialLocalPosition, ::UnityEngine::Quaternion localRotation, bool startActive, bool isQuickCraft,
                         ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCrafted, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTapped,
                         ::GlobalNamespace::__ThoughtBubble__OnHovered* onHovered);

  static inline ::GlobalNamespace::SymbolThoughtBubble* New_ctor();

  /// @brief Method TriggerCraft, addr 0xf4f698, size 0x128, virtual true, abstract: false, final false
  inline void TriggerCraft();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_symbol() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_symbol();

  constexpr void __cordl_internal_set_symbol(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0xf4f7c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymbolThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymbolThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymbolThoughtBubble(SymbolThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymbolThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymbolThoughtBubble(SymbolThoughtBubble const&) = delete;

  /// @brief Field symbol, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___symbol;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SymbolThoughtBubble, 0x1b8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SymbolThoughtBubble, ___symbol) == 0x1b0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SymbolThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SymbolThoughtBubble*, "", "SymbolThoughtBubble");
