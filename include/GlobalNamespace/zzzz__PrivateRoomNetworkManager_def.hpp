#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PrivateRoomPermissions_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomNetworkManager)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
struct PrivateRoomPermissions;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationFailure;
}
namespace GlobalNamespace {
class __GlobalRotationManager__OnFetchGlobalRotationSuccess;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceFailed;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceSuccess;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
struct __PrivateRoomNetworkManager__EvictionReason;
}
namespace GlobalNamespace {
class __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated;
}
namespace GlobalNamespace {
class __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated;
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
// Forward declare root types
namespace GlobalNamespace {
struct __PrivateRoomNetworkManager__EvictionReason;
}
namespace GlobalNamespace {
class PrivateRoomNetworkManager;
}
namespace GlobalNamespace {
class __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated;
}
namespace GlobalNamespace {
class __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason);
MARK_REF_PTR_T(::GlobalNamespace::PrivateRoomNetworkManager);
MARK_REF_PTR_T(::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated);
// Type: ::EvictionReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PrivateRoomNetworkManager::EvictionReason
struct CORDL_TYPE __PrivateRoomNetworkManager__EvictionReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PrivateRoomNetworkManager__EvictionReason_Unwrapped
  enum struct ____PrivateRoomNetworkManager__EvictionReason_Unwrapped : int32_t {
    __E_kicked = static_cast<int32_t>(0x0),
    __E_ownerLeft = static_cast<int32_t>(0x1),
    __E_changedPermissions = static_cast<int32_t>(0x2),
    __E_banned = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PrivateRoomNetworkManager__EvictionReason_Unwrapped() const noexcept {
    return static_cast<____PrivateRoomNetworkManager__EvictionReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomNetworkManager__EvictionReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PrivateRoomNetworkManager__EvictionReason(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field banned value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason const banned;

  /// @brief Field changedPermissions value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason const changedPermissions;

  /// @brief Field kicked value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason const kicked;

  /// @brief Field ownerLeft value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason const ownerLeft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPrivateRoomPermissionsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomNetworkManager::OnPrivateRoomPermissionsUpdated*
class CORDL_TYPE __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c81e64, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c81ee8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c81e50, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions);

  static inline ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c81d8c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated(__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated(__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnIsOwnerPresentUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomNetworkManager::OnIsOwnerPresentUpdated*
class CORDL_TYPE __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c81fd0, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsOwnerPresent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c82058, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c81fb8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsOwnerPresent);

  static inline ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c81ef4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated(__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrivateRoomNetworkManager__OnIsOwnerPresentUpdated(__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PrivateRoomNetworkManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomNetworkManager*
class CORDL_TYPE PrivateRoomNetworkManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PrivateRoomNetworkManager>> {
public:
  // Declarations
  using EvictionReason = ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason;

  using OnIsOwnerPresentUpdated = ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated;

  using OnPrivateRoomPermissionsUpdated = ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated;

  /// @brief Field <curPrivateRoomPermissions>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__curPrivateRoomPermissions_k__BackingField,
                      put = __cordl_internal_set__curPrivateRoomPermissions_k__BackingField))::GlobalNamespace::PrivateRoomPermissions _curPrivateRoomPermissions_k__BackingField;

  /// @brief Field <isOwnerPresent>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isOwnerPresent_k__BackingField, put = __cordl_internal_set__isOwnerPresent_k__BackingField)) bool _isOwnerPresent_k__BackingField;

  __declspec(property(get = get_curPrivateRoomPermissions, put = set_curPrivateRoomPermissions))::GlobalNamespace::PrivateRoomPermissions curPrivateRoomPermissions;

  __declspec(property(get = get_isOwnerPresent, put = set_isOwnerPresent)) bool isOwnerPresent;

  /// @brief Field onIsOwnerPresentUpdatedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsOwnerPresentUpdatedCallbacks,
                      put = __cordl_internal_set_onIsOwnerPresentUpdatedCallbacks))::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* onIsOwnerPresentUpdatedCallbacks;

  /// @brief Field onNetworkPrivateRoomPermissionsUpdated, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onNetworkPrivateRoomPermissionsUpdated,
      put = __cordl_internal_set_onNetworkPrivateRoomPermissionsUpdated))::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated* onNetworkPrivateRoomPermissionsUpdated;

  /// @brief Field privateRoomOwnerAccountID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomOwnerAccountID, put = __cordl_internal_set_privateRoomOwnerAccountID))::StringW privateRoomOwnerAccountID;

  /// @brief Method ClearPrivateRoomOwner, addr 0x2c811f0, size 0x128, virtual false, abstract: false, final false
  inline void ClearPrivateRoomOwner();

  /// @brief Method GetPrivateRoomExpansionPrices, addr 0x2c81adc, size 0x80, virtual false, abstract: false, final false
  inline void GetPrivateRoomExpansionPrices(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* onSuccess,
                                            ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* onFailure);

  /// @brief Method GetPrivateRoomSandboxPrice, addr 0x2c81a5c, size 0x80, virtual false, abstract: false, final false
  inline void GetPrivateRoomSandboxPrice(::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* onSuccess, ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* onFailure);

  /// @brief Method IsLocalAccountPrivateRoomOwner, addr 0x2c81318, size 0xb8, virtual false, abstract: false, final false
  inline bool IsLocalAccountPrivateRoomOwner();

  static inline ::GlobalNamespace::PrivateRoomNetworkManager* New_ctor();

  /// @brief Method OnLostPermissionsToPrivateRoom, addr 0x2c77d58, size 0x104, virtual false, abstract: false, final false
  inline void OnLostPermissionsToPrivateRoom(::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason reason);

  /// @brief Method OnPlayerBecameOffline, addr 0x2c816f8, size 0xd4, virtual false, abstract: false, final false
  inline void OnPlayerBecameOffline(::StringW accountID);

  /// @brief Method OnPlayerBecameOnline, addr 0x2c816f4, size 0x4, virtual false, abstract: false, final false
  inline void OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus);

  /// @brief Method OnPlayerDataAdded, addr 0x2c81c8c, size 0x5c, virtual false, abstract: false, final false
  inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataRemoved, addr 0x2c81ce8, size 0x5c, virtual false, abstract: false, final false
  inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerStatusUpdated, addr 0x2c817cc, size 0x290, virtual false, abstract: false, final false
  inline void OnPlayerStatusUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses);

  /// @brief Method OnRoomLoaded, addr 0x2c80fe4, size 0x60, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* newRoom);

  /// @brief Method RefreshIsOwnerPresent, addr 0x2c813fc, size 0x248, virtual false, abstract: false, final false
  inline void RefreshIsOwnerPresent();

  /// @brief Method SetIsOwnerPresent, addr 0x2c81b80, size 0x10c, virtual false, abstract: false, final false
  inline void SetIsOwnerPresent(bool newIsOwnerPresent);

  /// @brief Method SetPrivateRoomOwner, addr 0x2c81044, size 0x1ac, virtual false, abstract: false, final false
  inline void SetPrivateRoomOwner(::StringW ownerAccountID);

  /// @brief Method SetPrivateRoomPermissions, addr 0x2c813d0, size 0x2c, virtual false, abstract: false, final false
  inline void SetPrivateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions);

  /// @brief Method Start, addr 0x2c80c9c, size 0x348, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::PrivateRoomPermissions const& __cordl_internal_get__curPrivateRoomPermissions_k__BackingField() const;

  constexpr ::GlobalNamespace::PrivateRoomPermissions& __cordl_internal_get__curPrivateRoomPermissions_k__BackingField();

  constexpr bool const& __cordl_internal_get__isOwnerPresent_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOwnerPresent_k__BackingField();

  constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*& __cordl_internal_get_onIsOwnerPresentUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*> const& __cordl_internal_get_onIsOwnerPresentUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*& __cordl_internal_get_onNetworkPrivateRoomPermissionsUpdated();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*> const&
  __cordl_internal_get_onNetworkPrivateRoomPermissionsUpdated() const;

  constexpr ::StringW const& __cordl_internal_get_privateRoomOwnerAccountID() const;

  constexpr ::StringW& __cordl_internal_get_privateRoomOwnerAccountID();

  constexpr void __cordl_internal_set__curPrivateRoomPermissions_k__BackingField(::GlobalNamespace::PrivateRoomPermissions value);

  constexpr void __cordl_internal_set__isOwnerPresent_k__BackingField(bool value);

  constexpr void __cordl_internal_set_onIsOwnerPresentUpdatedCallbacks(::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* value);

  constexpr void __cordl_internal_set_onNetworkPrivateRoomPermissionsUpdated(::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated* value);

  constexpr void __cordl_internal_set_privateRoomOwnerAccountID(::StringW value);

  /// @brief Method .ctor, addr 0x2c81d44, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_curPrivateRoomPermissions, addr 0x2c81b5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PrivateRoomPermissions get_curPrivateRoomPermissions();

  /// @brief Method get_isOwnerPresent, addr 0x2c81b6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOwnerPresent();

  /// @brief Method set_curPrivateRoomPermissions, addr 0x2c81b64, size 0x8, virtual false, abstract: false, final false
  inline void set_curPrivateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions value);

  /// @brief Method set_isOwnerPresent, addr 0x2c81b74, size 0xc, virtual false, abstract: false, final false
  inline void set_isOwnerPresent(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomNetworkManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomNetworkManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateRoomNetworkManager(PrivateRoomNetworkManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomNetworkManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateRoomNetworkManager(PrivateRoomNetworkManager const&) = delete;

  /// @brief Field privateRoomOwnerAccountID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___privateRoomOwnerAccountID;

  /// @brief Field <curPrivateRoomPermissions>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::PrivateRoomPermissions ____curPrivateRoomPermissions_k__BackingField;

  /// @brief Field onNetworkPrivateRoomPermissionsUpdated, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated* ___onNetworkPrivateRoomPermissionsUpdated;

  /// @brief Field <isOwnerPresent>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isOwnerPresent_k__BackingField;

  /// @brief Field onIsOwnerPresentUpdatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* ___onIsOwnerPresentUpdatedCallbacks;

  /// @brief Field PRIVATE_ROOM_THEMES_POOL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIVATE_ROOM_THEMES_POOL_KEY{ u"privateRoomThemes" };

  /// @brief Field PRIVATE_ROOM_THEMES_ROTATION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIVATE_ROOM_THEMES_ROTATION_KEY{ u"privateRoomThemes" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomNetworkManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomNetworkManager, ___privateRoomOwnerAccountID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomNetworkManager, ____curPrivateRoomPermissions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomNetworkManager, ___onNetworkPrivateRoomPermissionsUpdated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomNetworkManager, ____isOwnerPresent_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomNetworkManager, ___onIsOwnerPresentUpdatedCallbacks) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason, "", "PrivateRoomNetworkManager/EvictionReason");
NEED_NO_BOX(::GlobalNamespace::PrivateRoomNetworkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomNetworkManager*, "", "PrivateRoomNetworkManager");
NEED_NO_BOX(::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*, "", "PrivateRoomNetworkManager/OnIsOwnerPresentUpdated");
NEED_NO_BOX(::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*, "", "PrivateRoomNetworkManager/OnPrivateRoomPermissionsUpdated");
