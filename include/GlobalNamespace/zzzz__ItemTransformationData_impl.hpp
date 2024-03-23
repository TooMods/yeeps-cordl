#pragma once
#include "GlobalNamespace/zzzz__Item_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ItemTransformationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemTransformationData::*)(
    ::GlobalNamespace::__Item__AnchorState, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::ItemTransformationData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a9e348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemTransformationData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ItemTransformationData::_ctor(::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                           ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemTransformationData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorState, anchorID, position, rotation, velocity, angularVelocity);
}
// Ctor Parameters [CppParam { name: "anchorState", ty: "::GlobalNamespace::__Item__AnchorState", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchorID", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularVelocity", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ItemTransformationData::ItemTransformationData(::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position,
                                                                            ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) noexcept {
  this->anchorState = anchorState;
  this->anchorID = anchorID;
  this->position = position;
  this->rotation = rotation;
  this->velocity = velocity;
  this->angularVelocity = angularVelocity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ItemTransformationData::ItemTransformationData() {}
