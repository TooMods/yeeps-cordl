#pragma once
#include "Photon/Pun/zzzz__OwnershipOption_impl.hpp"
#include "Photon/Pun/zzzz__PhotonView_impl.hpp"
#include "Photon/Pun/zzzz__ViewSynchronization_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewControllerChange_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewOwnerChange_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewPreNetDestroy_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonView__ObservableSearch::__PhotonView__ObservableSearch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonView__ObservableSearch::__PhotonView__ObservableSearch() {}
constexpr ::Photon::Pun::__PhotonView__ObservableSearch Photon::Pun::__PhotonView__ObservableSearch::Manual{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::__PhotonView__ObservableSearch Photon::Pun::__PhotonView__ObservableSearch::AutoFindActive{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonView__ObservableSearch Photon::Pun::__PhotonView__ObservableSearch::AutoFindAll{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Photon::Pun::__PhotonView__CallbackTargetChange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::__PhotonView__CallbackTargetChange::*)(::Photon::Pun::IPhotonViewCallback*, ::System::Type*, bool)>(&::Photon::Pun::__PhotonView__CallbackTargetChange::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2754288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonView__CallbackTargetChange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::__PhotonView__CallbackTargetChange::_ctor(::Photon::Pun::IPhotonViewCallback* obj, ::System::Type* type, bool add) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonView__CallbackTargetChange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, type, add);
}
// Ctor Parameters [CppParam { name: "obj", ty: "::Photon::Pun::IPhotonViewCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::System::Type*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "add", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonView__CallbackTargetChange::__PhotonView__CallbackTargetChange(::Photon::Pun::IPhotonViewCallback* obj, ::System::Type* type, bool add) noexcept {
  this->obj = obj;
  this->type = type;
  this->add = add;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonView__CallbackTargetChange::__PhotonView__CallbackTargetChange() {}
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Prefix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x274c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_InstantiationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::Photon::Pun::PhotonView::*)()>(
    &::Photon::Pun::PhotonView::get_InstantiationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_InstantiationData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_InstantiationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Photon::Pun::PhotonView::set_InstantiationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_InstantiationData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsSceneView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2752c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsSceneView",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsRoomView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsRoomView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x273be38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsRoomView",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsOwnerActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsOwnerActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2751b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsOwnerActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsMine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsMine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsMine",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_IsMine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::set_IsMine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2752c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_IsMine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_AmController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_AmController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_AmController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Controller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Controller",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Controller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Controller", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_CreatorActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_CreatorActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_CreatorActorNr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_CreatorActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_CreatorActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_CreatorActorNr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_AmOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_AmOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_AmOwner",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_AmOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::set_AmOwner)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2752ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_AmOwner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Owner",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Owner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_OwnerActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_OwnerActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_OwnerActorNr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_OwnerActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_OwnerActorNr)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x273be48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_OwnerActorNr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_ControllerActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_ControllerActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_ControllerActorNr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_ControllerActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_ControllerActorNr)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x273c044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_ControllerActorNr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_ViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_ViewID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_ViewID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_ViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_ViewID)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2745e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_ViewID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2753010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.ResetPhotonView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::ResetPhotonView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274ae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "ResetPhotonView", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RebuildControllerCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::RebuildControllerCache)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x273c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RebuildControllerCache",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.OnPreNetDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonView::OnPreNetDestroy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x274d20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "OnPreNetDestroy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2753194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RequestOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::RequestOwnership)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x27532e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RequestOwnership",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.TransferOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::TransferOwnership)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x275353c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.TransferOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::TransferOwnership)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2753778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.FindObservables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::FindObservables)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2753048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "FindObservables", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.SerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(
    &::Photon::Pun::PhotonView::SerializeView)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x274ed7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "SerializeView", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.DeserializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(
    &::Photon::Pun::PhotonView::DeserializeView)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x274fc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "DeserializeView", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.DeserializeComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::UnityEngine::Component*, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::DeserializeComponent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2753cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "DeserializeComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.SerializeComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::UnityEngine::Component*, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::SerializeComponent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2753aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "SerializeComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RefreshRpcMonoBehaviourCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::RefreshRpcMonoBehaviourCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x274ca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(),
                                                                               "RefreshRpcMonoBehaviourCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RPC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Pun::RpcTarget, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonView::RPC)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2753e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RpcSecure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Pun::RpcTarget, bool, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonView::RpcSecure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2753f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RpcSecure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RPC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Realtime::Player*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonView::RPC)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2753f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RpcSecure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Realtime::Player*, bool, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonView::RpcSecure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2754018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RpcSecure", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(::UnityEngine::Component*)>(&::Photon::Pun::PhotonView::Get)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x275409c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PhotonView::Get)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2754124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(int32_t)>(&::Photon::Pun::PhotonView::Find)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27541ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.AddCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::IPhotonViewCallback*)>(
    &::Photon::Pun::PhotonView::AddCallbackTarget)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2754200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "AddCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RemoveCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::IPhotonViewCallback*)>(
    &::Photon::Pun::PhotonView::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2754298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RemoveCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.UpdateCallbackLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::UpdateCallbackLists)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2752ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "UpdateCallbackLists",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::ToString)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x275431c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27545c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint8_t& Photon::Pun::PhotonView::__cordl_internal_get_Group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Group;
}
constexpr uint8_t const& Photon::Pun::PhotonView::__cordl_internal_get_Group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Group;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_Group(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Group = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_prefixField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_prefixField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_prefixField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixField = value;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Photon::Pun::PhotonView::__cordl_internal_get_instantiationDataField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiationDataField;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Photon::Pun::PhotonView::__cordl_internal_get_instantiationDataField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiationDataField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_instantiationDataField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instantiationDataField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOnSerializeDataSent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOnSerializeDataSent;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_lastOnSerializeDataSent(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastOnSerializeDataSent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonView::__cordl_internal_get_syncValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& Photon::Pun::PhotonView::__cordl_internal_get_syncValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncValues;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_syncValues(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOnSerializeDataReceived;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOnSerializeDataReceived;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_lastOnSerializeDataReceived(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastOnSerializeDataReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::ViewSynchronization& Photon::Pun::PhotonView::__cordl_internal_get_Synchronization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Synchronization;
}
constexpr ::Photon::Pun::ViewSynchronization const& Photon::Pun::PhotonView::__cordl_internal_get_Synchronization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Synchronization;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_Synchronization(::Photon::Pun::ViewSynchronization value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Synchronization = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_mixedModeIsReliable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedModeIsReliable;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_mixedModeIsReliable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixedModeIsReliable;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_mixedModeIsReliable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mixedModeIsReliable = value;
}
constexpr ::Photon::Pun::OwnershipOption& Photon::Pun::PhotonView::__cordl_internal_get_OwnershipTransfer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OwnershipTransfer;
}
constexpr ::Photon::Pun::OwnershipOption const& Photon::Pun::PhotonView::__cordl_internal_get_OwnershipTransfer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OwnershipTransfer;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OwnershipTransfer(::Photon::Pun::OwnershipOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OwnershipTransfer = value;
}
constexpr ::Photon::Pun::__PhotonView__ObservableSearch& Photon::Pun::PhotonView::__cordl_internal_get_observableSearch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observableSearch;
}
constexpr ::Photon::Pun::__PhotonView__ObservableSearch const& Photon::Pun::PhotonView::__cordl_internal_get_observableSearch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observableSearch;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_observableSearch(::Photon::Pun::__PhotonView__ObservableSearch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___observableSearch = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& Photon::Pun::PhotonView::__cordl_internal_get_ObservedComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObservedComponents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*> const&
Photon::Pun::PhotonView::__cordl_internal_get_ObservedComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObservedComponents;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_ObservedComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ObservedComponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*>& Photon::Pun::PhotonView::__cordl_internal_get_RpcMonoBehaviours() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RpcMonoBehaviours;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> const& Photon::Pun::PhotonView::__cordl_internal_get_RpcMonoBehaviours() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RpcMonoBehaviours;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_RpcMonoBehaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RpcMonoBehaviours)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get__IsMine_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsMine_k__BackingField;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get__IsMine_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsMine_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__IsMine_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsMine_k__BackingField = value;
}
constexpr ::Photon::Realtime::Player*& Photon::Pun::PhotonView::__cordl_internal_get__Controller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Controller_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& Photon::Pun::PhotonView::__cordl_internal_get__Controller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Controller_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__Controller_k__BackingField(::Photon::Realtime::Player* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Controller_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get__CreatorActorNr_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatorActorNr_k__BackingField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get__CreatorActorNr_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatorActorNr_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__CreatorActorNr_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreatorActorNr_k__BackingField = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get__AmOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AmOwner_k__BackingField;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get__AmOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AmOwner_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__AmOwner_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AmOwner_k__BackingField = value;
}
constexpr ::Photon::Realtime::Player*& Photon::Pun::PhotonView::__cordl_internal_get__Owner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Owner_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& Photon::Pun::PhotonView::__cordl_internal_get__Owner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Owner_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__Owner_k__BackingField(::Photon::Realtime::Player* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Owner_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_ownerActorNr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerActorNr;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_ownerActorNr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerActorNr;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_ownerActorNr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownerActorNr = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_controllerActorNr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerActorNr;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_controllerActorNr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerActorNr;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_controllerActorNr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerActorNr = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_sceneViewId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneViewId;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_sceneViewId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneViewId;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_sceneViewId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneViewId = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_viewIdField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewIdField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_viewIdField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewIdField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_viewIdField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewIdField = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_InstantiationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiationId;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_InstantiationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiationId;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_InstantiationId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InstantiationId = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_isRuntimeInstantiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRuntimeInstantiated;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_isRuntimeInstantiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRuntimeInstantiated;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_isRuntimeInstantiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRuntimeInstantiated = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_removedFromLocalViewList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___removedFromLocalViewList;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_removedFromLocalViewList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___removedFromLocalViewList;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_removedFromLocalViewList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___removedFromLocalViewList = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>*& Photon::Pun::PhotonView::__cordl_internal_get_CallbackChangeQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallbackChangeQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>*> const&
Photon::Pun::PhotonView::__cordl_internal_get_CallbackChangeQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallbackChangeQueue;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_CallbackChangeQueue(::System::Collections::Generic::Queue_1<::Photon::Pun::__PhotonView__CallbackTargetChange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CallbackChangeQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnPreNetDestroyCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreNetDestroyCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*> const&
Photon::Pun::PhotonView::__cordl_internal_get_OnPreNetDestroyCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreNetDestroyCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnPreNetDestroyCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreNetDestroyCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnOwnerChangeCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOwnerChangeCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*> const&
Photon::Pun::PhotonView::__cordl_internal_get_OnOwnerChangeCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOwnerChangeCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnOwnerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnOwnerChangeCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnControllerChangeCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnControllerChangeCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*> const&
Photon::Pun::PhotonView::__cordl_internal_get_OnControllerChangeCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnControllerChangeCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnControllerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnControllerChangeCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Photon::Pun::PhotonView::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Prefix(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Photon::Pun::PhotonView::get_InstantiationData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_InstantiationData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_InstantiationData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_InstantiationData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_IsSceneView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsSceneView",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsRoomView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsRoomView",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsOwnerActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsOwnerActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsMine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_IsMine",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_IsMine(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_IsMine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_AmController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_AmController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonView::get_Controller() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Controller",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Controller(::Photon::Realtime::Player* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Controller", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_CreatorActorNr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_CreatorActorNr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_CreatorActorNr(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_CreatorActorNr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_AmOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_AmOwner",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_AmOwner(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_AmOwner", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonView::get_Owner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_Owner",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Owner(::Photon::Realtime::Player* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_Owner", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_OwnerActorNr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_OwnerActorNr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_OwnerActorNr(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_OwnerActorNr", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_ControllerActorNr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_ControllerActorNr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_ControllerActorNr(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_ControllerActorNr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_ViewID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "get_ViewID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_ViewID(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "set_ViewID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Pun::PhotonView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::ResetPhotonView(bool resetOwner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "ResetPhotonView", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resetOwner);
}
/// @param ownerHasChanged: bool (default: false)
inline void Photon::Pun::PhotonView::RebuildControllerCache(bool ownerHasChanged) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RebuildControllerCache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerHasChanged);
}
inline void Photon::Pun::PhotonView::OnPreNetDestroy(::Photon::Pun::PhotonView* rootView) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "OnPreNetDestroy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootView);
}
inline void Photon::Pun::PhotonView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::RequestOwnership() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RequestOwnership",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::TransferOwnership(::Photon::Realtime::Player* newOwner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newOwner);
}
inline void Photon::Pun::PhotonView::TransferOwnership(int32_t newOwnerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newOwnerId);
}
/// @param force: bool (default: false)
inline void Photon::Pun::PhotonView::FindObservables(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "FindObservables", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline void Photon::Pun::PhotonView::SerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "SerializeView", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonView::DeserializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "DeserializeView", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonView::DeserializeComponent(::UnityEngine::Component* component, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "DeserializeComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, stream, info);
}
inline void Photon::Pun::PhotonView::SerializeComponent(::UnityEngine::Component* component, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "SerializeComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, stream, info);
}
inline void Photon::Pun::PhotonView::RefreshRpcMonoBehaviourCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RefreshRpcMonoBehaviourCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::RPC(::StringW methodName, ::Photon::Pun::RpcTarget target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName, target, parameters);
}
inline void Photon::Pun::PhotonView::RpcSecure(::StringW methodName, ::Photon::Pun::RpcTarget target, bool encrypt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RpcSecure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName, target, encrypt, parameters);
}
inline void Photon::Pun::PhotonView::RPC(::StringW methodName, ::Photon::Realtime::Player* targetPlayer, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName, targetPlayer, parameters);
}
inline void Photon::Pun::PhotonView::RpcSecure(::StringW methodName, ::Photon::Realtime::Player* targetPlayer, bool encrypt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RpcSecure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName, targetPlayer, encrypt, parameters);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Get(::UnityEngine::Component* component) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>, false>(nullptr, ___internal_method, component);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Get(::UnityEngine::GameObject* gameObj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>, false>(nullptr, ___internal_method, gameObj);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Find(int32_t viewID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>, false>(nullptr, ___internal_method, viewID);
}
inline void Photon::Pun::PhotonView::AddCallbackTarget(::Photon::Pun::IPhotonViewCallback* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "AddCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonView::RemoveCallbackTarget(::Photon::Pun::IPhotonViewCallback* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RemoveCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
template <typename T> inline void Photon::Pun::PhotonView::AddCallback(::Photon::Pun::IPhotonViewCallback* obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "AddCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
template <typename T> inline void Photon::Pun::PhotonView::RemoveCallback(::Photon::Pun::IPhotonViewCallback* obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RemoveCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonView::UpdateCallbackLists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "UpdateCallbackLists",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Photon::Pun::PhotonView::TryRegisterCallback(::Photon::Pun::IPhotonViewCallback* obj, ByRef<::System::Collections::Generic::List_1<T>*> list, bool add) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "TryRegisterCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPhotonViewCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, list, add);
}
template <typename T> inline void Photon::Pun::PhotonView::RegisterCallback(T obj, ByRef<::System::Collections::Generic::List_1<T>*> list, bool add) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), "RegisterCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, list, add);
}
inline ::StringW Photon::Pun::PhotonView::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonView* Photon::Pun::PhotonView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonView*>());
}
inline void Photon::Pun::PhotonView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonView::PhotonView() {}
