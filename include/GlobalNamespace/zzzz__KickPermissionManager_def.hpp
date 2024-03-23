#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KickPermissionManager)
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __KickPermissionManager__OnCanKickOtherPlayersUpdated;
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
// Forward declare root types
namespace GlobalNamespace {
class KickPermissionManager;
}
namespace GlobalNamespace {
class __KickPermissionManager__OnCanKickOtherPlayersUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KickPermissionManager);
MARK_REF_PTR_T(::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated);
// Type: ::OnCanKickOtherPlayersUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KickPermissionManager::OnCanKickOtherPlayersUpdated*
class CORDL_TYPE __KickPermissionManager__OnCanKickOtherPlayersUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1061fbc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newCanKickOtherPlayers, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1062044, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1061fa4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newCanKickOtherPlayers);

  static inline ::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1061ee0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KickPermissionManager__OnCanKickOtherPlayersUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KickPermissionManager__OnCanKickOtherPlayersUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KickPermissionManager__OnCanKickOtherPlayersUpdated(__KickPermissionManager__OnCanKickOtherPlayersUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KickPermissionManager__OnCanKickOtherPlayersUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KickPermissionManager__OnCanKickOtherPlayersUpdated(__KickPermissionManager__OnCanKickOtherPlayersUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KickPermissionManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KickPermissionManager*
class CORDL_TYPE KickPermissionManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::KickPermissionManager>> {
public:
  // Declarations
  using OnCanKickOtherPlayersUpdated = ::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated;

  /// @brief Field <canKickOtherPlayers>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__canKickOtherPlayers_k__BackingField, put = setStaticF__canKickOtherPlayers_k__BackingField)) bool _canKickOtherPlayers_k__BackingField;

  /// @brief Field onCanKickOtherPlayersUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onCanKickOtherPlayersUpdatedCallbacks,
                      put = __cordl_internal_set_onCanKickOtherPlayersUpdatedCallbacks))::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated* onCanKickOtherPlayersUpdatedCallbacks;

  static inline ::GlobalNamespace::KickPermissionManager* New_ctor();

  /// @brief Method OnDisable, addr 0x1061ae0, size 0x2ac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x10615f8, size 0x230, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x1061d94, size 0x4, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnRoomLoaded, addr 0x1061d8c, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x1061d90, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method RefreshCanKickOtherPlayers, addr 0x1061828, size 0x2b8, virtual false, abstract: false, final false
  static inline void RefreshCanKickOtherPlayers();

  /// @brief Method ShouldBeAbleToKickOtherPlayers, addr 0x1061d98, size 0x100, virtual false, abstract: false, final false
  static inline bool ShouldBeAbleToKickOtherPlayers();

  constexpr ::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated*& __cordl_internal_get_onCanKickOtherPlayersUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated*> const& __cordl_internal_get_onCanKickOtherPlayersUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_onCanKickOtherPlayersUpdatedCallbacks(::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated* value);

  /// @brief Method .ctor, addr 0x1061e98, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__canKickOtherPlayers_k__BackingField();

  /// @brief Method get_canKickOtherPlayers, addr 0x1061564, size 0x48, virtual false, abstract: false, final false
  static inline bool get_canKickOtherPlayers();

  static inline void setStaticF__canKickOtherPlayers_k__BackingField(bool value);

  /// @brief Method set_canKickOtherPlayers, addr 0x10615ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_canKickOtherPlayers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KickPermissionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KickPermissionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KickPermissionManager(KickPermissionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KickPermissionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KickPermissionManager(KickPermissionManager const&) = delete;

  /// @brief Field onCanKickOtherPlayersUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated* ___onCanKickOtherPlayersUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Kick Permissions: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KickPermissionManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KickPermissionManager, ___onCanKickOtherPlayersUpdatedCallbacks) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KickPermissionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KickPermissionManager*, "", "KickPermissionManager");
NEED_NO_BOX(::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KickPermissionManager__OnCanKickOtherPlayersUpdated*, "", "KickPermissionManager/OnCanKickOtherPlayersUpdated");
