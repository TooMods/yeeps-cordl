#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopConsole_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDisplay_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopConsoleGroup_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopConsole_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopThoughtBubble_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsStoreInstance_def.hpp"
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "GlobalNamespace/zzzz__RotationItem_def.hpp"
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsShopConsole____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsShopConsole____c::*)()>(&::GlobalNamespace::__CosmeticsShopConsole____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27678b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsShopConsole____c._OnStoreRotationUpdated_b__30_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__CosmeticsShopConsole____c::*)(
    ::GlobalNamespace::RotationItem, ::GlobalNamespace::RotationItem)>(&::GlobalNamespace::__CosmeticsShopConsole____c::_OnStoreRotationUpdated_b__30_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27678bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get(), "<OnStoreRotationUpdated>b__30_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__CosmeticsShopConsole____c::setStaticF___9(::GlobalNamespace::__CosmeticsShopConsole____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__CosmeticsShopConsole____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get>(
      std::forward<::GlobalNamespace::__CosmeticsShopConsole____c*>(value));
}
inline ::GlobalNamespace::__CosmeticsShopConsole____c* GlobalNamespace::__CosmeticsShopConsole____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__CosmeticsShopConsole____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get>();
}
inline void GlobalNamespace::__CosmeticsShopConsole____c::setStaticF___9__30_0(::System::Comparison_1<::GlobalNamespace::RotationItem>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::RotationItem>*, "<>9__30_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::RotationItem>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::RotationItem>* GlobalNamespace::__CosmeticsShopConsole____c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::RotationItem>*, "<>9__30_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get>();
}
inline ::GlobalNamespace::__CosmeticsShopConsole____c* GlobalNamespace::__CosmeticsShopConsole____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CosmeticsShopConsole____c*>());
}
inline void GlobalNamespace::__CosmeticsShopConsole____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__CosmeticsShopConsole____c::_OnStoreRotationUpdated_b__30_0(::GlobalNamespace::RotationItem a, ::GlobalNamespace::RotationItem b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c*>::get(), "<OnStoreRotationUpdated>b__30_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsShopConsole____c::__CosmeticsShopConsole____c() {}
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::*)()>(
    &::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2767610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0._LoadThoughtBubbles_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::*)(::GlobalNamespace::ThoughtBubble*)>(
    &::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_LoadThoughtBubbles_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27678e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), "<LoadThoughtBubbles>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0._LoadThoughtBubbles_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::*)(bool)>(
    &::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_LoadThoughtBubbles_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2767908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), "<LoadThoughtBubbles>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get_curItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curItemIndex;
}
constexpr int32_t const& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get_curItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curItemIndex;
}
constexpr void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_set_curItemIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curItemIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get_thoughtBubble() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubble;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> const& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get_thoughtBubble() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubble;
}
constexpr void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_set_thoughtBubble(::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thoughtBubble)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsole>& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsole> const& GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CosmeticsShopConsole> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0* GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>());
}
inline void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_LoadThoughtBubbles_b__0(::GlobalNamespace::ThoughtBubble* bubble) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), "<LoadThoughtBubbles>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bubble);
}
inline void GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::_LoadThoughtBubbles_b__1(bool newHovered) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0*>::get(), "<LoadThoughtBubbles>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHovered);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsShopConsole____c__DisplayClass40_0::__CosmeticsShopConsole____c__DisplayClass40_0() {}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.SetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(::GlobalNamespace::CosmeticsShopConsoleGroup*, int32_t)>(
    &::GlobalNamespace::CosmeticsShopConsole::SetGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2765a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::Start)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2765a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.OnStoreRotationUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(::GlobalNamespace::GlobalRotation)>(
    &::GlobalNamespace::CosmeticsShopConsole::OnStoreRotationUpdated)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2765f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnStoreRotationUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.SetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*)>(&::GlobalNamespace::CosmeticsShopConsole::SetItems)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2765da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::Update)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2766b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.DoPreviewCycle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::DoPreviewCycle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27662c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(),
                                                                               "DoPreviewCycle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.OnReceivePreviewItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(int32_t)>(
    &::GlobalNamespace::CosmeticsShopConsole::OnReceivePreviewItem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2766d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnReceivePreviewItem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.PreviewItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(int32_t)>(&::GlobalNamespace::CosmeticsShopConsole::PreviewItem)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2766c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "PreviewItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.PreviewItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(::GlobalNamespace::RotationItem)>(
    &::GlobalNamespace::CosmeticsShopConsole::PreviewItem)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2766e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "PreviewItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::OnDisable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x27671c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.OnCosmeticsModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(bool)>(
    &::GlobalNamespace::CosmeticsShopConsole::OnCosmeticsModeUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27674f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnCosmeticsModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(bool)>(&::GlobalNamespace::CosmeticsShopConsole::SetActive)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2766278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.LoadThoughtBubbles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*)>(&::GlobalNamespace::CosmeticsShopConsole::LoadThoughtBubbles)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x2766330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "LoadThoughtBubbles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.ClearThoughtBubbles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::ClearThoughtBubbles)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27673a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(),
                                                                               "ClearThoughtBubbles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.OnThoughtBubbleHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)(::GlobalNamespace::ThoughtBubble*, int32_t)>(
    &::GlobalNamespace::CosmeticsShopConsole::OnThoughtBubbleHovered)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27676dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnThoughtBubbleHovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole.LoadLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::LoadLayout)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2767508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "LoadLayout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsole._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsole::*)()>(&::GlobalNamespace::CosmeticsShopConsole::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27677dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_poolKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolKey;
}
constexpr ::StringW const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_poolKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolKey;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_poolKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poolKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_hardcodedItemKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hardcodedItemKeys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_hardcodedItemKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hardcodedItemKeys;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_hardcodedItemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hardcodedItemKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*> const&
GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_items(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_hasMultipleItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleItems;
}
constexpr bool const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_hasMultipleItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleItems;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_hasMultipleItems(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasMultipleItems = value;
}
constexpr int32_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_queuedItemIndexToPreview() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedItemIndexToPreview;
}
constexpr int32_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_queuedItemIndexToPreview() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedItemIndexToPreview;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_queuedItemIndexToPreview(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queuedItemIndexToPreview = value;
}
constexpr float_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_queuedItemPreviewSendTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedItemPreviewSendTime;
}
constexpr float_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_queuedItemPreviewSendTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedItemPreviewSendTime;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_queuedItemPreviewSendTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queuedItemPreviewSendTime = value;
}
constexpr int32_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_curPreviewCycleItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPreviewCycleItemIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_curPreviewCycleItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPreviewCycleItemIndex;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_curPreviewCycleItemIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curPreviewCycleItemIndex = value;
}
constexpr bool& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isCyclingPreviews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCyclingPreviews;
}
constexpr bool const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isCyclingPreviews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCyclingPreviews;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_isCyclingPreviews(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCyclingPreviews = value;
}
constexpr float_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_previewCycleStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewCycleStartTime;
}
constexpr float_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_previewCycleStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewCycleStartTime;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_previewCycleStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewCycleStartTime = value;
}
constexpr float_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_nextPreviewCycleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPreviewCycleTime;
}
constexpr float_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_nextPreviewCycleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPreviewCycleTime;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_nextPreviewCycleTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextPreviewCycleTime = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_cosmeticsDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_cosmeticsDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsDisplay;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_cosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticsDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_cosmeticsShopThoughtBubblePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsShopThoughtBubblePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_cosmeticsShopThoughtBubblePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsShopThoughtBubblePrefab;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_cosmeticsShopThoughtBubblePrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticsShopThoughtBubblePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_thoughtBubbleContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubbleContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_thoughtBubbleContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubbleContainer;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_thoughtBubbleContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thoughtBubbleContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>*& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_thoughtBubbles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubbles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>*> const&
GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_thoughtBubbles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thoughtBubbles;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_thoughtBubbles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsShopThoughtBubble>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thoughtBubbles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_activeContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_activeContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutContainer;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_layoutContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layoutContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutPositions;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_layoutPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layoutPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutMaxSupportedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutMaxSupportedCount;
}
constexpr int32_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_layoutMaxSupportedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutMaxSupportedCount;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_layoutMaxSupportedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layoutMaxSupportedCount = value;
}
constexpr bool& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
constexpr bool& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isRegisteredForCosmeticsModeCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForCosmeticsModeCallbacks;
}
constexpr bool const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isRegisteredForCosmeticsModeCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForCosmeticsModeCallbacks;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_isRegisteredForCosmeticsModeCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegisteredForCosmeticsModeCallbacks = value;
}
constexpr bool& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isRegisteredForStoreRotationCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForStoreRotationCallbacks;
}
constexpr bool const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_isRegisteredForStoreRotationCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForStoreRotationCallbacks;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_isRegisteredForStoreRotationCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegisteredForStoreRotationCallbacks = value;
}
constexpr ::GlobalNamespace::CosmeticsStoreInstance*& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_storeInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeInstance;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticsStoreInstance*> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_storeInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeInstance;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_storeInstance(::GlobalNamespace::CosmeticsStoreInstance* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___storeInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_group(::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_indexInGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInGroup;
}
constexpr int32_t const& GlobalNamespace::CosmeticsShopConsole::__cordl_internal_get_indexInGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInGroup;
}
constexpr void GlobalNamespace::CosmeticsShopConsole::__cordl_internal_set_indexInGroup(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexInGroup = value;
}
inline void GlobalNamespace::CosmeticsShopConsole::setStaticF_thoughtBubbleRotation(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "thoughtBubbleRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::CosmeticsShopConsole::getStaticF_thoughtBubbleRotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "thoughtBubbleRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get>();
}
inline void GlobalNamespace::CosmeticsShopConsole::SetGroup(::GlobalNamespace::CosmeticsShopConsoleGroup* group, int32_t indexInGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, indexInGroup);
}
inline void GlobalNamespace::CosmeticsShopConsole::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsole::OnStoreRotationUpdated(::GlobalNamespace::GlobalRotation newStoreRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnStoreRotationUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newStoreRotation);
}
inline void GlobalNamespace::CosmeticsShopConsole::SetItems(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* newItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newItems);
}
inline void GlobalNamespace::CosmeticsShopConsole::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsole::DoPreviewCycle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "DoPreviewCycle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsole::OnReceivePreviewItem(int32_t itemIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnReceivePreviewItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemIndex);
}
inline void GlobalNamespace::CosmeticsShopConsole::PreviewItem(int32_t itemIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "PreviewItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemIndex);
}
inline void GlobalNamespace::CosmeticsShopConsole::PreviewItem(::GlobalNamespace::RotationItem item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "PreviewItem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::CosmeticsShopConsole::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsole::OnCosmeticsModeUpdated(bool newCosmeticsMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnCosmeticsModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCosmeticsMode);
}
inline void GlobalNamespace::CosmeticsShopConsole::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "SetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::CosmeticsShopConsole::LoadThoughtBubbles(::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>* items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "LoadThoughtBubbles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::RotationItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
inline void GlobalNamespace::CosmeticsShopConsole::ClearThoughtBubbles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(),
                                                                             "ClearThoughtBubbles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsole::OnThoughtBubbleHovered(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t itemIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "OnThoughtBubbleHovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ThoughtBubble*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thoughtBubble, itemIndex);
}
inline void GlobalNamespace::CosmeticsShopConsole::LoadLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), "LoadLayout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsShopConsole* GlobalNamespace::CosmeticsShopConsole::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsShopConsole*>());
}
inline void GlobalNamespace::CosmeticsShopConsole::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsole*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsShopConsole::CosmeticsShopConsole() {}
