#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__OwnershipOption_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__ViewSynchronization_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonView)
namespace Photon::Pun {
class IOnPhotonViewControllerChange;
}
namespace Photon::Pun {
class IOnPhotonViewOwnerChange;
}
namespace Photon::Pun {
class IOnPhotonViewPreNetDestroy;
}
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace Photon::Pun {
struct __PhotonView__CallbackTargetChange;
}
namespace Photon::Pun {
struct __PhotonView__ObservableSearch;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Photon::Pun {
struct __PhotonView__ObservableSearch;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Pun {
struct __PhotonView__CallbackTargetChange;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::__PhotonView__ObservableSearch);
MARK_REF_PTR_T(::Photon::Pun::PhotonView);
MARK_VAL_T(::Photon::Pun::__PhotonView__CallbackTargetChange);
// Type: ::ObservableSearch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonView::ObservableSearch
struct CORDL_TYPE __PhotonView__ObservableSearch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonView__ObservableSearch_Unwrapped
  enum struct ____PhotonView__ObservableSearch_Unwrapped : int32_t {
    __E_Manual = static_cast<int32_t>(0x0),
    __E_AutoFindActive = static_cast<int32_t>(0x1),
    __E_AutoFindAll = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonView__ObservableSearch_Unwrapped() const noexcept {
    return static_cast<____PhotonView__ObservableSearch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonView__ObservableSearch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonView__ObservableSearch(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AutoFindActive value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonView__ObservableSearch const AutoFindActive;

  /// @brief Field AutoFindAll value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::__PhotonView__ObservableSearch const AutoFindAll;

  /// @brief Field Manual value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::__PhotonView__ObservableSearch const Manual;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonView__ObservableSearch, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonView__ObservableSearch, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: ::CallbackTargetChange
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonView::CallbackTargetChange
struct CORDL_TYPE __PhotonView__CallbackTargetChange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2754288, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Pun::IPhotonViewCallback* obj, ::System::Type* type, bool add);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonView__CallbackTargetChange();

  // Ctor Parameters [CppParam { name: "obj", ty: "::Photon::Pun::IPhotonViewCallback*", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value:
  // None }, CppParam { name: "add", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PhotonView__CallbackTargetChange(::Photon::Pun::IPhotonViewCallback* obj, ::System::Type* type, bool add) noexcept;

  /// @brief Field obj, offset: 0x0, size: 0x8, def value: None
  ::Photon::Pun::IPhotonViewCallback* obj;

  /// @brief Field type, offset: 0x8, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field add, offset: 0x10, size: 0x1, def value: None
  bool add;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonView__CallbackTargetChange, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonView__CallbackTargetChange, obj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonView__CallbackTargetChange, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonView__CallbackTargetChange, add) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
// Type: Photon.Pun::PhotonView
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonView*
class CORDL_TYPE PhotonView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CallbackTargetChange = ::Photon::Pun::__PhotonView__CallbackTargetChange;

  using ObservableSearch = ::Photon::Pun::__PhotonView__ObservableSearch;

  __declspec(property(get = get_AmController)) bool AmController;

  __declspec(property(get = get_AmOwner, put = set_AmOwner)) bool AmOwner;

  /// @brief Field CallbackChangeQueue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_CallbackChangeQueue,
                      put = __cordl_internal_set_CallbackChangeQueue))::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>* CallbackChangeQueue;

  __declspec(property(get = get_Controller, put = set_Controller))::Photon::Realtime::Player* Controller;

  __declspec(property(get = get_ControllerActorNr, put = set_ControllerActorNr)) int32_t ControllerActorNr;

  __declspec(property(get = get_CreatorActorNr, put = set_CreatorActorNr)) int32_t CreatorActorNr;

  /// @brief Field Group, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Group, put = __cordl_internal_set_Group)) uint8_t Group;

  __declspec(property(get = get_InstantiationData, put = set_InstantiationData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> InstantiationData;

  /// @brief Field InstantiationId, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_InstantiationId, put = __cordl_internal_set_InstantiationId)) int32_t InstantiationId;

  __declspec(property(get = get_IsMine, put = set_IsMine)) bool IsMine;

  __declspec(property(get = get_IsOwnerActive)) bool IsOwnerActive;

  __declspec(property(get = get_IsRoomView)) bool IsRoomView;

  __declspec(property(get = get_IsSceneView)) bool IsSceneView;

  /// @brief Field ObservedComponents, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ObservedComponents,
                      put = __cordl_internal_set_ObservedComponents))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* ObservedComponents;

  /// @brief Field OnControllerChangeCallbacks, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_OnControllerChangeCallbacks,
                      put = __cordl_internal_set_OnControllerChangeCallbacks))::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* OnControllerChangeCallbacks;

  /// @brief Field OnOwnerChangeCallbacks, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_OnOwnerChangeCallbacks,
                      put = __cordl_internal_set_OnOwnerChangeCallbacks))::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* OnOwnerChangeCallbacks;

  /// @brief Field OnPreNetDestroyCallbacks, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreNetDestroyCallbacks,
                      put = __cordl_internal_set_OnPreNetDestroyCallbacks))::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* OnPreNetDestroyCallbacks;

  __declspec(property(get = get_Owner, put = set_Owner))::Photon::Realtime::Player* Owner;

  __declspec(property(get = get_OwnerActorNr, put = set_OwnerActorNr)) int32_t OwnerActorNr;

  /// @brief Field OwnershipTransfer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_OwnershipTransfer, put = __cordl_internal_set_OwnershipTransfer))::Photon::Pun::OwnershipOption OwnershipTransfer;

  __declspec(property(get = get_Prefix, put = set_Prefix)) int32_t Prefix;

  /// @brief Field RpcMonoBehaviours, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_RpcMonoBehaviours,
                      put = __cordl_internal_set_RpcMonoBehaviours))::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> RpcMonoBehaviours;

  /// @brief Field Synchronization, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_Synchronization, put = __cordl_internal_set_Synchronization))::Photon::Pun::ViewSynchronization Synchronization;

  __declspec(property(get = get_ViewID, put = set_ViewID)) int32_t ViewID;

  /// @brief Field <AmOwner>k__BackingField, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__AmOwner_k__BackingField, put = __cordl_internal_set__AmOwner_k__BackingField)) bool _AmOwner_k__BackingField;

  /// @brief Field <Controller>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__Controller_k__BackingField, put = __cordl_internal_set__Controller_k__BackingField))::Photon::Realtime::Player* _Controller_k__BackingField;

  /// @brief Field <CreatorActorNr>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__CreatorActorNr_k__BackingField, put = __cordl_internal_set__CreatorActorNr_k__BackingField)) int32_t _CreatorActorNr_k__BackingField;

  /// @brief Field <IsMine>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__IsMine_k__BackingField, put = __cordl_internal_set__IsMine_k__BackingField)) bool _IsMine_k__BackingField;

  /// @brief Field <Owner>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__Owner_k__BackingField, put = __cordl_internal_set__Owner_k__BackingField))::Photon::Realtime::Player* _Owner_k__BackingField;

  /// @brief Field controllerActorNr, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerActorNr, put = __cordl_internal_set_controllerActorNr)) int32_t controllerActorNr;

  /// @brief Field instantiationDataField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_instantiationDataField,
                      put = __cordl_internal_set_instantiationDataField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> instantiationDataField;

  /// @brief Field isRuntimeInstantiated, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_isRuntimeInstantiated, put = __cordl_internal_set_isRuntimeInstantiated)) bool isRuntimeInstantiated;

  /// @brief Field lastOnSerializeDataReceived, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lastOnSerializeDataReceived,
                      put = __cordl_internal_set_lastOnSerializeDataReceived))::ArrayW<::System::Object*, ::Array<::System::Object*>*> lastOnSerializeDataReceived;

  /// @brief Field lastOnSerializeDataSent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lastOnSerializeDataSent,
                      put = __cordl_internal_set_lastOnSerializeDataSent))::System::Collections::Generic::List_1<::System::Object*>* lastOnSerializeDataSent;

  /// @brief Field mixedModeIsReliable, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_mixedModeIsReliable, put = __cordl_internal_set_mixedModeIsReliable)) bool mixedModeIsReliable;

  /// @brief Field observableSearch, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_observableSearch, put = __cordl_internal_set_observableSearch))::Photon::Pun::__PhotonView__ObservableSearch observableSearch;

  /// @brief Field ownerActorNr, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_ownerActorNr, put = __cordl_internal_set_ownerActorNr)) int32_t ownerActorNr;

  /// @brief Field prefixField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_prefixField, put = __cordl_internal_set_prefixField)) int32_t prefixField;

  /// @brief Field removedFromLocalViewList, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get_removedFromLocalViewList, put = __cordl_internal_set_removedFromLocalViewList)) bool removedFromLocalViewList;

  /// @brief Field sceneViewId, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_sceneViewId, put = __cordl_internal_set_sceneViewId)) int32_t sceneViewId;

  /// @brief Field syncValues, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_syncValues, put = __cordl_internal_set_syncValues))::System::Collections::Generic::List_1<::System::Object*>* syncValues;

  /// @brief Field viewIdField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_viewIdField, put = __cordl_internal_set_viewIdField)) int32_t viewIdField;

  /// @brief Method AddCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddCallback(::Photon::Pun::IPhotonViewCallback* obj);

  /// @brief Method AddCallbackTarget, addr 0x2754200, size 0x88, virtual false, abstract: false, final false
  inline void AddCallbackTarget(::Photon::Pun::IPhotonViewCallback* obj);

  /// @brief Method Awake, addr 0x2753010, size 0x38, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DeserializeComponent, addr 0x2753cc0, size 0x1d4, virtual false, abstract: false, final false
  inline void DeserializeComponent(::UnityEngine::Component* component, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method DeserializeView, addr 0x274fc78, size 0x10c, virtual false, abstract: false, final false
  inline void DeserializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method Find, addr 0x27541ac, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::Photon::Pun::PhotonView> Find(int32_t viewID);

  /// @brief Method FindObservables, addr 0x2753048, size 0x14c, virtual false, abstract: false, final false
  inline void FindObservables(bool force);

  /// @brief Method Get, addr 0x275409c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityW<::Photon::Pun::PhotonView> Get(::UnityEngine::Component* component);

  /// @brief Method Get, addr 0x2754124, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityW<::Photon::Pun::PhotonView> Get(::UnityEngine::GameObject* gameObj);

  static inline ::Photon::Pun::PhotonView* New_ctor();

  /// @brief Method OnDestroy, addr 0x2753194, size 0x154, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPreNetDestroy, addr 0x274d20c, size 0x11c, virtual false, abstract: false, final false
  inline void OnPreNetDestroy(::Photon::Pun::PhotonView* rootView);

  /// @brief Method RPC, addr 0x2753e94, size 0x80, virtual false, abstract: false, final false
  inline void RPC(::StringW methodName, ::Photon::Pun::RpcTarget target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method RPC, addr 0x2753f98, size 0x80, virtual false, abstract: false, final false
  inline void RPC(::StringW methodName, ::Photon::Realtime::Player* targetPlayer, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method RebuildControllerCache, addr 0x273c76c, size 0x88, virtual false, abstract: false, final false
  inline void RebuildControllerCache(bool ownerHasChanged);

  /// @brief Method RefreshRpcMonoBehaviourCache, addr 0x274ca40, size 0x50, virtual false, abstract: false, final false
  inline void RefreshRpcMonoBehaviourCache();

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterCallback(T obj, ByRef<::System::Collections::Generic::List_1<T>*> list, bool add);

  /// @brief Method RemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveCallback(::Photon::Pun::IPhotonViewCallback* obj);

  /// @brief Method RemoveCallbackTarget, addr 0x2754298, size 0x84, virtual false, abstract: false, final false
  inline void RemoveCallbackTarget(::Photon::Pun::IPhotonViewCallback* obj);

  /// @brief Method RequestOwnership, addr 0x27532e8, size 0x254, virtual false, abstract: false, final false
  inline void RequestOwnership();

  /// @brief Method ResetPhotonView, addr 0x274ae20, size 0x8, virtual false, abstract: false, final false
  inline void ResetPhotonView(bool resetOwner);

  /// @brief Method RpcSecure, addr 0x2753f14, size 0x84, virtual false, abstract: false, final false
  inline void RpcSecure(::StringW methodName, ::Photon::Pun::RpcTarget target, bool encrypt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method RpcSecure, addr 0x2754018, size 0x84, virtual false, abstract: false, final false
  inline void RpcSecure(::StringW methodName, ::Photon::Realtime::Player* targetPlayer, bool encrypt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method SerializeComponent, addr 0x2753aec, size 0x1d4, virtual false, abstract: false, final false
  inline void SerializeComponent(::UnityEngine::Component* component, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method SerializeView, addr 0x274ed7c, size 0x120, virtual false, abstract: false, final false
  inline void SerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method ToString, addr 0x275431c, size 0x2a8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TransferOwnership, addr 0x275353c, size 0x23c, virtual false, abstract: false, final false
  inline void TransferOwnership(::Photon::Realtime::Player* newOwner);

  /// @brief Method TransferOwnership, addr 0x2753778, size 0x374, virtual false, abstract: false, final false
  inline void TransferOwnership(int32_t newOwnerId);

  /// @brief Method TryRegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void TryRegisterCallback(::Photon::Pun::IPhotonViewCallback* obj, ByRef<::System::Collections::Generic::List_1<T>*> list, bool add);

  /// @brief Method UpdateCallbackLists, addr 0x2752ccc, size 0x334, virtual false, abstract: false, final false
  inline void UpdateCallbackLists();

  constexpr ::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>*& __cordl_internal_get_CallbackChangeQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>*> const& __cordl_internal_get_CallbackChangeQueue() const;

  constexpr uint8_t const& __cordl_internal_get_Group() const;

  constexpr uint8_t& __cordl_internal_get_Group();

  constexpr int32_t const& __cordl_internal_get_InstantiationId() const;

  constexpr int32_t& __cordl_internal_get_InstantiationId();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& __cordl_internal_get_ObservedComponents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get_ObservedComponents() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*& __cordl_internal_get_OnControllerChangeCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*> const& __cordl_internal_get_OnControllerChangeCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*& __cordl_internal_get_OnOwnerChangeCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*> const& __cordl_internal_get_OnOwnerChangeCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*& __cordl_internal_get_OnPreNetDestroyCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*> const& __cordl_internal_get_OnPreNetDestroyCallbacks() const;

  constexpr ::Photon::Pun::OwnershipOption const& __cordl_internal_get_OwnershipTransfer() const;

  constexpr ::Photon::Pun::OwnershipOption& __cordl_internal_get_OwnershipTransfer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> const& __cordl_internal_get_RpcMonoBehaviours() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*>& __cordl_internal_get_RpcMonoBehaviours();

  constexpr ::Photon::Pun::ViewSynchronization const& __cordl_internal_get_Synchronization() const;

  constexpr ::Photon::Pun::ViewSynchronization& __cordl_internal_get_Synchronization();

  constexpr bool const& __cordl_internal_get__AmOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AmOwner_k__BackingField();

  constexpr ::Photon::Realtime::Player*& __cordl_internal_get__Controller_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& __cordl_internal_get__Controller_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__CreatorActorNr_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CreatorActorNr_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsMine_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsMine_k__BackingField();

  constexpr ::Photon::Realtime::Player*& __cordl_internal_get__Owner_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& __cordl_internal_get__Owner_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get_controllerActorNr() const;

  constexpr int32_t& __cordl_internal_get_controllerActorNr();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_instantiationDataField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_instantiationDataField();

  constexpr bool const& __cordl_internal_get_isRuntimeInstantiated() const;

  constexpr bool& __cordl_internal_get_isRuntimeInstantiated();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_lastOnSerializeDataReceived() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_lastOnSerializeDataReceived();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_lastOnSerializeDataSent();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_lastOnSerializeDataSent() const;

  constexpr bool const& __cordl_internal_get_mixedModeIsReliable() const;

  constexpr bool& __cordl_internal_get_mixedModeIsReliable();

  constexpr ::Photon::Pun::__PhotonView__ObservableSearch const& __cordl_internal_get_observableSearch() const;

  constexpr ::Photon::Pun::__PhotonView__ObservableSearch& __cordl_internal_get_observableSearch();

  constexpr int32_t const& __cordl_internal_get_ownerActorNr() const;

  constexpr int32_t& __cordl_internal_get_ownerActorNr();

  constexpr int32_t const& __cordl_internal_get_prefixField() const;

  constexpr int32_t& __cordl_internal_get_prefixField();

  constexpr bool const& __cordl_internal_get_removedFromLocalViewList() const;

  constexpr bool& __cordl_internal_get_removedFromLocalViewList();

  constexpr int32_t const& __cordl_internal_get_sceneViewId() const;

  constexpr int32_t& __cordl_internal_get_sceneViewId();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_syncValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_syncValues() const;

  constexpr int32_t const& __cordl_internal_get_viewIdField() const;

  constexpr int32_t& __cordl_internal_get_viewIdField();

  constexpr void __cordl_internal_set_CallbackChangeQueue(::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>* value);

  constexpr void __cordl_internal_set_Group(uint8_t value);

  constexpr void __cordl_internal_set_InstantiationId(int32_t value);

  constexpr void __cordl_internal_set_ObservedComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* value);

  constexpr void __cordl_internal_set_OnControllerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* value);

  constexpr void __cordl_internal_set_OnOwnerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* value);

  constexpr void __cordl_internal_set_OnPreNetDestroyCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* value);

  constexpr void __cordl_internal_set_OwnershipTransfer(::Photon::Pun::OwnershipOption value);

  constexpr void __cordl_internal_set_RpcMonoBehaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> value);

  constexpr void __cordl_internal_set_Synchronization(::Photon::Pun::ViewSynchronization value);

  constexpr void __cordl_internal_set__AmOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Controller_k__BackingField(::Photon::Realtime::Player* value);

  constexpr void __cordl_internal_set__CreatorActorNr_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__IsMine_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Owner_k__BackingField(::Photon::Realtime::Player* value);

  constexpr void __cordl_internal_set_controllerActorNr(int32_t value);

  constexpr void __cordl_internal_set_instantiationDataField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_isRuntimeInstantiated(bool value);

  constexpr void __cordl_internal_set_lastOnSerializeDataReceived(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_lastOnSerializeDataSent(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_mixedModeIsReliable(bool value);

  constexpr void __cordl_internal_set_observableSearch(::Photon::Pun::__PhotonView__ObservableSearch value);

  constexpr void __cordl_internal_set_ownerActorNr(int32_t value);

  constexpr void __cordl_internal_set_prefixField(int32_t value);

  constexpr void __cordl_internal_set_removedFromLocalViewList(bool value);

  constexpr void __cordl_internal_set_sceneViewId(int32_t value);

  constexpr void __cordl_internal_set_syncValues(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_viewIdField(int32_t value);

  /// @brief Method .ctor, addr 0x27545c4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AmController, addr 0x2752c78, size 0x8, virtual false, abstract: false, final false
  inline bool get_AmController();

  /// @brief Method get_AmOwner, addr 0x2752ca0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AmOwner();

  /// @brief Method get_Controller, addr 0x2752c80, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* get_Controller();

  /// @brief Method get_ControllerActorNr, addr 0x2753000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ControllerActorNr();

  /// @brief Method get_CreatorActorNr, addr 0x2752c90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CreatorActorNr();

  /// @brief Method get_InstantiationData, addr 0x2752c44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_InstantiationData();

  /// @brief Method get_IsMine, addr 0x2752c64, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsMine();

  /// @brief Method get_IsOwnerActive, addr 0x2751b90, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsOwnerActive();

  /// @brief Method get_IsRoomView, addr 0x273be38, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsRoomView();

  /// @brief Method get_IsSceneView, addr 0x2752c54, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSceneView();

  /// @brief Method get_Owner, addr 0x2752cb4, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* get_Owner();

  /// @brief Method get_OwnerActorNr, addr 0x2752cc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OwnerActorNr();

  /// @brief Method get_Prefix, addr 0x274c9b0, size 0x90, virtual false, abstract: false, final false
  inline int32_t get_Prefix();

  /// @brief Method get_ViewID, addr 0x2753008, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ViewID();

  /// @brief Method set_AmOwner, addr 0x2752ca8, size 0xc, virtual false, abstract: false, final false
  inline void set_AmOwner(bool value);

  /// @brief Method set_Controller, addr 0x2752c88, size 0x8, virtual false, abstract: false, final false
  inline void set_Controller(::Photon::Realtime::Player* value);

  /// @brief Method set_ControllerActorNr, addr 0x273c044, size 0x21c, virtual false, abstract: false, final false
  inline void set_ControllerActorNr(int32_t value);

  /// @brief Method set_CreatorActorNr, addr 0x2752c98, size 0x8, virtual false, abstract: false, final false
  inline void set_CreatorActorNr(int32_t value);

  /// @brief Method set_InstantiationData, addr 0x2752c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_InstantiationData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_IsMine, addr 0x2752c6c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsMine(bool value);

  /// @brief Method set_Owner, addr 0x2752cbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Owner(::Photon::Realtime::Player* value);

  /// @brief Method set_OwnerActorNr, addr 0x273be48, size 0x1fc, virtual false, abstract: false, final false
  inline void set_OwnerActorNr(int32_t value);

  /// @brief Method set_Prefix, addr 0x2752c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Prefix(int32_t value);

  /// @brief Method set_ViewID, addr 0x2745e44, size 0x14c, virtual false, abstract: false, final false
  inline void set_ViewID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonView(PhotonView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonView(PhotonView const&) = delete;

  /// @brief Field Group, offset: 0x18, size: 0x1, def value: None
  uint8_t ___Group;

  /// @brief Field prefixField, offset: 0x1c, size: 0x4, def value: None
  int32_t ___prefixField;

  /// @brief Field instantiationDataField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___instantiationDataField;

  /// @brief Field lastOnSerializeDataSent, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___lastOnSerializeDataSent;

  /// @brief Field syncValues, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___syncValues;

  /// @brief Field lastOnSerializeDataReceived, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___lastOnSerializeDataReceived;

  /// @brief Field Synchronization, offset: 0x40, size: 0x4, def value: None
  ::Photon::Pun::ViewSynchronization ___Synchronization;

  /// @brief Field mixedModeIsReliable, offset: 0x44, size: 0x1, def value: None
  bool ___mixedModeIsReliable;

  /// @brief Field OwnershipTransfer, offset: 0x48, size: 0x4, def value: None
  ::Photon::Pun::OwnershipOption ___OwnershipTransfer;

  /// @brief Field observableSearch, offset: 0x4c, size: 0x4, def value: None
  ::Photon::Pun::__PhotonView__ObservableSearch ___observableSearch;

  /// @brief Field ObservedComponents, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* ___ObservedComponents;

  /// @brief Field RpcMonoBehaviours, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> ___RpcMonoBehaviours;

  /// @brief Field <IsMine>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____IsMine_k__BackingField;

  /// @brief Field <Controller>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Photon::Realtime::Player* ____Controller_k__BackingField;

  /// @brief Field <CreatorActorNr>k__BackingField, offset: 0x70, size: 0x4, def value: None
  int32_t ____CreatorActorNr_k__BackingField;

  /// @brief Field <AmOwner>k__BackingField, offset: 0x74, size: 0x1, def value: None
  bool ____AmOwner_k__BackingField;

  /// @brief Field <Owner>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::Photon::Realtime::Player* ____Owner_k__BackingField;

  /// @brief Field ownerActorNr, offset: 0x80, size: 0x4, def value: None
  int32_t ___ownerActorNr;

  /// @brief Field controllerActorNr, offset: 0x84, size: 0x4, def value: None
  int32_t ___controllerActorNr;

  /// @brief Field sceneViewId, offset: 0x88, size: 0x4, def value: None
  int32_t ___sceneViewId;

  /// @brief Field viewIdField, offset: 0x8c, size: 0x4, def value: None
  int32_t ___viewIdField;

  /// @brief Field InstantiationId, offset: 0x90, size: 0x4, def value: None
  int32_t ___InstantiationId;

  /// @brief Field isRuntimeInstantiated, offset: 0x94, size: 0x1, def value: None
  bool ___isRuntimeInstantiated;

  /// @brief Field removedFromLocalViewList, offset: 0x95, size: 0x1, def value: None
  bool ___removedFromLocalViewList;

  /// @brief Field CallbackChangeQueue, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>* ___CallbackChangeQueue;

  /// @brief Field OnPreNetDestroyCallbacks, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* ___OnPreNetDestroyCallbacks;

  /// @brief Field OnOwnerChangeCallbacks, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* ___OnOwnerChangeCallbacks;

  /// @brief Field OnControllerChangeCallbacks, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* ___OnControllerChangeCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonView, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___Group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___prefixField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___instantiationDataField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___lastOnSerializeDataSent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___syncValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___lastOnSerializeDataReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___Synchronization) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___mixedModeIsReliable) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OwnershipTransfer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___observableSearch) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___ObservedComponents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___RpcMonoBehaviours) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____IsMine_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____Controller_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____CreatorActorNr_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____AmOwner_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____Owner_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___ownerActorNr) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___controllerActorNr) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___sceneViewId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___viewIdField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___InstantiationId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___isRuntimeInstantiated) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___removedFromLocalViewList) == 0x95, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___CallbackChangeQueue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnPreNetDestroyCallbacks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnOwnerChangeCallbacks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnControllerChangeCallbacks) == 0xb0, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonView__ObservableSearch, "Photon.Pun", "PhotonView/ObservableSearch");
NEED_NO_BOX(::Photon::Pun::PhotonView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonView*, "Photon.Pun", "PhotonView");
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonView__CallbackTargetChange, "Photon.Pun", "PhotonView/CallbackTargetChange");
