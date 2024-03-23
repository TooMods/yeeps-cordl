#pragma once
#include "GlobalNamespace/zzzz__MapObject_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderBatcher_def.hpp"
#include "GlobalNamespace/zzzz__ColliderBatch_def.hpp"
#include "GlobalNamespace/zzzz__ColliderBatcher_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicMaterial_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ColliderBatcher__ColliderBatchData.get_upSlopeFacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MapObject__Facing (::GlobalNamespace::__ColliderBatcher__ColliderBatchData::*)()>(
    &::GlobalNamespace::__ColliderBatcher__ColliderBatchData::get_upSlopeFacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276104c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                                                               "get_upSlopeFacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ColliderBatcher__ColliderBatchData.set_upSlopeFacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ColliderBatcher__ColliderBatchData::*)(::GlobalNamespace::__MapObject__Facing)>(
    &::GlobalNamespace::__ColliderBatcher__ColliderBatchData::set_upSlopeFacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2761054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), "set_upSlopeFacing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ColliderBatcher__ColliderBatchData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ColliderBatcher__ColliderBatchData::*)(
    ::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::StringW, ::GlobalNamespace::__MapObject__Facing)>(&::GlobalNamespace::__ColliderBatcher__ColliderBatchData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x275ec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MapObject__Facing GlobalNamespace::__ColliderBatcher__ColliderBatchData::get_upSlopeFacing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                                                             "get_upSlopeFacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MapObject__Facing, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ColliderBatcher__ColliderBatchData::set_upSlopeFacing(::GlobalNamespace::__MapObject__Facing value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), "set_upSlopeFacing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__ColliderBatcher__ColliderBatchData::_ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData source, ::StringW key,
                                                                         ::GlobalNamespace::__MapObject__Facing upSlopeFacing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, key, upSlopeFacing);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "physicMaterial", ty: "::UnityW<::UnityEngine::PhysicMaterial>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "footstepSoundKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "addedTopThickness", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "isSlopes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "slopeSize", ty: "::UnityEngine::Vector3Int", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_upSlopeFacing_k__BackingField", ty: "::GlobalNamespace::__MapObject__Facing", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData::__ColliderBatcher__ColliderBatchData(::StringW key, ::UnityW<::UnityEngine::PhysicMaterial> physicMaterial,
                                                                                                        ::StringW footstepSoundKey, float_t addedTopThickness, bool isSlopes,
                                                                                                        ::UnityEngine::Vector3Int slopeSize,
                                                                                                        ::GlobalNamespace::__MapObject__Facing _upSlopeFacing_k__BackingField) noexcept {
  this->key = key;
  this->physicMaterial = physicMaterial;
  this->footstepSoundKey = footstepSoundKey;
  this->addedTopThickness = addedTopThickness;
  this->isSlopes = isSlopes;
  this->slopeSize = slopeSize;
  this->_upSlopeFacing_k__BackingField = _upSlopeFacing_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData::__ColliderBatcher__ColliderBatchData() {}
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.InitializeColliderBatchData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::ColliderBatcher::InitializeColliderBatchData)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x275e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(),
                                                                               "InitializeColliderBatchData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.GetColliderBatchData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ColliderBatcher__ColliderBatchData (::GlobalNamespace::ColliderBatcher::*)(::StringW)>(
    &::GlobalNamespace::ColliderBatcher::GetColliderBatchData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x275ec94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GetColliderBatchData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x275edc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x275eea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.OnSetLoadedMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)(bool)>(&::GlobalNamespace::ColliderBatcher::OnSetLoadedMapData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275f00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "OnSetLoadedMapData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.DeleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::DeleteAll)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x275f018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "DeleteAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.DeleteAllSilent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::DeleteAllSilent)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x275f25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "DeleteAllSilent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.RegisterForBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColliderBatch* (::GlobalNamespace::ColliderBatcher::*)(::GlobalNamespace::MapObject*, ::StringW)>(
    &::GlobalNamespace::ColliderBatcher::RegisterForBatching)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x275f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "RegisterForBatching", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::Update)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x275f5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.TryGetColliderBakePrepDataForBoxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*, ByRef<Il2CppObject*>, ByRef<::ArrayW<bool, ::Array<bool>*>>, ByRef<int32_t>)>(
        &::GlobalNamespace::ColliderBatcher::TryGetColliderBakePrepDataForBoxes)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x275db40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "TryGetColliderBakePrepDataForBoxes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Il2CppObject*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.GenerateColliderObjectFromBoxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ColliderBatcher::*)(
    ::GlobalNamespace::__ColliderBatcher__ColliderBatchData, int32_t, ::UnityEngine::Vector3Int,
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*)>(&::GlobalNamespace::ColliderBatcher::GenerateColliderObjectFromBoxes)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x275d3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GenerateColliderObjectFromBoxes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.CalculateColliderBoxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* (*)(Il2CppObject*, ::ArrayW<bool, ::Array<bool>*>, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::CalculateColliderBoxes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x275e624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "CalculateColliderBoxes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.AddCollidersForLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, Il2CppObject*, int32_t, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*)>(
        &::GlobalNamespace::ColliderBatcher::AddCollidersForLayer)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x275f744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "AddCollidersForLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeRectanglesOnX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*)>(&::GlobalNamespace::ColliderBatcher::MergeRectanglesOnX)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x275fa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeRectanglesOnX", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeRectanglesOnZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*)>(&::GlobalNamespace::ColliderBatcher::MergeRectanglesOnZ)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x275fc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeRectanglesOnZ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.TryGetColliderBakePrepDataForSlopes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ByRef<Il2CppObject*>,
                         ByRef<::ArrayW<bool, ::Array<bool>*>>, ByRef<int32_t>)>(&::GlobalNamespace::ColliderBatcher::TryGetColliderBakePrepDataForSlopes)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x275d83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "TryGetColliderBakePrepDataForSlopes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Il2CppObject*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.GenerateColliderObjectFromSlopes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ColliderBatcher::*)(
    ::GlobalNamespace::__ColliderBatcher__ColliderBatchData, int32_t, ::UnityEngine::Vector3Int,
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*)>(&::GlobalNamespace::ColliderBatcher::GenerateColliderObjectFromSlopes)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x275ce58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GenerateColliderObjectFromSlopes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.CalculateColliderSlopes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* (*)(::GlobalNamespace::__ColliderBatcher__ColliderBatchData,
                                                                                                                                          Il2CppObject*, ::ArrayW<bool, ::Array<bool>*>, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::CalculateColliderSlopes)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x275e228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "CalculateColliderSlopes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesOnXPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesOnXPositive)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x275fef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnXPositive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesOnXNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesOnXNegative)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2760190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnXNegative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesOnZPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesOnZPositive)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2760470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnZPositive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesOnZNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesOnZNegative)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x276070c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnZNegative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesPerpendicularOnX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesPerpendicularOnX)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2760cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesPerpendicularOnX", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher.MergeSlopesPerpendicularOnZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, int32_t, int32_t)>(
        &::GlobalNamespace::ColliderBatcher::MergeSlopesPerpendicularOnZ)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2760a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesPerpendicularOnZ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatcher::*)()>(&::GlobalNamespace::ColliderBatcher::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2760fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*>&
GlobalNamespace::ColliderBatcher::__cordl_internal_get_colliderBatchDataRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchDataRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> const&
GlobalNamespace::ColliderBatcher::__cordl_internal_get_colliderBatchDataRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchDataRaw;
}
constexpr void GlobalNamespace::ColliderBatcher::__cordl_internal_set_colliderBatchDataRaw(
    ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colliderBatchDataRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>*& GlobalNamespace::ColliderBatcher::__cordl_internal_get_batches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batches;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>*> const&
GlobalNamespace::ColliderBatcher::__cordl_internal_get_batches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batches;
}
constexpr void GlobalNamespace::ColliderBatcher::__cordl_internal_set_batches(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___batches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ColliderBatcher::setStaticF_colliderBatchData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*, "colliderBatchData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>* GlobalNamespace::ColliderBatcher::getStaticF_colliderBatchData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*, "colliderBatchData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get>();
}
inline void GlobalNamespace::ColliderBatcher::InitializeColliderBatchData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(),
                                                                             "InitializeColliderBatchData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__ColliderBatcher__ColliderBatchData GlobalNamespace::ColliderBatcher::GetColliderBatchData(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GetColliderBatchData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, false>(this, ___internal_method, key);
}
inline void GlobalNamespace::ColliderBatcher::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatcher::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatcher::OnSetLoadedMapData(bool newHasLoadedMapData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "OnSetLoadedMapData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasLoadedMapData);
}
inline void GlobalNamespace::ColliderBatcher::DeleteAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "DeleteAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatcher::DeleteAllSilent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "DeleteAllSilent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderBatch* GlobalNamespace::ColliderBatcher::RegisterForBatching(::GlobalNamespace::MapObject* mapObject, ::StringW batchKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "RegisterForBatching", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColliderBatch*, false>(this, ___internal_method, mapObject, batchKey);
}
inline void GlobalNamespace::ColliderBatcher::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ColliderBatcher::TryGetColliderBakePrepDataForBoxes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects,
                                                                                 ByRef<Il2CppObject*> occupiedCells, ByRef<::ArrayW<bool, ::Array<bool>*>> yLayerHasOccupiedCells,
                                                                                 ByRef<int32_t> occupiedCellCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "TryGetColliderBakePrepDataForBoxes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Il2CppObject*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mapObjects, occupiedCells, yLayerHasOccupiedCells, occupiedCellCount);
}
inline ::UnityW<::UnityEngine::GameObject>
GlobalNamespace::ColliderBatcher::GenerateColliderObjectFromBoxes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, int32_t layer, ::UnityEngine::Vector3Int dimensions,
                                                                  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* boxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GenerateColliderObjectFromBoxes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, batchData, layer, dimensions, boxes);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*
GlobalNamespace::ColliderBatcher::CalculateColliderBoxes(Il2CppObject* occupiedCells, ::ArrayW<bool, ::Array<bool>*> yLayerHasOccupiedCells, int32_t occupiedCellCount) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "CalculateColliderBoxes", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, false>(
      nullptr, ___internal_method, occupiedCells, yLayerHasOccupiedCells, occupiedCellCount);
}
inline void GlobalNamespace::ColliderBatcher::AddCollidersForLayer(int32_t layerIndex, Il2CppObject* occupiedCells, int32_t occupiedCellCount,
                                                                   ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* boxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "AddCollidersForLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, layerIndex, occupiedCells, occupiedCellCount, boxes);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeRectanglesOnX(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* rectangles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeRectanglesOnX", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, rectangles);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeRectanglesOnZ(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* rectangles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeRectanglesOnZ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, rectangles);
}
inline bool GlobalNamespace::ColliderBatcher::TryGetColliderBakePrepDataForSlopes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects,
                                                                                  ::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, ByRef<Il2CppObject*> occupiedCells,
                                                                                  ByRef<::ArrayW<bool, ::Array<bool>*>> yLayerHasOccupiedCells, ByRef<int32_t> occupiedCellCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "TryGetColliderBakePrepDataForSlopes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Il2CppObject*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mapObjects, batchData, occupiedCells, yLayerHasOccupiedCells, occupiedCellCount);
}
inline ::UnityW<::UnityEngine::GameObject>
GlobalNamespace::ColliderBatcher::GenerateColliderObjectFromSlopes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, int32_t layer, ::UnityEngine::Vector3Int dimensions,
                                                                   ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "GenerateColliderObjectFromSlopes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, batchData, layer, dimensions, slopes);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*
GlobalNamespace::ColliderBatcher::CalculateColliderSlopes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, Il2CppObject* occupiedCells,
                                                          ::ArrayW<bool, ::Array<bool>*> yLayerHasOccupiedCells, int32_t occupiedCellCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "CalculateColliderSlopes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*, false>(
      nullptr, ___internal_method, batchData, occupiedCells, yLayerHasOccupiedCells, occupiedCellCount);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeSlopesOnXPositive(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                                        int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnXPositive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeSlopesOnXNegative(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                                        int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnXNegative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeSlopesOnZPositive(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                                        int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnZPositive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline int32_t GlobalNamespace::ColliderBatcher::MergeSlopesOnZNegative(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                                        int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesOnZNegative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline int32_t
GlobalNamespace::ColliderBatcher::MergeSlopesPerpendicularOnX(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                              int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesPerpendicularOnX", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline int32_t
GlobalNamespace::ColliderBatcher::MergeSlopesPerpendicularOnZ(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes,
                                                              int32_t slopeSizeXZ, int32_t slopeSizeY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), "MergeSlopesPerpendicularOnZ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slopes, slopeSizeXZ, slopeSizeY);
}
inline ::GlobalNamespace::ColliderBatcher* GlobalNamespace::ColliderBatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColliderBatcher*>());
}
inline void GlobalNamespace::ColliderBatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderBatcher::ColliderBatcher() {}
