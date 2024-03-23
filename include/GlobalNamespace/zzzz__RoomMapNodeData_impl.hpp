#pragma once
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMapNodeData_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMapNodeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::RoomMapNodeData::*)(::StringW, ::StringW, ::UnityEngine::Vector2Int, ::StringW, bool, bool, bool, bool)>(&::GlobalNamespace::RoomMapNodeData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1642c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMapNodeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMapNodeData::_ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int gridPosition, ::StringW transitionKey, bool blockUp, bool blockRight,
                                                    bool blockDown, bool blockLeft) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMapNodeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomKey, themeKey, gridPosition, transitionKey, blockUp, blockRight, blockDown, blockLeft);
}
// Ctor Parameters [CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "themeKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "gridPosition", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "transitionKey", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "blockUp", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockRight", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "blockDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockLeft", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMapNodeData::RoomMapNodeData(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int gridPosition, ::StringW transitionKey, bool blockUp, bool blockRight,
                                                              bool blockDown, bool blockLeft) noexcept {
  this->roomKey = roomKey;
  this->themeKey = themeKey;
  this->gridPosition = gridPosition;
  this->transitionKey = transitionKey;
  this->blockUp = blockUp;
  this->blockRight = blockRight;
  this->blockDown = blockDown;
  this->blockLeft = blockLeft;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMapNodeData::RoomMapNodeData() {}
