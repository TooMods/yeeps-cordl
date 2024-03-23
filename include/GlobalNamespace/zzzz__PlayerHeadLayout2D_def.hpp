#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerHeadLayout2D)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class PlayerHeadLayoutItem2D;
}
namespace GlobalNamespace {
class __PlayerHeadLayout2D__OnPlayerHeadSelected;
}
namespace GlobalNamespace {
class __PlayerHeadLayout2D____c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeadLayout2D;
}
namespace GlobalNamespace {
class __PlayerHeadLayout2D__OnPlayerHeadSelected;
}
namespace GlobalNamespace {
class __PlayerHeadLayout2D____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeadLayout2D);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0);
// Type: ::OnPlayerHeadSelected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeadLayout2D::OnPlayerHeadSelected*
class CORDL_TYPE __PlayerHeadLayout2D__OnPlayerHeadSelected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e05cf8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e05d18, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e05ce4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW userID);

  static inline ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e05c10, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerHeadLayout2D__OnPlayerHeadSelected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeadLayout2D__OnPlayerHeadSelected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerHeadLayout2D__OnPlayerHeadSelected(__PlayerHeadLayout2D__OnPlayerHeadSelected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeadLayout2D__OnPlayerHeadSelected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerHeadLayout2D__OnPlayerHeadSelected(__PlayerHeadLayout2D__OnPlayerHeadSelected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeadLayout2D::<>c__DisplayClass6_0*
class CORDL_TYPE __PlayerHeadLayout2D____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerHeadLayout2D> __4__this;

  /// @brief Field userID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userID, put = __cordl_internal_set_userID))::StringW userID;

  static inline ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0* New_ctor();

  /// @brief Method <Display>b__0, addr 0x2e05d24, size 0x20, virtual false, abstract: false, final false
  inline void _Display_b__0();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_userID() const;

  constexpr ::StringW& __cordl_internal_get_userID();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerHeadLayout2D> value);

  constexpr void __cordl_internal_set_userID(::StringW value);

  /// @brief Method .ctor, addr 0x2e058a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerHeadLayout2D____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeadLayout2D____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerHeadLayout2D____c__DisplayClass6_0(__PlayerHeadLayout2D____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeadLayout2D____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerHeadLayout2D____c__DisplayClass6_0(__PlayerHeadLayout2D____c__DisplayClass6_0 const&) = delete;

  /// @brief Field userID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userID;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadLayout2D> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0, ___userID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerHeadLayout2D
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeadLayout2D*
class CORDL_TYPE PlayerHeadLayout2D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnPlayerHeadSelected = ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0;

  /// @brief Field clearButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_clearButton, put = __cordl_internal_set_clearButton))::UnityW<::UnityEngine::Transform> clearButton;

  /// @brief Field layoutContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutContainer, put = __cordl_internal_set_layoutContainer))::UnityW<::UnityEngine::Transform> layoutContainer;

  /// @brief Field onPlayerHeadSelectedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerHeadSelectedCallbacks,
                      put = __cordl_internal_set_onPlayerHeadSelectedCallbacks))::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* onPlayerHeadSelectedCallbacks;

  /// @brief Field playerHeadLayoutItemPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerHeadLayoutItemPrefab, put = __cordl_internal_set_playerHeadLayoutItemPrefab))::UnityW<::UnityEngine::GameObject> playerHeadLayoutItemPrefab;

  /// @brief Field playerHeadLayoutItems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerHeadLayoutItems,
                      put = __cordl_internal_set_playerHeadLayoutItems))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>* playerHeadLayoutItems;

  /// @brief Method Clear, addr 0x2e0594c, size 0x180, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Display, addr 0x2e05344, size 0x4f8, virtual false, abstract: false, final false
  inline void Display(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerData>* playerDatas);

  static inline ::GlobalNamespace::PlayerHeadLayout2D* New_ctor();

  /// @brief Method OnClearButtonPressed, addr 0x2e05b8c, size 0x8, virtual false, abstract: false, final false
  inline void OnClearButtonPressed();

  /// @brief Method SelectHead, addr 0x2e05acc, size 0xc0, virtual false, abstract: false, final false
  inline void SelectHead(::StringW userID);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_clearButton() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_clearButton();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_layoutContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_layoutContainer();

  constexpr ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*& __cordl_internal_get_onPlayerHeadSelectedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*> const& __cordl_internal_get_onPlayerHeadSelectedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerHeadLayoutItemPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerHeadLayoutItemPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>*& __cordl_internal_get_playerHeadLayoutItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>*> const& __cordl_internal_get_playerHeadLayoutItems() const;

  constexpr void __cordl_internal_set_clearButton(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_layoutContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_onPlayerHeadSelectedCallbacks(::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* value);

  constexpr void __cordl_internal_set_playerHeadLayoutItemPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_playerHeadLayoutItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>* value);

  /// @brief Method .ctor, addr 0x2e05b94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeadLayout2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadLayout2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeadLayout2D(PlayerHeadLayout2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadLayout2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeadLayout2D(PlayerHeadLayout2D const&) = delete;

  /// @brief Field playerHeadLayoutItemPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___playerHeadLayoutItemPrefab;

  /// @brief Field layoutContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___layoutContainer;

  /// @brief Field clearButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___clearButton;

  /// @brief Field playerHeadLayoutItems, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>* ___playerHeadLayoutItems;

  /// @brief Field onPlayerHeadSelectedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* ___onPlayerHeadSelectedCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeadLayout2D, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayout2D, ___playerHeadLayoutItemPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayout2D, ___layoutContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayout2D, ___clearButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayout2D, ___playerHeadLayoutItems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayout2D, ___onPlayerHeadSelectedCallbacks) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeadLayout2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeadLayout2D*, "", "PlayerHeadLayout2D");
NEED_NO_BOX(::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*, "", "PlayerHeadLayout2D/OnPlayerHeadSelected");
NEED_NO_BOX(::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*, "", "PlayerHeadLayout2D/<>c__DisplayClass6_0");
