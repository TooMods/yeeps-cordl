#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ItemDisplay_def.hpp"
#include "GlobalNamespace/zzzz__Pattern_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ItemDisplay.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDisplay::*)(::GlobalNamespace::Pattern*)>(&::GlobalNamespace::ItemDisplay::Display)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2aa7908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDisplay.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDisplay::*)()>(&::GlobalNamespace::ItemDisplay::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2aa7afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDisplay::*)()>(&::GlobalNamespace::ItemDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa7d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ItemDisplay::__cordl_internal_get_itemContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ItemDisplay::__cordl_internal_get_itemContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContainer;
}
constexpr void GlobalNamespace::ItemDisplay::__cordl_internal_set_itemContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ItemDisplay::__cordl_internal_get_previewObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ItemDisplay::__cordl_internal_get_previewObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewObject;
}
constexpr void GlobalNamespace::ItemDisplay::__cordl_internal_set_previewObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ItemDisplay::__cordl_internal_get_previewRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewRadius;
}
constexpr float_t const& GlobalNamespace::ItemDisplay::__cordl_internal_get_previewRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewRadius;
}
constexpr void GlobalNamespace::ItemDisplay::__cordl_internal_set_previewRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewRadius = value;
}
inline void GlobalNamespace::ItemDisplay::Display(::GlobalNamespace::Pattern* pattern) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Pattern*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pattern);
}
inline void GlobalNamespace::ItemDisplay::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ItemDisplay* GlobalNamespace::ItemDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ItemDisplay*>());
}
inline void GlobalNamespace::ItemDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ItemDisplay::ItemDisplay() {}
