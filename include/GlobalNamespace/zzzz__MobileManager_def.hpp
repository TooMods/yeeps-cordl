#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerStatusManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileManager)
namespace GlobalNamespace {
class MobileInterface;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class __AccountManager__OnValidateMobileAccountSuccess;
}
namespace GlobalNamespace {
class __MobileManager__OnFollowPlayerSuccess;
}
namespace GlobalNamespace {
class __MobileManager__OnHasCameraLinkedPlayerDataUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnIsCameraLinkedUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnIsOccupyingCurrencyAnchorUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnPlayerToFollowUpdated;
}
namespace GlobalNamespace {
class __MobileManager____c;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
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
// Forward declare root types
namespace GlobalNamespace {
class MobileManager;
}
namespace GlobalNamespace {
class __MobileManager__OnFollowPlayerSuccess;
}
namespace GlobalNamespace {
class __MobileManager__OnHasCameraLinkedPlayerDataUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnIsCameraLinkedUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnIsOccupyingCurrencyAnchorUpdated;
}
namespace GlobalNamespace {
class __MobileManager__OnPlayerToFollowUpdated;
}
namespace GlobalNamespace {
class __MobileManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileManager);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__MobileManager____c);
// Type: ::OnIsOccupyingCurrencyAnchorUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::OnIsOccupyingCurrencyAnchorUpdated*
class CORDL_TYPE __MobileManager__OnIsOccupyingCurrencyAnchorUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfdfdc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsOccupyingCurrencyAnchor, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfe064, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfdfc4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsOccupyingCurrencyAnchor);

  static inline ::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfdf00, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager__OnIsOccupyingCurrencyAnchorUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnIsOccupyingCurrencyAnchorUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager__OnIsOccupyingCurrencyAnchorUpdated(__MobileManager__OnIsOccupyingCurrencyAnchorUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnIsOccupyingCurrencyAnchorUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager__OnIsOccupyingCurrencyAnchorUpdated(__MobileManager__OnIsOccupyingCurrencyAnchorUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerToFollowUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::OnPlayerToFollowUpdated*
class CORDL_TYPE __MobileManager__OnPlayerToFollowUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfe158, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW newUserID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfe178, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfe144, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW newUserID);

  static inline ::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfe070, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager__OnPlayerToFollowUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnPlayerToFollowUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager__OnPlayerToFollowUpdated(__MobileManager__OnPlayerToFollowUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnPlayerToFollowUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager__OnPlayerToFollowUpdated(__MobileManager__OnPlayerToFollowUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnIsCameraLinkedUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::OnIsCameraLinkedUpdated*
class CORDL_TYPE __MobileManager__OnIsCameraLinkedUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfe260, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsCameraLinked, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfe2e8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfe248, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsCameraLinked);

  static inline ::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfe184, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager__OnIsCameraLinkedUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnIsCameraLinkedUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager__OnIsCameraLinkedUpdated(__MobileManager__OnIsCameraLinkedUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnIsCameraLinkedUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager__OnIsCameraLinkedUpdated(__MobileManager__OnIsCameraLinkedUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHasCameraLinkedPlayerDataUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::OnHasCameraLinkedPlayerDataUpdated*
class CORDL_TYPE __MobileManager__OnHasCameraLinkedPlayerDataUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfe3d0, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasCameraLinkedPlayerData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfe458, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfe3b8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasCameraLinkedPlayerData);

  static inline ::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfe2f4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager__OnHasCameraLinkedPlayerDataUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnHasCameraLinkedPlayerDataUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager__OnHasCameraLinkedPlayerDataUpdated(__MobileManager__OnHasCameraLinkedPlayerDataUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnHasCameraLinkedPlayerDataUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager__OnHasCameraLinkedPlayerDataUpdated(__MobileManager__OnHasCameraLinkedPlayerDataUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFollowPlayerSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::OnFollowPlayerSuccess*
class CORDL_TYPE __MobileManager__OnFollowPlayerSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfe534, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfe554, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfe520, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfe464, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager__OnFollowPlayerSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnFollowPlayerSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager__OnFollowPlayerSuccess(__MobileManager__OnFollowPlayerSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager__OnFollowPlayerSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager__OnFollowPlayerSuccess(__MobileManager__OnFollowPlayerSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager::<>c*
class CORDL_TYPE __MobileManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MobileManager____c* __9;

  /// @brief Field <>9__71_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__71_0, put = setStaticF___9__71_0))::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* __9__71_0;

  static inline ::GlobalNamespace::__MobileManager____c* New_ctor();

  /// @brief Method <OnApplicationFocus>b__71_0, addr 0x2dfe5cc, size 0x68, virtual false, abstract: false, final false
  inline void _OnApplicationFocus_b__71_0();

  /// @brief Method .ctor, addr 0x2dfe5c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MobileManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* getStaticF___9__71_0();

  static inline void setStaticF___9(::GlobalNamespace::__MobileManager____c* value);

  static inline void setStaticF___9__71_0(::GlobalNamespace::__AccountManager__OnValidateMobileAccountSuccess* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileManager____c(__MobileManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileManager____c(__MobileManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileManager
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 169, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileManager*
class CORDL_TYPE MobileManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MobileManager>> {
public:
  // Declarations
  using OnFollowPlayerSuccess = ::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess;

  using OnHasCameraLinkedPlayerDataUpdated = ::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated;

  using OnIsCameraLinkedUpdated = ::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated;

  using OnIsOccupyingCurrencyAnchorUpdated = ::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated;

  using OnPlayerToFollowUpdated = ::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated;

  using __c = ::GlobalNamespace::__MobileManager____c;

  /// @brief Field <hasCameraLinkedPlayerData>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasCameraLinkedPlayerData_k__BackingField, put = setStaticF__hasCameraLinkedPlayerData_k__BackingField)) bool _hasCameraLinkedPlayerData_k__BackingField;

  /// @brief Field <isCameraLinked>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isCameraLinked_k__BackingField, put = setStaticF__isCameraLinked_k__BackingField)) bool _isCameraLinked_k__BackingField;

  /// @brief Field <isOccupyingCurrencyAnchor>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isOccupyingCurrencyAnchor_k__BackingField, put = setStaticF__isOccupyingCurrencyAnchor_k__BackingField)) bool _isOccupyingCurrencyAnchor_k__BackingField;

  /// @brief Field <isTempUnlinked>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__isTempUnlinked_k__BackingField, put = __cordl_internal_set__isTempUnlinked_k__BackingField)) bool _isTempUnlinked_k__BackingField;

  /// @brief Field <linkedPlayerUserID>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__linkedPlayerUserID_k__BackingField, put = setStaticF__linkedPlayerUserID_k__BackingField))::StringW _linkedPlayerUserID_k__BackingField;

  /// @brief Field <playerToFollowUserID>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__playerToFollowUserID_k__BackingField, put = setStaticF__playerToFollowUserID_k__BackingField))::StringW _playerToFollowUserID_k__BackingField;

  /// @brief Field doesPlayerExistInRoom, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_doesPlayerExistInRoom, put = setStaticF_doesPlayerExistInRoom)) bool doesPlayerExistInRoom;

  /// @brief Field enterLinkIsSelfMuted, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_enterLinkIsSelfMuted, put = __cordl_internal_set_enterLinkIsSelfMuted)) bool enterLinkIsSelfMuted;

  /// @brief Field hasFailedValidation, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_hasFailedValidation, put = __cordl_internal_set_hasFailedValidation)) bool hasFailedValidation;

  /// @brief Field isCurrentlyAttempting, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isCurrentlyAttempting, put = __cordl_internal_set_isCurrentlyAttempting)) bool isCurrentlyAttempting;

  __declspec(property(get = get_isTempUnlinked, put = set_isTempUnlinked)) bool isTempUnlinked;

  /// @brief Field lastAccountValidationTime, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastAccountValidationTime, put = __cordl_internal_set_lastAccountValidationTime))::System::DateTime lastAccountValidationTime;

  /// @brief Field lastFetchedStatus, offset 0x50, size 0x38
  __declspec(property(get = __cordl_internal_get_lastFetchedStatus, put = __cordl_internal_set_lastFetchedStatus))::GlobalNamespace::__PlayerStatusManager__PlayerStatus lastFetchedStatus;

  /// @brief Field mobileInterface, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileInterface, put = __cordl_internal_set_mobileInterface))::UnityW<::GlobalNamespace::MobileInterface> mobileInterface;

  /// @brief Field mobileInterfacePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileInterfacePrefab, put = __cordl_internal_set_mobileInterfacePrefab))::UnityW<::UnityEngine::GameObject> mobileInterfacePrefab;

  /// @brief Field nextAttemptTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAttemptTime, put = __cordl_internal_set_nextAttemptTime)) float_t nextAttemptTime;

  /// @brief Field onFollowPlayerSuccessCallbacks, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_onFollowPlayerSuccessCallbacks,
                      put = __cordl_internal_set_onFollowPlayerSuccessCallbacks))::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess* onFollowPlayerSuccessCallbacks;

  /// @brief Field onHasCameraLinkedPlayerDataUpdatedCallbacks, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onHasCameraLinkedPlayerDataUpdatedCallbacks,
      put = __cordl_internal_set_onHasCameraLinkedPlayerDataUpdatedCallbacks))::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated* onHasCameraLinkedPlayerDataUpdatedCallbacks;

  /// @brief Field onIsCameraLinkedUpdatedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsCameraLinkedUpdatedCallbacks,
                      put = __cordl_internal_set_onIsCameraLinkedUpdatedCallbacks))::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated* onIsCameraLinkedUpdatedCallbacks;

  /// @brief Field onIsOccupyingCurrencyAnchorUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onIsOccupyingCurrencyAnchorUpdatedCallbacks,
      put = __cordl_internal_set_onIsOccupyingCurrencyAnchorUpdatedCallbacks))::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated* onIsOccupyingCurrencyAnchorUpdatedCallbacks;

  /// @brief Field onPlayerToFollowUpdatedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerToFollowUpdatedCallbacks,
                      put = __cordl_internal_set_onPlayerToFollowUpdatedCallbacks))::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated* onPlayerToFollowUpdatedCallbacks;

  /// @brief Field photonRoomName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_photonRoomName, put = setStaticF_photonRoomName))::StringW photonRoomName;

  /// @brief Field roomKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_roomKey, put = setStaticF_roomKey))::StringW roomKey;

  /// @brief Field roomMapKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_roomMapKey, put = setStaticF_roomMapKey))::StringW roomMapKey;

  /// @brief Method FollowPlayerSuccess, addr 0x2dfd2b4, size 0x160, virtual false, abstract: false, final false
  static inline void FollowPlayerSuccess();

  static inline ::GlobalNamespace::MobileManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x2dfd798, size 0x204, virtual false, abstract: false, final false
  inline void OnApplicationFocus();

  /// @brief Method OnMasterPlayerCreated, addr 0x2dfb54c, size 0x59c, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* masterPlayer);

  /// @brief Method OnOnlinePlayerStatusesUpdated, addr 0x2dfcc24, size 0x240, virtual false, abstract: false, final false
  inline void OnOnlinePlayerStatusesUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses);

  /// @brief Method OnPlayerBecameOffline, addr 0x2dfcba8, size 0x7c, virtual false, abstract: false, final false
  inline void OnPlayerBecameOffline(::StringW accountID);

  /// @brief Method OnPlayerBecameOnline, addr 0x2dfc674, size 0xe4, virtual false, abstract: false, final false
  inline void OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus);

  /// @brief Method OnPlayerCreated, addr 0x2dfbb30, size 0x114, virtual false, abstract: false, final false
  inline void OnPlayerCreated(::GlobalNamespace::Player* player);

  /// @brief Method OnPlayerDataRemoved, addr 0x2dfc43c, size 0x68, virtual false, abstract: false, final false
  static inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDestroyed, addr 0x2dfcf4c, size 0xa0, virtual false, abstract: false, final false
  inline void OnPlayerDestroyed(::StringW userID);

  /// @brief Method RefreshHasCameraLinkedPlayerData, addr 0x2dfcfec, size 0x90, virtual false, abstract: false, final false
  inline void RefreshHasCameraLinkedPlayerData();

  /// @brief Method SetHasCameraLinkedPlayerData, addr 0x2dfd07c, size 0x238, virtual false, abstract: false, final false
  inline void SetHasCameraLinkedPlayerData(bool newHasCameraLinkedPlayerData);

  /// @brief Method SetIsCameraLinked, addr 0x2dfc8b8, size 0x2f0, virtual false, abstract: false, final false
  inline void SetIsCameraLinked(bool newIsLinked);

  /// @brief Method SetIsOccupyingCurrencyAnchor, addr 0x2dfbcd8, size 0x290, virtual false, abstract: false, final false
  static inline void SetIsOccupyingCurrencyAnchor(bool newIsOccupyingCurrencyAnchor);

  /// @brief Method SetIsPlayerInRoom, addr 0x2dfce64, size 0xe8, virtual false, abstract: false, final false
  inline void SetIsPlayerInRoom(bool newIsPlayerInRoom);

  /// @brief Method SetTargetRoom, addr 0x2dfc7bc, size 0xfc, virtual false, abstract: false, final false
  inline void SetTargetRoom(::StringW roomMapKey, ::StringW roomKey, ::StringW photonRoomName);

  /// @brief Method Start, addr 0x2dfb408, size 0x144, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartFollowingPlayer, addr 0x2dfc044, size 0x22c, virtual false, abstract: false, final false
  static inline void StartFollowingPlayer(::StringW userID);

  /// @brief Method StopFollowingPlayer, addr 0x2dfc270, size 0x1cc, virtual false, abstract: false, final false
  static inline void StopFollowingPlayer();

  /// @brief Method TriggerTempUnlink, addr 0x2dfd694, size 0x74, virtual false, abstract: false, final false
  inline void TriggerTempUnlink();

  /// @brief Method TryNavigateToTargetRoom, addr 0x2dfd414, size 0x280, virtual false, abstract: false, final false
  inline void TryNavigateToTargetRoom();

  /// @brief Method Update, addr 0x2dfd708, size 0x90, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <OnApplicationFocus>b__71_1, addr 0x2dfde4c, size 0x2c, virtual false, abstract: false, final false
  inline void _OnApplicationFocus_b__71_1(::StringW errorMessage);

  /// @brief Method <TryNavigateToTargetRoom>b__66_0, addr 0x2dfdc50, size 0x8, virtual false, abstract: false, final false
  inline void _TryNavigateToTargetRoom_b__66_0(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <TryNavigateToTargetRoom>b__66_1, addr 0x2dfdc58, size 0x1f4, virtual false, abstract: false, final false
  inline void _TryNavigateToTargetRoom_b__66_1(::StringW errorMessage, bool isFatal);

  constexpr bool const& __cordl_internal_get__isTempUnlinked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isTempUnlinked_k__BackingField();

  constexpr bool const& __cordl_internal_get_enterLinkIsSelfMuted() const;

  constexpr bool& __cordl_internal_get_enterLinkIsSelfMuted();

  constexpr bool const& __cordl_internal_get_hasFailedValidation() const;

  constexpr bool& __cordl_internal_get_hasFailedValidation();

  constexpr bool const& __cordl_internal_get_isCurrentlyAttempting() const;

  constexpr bool& __cordl_internal_get_isCurrentlyAttempting();

  constexpr ::System::DateTime const& __cordl_internal_get_lastAccountValidationTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_lastAccountValidationTime();

  constexpr ::GlobalNamespace::__PlayerStatusManager__PlayerStatus const& __cordl_internal_get_lastFetchedStatus() const;

  constexpr ::GlobalNamespace::__PlayerStatusManager__PlayerStatus& __cordl_internal_get_lastFetchedStatus();

  constexpr ::UnityW<::GlobalNamespace::MobileInterface> const& __cordl_internal_get_mobileInterface() const;

  constexpr ::UnityW<::GlobalNamespace::MobileInterface>& __cordl_internal_get_mobileInterface();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mobileInterfacePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mobileInterfacePrefab();

  constexpr float_t const& __cordl_internal_get_nextAttemptTime() const;

  constexpr float_t& __cordl_internal_get_nextAttemptTime();

  constexpr ::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess*& __cordl_internal_get_onFollowPlayerSuccessCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess*> const& __cordl_internal_get_onFollowPlayerSuccessCallbacks() const;

  constexpr ::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated*& __cordl_internal_get_onHasCameraLinkedPlayerDataUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated*> const&
  __cordl_internal_get_onHasCameraLinkedPlayerDataUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated*& __cordl_internal_get_onIsCameraLinkedUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated*> const& __cordl_internal_get_onIsCameraLinkedUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated*& __cordl_internal_get_onIsOccupyingCurrencyAnchorUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated*> const&
  __cordl_internal_get_onIsOccupyingCurrencyAnchorUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated*& __cordl_internal_get_onPlayerToFollowUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated*> const& __cordl_internal_get_onPlayerToFollowUpdatedCallbacks() const;

  constexpr void __cordl_internal_set__isTempUnlinked_k__BackingField(bool value);

  constexpr void __cordl_internal_set_enterLinkIsSelfMuted(bool value);

  constexpr void __cordl_internal_set_hasFailedValidation(bool value);

  constexpr void __cordl_internal_set_isCurrentlyAttempting(bool value);

  constexpr void __cordl_internal_set_lastAccountValidationTime(::System::DateTime value);

  constexpr void __cordl_internal_set_lastFetchedStatus(::GlobalNamespace::__PlayerStatusManager__PlayerStatus value);

  constexpr void __cordl_internal_set_mobileInterface(::UnityW<::GlobalNamespace::MobileInterface> value);

  constexpr void __cordl_internal_set_mobileInterfacePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_nextAttemptTime(float_t value);

  constexpr void __cordl_internal_set_onFollowPlayerSuccessCallbacks(::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess* value);

  constexpr void __cordl_internal_set_onHasCameraLinkedPlayerDataUpdatedCallbacks(::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated* value);

  constexpr void __cordl_internal_set_onIsCameraLinkedUpdatedCallbacks(::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated* value);

  constexpr void __cordl_internal_set_onIsOccupyingCurrencyAnchorUpdatedCallbacks(::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated* value);

  constexpr void __cordl_internal_set_onPlayerToFollowUpdatedCallbacks(::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated* value);

  /// @brief Method .ctor, addr 0x2dfdbc8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__hasCameraLinkedPlayerData_k__BackingField();

  static inline bool getStaticF__isCameraLinked_k__BackingField();

  static inline bool getStaticF__isOccupyingCurrencyAnchor_k__BackingField();

  static inline ::StringW getStaticF__linkedPlayerUserID_k__BackingField();

  static inline ::StringW getStaticF__playerToFollowUserID_k__BackingField();

  static inline bool getStaticF_doesPlayerExistInRoom();

  static inline ::StringW getStaticF_photonRoomName();

  static inline ::StringW getStaticF_roomKey();

  static inline ::StringW getStaticF_roomMapKey();

  /// @brief Method get_hasCameraLinkedPlayerData, addr 0x2dfc5cc, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasCameraLinkedPlayerData();

  /// @brief Method get_isCameraLinked, addr 0x2dfc4a4, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isCameraLinked();

  /// @brief Method get_isFollowingPlayer, addr 0x2dfbf68, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isFollowingPlayer();

  /// @brief Method get_isOccupyingCurrencyAnchor, addr 0x2dfbc44, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isOccupyingCurrencyAnchor();

  /// @brief Method get_isTempUnlinked, addr 0x2dfc660, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTempUnlinked();

  /// @brief Method get_linkedPlayerUserID, addr 0x2dfc538, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_linkedPlayerUserID();

  /// @brief Method get_playerToFollowUserID, addr 0x2dfbfb0, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_playerToFollowUserID();

  static inline void setStaticF__hasCameraLinkedPlayerData_k__BackingField(bool value);

  static inline void setStaticF__isCameraLinked_k__BackingField(bool value);

  static inline void setStaticF__isOccupyingCurrencyAnchor_k__BackingField(bool value);

  static inline void setStaticF__linkedPlayerUserID_k__BackingField(::StringW value);

  static inline void setStaticF__playerToFollowUserID_k__BackingField(::StringW value);

  static inline void setStaticF_doesPlayerExistInRoom(bool value);

  static inline void setStaticF_photonRoomName(::StringW value);

  static inline void setStaticF_roomKey(::StringW value);

  static inline void setStaticF_roomMapKey(::StringW value);

  /// @brief Method set_hasCameraLinkedPlayerData, addr 0x2dfc614, size 0x4c, virtual false, abstract: false, final false
  static inline void set_hasCameraLinkedPlayerData(bool value);

  /// @brief Method set_isCameraLinked, addr 0x2dfc4ec, size 0x4c, virtual false, abstract: false, final false
  static inline void set_isCameraLinked(bool value);

  /// @brief Method set_isOccupyingCurrencyAnchor, addr 0x2dfbc8c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_isOccupyingCurrencyAnchor(bool value);

  /// @brief Method set_isTempUnlinked, addr 0x2dfc668, size 0xc, virtual false, abstract: false, final false
  inline void set_isTempUnlinked(bool value);

  /// @brief Method set_linkedPlayerUserID, addr 0x2dfc580, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linkedPlayerUserID(::StringW value);

  /// @brief Method set_playerToFollowUserID, addr 0x2dfbff8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_playerToFollowUserID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileManager(MobileManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileManager(MobileManager const&) = delete;

  /// @brief Field mobileInterfacePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___mobileInterfacePrefab;

  /// @brief Field mobileInterface, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileInterface> ___mobileInterface;

  /// @brief Field onIsOccupyingCurrencyAnchorUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated* ___onIsOccupyingCurrencyAnchorUpdatedCallbacks;

  /// @brief Field onPlayerToFollowUpdatedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated* ___onPlayerToFollowUpdatedCallbacks;

  /// @brief Field onIsCameraLinkedUpdatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated* ___onIsCameraLinkedUpdatedCallbacks;

  /// @brief Field onHasCameraLinkedPlayerDataUpdatedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated* ___onHasCameraLinkedPlayerDataUpdatedCallbacks;

  /// @brief Field isCurrentlyAttempting, offset: 0x48, size: 0x1, def value: None
  bool ___isCurrentlyAttempting;

  /// @brief Field nextAttemptTime, offset: 0x4c, size: 0x4, def value: None
  float_t ___nextAttemptTime;

  /// @brief Field lastFetchedStatus, offset: 0x50, size: 0x38, def value: None
  ::GlobalNamespace::__PlayerStatusManager__PlayerStatus ___lastFetchedStatus;

  /// @brief Field <isTempUnlinked>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____isTempUnlinked_k__BackingField;

  /// @brief Field onFollowPlayerSuccessCallbacks, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess* ___onFollowPlayerSuccessCallbacks;

  /// @brief Field enterLinkIsSelfMuted, offset: 0x98, size: 0x1, def value: None
  bool ___enterLinkIsSelfMuted;

  /// @brief Field lastAccountValidationTime, offset: 0xa0, size: 0x8, def value: None
  ::System::DateTime ___lastAccountValidationTime;

  /// @brief Field hasFailedValidation, offset: 0xa8, size: 0x1, def value: None
  bool ___hasFailedValidation;

  /// @brief Field MIN_ACCOUNT_VALIDATION_DELAY offset 0xffffffff size 0x4
  static constexpr float_t MIN_ACCOUNT_VALIDATION_DELAY{ 30.0 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Mobile: " };

  /// @brief Field timeBetweenJoinRoomAttempts offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenJoinRoomAttempts{ 6.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileManager, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___mobileInterfacePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___mobileInterface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___onIsOccupyingCurrencyAnchorUpdatedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___onPlayerToFollowUpdatedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___onIsCameraLinkedUpdatedCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___onHasCameraLinkedPlayerDataUpdatedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___isCurrentlyAttempting) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___nextAttemptTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___lastFetchedStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ____isTempUnlinked_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___onFollowPlayerSuccessCallbacks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___enterLinkIsSelfMuted) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___lastAccountValidationTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileManager, ___hasFailedValidation) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileManager*, "", "MobileManager");
NEED_NO_BOX(::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager__OnFollowPlayerSuccess*, "", "MobileManager/OnFollowPlayerSuccess");
NEED_NO_BOX(::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager__OnHasCameraLinkedPlayerDataUpdated*, "", "MobileManager/OnHasCameraLinkedPlayerDataUpdated");
NEED_NO_BOX(::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager__OnIsCameraLinkedUpdated*, "", "MobileManager/OnIsCameraLinkedUpdated");
NEED_NO_BOX(::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager__OnIsOccupyingCurrencyAnchorUpdated*, "", "MobileManager/OnIsOccupyingCurrencyAnchorUpdated");
NEED_NO_BOX(::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager__OnPlayerToFollowUpdated*, "", "MobileManager/OnPlayerToFollowUpdated");
NEED_NO_BOX(::GlobalNamespace::__MobileManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileManager____c*, "", "MobileManager/<>c");
