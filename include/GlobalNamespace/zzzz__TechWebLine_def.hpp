#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TechWebLine)
namespace GlobalNamespace {
class TechWebThoughtBubble;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TechWebLine;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TechWebLine);
// Type: ::TechWebLine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWebLine*
class CORDL_TYPE TechWebLine : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field a, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a))::UnityW<::GlobalNamespace::TechWebThoughtBubble> a;

  /// @brief Field b, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b))::UnityW<::GlobalNamespace::TechWebThoughtBubble> b;

  /// @brief Field isLong, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isLong, put = __cordl_internal_set_isLong)) bool isLong;

  /// @brief Field isRegistered, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Method Initialize, addr 0xf4bfe4, size 0x2f8, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Transform* container, ::GlobalNamespace::TechWebThoughtBubble* a, ::GlobalNamespace::TechWebThoughtBubble* b);

  static inline ::GlobalNamespace::TechWebLine* New_ctor();

  /// @brief Method OnDisable, addr 0xf4fbf8, size 0x144, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf4fa40, size 0x1b8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnNodeIsOwnedUpdated, addr 0xf4f7c8, size 0x278, virtual false, abstract: false, final false
  inline void OnNodeIsOwnedUpdated(bool newIsOwned);

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble> const& __cordl_internal_get_a() const;

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble>& __cordl_internal_get_a();

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble> const& __cordl_internal_get_b() const;

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble>& __cordl_internal_get_b();

  constexpr bool const& __cordl_internal_get_isLong() const;

  constexpr bool& __cordl_internal_get_isLong();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr void __cordl_internal_set_a(::UnityW<::GlobalNamespace::TechWebThoughtBubble> value);

  constexpr void __cordl_internal_set_b(::UnityW<::GlobalNamespace::TechWebThoughtBubble> value);

  constexpr void __cordl_internal_set_isLong(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  /// @brief Method .ctor, addr 0xf4fd3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TechWebLine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TechWebLine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TechWebLine(TechWebLine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TechWebLine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TechWebLine(TechWebLine const&) = delete;

  /// @brief Field a, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TechWebThoughtBubble> ___a;

  /// @brief Field b, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TechWebThoughtBubble> ___b;

  /// @brief Field isLong, offset: 0x28, size: 0x1, def value: None
  bool ___isLong;

  /// @brief Field isRegistered, offset: 0x29, size: 0x1, def value: None
  bool ___isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TechWebLine, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebLine, ___a) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebLine, ___b) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebLine, ___isLong) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWebLine, ___isRegistered) == 0x29, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TechWebLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TechWebLine*, "", "TechWebLine");
