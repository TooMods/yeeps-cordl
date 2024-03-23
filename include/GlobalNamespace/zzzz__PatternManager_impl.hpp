#pragma once
#include "GlobalNamespace/zzzz__Pattern_impl.hpp"
#include "GlobalNamespace/zzzz__RandomColorType_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PatternManager_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__AccountManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticFilter_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__PatternCollection_def.hpp"
#include "GlobalNamespace/zzzz__PatternManager_def.hpp"
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "GlobalNamespace/zzzz__RandomColorType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "customParameters", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "customColorKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stuffingCost", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PatternManager__PatternData::__PatternManager__PatternData(::StringW key, ::StringW displayName, ::StringW itemKey,
                                                                                          ::ArrayW<::StringW, ::Array<::StringW>*> customParameters, ::StringW customColorKey,
                                                                                          int32_t stuffingCost) noexcept {
  this->key = key;
  this->displayName = displayName;
  this->itemKey = itemKey;
  this->customParameters = customParameters;
  this->customColorKey = customColorKey;
  this->stuffingCost = stuffingCost;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager__PatternData::__PatternManager__PatternData() {}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::GlobalNamespace::__Pattern__Type", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "randomColorType", ty: "::GlobalNamespace::RandomColorType", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultColorKey", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "forceStuffingCost", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forcedStuffingCost", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "canDisplayAsCohesiveSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceExpanded", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "patternDatas", ty: "::ArrayW<::GlobalNamespace::__PatternManager__PatternData,::Array<::GlobalNamespace::__PatternManager__PatternData>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__PatternManager__PatternDataSet::__PatternManager__PatternDataSet(
    ::StringW key, ::GlobalNamespace::__Pattern__Type type, ::GlobalNamespace::RandomColorType randomColorType, ::StringW defaultColorKey, bool forceStuffingCost, int32_t forcedStuffingCost,
    bool canDisplayAsCohesiveSet, bool forceExpanded, ::ArrayW<::GlobalNamespace::__PatternManager__PatternData, ::Array<::GlobalNamespace::__PatternManager__PatternData>*> patternDatas) noexcept {
  this->key = key;
  this->type = type;
  this->randomColorType = randomColorType;
  this->defaultColorKey = defaultColorKey;
  this->forceStuffingCost = forceStuffingCost;
  this->forcedStuffingCost = forcedStuffingCost;
  this->canDisplayAsCohesiveSet = canDisplayAsCohesiveSet;
  this->forceExpanded = forceExpanded;
  this->patternDatas = patternDatas;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager__PatternDataSet::__PatternManager__PatternDataSet() {}
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xf41b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::*)()>(
    &::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf41c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf41c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf41c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>(object, method));
}
inline void GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated::__PatternManager__OnOwnedPatternsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf41c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::*)(bool)>(
    &::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf41d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf41d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf41de4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*
GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>(object, method));
}
inline void GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::Invoke(bool hasEnoughPatternsToExpandImagination) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasEnoughPatternsToExpandImagination);
}
inline ::System::IAsyncResult* GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::BeginInvoke(bool hasEnoughPatternsToExpandImagination, ::System::AsyncCallback* callback,
                                                                                                                          ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hasEnoughPatternsToExpandImagination, callback, object);
}
inline void GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c::*)()>(&::GlobalNamespace::__PatternManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf41e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c._OnOwnedPatternKeysUpdated_b__30_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__PatternManager____c::*)(::GlobalNamespace::Pattern*, ::GlobalNamespace::Pattern*)>(
    &::GlobalNamespace::__PatternManager____c::_OnOwnedPatternKeysUpdated_b__30_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf41e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<OnOwnedPatternKeysUpdated>b__30_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c._ForceUnlockItems_b__32_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c::*)(::StringW)>(
    &::GlobalNamespace::__PatternManager____c::_ForceUnlockItems_b__32_1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf41e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<ForceUnlockItems>b__32_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c._ResetAllItemsToDefault_b__33_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c::*)(::StringW)>(
    &::GlobalNamespace::__PatternManager____c::_ResetAllItemsToDefault_b__33_1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf41fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<ResetAllItemsToDefault>b__33_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__PatternManager____c::setStaticF___9(::GlobalNamespace::__PatternManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PatternManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>(
      std::forward<::GlobalNamespace::__PatternManager____c*>(value));
}
inline ::GlobalNamespace::__PatternManager____c* GlobalNamespace::__PatternManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PatternManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>();
}
inline void GlobalNamespace::__PatternManager____c::setStaticF___9__30_0(::System::Comparison_1<::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::Pattern*>*, "<>9__30_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::Pattern*>* GlobalNamespace::__PatternManager____c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::Pattern*>*, "<>9__30_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>();
}
inline void GlobalNamespace::__PatternManager____c::setStaticF___9__32_1(::GlobalNamespace::__AccountManager__OnItemsResetFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__AccountManager__OnItemsResetFailure*, "<>9__32_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>(
      std::forward<::GlobalNamespace::__AccountManager__OnItemsResetFailure*>(value));
}
inline ::GlobalNamespace::__AccountManager__OnItemsResetFailure* GlobalNamespace::__PatternManager____c::getStaticF___9__32_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__AccountManager__OnItemsResetFailure*, "<>9__32_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>();
}
inline void GlobalNamespace::__PatternManager____c::setStaticF___9__33_1(::GlobalNamespace::__AccountManager__OnItemsResetFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__AccountManager__OnItemsResetFailure*, "<>9__33_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>(
      std::forward<::GlobalNamespace::__AccountManager__OnItemsResetFailure*>(value));
}
inline ::GlobalNamespace::__AccountManager__OnItemsResetFailure* GlobalNamespace::__PatternManager____c::getStaticF___9__33_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__AccountManager__OnItemsResetFailure*, "<>9__33_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get>();
}
inline ::GlobalNamespace::__PatternManager____c* GlobalNamespace::__PatternManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PatternManager____c*>());
}
inline void GlobalNamespace::__PatternManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__PatternManager____c::_OnOwnedPatternKeysUpdated_b__30_0(::GlobalNamespace::Pattern* a, ::GlobalNamespace::Pattern* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<OnOwnedPatternKeysUpdated>b__30_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::__PatternManager____c::_ForceUnlockItems_b__32_1(::StringW errorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<ForceUnlockItems>b__32_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType);
}
inline void GlobalNamespace::__PatternManager____c::_ResetAllItemsToDefault_b__33_1(::StringW errorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c*>::get(), "<ResetAllItemsToDefault>b__33_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager____c::__PatternManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__PatternManager____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3f360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c__DisplayClass32_0._ForceUnlockItems_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c__DisplayClass32_0::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__PatternManager____c__DisplayClass32_0::_ForceUnlockItems_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf420e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass32_0*>::get(), "<ForceUnlockItems>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__PatternManager____c__DisplayClass32_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__PatternManager____c__DisplayClass32_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__PatternManager____c__DisplayClass32_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PatternManager____c__DisplayClass32_0* GlobalNamespace::__PatternManager____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PatternManager____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__PatternManager____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass32_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PatternManager____c__DisplayClass32_0::_ForceUnlockItems_b__0(::System::Collections::Generic::List_1<::StringW>* newItemKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass32_0*>::get(), "<ForceUnlockItems>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newItemKeys);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager____c__DisplayClass32_0::__PatternManager____c__DisplayClass32_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c__DisplayClass33_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c__DisplayClass33_0::*)()>(
    &::GlobalNamespace::__PatternManager____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3f588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass33_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PatternManager____c__DisplayClass33_0._ResetAllItemsToDefault_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PatternManager____c__DisplayClass33_0::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__PatternManager____c__DisplayClass33_0::_ResetAllItemsToDefault_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf420fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass33_0*>::get(), "<ResetAllItemsToDefault>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__PatternManager____c__DisplayClass33_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__PatternManager____c__DisplayClass33_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__PatternManager____c__DisplayClass33_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PatternManager____c__DisplayClass33_0* GlobalNamespace::__PatternManager____c__DisplayClass33_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PatternManager____c__DisplayClass33_0*>());
}
inline void GlobalNamespace::__PatternManager____c__DisplayClass33_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass33_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PatternManager____c__DisplayClass33_0::_ResetAllItemsToDefault_b__0(::System::Collections::Generic::List_1<::StringW>* newPatterns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PatternManager____c__DisplayClass33_0*>::get(), "<ResetAllItemsToDefault>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPatterns);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PatternManager____c__DisplayClass33_0::__PatternManager____c__DisplayClass33_0() {}
//  Writing Method size for method: ::GlobalNamespace::PatternManager.get_hasLoadedOwnedPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PatternManager::get_hasLoadedOwnedPatterns)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf3df0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                               "get_hasLoadedOwnedPatterns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.HasEnoughPatternsToExpandImaginationInCurrentMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PatternManager::HasEnoughPatternsToExpandImaginationInCurrentMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3df5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "HasEnoughPatternsToExpandImaginationInCurrentMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetDefaultOwnedItemKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PatternManager::*)()>(
    &::GlobalNamespace::PatternManager::GetDefaultOwnedItemKeys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3df64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                               "GetDefaultOwnedItemKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PatternManager::*)()>(&::GlobalNamespace::PatternManager::Start)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xf3df6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AccountData*)>(&::GlobalNamespace::PatternManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf3e100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.OnOwnedPatternKeysUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PatternManager::OnOwnedPatternKeysUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3eb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnOwnedPatternKeysUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.OnOwnedPatternKeysUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*, bool)>(
    &::GlobalNamespace::PatternManager::OnOwnedPatternKeysUpdated)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0xf3e1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnOwnedPatternKeysUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.SetHasEnoughPatternsToExpand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, bool)>(&::GlobalNamespace::PatternManager::SetHasEnoughPatternsToExpand)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xf3ec3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "SetHasEnoughPatternsToExpand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.ForceUnlockItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::PatternManager::ForceUnlockItems)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xf3ef80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "ForceUnlockItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.ResetAllItemsToDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PatternManager::ResetAllItemsToDefault)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xf3f368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                               "ResetAllItemsToDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.InitializePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PatternManager::InitializePatterns)> {
  constexpr static std::size_t size = 0x1124;
  constexpr static std::size_t addrs = 0xf3f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "InitializePatterns",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetAllPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* (*)()>(
    &::GlobalNamespace::PatternManager::GetAllPatterns)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf406b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetAllPatterns",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetOwnedPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* (*)()>(
    &::GlobalNamespace::PatternManager::GetOwnedPatterns)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf40710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetOwnedPatterns",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.IsPatternOwned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::Pattern*)>(&::GlobalNamespace::PatternManager::IsPatternOwned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf407a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "IsPatternOwned", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetCraftablePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*)>(
        &::GlobalNamespace::PatternManager::GetCraftablePatterns)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xf40864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetCraftablePatterns", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetCraftablePatternsByCollections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::GlobalNamespace::PatternCollection*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*,
                                                                                       ::GlobalNamespace::CosmeticFilter*)>(&::GlobalNamespace::PatternManager::GetCraftablePatternsByCollections)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xf40b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetCraftablePatternsByCollections", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryGetPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::Pattern*>)>(&::GlobalNamespace::PatternManager::TryGetPattern)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf3eb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPattern", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryGetPatternForMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::Pattern*>)>(
    &::GlobalNamespace::PatternManager::TryGetPatternForMapObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf410d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternForMapObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryGetPatternForCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::Pattern*>)>(
    &::GlobalNamespace::PatternManager::TryGetPatternForCosmetic)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf41168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternForCosmetic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryGetItemPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::GlobalNamespace::__Item__CustomParameters*, ByRef<::GlobalNamespace::Pattern*>)>(
    &::GlobalNamespace::PatternManager::TryGetItemPattern)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xf411fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetItemPattern", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryGetPatternCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::PatternCollection*>)>(
    &::GlobalNamespace::PatternManager::TryGetPatternCollection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf3eba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PatternCollection*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryCraftItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::Pattern*, ::GlobalNamespace::__Item__CustomParameters*, ::UnityEngine::Vector3,
                                                                                           ByRef<::GlobalNamespace::Item*>)>(&::GlobalNamespace::PatternManager::TryCraftItem)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xf413e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryCraftItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.TryCraftCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__Item__CustomParameters*, ::UnityEngine::Vector3, ByRef<::GlobalNamespace::Item*>)>(
    &::GlobalNamespace::PatternManager::TryCraftCosmetic)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xf41794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryCraftCosmetic", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetTechWebLineMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::PatternManager::*)(bool)>(
    &::GlobalNamespace::PatternManager::GetTechWebLineMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf41a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetTechWebLineMaterial",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetBubbleMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::GlobalNamespace::PatternManager::*)(bool)>(&::GlobalNamespace::PatternManager::GetBubbleMaterials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf41a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetBubbleMaterials",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetTechWebLineMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::PatternManager::*)(bool, bool)>(
    &::GlobalNamespace::PatternManager::GetTechWebLineMesh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf41a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetTechWebLineMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetPriceTagMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::PatternManager::*)(int32_t)>(
    &::GlobalNamespace::PatternManager::GetPriceTagMesh)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xf41a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetPriceTagMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetUnlockStatusIcon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::PatternManager::*)(bool, bool)>(
    &::GlobalNamespace::PatternManager::GetUnlockStatusIcon)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf41ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetUnlockStatusIcon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager.GetPatternTypeIcon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::PatternManager::*)(::GlobalNamespace::__Pattern__Type)>(
    &::GlobalNamespace::PatternManager::GetPatternTypeIcon)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf41b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetPatternTypeIcon", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Pattern__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PatternManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PatternManager::*)()>(&::GlobalNamespace::PatternManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf41b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*>&
GlobalNamespace::PatternManager::__cordl_internal_get_patternDataSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternDataSets;
}
constexpr ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> const&
GlobalNamespace::PatternManager::__cordl_internal_get_patternDataSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternDataSets;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_patternDataSets(
    ::ArrayW<::GlobalNamespace::__PatternManager__PatternDataSet, ::Array<::GlobalNamespace::__PatternManager__PatternDataSet>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patternDataSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*& GlobalNamespace::PatternManager::__cordl_internal_get_onOwnedPatternsUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOwnedPatternsUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*> const&
GlobalNamespace::PatternManager::__cordl_internal_get_onOwnedPatternsUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOwnedPatternsUpdatedCallbacks;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_onOwnedPatternsUpdatedCallbacks(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onOwnedPatternsUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*&
GlobalNamespace::PatternManager::__cordl_internal_get_onEnoughPatternsToExpandImaginationUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onEnoughPatternsToExpandImaginationUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*> const&
GlobalNamespace::PatternManager::__cordl_internal_get_onEnoughPatternsToExpandImaginationUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onEnoughPatternsToExpandImaginationUpdatedCallbacks;
}
constexpr void
GlobalNamespace::PatternManager::__cordl_internal_set_onEnoughPatternsToExpandImaginationUpdatedCallbacks(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onEnoughPatternsToExpandImaginationUpdatedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PatternManager::__cordl_internal_get_defaultOwnedPatternKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultOwnedPatternKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::PatternManager::__cordl_internal_get_defaultOwnedPatternKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultOwnedPatternKeys;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_defaultOwnedPatternKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultOwnedPatternKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineActiveMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineActiveMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineActiveMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineActiveMat;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLineActiveMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLineActiveMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineInactiveMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineInactiveMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineInactiveMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineInactiveMat;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLineInactiveMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLineInactiveMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLinePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLinePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLinePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLinePrefab;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLinePrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLinePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& GlobalNamespace::PatternManager::__cordl_internal_get_bubbleActiveMats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleActiveMats;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& GlobalNamespace::PatternManager::__cordl_internal_get_bubbleActiveMats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleActiveMats;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_bubbleActiveMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bubbleActiveMats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& GlobalNamespace::PatternManager::__cordl_internal_get_bubbleInactiveMats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleInactiveMats;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& GlobalNamespace::PatternManager::__cordl_internal_get_bubbleInactiveMats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleInactiveMats;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_bubbleInactiveMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bubbleInactiveMats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineSolid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineSolid;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineSolid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineSolid;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLineSolid(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLineSolid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineDottedShort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineDottedShort;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineDottedShort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineDottedShort;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLineDottedShort(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLineDottedShort)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineDottedLong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineDottedLong;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::PatternManager::__cordl_internal_get_techWebLineDottedLong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebLineDottedLong;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_techWebLineDottedLong(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebLineDottedLong)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagPrefab;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_priceTagPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___priceTagPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagMeshesDigitOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagMeshesDigitOffset;
}
constexpr int32_t const& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagMeshesDigitOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagMeshesDigitOffset;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_priceTagMeshesDigitOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priceTagMeshesDigitOffset = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::PatternManager::__cordl_internal_get_priceTagMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagMeshes;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_priceTagMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___priceTagMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PatternManager::__cordl_internal_get_lockedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PatternManager::__cordl_internal_get_lockedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockedIcon;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_lockedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lockedIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PatternManager::__cordl_internal_get_unlockedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PatternManager::__cordl_internal_get_unlockedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedIcon;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_unlockedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unlockedIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PatternManager::__cordl_internal_get_ownedIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PatternManager::__cordl_internal_get_ownedIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedIcon;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_ownedIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownedIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Pattern__Type& GlobalNamespace::PatternManager::__cordl_internal_get_patternTypeReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternTypeReference;
}
constexpr ::GlobalNamespace::__Pattern__Type const& GlobalNamespace::PatternManager::__cordl_internal_get_patternTypeReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternTypeReference;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_patternTypeReference(::GlobalNamespace::__Pattern__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___patternTypeReference = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*>& GlobalNamespace::PatternManager::__cordl_internal_get_patternTypeIcons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternTypeIcons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> const& GlobalNamespace::PatternManager::__cordl_internal_get_patternTypeIcons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___patternTypeIcons;
}
constexpr void GlobalNamespace::PatternManager::__cordl_internal_set_patternTypeIcons(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patternTypeIcons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PatternManager::setStaticF_patterns(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "patterns",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::getStaticF_patterns() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "patterns",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_itemKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "itemKeyToPattern",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::getStaticF_itemKeyToPattern() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "itemKeyToPattern",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_mapObjectKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "mapObjectKeyToPattern",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::getStaticF_mapObjectKeyToPattern() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "mapObjectKeyToPattern",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_cosmeticKeyToPattern(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "cosmeticKeyToPattern",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::getStaticF_cosmeticKeyToPattern() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, "cosmeticKeyToPattern",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_patternCollections(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>*, "patternCollections",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>* GlobalNamespace::PatternManager::getStaticF_patternCollections() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PatternCollection*>*, "patternCollections",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_ownedPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, "ownedPatterns",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::getStaticF_ownedPatterns() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, "ownedPatterns",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_onOwnedPatternsUpdatedPersistantCallbacks(::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*, "onOwnedPatternsUpdatedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*>(value));
}
inline ::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated* GlobalNamespace::PatternManager::getStaticF_onOwnedPatternsUpdatedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PatternManager__OnOwnedPatternsUpdated*, "onOwnedPatternsUpdatedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_hasEnoughPatternsToExpandImaginationInPlayMode(bool value) {
  ::cordl_internals::setStaticField<bool, "hasEnoughPatternsToExpandImaginationInPlayMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::PatternManager::getStaticF_hasEnoughPatternsToExpandImaginationInPlayMode() {
  return ::cordl_internals::getStaticField<bool, "hasEnoughPatternsToExpandImaginationInPlayMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void GlobalNamespace::PatternManager::setStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode(bool value) {
  ::cordl_internals::setStaticField<bool, "hasEnoughPatternsToExpandImaginationInCreativeMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::PatternManager::getStaticF_hasEnoughPatternsToExpandImaginationInCreativeMode() {
  return ::cordl_internals::getStaticField<bool, "hasEnoughPatternsToExpandImaginationInCreativeMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline void
GlobalNamespace::PatternManager::setStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks(::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*, "onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>(
      std::forward<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*>(value));
}
inline ::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated* GlobalNamespace::PatternManager::getStaticF_onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PatternManager__OnEnoughPatternsToExpandImaginationUpdated*, "onEnoughPatternsToExpandImaginationUpdatedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get>();
}
inline bool GlobalNamespace::PatternManager::get_hasLoadedOwnedPatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                             "get_hasLoadedOwnedPatterns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PatternManager::HasEnoughPatternsToExpandImaginationInCurrentMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "HasEnoughPatternsToExpandImaginationInCurrentMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PatternManager::GetDefaultOwnedItemKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                             "GetDefaultOwnedItemKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PatternManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PatternManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, accountData);
}
inline void GlobalNamespace::PatternManager::OnOwnedPatternKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newOwnedPatternKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnOwnedPatternKeysUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newOwnedPatternKeys);
}
inline void GlobalNamespace::PatternManager::OnOwnedPatternKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newOwnedPatternKeys, bool fromLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "OnOwnedPatternKeysUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newOwnedPatternKeys, fromLoad);
}
inline void GlobalNamespace::PatternManager::SetHasEnoughPatternsToExpand(int32_t playModePatternCount, int32_t creativeModePatternCount, bool fromLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "SetHasEnoughPatternsToExpand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playModePatternCount, creativeModePatternCount, fromLoad);
}
inline void GlobalNamespace::PatternManager::ForceUnlockItems(::System::Collections::Generic::List_1<::StringW>* itemsToUnlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "ForceUnlockItems", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, itemsToUnlock);
}
inline void GlobalNamespace::PatternManager::ResetAllItemsToDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(),
                                                                             "ResetAllItemsToDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PatternManager::InitializePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "InitializePatterns",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::GetAllPatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetAllPatterns",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Pattern*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GlobalNamespace::PatternManager::GetOwnedPatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetOwnedPatterns",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PatternManager::IsPatternOwned(::GlobalNamespace::Pattern* pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "IsPatternOwned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*
GlobalNamespace::PatternManager::GetCraftablePatterns(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetCraftablePatterns", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, false>(nullptr, ___internal_method, permittedTypes);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PatternCollection*>*
GlobalNamespace::PatternManager::GetCraftablePatternsByCollections(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes,
                                                                   ::GlobalNamespace::CosmeticFilter* cosmeticFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetCraftablePatternsByCollections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PatternCollection*>*, false>(nullptr, ___internal_method, permittedTypes, cosmeticFilter);
}
inline bool GlobalNamespace::PatternManager::TryGetPattern(::StringW key, ByRef<::GlobalNamespace::Pattern*> pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPattern", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, pattern);
}
inline bool GlobalNamespace::PatternManager::TryGetPatternForMapObject(::StringW mapObjectKey, ByRef<::GlobalNamespace::Pattern*> pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternForMapObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mapObjectKey, pattern);
}
inline bool GlobalNamespace::PatternManager::TryGetPatternForCosmetic(::StringW cosmeticKey, ByRef<::GlobalNamespace::Pattern*> pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternForCosmetic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cosmeticKey, pattern);
}
inline bool GlobalNamespace::PatternManager::TryGetItemPattern(::StringW itemKey, ::GlobalNamespace::__Item__CustomParameters* customParameters, ByRef<::GlobalNamespace::Pattern*> pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetItemPattern", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Pattern*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, itemKey, customParameters, pattern);
}
inline bool GlobalNamespace::PatternManager::TryGetPatternCollection(::StringW key, ByRef<::GlobalNamespace::PatternCollection*> patternCollection) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryGetPatternCollection", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PatternCollection*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, patternCollection);
}
inline bool GlobalNamespace::PatternManager::TryCraftItem(::GlobalNamespace::Pattern* pattern, ::GlobalNamespace::__Item__CustomParameters* itemCustomParameters, ::UnityEngine::Vector3 position,
                                                          ByRef<::GlobalNamespace::Item*> craftedItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryCraftItem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, itemCustomParameters, position, craftedItem);
}
inline bool GlobalNamespace::PatternManager::TryCraftCosmetic(::GlobalNamespace::__Item__CustomParameters* itemCustomParameters, ::UnityEngine::Vector3 position,
                                                              ByRef<::GlobalNamespace::Item*> craftedItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "TryCraftCosmetic", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, itemCustomParameters, position, craftedItem);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PatternManager::GetTechWebLineMaterial(bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetTechWebLineMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, isActive);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GlobalNamespace::PatternManager::GetBubbleMaterials(bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetBubbleMaterials",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method, isActive);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::PatternManager::GetTechWebLineMesh(bool isSolid, bool isLong) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetTechWebLineMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method, isSolid, isLong);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::PatternManager::GetPriceTagMesh(int32_t numDigits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetPriceTagMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method, numDigits);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::PatternManager::GetUnlockStatusIcon(bool isOwned, bool isReachable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetUnlockStatusIcon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method, isOwned, isReachable);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::PatternManager::GetPatternTypeIcon(::GlobalNamespace::__Pattern__Type type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), "GetPatternTypeIcon", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Pattern__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method, type);
}
inline ::GlobalNamespace::PatternManager* GlobalNamespace::PatternManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PatternManager*>());
}
inline void GlobalNamespace::PatternManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PatternManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PatternManager::PatternManager() {}
