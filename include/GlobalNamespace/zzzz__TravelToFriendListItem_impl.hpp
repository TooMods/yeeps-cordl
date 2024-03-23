#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TravelToFriendListItem_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAppearanceManager_def.hpp"
#include "GlobalNamespace/zzzz__SimpleButtonController_def.hpp"
#include "GlobalNamespace/zzzz__TravelToFriendListItem_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem__OnSelected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem__OnSelected::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__TravelToFriendListItem__OnSelected::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xf264ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem__OnSelected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem__OnSelected::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__TravelToFriendListItem__OnSelected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf26c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem__OnSelected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__TravelToFriendListItem__OnSelected::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__TravelToFriendListItem__OnSelected::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf26c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem__OnSelected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem__OnSelected::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__TravelToFriendListItem__OnSelected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf26c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__TravelToFriendListItem__OnSelected* GlobalNamespace::__TravelToFriendListItem__OnSelected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>(object, method));
}
inline void GlobalNamespace::__TravelToFriendListItem__OnSelected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__TravelToFriendListItem__OnSelected::Invoke(::StringW accountID, ::StringW displayName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, displayName);
}
inline ::System::IAsyncResult* GlobalNamespace::__TravelToFriendListItem__OnSelected::BeginInvoke(::StringW accountID, ::StringW displayName, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, accountID, displayName, callback, object);
}
inline void GlobalNamespace::__TravelToFriendListItem__OnSelected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TravelToFriendListItem__OnSelected::__TravelToFriendListItem__OnSelected() {}
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::*)()>(
    &::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0._Initialize_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_Initialize_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xf26c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), "<Initialize>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0._Initialize_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::*)(::StringW)>(
    &::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_Initialize_b__1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf26d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), "<Initialize>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TravelToFriendListItem>& GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TravelToFriendListItem> const& GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TravelToFriendListItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_get_curFetchPlayerApperanceAccountID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFetchPlayerApperanceAccountID;
}
constexpr ::StringW const& GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_get_curFetchPlayerApperanceAccountID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFetchPlayerApperanceAccountID;
}
constexpr void GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__cordl_internal_set_curFetchPlayerApperanceAccountID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curFetchPlayerApperanceAccountID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0* GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>());
}
inline void GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_Initialize_b__0(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), "<Initialize>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAppearance);
}
inline void GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::_Initialize_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*>::get(), "<Initialize>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0::__TravelToFriendListItem____c__DisplayClass22_0() {}
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.get_accountID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::TravelToFriendListItem::*)()>(
    &::GlobalNamespace::TravelToFriendListItem::get_accountID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                               "get_accountID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.set_accountID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(::StringW)>(
    &::GlobalNamespace::TravelToFriendListItem::set_accountID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_accountID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.get_isSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TravelToFriendListItem::*)()>(&::GlobalNamespace::TravelToFriendListItem::get_isSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                               "get_isSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.set_isSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(bool)>(
    &::GlobalNamespace::TravelToFriendListItem::set_isSelected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf26b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_isSelected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.get_isLocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TravelToFriendListItem::*)()>(&::GlobalNamespace::TravelToFriendListItem::get_isLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                               "get_isLocked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.set_isLocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(bool)>(
    &::GlobalNamespace::TravelToFriendListItem::set_isLocked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf26b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_isLocked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(::StringW, ::GlobalNamespace::__TravelToFriendListItem__OnSelected*)>(&::GlobalNamespace::TravelToFriendListItem::Initialize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xf26584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.OnSelectButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)()>(
    &::GlobalNamespace::TravelToFriendListItem::OnSelectButtonPressed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf26ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                               "OnSelectButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.SetIsSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(bool)>(
    &::GlobalNamespace::TravelToFriendListItem::SetIsSelected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf26730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "SetIsSelected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.SetIsLocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)(bool)>(&::GlobalNamespace::TravelToFriendListItem::SetIsLocked)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf26bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "SetIsLocked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)()>(&::GlobalNamespace::TravelToFriendListItem::DestroySelf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf26210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TravelToFriendListItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TravelToFriendListItem::*)()>(&::GlobalNamespace::TravelToFriendListItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__accountID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accountID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__accountID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accountID_k__BackingField;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set__accountID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____accountID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNameText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNameText;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundImage;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_selectButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_selectButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectButton;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_selectButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_selectedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_selectedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedBackgroundColor;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_selectedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_unselectedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unselectedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_unselectedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unselectedBackgroundColor;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_unselectedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unselectedBackgroundColor = value;
}
constexpr ::GlobalNamespace::__TravelToFriendListItem__OnSelected*& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_onSelectedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TravelToFriendListItem__OnSelected*> const&
GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_onSelectedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSelectedCallback;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_onSelectedCallback(::GlobalNamespace::__TravelToFriendListItem__OnSelected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSelectedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__isSelected_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSelected_k__BackingField;
}
constexpr bool const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__isSelected_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSelected_k__BackingField;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set__isSelected_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSelected_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__isLocked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLocked_k__BackingField;
}
constexpr bool const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get__isLocked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLocked_k__BackingField;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set__isLocked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLocked_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_fetchPlayerApperanceAccountID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchPlayerApperanceAccountID;
}
constexpr ::StringW const& GlobalNamespace::TravelToFriendListItem::__cordl_internal_get_fetchPlayerApperanceAccountID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchPlayerApperanceAccountID;
}
constexpr void GlobalNamespace::TravelToFriendListItem::__cordl_internal_set_fetchPlayerApperanceAccountID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fetchPlayerApperanceAccountID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::TravelToFriendListItem::get_accountID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "get_accountID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::TravelToFriendListItem::set_accountID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_accountID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TravelToFriendListItem::get_isSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                             "get_isSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::TravelToFriendListItem::set_isSelected(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_isSelected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TravelToFriendListItem::get_isLocked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "get_isLocked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::TravelToFriendListItem::set_isLocked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "set_isLocked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TravelToFriendListItem::Initialize(::StringW accountID, ::GlobalNamespace::__TravelToFriendListItem__OnSelected* onSelected) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TravelToFriendListItem__OnSelected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, onSelected);
}
inline void GlobalNamespace::TravelToFriendListItem::OnSelectButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(),
                                                                             "OnSelectButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TravelToFriendListItem::SetIsSelected(bool newIsSelected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "SetIsSelected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsSelected);
}
inline void GlobalNamespace::TravelToFriendListItem::SetIsLocked(bool newIsLocked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "SetIsLocked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLocked);
}
inline void GlobalNamespace::TravelToFriendListItem::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TravelToFriendListItem* GlobalNamespace::TravelToFriendListItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TravelToFriendListItem*>());
}
inline void GlobalNamespace::TravelToFriendListItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TravelToFriendListItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TravelToFriendListItem::TravelToFriendListItem() {}
