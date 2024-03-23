#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeBakingProcessSettings_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolumeProfile_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem::__ProbeVolumeSceneData__SerializableBoundItem(::StringW sceneGUID,
                                                                                                                                               ::UnityEngine::Bounds bounds) noexcept {
  this->sceneGUID = sceneGUID;
  this->bounds = bounds;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem::__ProbeVolumeSceneData__SerializableBoundItem() {}
// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "hasProbeVolumes", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem::__ProbeVolumeSceneData__SerializableHasPVItem(::StringW sceneGUID, bool hasProbeVolumes) noexcept {
  this->sceneGUID = sceneGUID;
  this->hasProbeVolumes = hasProbeVolumes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem::__ProbeVolumeSceneData__SerializableHasPVItem() {}
// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "profile", ty:
// "::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile::__ProbeVolumeSceneData__SerializablePVProfile(
    ::StringW sceneGUID, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> profile) noexcept {
  this->sceneGUID = sceneGUID;
  this->profile = profile;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile::__ProbeVolumeSceneData__SerializablePVProfile() {}
// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "settings", ty:
// "::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings::__ProbeVolumeSceneData__SerializablePVBakeSettings(
    ::StringW sceneGUID, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings settings) noexcept {
  this->sceneGUID = sceneGUID;
  this->settings = settings;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings::__ProbeVolumeSceneData__SerializablePVBakeSettings() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23ca540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_sceneGUIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneGUIDs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_sceneGUIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneGUIDs;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_set_sceneGUIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneGUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings& UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings const&
UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_set_settings(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>& UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_profile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profile;
}
constexpr ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> const&
UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_get_profile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profile;
}
constexpr void
UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__cordl_internal_set_profile(::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___profile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet::__ProbeVolumeSceneData__BakingSet() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ca6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c._UpdateBakingSets_b__22_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile)>(&::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::_UpdateBakingSets_b__22_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ca6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get(), "<UpdateBakingSets>b__22_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::setStaticF___9(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>(value));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::setStaticF___9__22_0(
    ::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>*, "<>9__22_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>*
UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>*, "<>9__22_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::_UpdateBakingSets_b__22_0(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*>::get(), "<UpdateBakingSets>b__22_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c::__ProbeVolumeSceneData____c() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.GetSceneGUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::GetSceneGUID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23c86b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "GetSceneGUID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)(::UnityEngine::Object*, ::StringW)>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x23c8780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.SetParentObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)(::UnityEngine::Object*, ::StringW)>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::SetParentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "SetParentObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x23c8d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "OnAfterDeserialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.UpdateBakingSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::UpdateBakingSets)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x23c8a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "UpdateBakingSets",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xb38;
  constexpr static std::size_t addrs = 0x23c9a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "OnBeforeSerialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.CreateNewBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* (
    ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)(::StringW)>(&::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::CreateNewBakingSet)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23c9624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "CreateNewBakingSet",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.InitializeBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*, ::StringW)>(&::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::InitializeBakingSet)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23c9580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "InitializeBakingSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData.SyncBakingSetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::SyncBakingSetSettings)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x23c9708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "SyncBakingSetSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBounds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBounds;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_serializedBounds(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedBounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedHasVolumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedHasVolumes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedHasVolumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedHasVolumes;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_serializedHasVolumes(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedHasVolumes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedProfiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedProfiles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedProfiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedProfiles;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_serializedProfiles(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedProfiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBakeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakeSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBakeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakeSettings;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_serializedBakeSettings(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedBakeSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBakingSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakingSets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_serializedBakingSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakingSets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_serializedBakingSets(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedBakingSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentAsset;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentAsset;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_parentAsset(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentSceneDataPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentSceneDataPropertyName;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentSceneDataPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentSceneDataPropertyName;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_parentSceneDataPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentSceneDataPropertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>*& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneBounds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneBounds;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_sceneBounds(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneBounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_hasProbeVolumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasProbeVolumes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_hasProbeVolumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasProbeVolumes;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_hasProbeVolumes(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hasProbeVolumes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneProfiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneProfiles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneProfiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneProfiles;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_sceneProfiles(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneProfiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneBakingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneBakingSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_sceneBakingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneBakingSettings;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_sceneBakingSettings(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneBakingSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_bakingSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakingSets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_get_bakingSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakingSets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::__cordl_internal_set_bakingSets(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bakingSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::setStaticF_s_SceneGUID(::System::Reflection::PropertyInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get>(
      std::forward<::System::Reflection::PropertyInfo*>(value));
}
inline ::System::Reflection::PropertyInfo* UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::getStaticF_s_SceneGUID() {
  return ::cordl_internals::getStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get>();
}
inline ::StringW UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::GetSceneGUID(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "GetSceneGUID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, scene);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::New_ctor(::UnityEngine::Object* parentAsset,
                                                                                                                                          ::StringW parentSceneDataPropertyName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>(parentAsset, parentSceneDataPropertyName));
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::_ctor(::UnityEngine::Object* parentAsset, ::StringW parentSceneDataPropertyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentAsset, parentSceneDataPropertyName);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::SetParentObject(::UnityEngine::Object* parent, ::StringW parentSceneDataPropertyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "SetParentObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, parentSceneDataPropertyName);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::UpdateBakingSets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "UpdateBakingSets",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::CreateNewBakingSet(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "CreateNewBakingSet",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*, false>(this, ___internal_method, name);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::InitializeBakingSet(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* set, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "InitializeBakingSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set, name);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::SyncBakingSetSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*>::get(), "SyncBakingSetSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData::ProbeVolumeSceneData() {}
