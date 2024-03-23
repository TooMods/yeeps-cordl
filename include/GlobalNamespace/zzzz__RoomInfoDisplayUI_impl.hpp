#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RoomInfoDisplayUI_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomInfoDisplayUI.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomInfoDisplayUI::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::RoomInfoDisplayUI::Display)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xf22a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomInfoDisplayUI.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomInfoDisplayUI::*)()>(&::GlobalNamespace::RoomInfoDisplayUI::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf22a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomInfoDisplayUI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomInfoDisplayUI::*)()>(&::GlobalNamespace::RoomInfoDisplayUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf22ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::RoomInfoDisplayUI::__cordl_internal_get_roomNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNameText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::RoomInfoDisplayUI::__cordl_internal_get_roomNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNameText;
}
constexpr void GlobalNamespace::RoomInfoDisplayUI::__cordl_internal_set_roomNameText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RoomInfoDisplayUI::Display(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::RoomInfoDisplayUI::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomInfoDisplayUI* GlobalNamespace::RoomInfoDisplayUI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomInfoDisplayUI*>());
}
inline void GlobalNamespace::RoomInfoDisplayUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomInfoDisplayUI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomInfoDisplayUI::RoomInfoDisplayUI() {}
