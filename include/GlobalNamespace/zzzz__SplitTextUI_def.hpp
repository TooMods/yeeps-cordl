#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SplitTextUI)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SplitTextUI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SplitTextUI);
// Type: ::SplitTextUI
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SplitTextUI*
class CORDL_TYPE SplitTextUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::UnityW<::UnityEngine::Transform> parent;

  /// @brief Field texts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_texts, put = __cordl_internal_set_texts))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> texts;

  /// @brief Method DisplayText, addr 0xf25078, size 0x140, virtual false, abstract: false, final false
  inline void DisplayText(::StringW text);

  /// @brief Method Initialize, addr 0xf24f50, size 0x128, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::SplitTextUI* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_texts() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_texts();

  constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_texts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  /// @brief Method .ctor, addr 0xf251b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SplitTextUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SplitTextUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SplitTextUI(SplitTextUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SplitTextUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SplitTextUI(SplitTextUI const&) = delete;

  /// @brief Field parent, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___parent;

  /// @brief Field texts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SplitTextUI, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitTextUI, ___parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitTextUI, ___texts) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SplitTextUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SplitTextUI*, "", "SplitTextUI");
