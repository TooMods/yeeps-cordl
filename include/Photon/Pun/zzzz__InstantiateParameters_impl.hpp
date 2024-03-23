#pragma once
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__InstantiateParameters_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::InstantiateParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::InstantiateParameters::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, uint8_t,
                                                               ::ArrayW<int32_t, ::Array<int32_t>*>, ::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::InstantiateParameters::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x273da24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::InstantiateParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 9>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::InstantiateParameters::_ctor(::StringW prefabName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, uint8_t group,
                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data, uint8_t objLevelPrefix, ::ArrayW<int32_t, ::Array<int32_t>*> viewIDs,
                                                      ::Photon::Realtime::Player* creator, int32_t timestamp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::InstantiateParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefabName, position, rotation, group, data, objLevelPrefix, viewIDs, creator, timestamp);
}
// Ctor Parameters [CppParam { name: "viewIDs", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "objLevelPrefix", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "group", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefabName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "creator", ty:
// "::Photon::Realtime::Player*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "timestamp", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::InstantiateParameters::InstantiateParameters(::ArrayW<int32_t, ::Array<int32_t>*> viewIDs, uint8_t objLevelPrefix,
                                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data, uint8_t group, ::UnityEngine::Quaternion rotation,
                                                                      ::UnityEngine::Vector3 position, ::StringW prefabName, ::Photon::Realtime::Player* creator, int32_t timestamp) noexcept {
  this->viewIDs = viewIDs;
  this->objLevelPrefix = objLevelPrefix;
  this->data = data;
  this->group = group;
  this->rotation = rotation;
  this->position = position;
  this->prefabName = prefabName;
  this->creator = creator;
  this->timestamp = timestamp;
}
// Ctor Parameters []
constexpr ::Photon::Pun::InstantiateParameters::InstantiateParameters() {}
