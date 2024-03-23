#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OverrideCamerasManager)
namespace GlobalNamespace {
class OverrideCamera;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class __OverrideCamerasManager__OnCurrentLinkedCameraUpdated;
}
namespace GlobalNamespace {
class __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class OverrideCamerasManager;
}
namespace GlobalNamespace {
class __OverrideCamerasManager__OnCurrentLinkedCameraUpdated;
}
namespace GlobalNamespace {
class __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideCamerasManager);
MARK_REF_PTR_T(::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated);
// Type: ::OnCurrentLinkedCameraUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OverrideCamerasManager::OnCurrentLinkedCameraUpdated*
class CORDL_TYPE __OverrideCamerasManager__OnCurrentLinkedCameraUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf3ae24, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::OverrideCamera* newCurrentLinkedCamera, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf3ae44, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf3ae10, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::OverrideCamera* newCurrentLinkedCamera);

  static inline ::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf3ace4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OverrideCamerasManager__OnCurrentLinkedCameraUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OverrideCamerasManager__OnCurrentLinkedCameraUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OverrideCamerasManager__OnCurrentLinkedCameraUpdated(__OverrideCamerasManager__OnCurrentLinkedCameraUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OverrideCamerasManager__OnCurrentLinkedCameraUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OverrideCamerasManager__OnCurrentLinkedCameraUpdated(__OverrideCamerasManager__OnCurrentLinkedCameraUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OverrideCamerasManager::OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated*
class CORDL_TYPE __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf3af2c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsLinkedCameraInFirstPersonOnMasterPlayer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf3afb4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf3af14, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsLinkedCameraInFirstPersonOnMasterPlayer);

  static inline ::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf3ae50, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated(__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated(__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OverrideCamerasManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OverrideCamerasManager*
class CORDL_TYPE OverrideCamerasManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::OverrideCamerasManager>> {
public:
  // Declarations
  using OnCurrentLinkedCameraUpdated = ::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated;

  using OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated = ::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated;

  /// @brief Field <currentLinkedCamera>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__currentLinkedCamera_k__BackingField,
                             put = setStaticF__currentLinkedCamera_k__BackingField))::UnityW<::GlobalNamespace::OverrideCamera> _currentLinkedCamera_k__BackingField;

  /// @brief Field <isLinkedCameraInFirstPersonOnMasterPlayer>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isLinkedCameraInFirstPersonOnMasterPlayer_k__BackingField,
                             put = setStaticF__isLinkedCameraInFirstPersonOnMasterPlayer_k__BackingField)) bool _isLinkedCameraInFirstPersonOnMasterPlayer_k__BackingField;

  /// @brief Field doesLinkedCameraExist, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_doesLinkedCameraExist, put = setStaticF_doesLinkedCameraExist)) bool doesLinkedCameraExist;

  /// @brief Field lastRegisteredCameraByMasterPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastRegisteredCameraByMasterPlayer,
                      put = __cordl_internal_set_lastRegisteredCameraByMasterPlayer))::UnityW<::GlobalNamespace::OverrideCamera> lastRegisteredCameraByMasterPlayer;

  /// @brief Field linkedCameraUserID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_linkedCameraUserID, put = setStaticF_linkedCameraUserID))::StringW linkedCameraUserID;

  /// @brief Field linkedUserID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedUserID, put = __cordl_internal_set_linkedUserID))::StringW linkedUserID;

  /// @brief Field onCurrentLinkedCameraUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onCurrentLinkedCameraUpdatedCallbacks,
               put = __cordl_internal_set_onCurrentLinkedCameraUpdatedCallbacks))::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated* onCurrentLinkedCameraUpdatedCallbacks;

  /// @brief Field onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks, put = __cordl_internal_set_onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks))::
      GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated* onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks;

  /// @brief Field overrideCameras, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideCameras,
                      put = __cordl_internal_set_overrideCameras))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OverrideCamera>>* overrideCameras;

  /// @brief Field usersToActiveCameraIDs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_usersToActiveCameraIDs,
                      put = __cordl_internal_set_usersToActiveCameraIDs))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* usersToActiveCameraIDs;

  /// @brief Method DeregisterCamera, addr 0xf3967c, size 0x110, virtual false, abstract: false, final false
  inline void DeregisterCamera(::StringW cameraID, ::GlobalNamespace::OverrideCamera* overrideCamera);

  static inline ::GlobalNamespace::OverrideCamerasManager* New_ctor();

  /// @brief Method OnPlayerDataAdded, addr 0xf39d2c, size 0xdc, virtual false, abstract: false, final false
  inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataRemoved, addr 0xf3a814, size 0x170, virtual false, abstract: false, final false
  inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnReceiveSetActiveCamera, addr 0xf3a4d0, size 0x1bc, virtual false, abstract: false, final false
  inline void OnReceiveSetActiveCamera(::StringW userID, ::StringW cameraID);

  /// @brief Method RefreshIsLinkedCameraInFirstPersonOnMasterPlayer, addr 0xf3a68c, size 0xb4, virtual false, abstract: false, final false
  inline void RefreshIsLinkedCameraInFirstPersonOnMasterPlayer();

  /// @brief Method RegisterCamera, addr 0xf39488, size 0x1f4, virtual false, abstract: false, final false
  inline void RegisterCamera(::StringW cameraID, ::GlobalNamespace::OverrideCamera* overrideCamera);

  /// @brief Method SendSetActiveCamera, addr 0xf3a348, size 0x188, virtual false, abstract: false, final false
  inline void SendSetActiveCamera(::StringW cameraID);

  /// @brief Method SetCurrentLinkedCamera, addr 0xf3a000, size 0x2b4, virtual false, abstract: false, final false
  inline void SetCurrentLinkedCamera(::GlobalNamespace::OverrideCamera* newCurrentLinkedCamera);

  /// @brief Method SetDoesLinkedCameraExist, addr 0xf3a740, size 0xd4, virtual false, abstract: false, final false
  inline void SetDoesLinkedCameraExist(bool newDoesLinkedCameraExist);

  /// @brief Method SetHasCameraLinkedPlayerData, addr 0xf39e08, size 0x5c, virtual false, abstract: false, final false
  inline void SetHasCameraLinkedPlayerData(bool newHasCameraLinkedPlayerData);

  /// @brief Method SetIsLinkedCameraInFirstPersonOnMasterPlayer, addr 0xf3aa18, size 0x1f8, virtual false, abstract: false, final false
  inline void SetIsLinkedCameraInFirstPersonOnMasterPlayer(bool newIsLinkedCameraInFirstPersonOnMasterPlayer);

  /// @brief Method SetLinkedUserID, addr 0xf39e64, size 0x19c, virtual false, abstract: false, final false
  inline void SetLinkedUserID(::StringW linkedUserID);

  /// @brief Method Start, addr 0xf398c0, size 0x46c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& __cordl_internal_get_lastRegisteredCameraByMasterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& __cordl_internal_get_lastRegisteredCameraByMasterPlayer();

  constexpr ::StringW const& __cordl_internal_get_linkedUserID() const;

  constexpr ::StringW& __cordl_internal_get_linkedUserID();

  constexpr ::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated*& __cordl_internal_get_onCurrentLinkedCameraUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated*> const& __cordl_internal_get_onCurrentLinkedCameraUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated*& __cordl_internal_get_onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated*> const&
  __cordl_internal_get_onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OverrideCamera>>*& __cordl_internal_get_overrideCameras();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OverrideCamera>>*> const&
  __cordl_internal_get_overrideCameras() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_usersToActiveCameraIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_usersToActiveCameraIDs() const;

  constexpr void __cordl_internal_set_lastRegisteredCameraByMasterPlayer(::UnityW<::GlobalNamespace::OverrideCamera> value);

  constexpr void __cordl_internal_set_linkedUserID(::StringW value);

  constexpr void __cordl_internal_set_onCurrentLinkedCameraUpdatedCallbacks(::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated* value);

  constexpr void
  __cordl_internal_set_onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks(::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated* value);

  constexpr void __cordl_internal_set_overrideCameras(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OverrideCamera>>* value);

  constexpr void __cordl_internal_set_usersToActiveCameraIDs(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0xf3ac10, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::OverrideCamera> getStaticF__currentLinkedCamera_k__BackingField();

  static inline bool getStaticF__isLinkedCameraInFirstPersonOnMasterPlayer_k__BackingField();

  static inline bool getStaticF_doesLinkedCameraExist();

  static inline ::StringW getStaticF_linkedCameraUserID();

  /// @brief Method get_currentLinkedCamera, addr 0xf3a2b4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OverrideCamera> get_currentLinkedCamera();

  /// @brief Method get_isLinkedCameraInFirstPersonOnMasterPlayer, addr 0xf3a984, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isLinkedCameraInFirstPersonOnMasterPlayer();

  static inline void setStaticF__currentLinkedCamera_k__BackingField(::UnityW<::GlobalNamespace::OverrideCamera> value);

  static inline void setStaticF__isLinkedCameraInFirstPersonOnMasterPlayer_k__BackingField(bool value);

  static inline void setStaticF_doesLinkedCameraExist(bool value);

  static inline void setStaticF_linkedCameraUserID(::StringW value);

  /// @brief Method set_currentLinkedCamera, addr 0xf3a2fc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_currentLinkedCamera(::GlobalNamespace::OverrideCamera* value);

  /// @brief Method set_isLinkedCameraInFirstPersonOnMasterPlayer, addr 0xf3a9cc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_isLinkedCameraInFirstPersonOnMasterPlayer(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverrideCamerasManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverrideCamerasManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverrideCamerasManager(OverrideCamerasManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverrideCamerasManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverrideCamerasManager(OverrideCamerasManager const&) = delete;

  /// @brief Field overrideCameras, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OverrideCamera>>* ___overrideCameras;

  /// @brief Field lastRegisteredCameraByMasterPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OverrideCamera> ___lastRegisteredCameraByMasterPlayer;

  /// @brief Field onCurrentLinkedCameraUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated* ___onCurrentLinkedCameraUpdatedCallbacks;

  /// @brief Field linkedUserID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___linkedUserID;

  /// @brief Field usersToActiveCameraIDs, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___usersToActiveCameraIDs;

  /// @brief Field onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated* ___onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Override Cameras: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideCamerasManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___overrideCameras) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___lastRegisteredCameraByMasterPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___onCurrentLinkedCameraUpdatedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___linkedUserID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___usersToActiveCameraIDs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamerasManager, ___onIsLinkedCameraInFirstPersonOnMasterPlayerUpdatedCallbacks) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideCamerasManager*, "", "OverrideCamerasManager");
NEED_NO_BOX(::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OverrideCamerasManager__OnCurrentLinkedCameraUpdated*, "", "OverrideCamerasManager/OnCurrentLinkedCameraUpdated");
NEED_NO_BOX(::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OverrideCamerasManager__OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated*, "",
                       "OverrideCamerasManager/OnIsLinkedCameraInFirstPersonOnMasterPlayerUpdated");
