#pragma once
#include "GlobalNamespace/zzzz__ThoughtBubble_impl.hpp"
#include "GlobalNamespace/zzzz__SymbolThoughtBubble_def.hpp"
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SymbolThoughtBubble.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolThoughtBubble::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool, ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*, ::GlobalNamespace::__ThoughtBubble__OnTapped*,
    ::GlobalNamespace::__ThoughtBubble__OnHovered*)>(&::GlobalNamespace::SymbolThoughtBubble::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xf4f660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SymbolThoughtBubble.TriggerCraft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolThoughtBubble::*)()>(&::GlobalNamespace::SymbolThoughtBubble::TriggerCraft)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf4f698;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SymbolThoughtBubble._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolThoughtBubble::*)()>(&::GlobalNamespace::SymbolThoughtBubble::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4f7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SymbolThoughtBubble::__cordl_internal_get_symbol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbol;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SymbolThoughtBubble::__cordl_internal_get_symbol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbol;
}
constexpr void GlobalNamespace::SymbolThoughtBubble::__cordl_internal_set_symbol(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___symbol)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param onItemCrafted: ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* (default: nullptr)
/// @param onTapped: ::GlobalNamespace::__ThoughtBubble__OnTapped* (default: nullptr)
/// @param onHovered: ::GlobalNamespace::__ThoughtBubble__OnHovered* (default: nullptr)
inline void GlobalNamespace::SymbolThoughtBubble::Initialize(::UnityEngine::Vector3 initialLocalPosition, ::UnityEngine::Quaternion localRotation, bool startActive, bool isQuickCraft,
                                                             ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCrafted, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTapped,
                                                             ::GlobalNamespace::__ThoughtBubble__OnHovered* onHovered) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialLocalPosition, localRotation, startActive, isQuickCraft, onItemCrafted, onTapped, onHovered);
}
inline void GlobalNamespace::SymbolThoughtBubble::TriggerCraft() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SymbolThoughtBubble* GlobalNamespace::SymbolThoughtBubble::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SymbolThoughtBubble*>());
}
inline void GlobalNamespace::SymbolThoughtBubble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolThoughtBubble*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SymbolThoughtBubble::SymbolThoughtBubble() {}
