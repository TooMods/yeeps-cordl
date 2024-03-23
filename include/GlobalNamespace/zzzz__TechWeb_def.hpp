#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TechWeb)
namespace GlobalNamespace {
struct RotationItem;
}
namespace GlobalNamespace {
class TechWebThoughtBubble;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TechWeb;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TechWeb);
// Type: ::TechWeb
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TechWeb*
class CORDL_TYPE TechWeb : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field nodeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeContainer, put = __cordl_internal_set_nodeContainer))::UnityW<::UnityEngine::Transform> nodeContainer;

  /// @brief Field nodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* nodes;

  /// @brief Field root, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root))::UnityW<::GlobalNamespace::TechWebThoughtBubble> root;

  /// @brief Field thoughtBubbleRotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_thoughtBubbleRotation, put = setStaticF_thoughtBubbleRotation))::UnityEngine::Quaternion thoughtBubbleRotation;

  /// @brief Method CreateConnectionLine, addr 0xf4b874, size 0x108, virtual false, abstract: false, final false
  inline void CreateConnectionLine(::GlobalNamespace::TechWebThoughtBubble* a, ::GlobalNamespace::TechWebThoughtBubble* b);

  /// @brief Method FindNodesRecursive, addr 0xf4bc04, size 0x3e0, virtual false, abstract: false, final false
  static inline void FindNodesRecursive(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* nodes);

  /// @brief Method GetAllNodes, addr 0xf4c44c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* GetAllNodes();

  /// @brief Method InitializeNodes, addr 0xf4b5a8, size 0xf0, virtual false, abstract: false, final false
  inline void InitializeNodes();

  /// @brief Method Intialize, addr 0xf4a5f8, size 0xfb0, virtual false, abstract: false, final false
  inline void Intialize(::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*> itemCosts);

  static inline ::GlobalNamespace::TechWeb* New_ctor();

  /// @brief Method SetActive, addr 0xf4c2dc, size 0x170, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nodeContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nodeContainer();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*& __cordl_internal_get_nodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>*> const& __cordl_internal_get_nodes() const;

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble> const& __cordl_internal_get_root() const;

  constexpr ::UnityW<::GlobalNamespace::TechWebThoughtBubble>& __cordl_internal_get_root();

  constexpr void __cordl_internal_set_nodeContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* value);

  constexpr void __cordl_internal_set_root(::UnityW<::GlobalNamespace::TechWebThoughtBubble> value);

  /// @brief Method .ctor, addr 0xf4c454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF_thoughtBubbleRotation();

  static inline void setStaticF_thoughtBubbleRotation(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TechWeb();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TechWeb", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TechWeb(TechWeb&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TechWeb", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TechWeb(TechWeb const&) = delete;

  /// @brief Field nodeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___nodeContainer;

  /// @brief Field root, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TechWebThoughtBubble> ___root;

  /// @brief Field nodes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TechWebThoughtBubble>>* ___nodes;

  /// @brief Field closeConnectionThreshold offset 0xffffffff size 0x4
  static constexpr float_t closeConnectionThreshold{ 0.2 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Tech Web: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TechWeb, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWeb, ___nodeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWeb, ___root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechWeb, ___nodes) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TechWeb);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TechWeb*, "", "TechWeb");
