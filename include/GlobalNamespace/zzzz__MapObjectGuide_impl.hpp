#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectGuide_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectGuide_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x30754f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::*)(bool)>(
    &::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x30755b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30755cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3075654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>(object, method));
}
inline void GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::Invoke(bool onMapLoad) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onMapLoad);
}
inline ::System::IAsyncResult* GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::BeginInvoke(bool onMapLoad, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, onMapLoad, callback, object);
}
inline void GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback::__MapObjectGuide__OnOccupiedCallback() {}
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.get_hasRegisteredKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::get_hasRegisteredKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3075110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(),
                                                                               "get_hasRegisteredKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.set_hasRegisteredKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(bool)>(&::GlobalNamespace::MapObjectGuide::set_hasRegisteredKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3075118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_hasRegisteredKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.get_registeredPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::MapObjectGuide::*)()>(
    &::GlobalNamespace::MapObjectGuide::get_registeredPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3075124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(),
                                                                               "get_registeredPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.set_registeredPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::MapObjectGuide::set_registeredPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3075134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_registeredPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.get_registeredDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::MapObjectGuide::*)()>(
    &::GlobalNamespace::MapObjectGuide::get_registeredDimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3075140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(),
                                                                               "get_registeredDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.set_registeredDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::MapObjectGuide::set_registeredDimensions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3075150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_registeredDimensions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.get_isOccupied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::get_isOccupied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x307515c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "get_isOccupied",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.set_isOccupied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(bool)>(&::GlobalNamespace::MapObjectGuide::set_isOccupied)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3075164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_isOccupied",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3075170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x30751fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.GetWorldTransformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3Int>)>(&::GlobalNamespace::MapObjectGuide::GetWorldTransformation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x30752a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "GetWorldTransformation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.SetRegisteredKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::MapObjectGuide::SetRegisteredKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3075324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "SetRegisteredKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.ClearRegisteredKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::ClearRegisteredKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3075340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "ClearRegisteredKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.OnOccupied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)(bool)>(&::GlobalNamespace::MapObjectGuide::OnOccupied)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3075348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnOccupied",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide.OnNoLongerOccupied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::OnNoLongerOccupied)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x30754c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnNoLongerOccupied",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectGuide._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectGuide::*)()>(&::GlobalNamespace::MapObjectGuide::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30754e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::MapObjectGuide::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_size(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MapObjectGuide::__cordl_internal_get_placementParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placementParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_placementParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placementParticles;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_placementParticles(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___placementParticles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MapObjectGuide::__cordl_internal_get_meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshRenderer;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MapObjectGuide::__cordl_internal_get_placementSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placementSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_placementSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placementSoundKey;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_placementSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___placementSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MapObjectGuide::__cordl_internal_get__hasRegisteredKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRegisteredKey_k__BackingField;
}
constexpr bool const& GlobalNamespace::MapObjectGuide::__cordl_internal_get__hasRegisteredKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRegisteredKey_k__BackingField;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set__hasRegisteredKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRegisteredKey_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::MapObjectGuide::__cordl_internal_get__registeredPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::MapObjectGuide::__cordl_internal_get__registeredPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredPosition_k__BackingField;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set__registeredPosition_k__BackingField(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::MapObjectGuide::__cordl_internal_get__registeredDimensions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredDimensions_k__BackingField;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::MapObjectGuide::__cordl_internal_get__registeredDimensions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredDimensions_k__BackingField;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set__registeredDimensions_k__BackingField(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredDimensions_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MapObjectGuide::__cordl_internal_get__isOccupied_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOccupied_k__BackingField;
}
constexpr bool const& GlobalNamespace::MapObjectGuide::__cordl_internal_get__isOccupied_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOccupied_k__BackingField;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set__isOccupied_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOccupied_k__BackingField = value;
}
constexpr ::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*& GlobalNamespace::MapObjectGuide::__cordl_internal_get_onOccupiedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOccupiedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback*> const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_onOccupiedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOccupiedCallbacks;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_onOccupiedCallbacks(::GlobalNamespace::__MapObjectGuide__OnOccupiedCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onOccupiedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MapObjectGuide::__cordl_internal_get_hasAttemptedToRegister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAttemptedToRegister;
}
constexpr bool const& GlobalNamespace::MapObjectGuide::__cordl_internal_get_hasAttemptedToRegister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAttemptedToRegister;
}
constexpr void GlobalNamespace::MapObjectGuide::__cordl_internal_set_hasAttemptedToRegister(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasAttemptedToRegister = value;
}
inline bool GlobalNamespace::MapObjectGuide::get_hasRegisteredKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "get_hasRegisteredKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::set_hasRegisteredKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_hasRegisteredKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::MapObjectGuide::get_registeredPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(),
                                                                             "get_registeredPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::set_registeredPosition(::UnityEngine::Vector3Int value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_registeredPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::MapObjectGuide::get_registeredDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(),
                                                                             "get_registeredDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::set_registeredDimensions(::UnityEngine::Vector3Int value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_registeredDimensions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MapObjectGuide::get_isOccupied() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "get_isOccupied",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::set_isOccupied(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "set_isOccupied",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MapObjectGuide::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::GetWorldTransformation(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3Int> size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "GetWorldTransformation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, size);
}
inline void GlobalNamespace::MapObjectGuide::SetRegisteredKey(::UnityEngine::Vector3Int registeredPosition, ::UnityEngine::Vector3Int registeredDimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "SetRegisteredKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registeredPosition, registeredDimensions);
}
inline void GlobalNamespace::MapObjectGuide::ClearRegisteredKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "ClearRegisteredKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectGuide::OnOccupied(bool onMapLoad) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnOccupied",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onMapLoad);
}
inline void GlobalNamespace::MapObjectGuide::OnNoLongerOccupied() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), "OnNoLongerOccupied",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MapObjectGuide* GlobalNamespace::MapObjectGuide::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapObjectGuide*>());
}
inline void GlobalNamespace::MapObjectGuide::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectGuide*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectGuide::MapObjectGuide() {}
