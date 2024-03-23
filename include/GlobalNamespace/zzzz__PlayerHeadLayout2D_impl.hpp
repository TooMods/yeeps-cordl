#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadLayout2D_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadLayout2D_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadLayoutItem2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e05c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::*)(::StringW)>(
    &::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e05ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e05cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e05d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>(object, method));
}
inline void GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::Invoke(::StringW userID) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::BeginInvoke(::StringW userID, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userID, callback, object);
}
inline void GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected::__PlayerHeadLayout2D__OnPlayerHeadSelected() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e058a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0._Display_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::_Display_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e05d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*>::get(), "<Display>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_get_userID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr ::StringW const& GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_get_userID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr void GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_set_userID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D>& GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D> const& GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerHeadLayout2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0* GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::_Display_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0*>::get(), "<Display>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerHeadLayout2D____c__DisplayClass6_0::__PlayerHeadLayout2D____c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayout2D.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PlayerHeadLayout2D::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerData>*)>(&::GlobalNamespace::PlayerHeadLayout2D::Display)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x2e05344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayout2D.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayout2D::*)()>(&::GlobalNamespace::PlayerHeadLayout2D::Clear)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2e0594c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayout2D.SelectHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayout2D::*)(::StringW)>(&::GlobalNamespace::PlayerHeadLayout2D::SelectHead)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2e05acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "SelectHead", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayout2D.OnClearButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayout2D::*)()>(&::GlobalNamespace::PlayerHeadLayout2D::OnClearButtonPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e05b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(),
                                                                               "OnClearButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayout2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayout2D::*)()>(&::GlobalNamespace::PlayerHeadLayout2D::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e05b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_playerHeadLayoutItemPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeadLayoutItemPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_playerHeadLayoutItemPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeadLayoutItemPrefab;
}
constexpr void GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_set_playerHeadLayoutItemPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerHeadLayoutItemPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_layoutContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_layoutContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutContainer;
}
constexpr void GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_set_layoutContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layoutContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_clearButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearButton;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_clearButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearButton;
}
constexpr void GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_set_clearButton(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clearButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>*& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_playerHeadLayoutItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeadLayoutItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>*> const&
GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_playerHeadLayoutItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeadLayoutItems;
}
constexpr void GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_set_playerHeadLayoutItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerHeadLayoutItem2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerHeadLayoutItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*& GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_onPlayerHeadSelectedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerHeadSelectedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected*> const&
GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_get_onPlayerHeadSelectedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerHeadSelectedCallbacks;
}
constexpr void GlobalNamespace::PlayerHeadLayout2D::__cordl_internal_set_onPlayerHeadSelectedCallbacks(::GlobalNamespace::__PlayerHeadLayout2D__OnPlayerHeadSelected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerHeadSelectedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerHeadLayout2D::Display(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerData>* playerDatas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerDatas);
}
inline void GlobalNamespace::PlayerHeadLayout2D::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeadLayout2D::SelectHead(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), "SelectHead", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline void GlobalNamespace::PlayerHeadLayout2D::OnClearButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(),
                                                                             "OnClearButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeadLayout2D* GlobalNamespace::PlayerHeadLayout2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerHeadLayout2D*>());
}
inline void GlobalNamespace::PlayerHeadLayout2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayout2D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeadLayout2D::PlayerHeadLayout2D() {}
