#pragma once
#include "GlobalNamespace/zzzz__Avatar_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDisplay_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDisplay_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::*)(
    ::GlobalNamespace::CosmeticData*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x158b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData.AddHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::*)()>(
    &::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::AddHighlight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x158ba5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), "AddHighlight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData.RemoveHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::*)()>(
    &::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::RemoveHighlight)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x158bd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), "RemoveHighlight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData.RemoveAllHighlights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::*)()>(
    &::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::RemoveAllHighlights)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x158bef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), "RemoveAllHighlights",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData.SetIsHighlighted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::*)(bool)>(
    &::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::SetIsHighlighted)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x158c3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), "SetIsHighlighted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticData*& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_cosmeticData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticData*> const& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_cosmeticData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticData;
}
constexpr void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_set_cosmeticData(::GlobalNamespace::CosmeticData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_highlightCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightCount;
}
constexpr int32_t const& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_highlightCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightCount;
}
constexpr void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_set_highlightCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highlightCount = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_defaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_get_defaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData* GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::New_ctor(::GlobalNamespace::CosmeticData* cosmeticData,
                                                                                                                                    ::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>(cosmeticData, gameObject));
}
inline void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::_ctor(::GlobalNamespace::CosmeticData* cosmeticData, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmeticData, gameObject);
}
inline void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::AddHighlight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(),
                                                                             "AddHighlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::RemoveHighlight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(),
                                                                             "RemoveHighlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::RemoveAllHighlights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(),
                                                                             "RemoveAllHighlights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::SetIsHighlighted(bool newIsHighlighted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>::get(), "SetIsHighlighted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsHighlighted);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData::__CosmeticsDisplay__ActiveCosmeticData() {}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(&::GlobalNamespace::CosmeticsDisplay::Display)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1589074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.ShowCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(&::GlobalNamespace::CosmeticsDisplay::ShowCosmetics)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x158b0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "ShowCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.SetAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::GlobalNamespace::__Avatar__AvatarPortion)>(
    &::GlobalNamespace::CosmeticsDisplay::SetAvatarPortion)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x15895e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "SetAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.AddHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::StringW)>(&::GlobalNamespace::CosmeticsDisplay::AddHighlight)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x158b770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "AddHighlight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.RemoveHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::StringW)>(&::GlobalNamespace::CosmeticsDisplay::RemoveHighlight)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x158ba78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "RemoveHighlight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.RemoveAllHighlights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)()>(&::GlobalNamespace::CosmeticsDisplay::RemoveAllHighlights)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x158bd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(),
                                                                               "RemoveAllHighlights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.SetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(int32_t)>(&::GlobalNamespace::CosmeticsDisplay::SetLayer)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1588ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.AddMirroredDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::GlobalNamespace::CosmeticsDisplay*)>(
    &::GlobalNamespace::CosmeticsDisplay::AddMirroredDisplay)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x158bf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "AddMirroredDisplay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsDisplay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay.RemoveMirroredDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)(::GlobalNamespace::CosmeticsDisplay*)>(
    &::GlobalNamespace::CosmeticsDisplay::RemoveMirroredDisplay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x158c2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "RemoveMirroredDisplay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsDisplay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsDisplay::*)()>(&::GlobalNamespace::CosmeticsDisplay::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x158c380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_avatarCosmeticsReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarCosmeticsReference;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_avatarCosmeticsReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarCosmeticsReference;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_avatarCosmeticsReference(::UnityW<::UnityEngine::SkinnedMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatarCosmeticsReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_zipperAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_zipperAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchor;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_zipperAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zipperAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_hideInvisibleToSelfCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideInvisibleToSelfCosmetics;
}
constexpr bool const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_hideInvisibleToSelfCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideInvisibleToSelfCosmetics;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_hideInvisibleToSelfCosmetics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideInvisibleToSelfCosmetics = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_cosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*> const&
GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_cosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>*& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_activeCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>*> const&
GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_activeCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeCosmetics;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_activeCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>*& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_mirroredDisplays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirroredDisplays;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>*> const&
GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_mirroredDisplays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirroredDisplays;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_mirroredDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirroredDisplays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_isHeadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeadOnly;
}
constexpr bool const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_isHeadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeadOnly;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_isHeadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHeadOnly = value;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_avatarPortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortion;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_avatarPortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortion;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_avatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarPortion = value;
}
constexpr int32_t& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_selectedLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLayer;
}
constexpr int32_t const& GlobalNamespace::CosmeticsDisplay::__cordl_internal_get_selectedLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLayer;
}
constexpr void GlobalNamespace::CosmeticsDisplay::__cordl_internal_set_selectedLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLayer = value;
}
inline void GlobalNamespace::CosmeticsDisplay::Display(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmetics);
}
inline void GlobalNamespace::CosmeticsDisplay::ShowCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "ShowCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmetics);
}
inline void GlobalNamespace::CosmeticsDisplay::SetAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "SetAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAvatarPortion);
}
inline void GlobalNamespace::CosmeticsDisplay::AddHighlight(::StringW cosmeticKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "AddHighlight", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmeticKey);
}
inline void GlobalNamespace::CosmeticsDisplay::RemoveHighlight(::StringW cosmeticKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "RemoveHighlight", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmeticKey);
}
inline void GlobalNamespace::CosmeticsDisplay::RemoveAllHighlights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "RemoveAllHighlights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsDisplay::SetLayer(int32_t newLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "SetLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLayer);
}
inline void GlobalNamespace::CosmeticsDisplay::AddMirroredDisplay(::GlobalNamespace::CosmeticsDisplay* mirroredDisplay) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "AddMirroredDisplay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsDisplay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mirroredDisplay);
}
inline void GlobalNamespace::CosmeticsDisplay::RemoveMirroredDisplay(::GlobalNamespace::CosmeticsDisplay* mirroredDisplay) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), "RemoveMirroredDisplay", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsDisplay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mirroredDisplay);
}
inline ::GlobalNamespace::CosmeticsDisplay* GlobalNamespace::CosmeticsDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsDisplay*>());
}
inline void GlobalNamespace::CosmeticsDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsDisplay::CosmeticsDisplay() {}
