#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomsEntranceBlocker_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__PriceTag_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomsEntranceBlocker_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf1e728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0._TryPurchase_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::*)(int32_t)>(
    &::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_TryPurchase_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf1e958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), "<TryPurchase>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0._TryPurchase_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::*)(::StringW)>(
    &::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_TryPurchase_b__1)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xf1e9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), "<TryPurchase>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0* GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>());
}
inline void GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_TryPurchase_b__0(int32_t cost) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), "<TryPurchase>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cost);
}
inline void GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::_TryPurchase_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0*>::get(), "<TryPurchase>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0::__PrivateRoomsEntranceBlocker____c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::OnEnable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xf1dce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::OnDisable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf1df3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.OnPrivateRoomTargetAccountIDUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(::StringW)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::OnPrivateRoomTargetAccountIDUpdated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf1e0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "OnPrivateRoomTargetAccountIDUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.OnHasUnlockedPrivateRoomsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(bool)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::OnHasUnlockedPrivateRoomsUpdated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf1e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "OnHasUnlockedPrivateRoomsUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.RefreshActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::RefreshActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf1df1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                               "RefreshActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.SetIsPlayerWithinHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(bool)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::SetIsPlayerWithinHallway)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf1e358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetIsPlayerWithinHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(bool)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::SetActive)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xf1e16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.RefreshHasPriceTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::RefreshHasPriceTag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf1e370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                               "RefreshHasPriceTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.SetHasPriceTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(bool)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::SetHasPriceTag)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xf1e390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetHasPriceTag",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker.TryPurchase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::TryPurchase)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xf1e5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                               "TryPurchase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)()>(&::GlobalNamespace::PrivateRoomsEntranceBlocker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf1e730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker._SetActive_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(int32_t)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::_SetActive_b__17_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf1e740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "<SetActive>b__17_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomsEntranceBlocker._SetActive_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomsEntranceBlocker::*)(::StringW)>(
    &::GlobalNamespace::PrivateRoomsEntranceBlocker::_SetActive_b__17_1)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xf1e7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "<SetActive>b__17_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_blockingCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_blockingCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingCollider;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_blockingCollider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blockingCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_activeContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_activeContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_playerWithinHallwayContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerWithinHallwayContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_playerWithinHallwayContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerWithinHallwayContainer;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_playerWithinHallwayContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerWithinHallwayContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_priceTagAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_priceTagAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagAnchor;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_priceTagAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___priceTagAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PriceTag>& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_curPriceTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPriceTag;
}
constexpr ::UnityW<::GlobalNamespace::PriceTag> const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_curPriceTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPriceTag;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curPriceTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_price() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___price;
}
constexpr int32_t const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_price() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___price;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_price(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___price = value;
}
constexpr bool& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isFetchingPrice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFetchingPrice;
}
constexpr bool const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isFetchingPrice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFetchingPrice;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_isFetchingPrice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFetchingPrice = value;
}
constexpr bool& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isTargetingSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTargetingSelf;
}
constexpr bool const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isTargetingSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTargetingSelf;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_isTargetingSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTargetingSelf = value;
}
constexpr bool& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_hasUnlockedPrivateRooms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasUnlockedPrivateRooms;
}
constexpr bool const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_hasUnlockedPrivateRooms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasUnlockedPrivateRooms;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_hasUnlockedPrivateRooms(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasUnlockedPrivateRooms = value;
}
constexpr bool& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::PrivateRoomsEntranceBlocker::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::OnPrivateRoomTargetAccountIDUpdated(::StringW newAccountID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "OnPrivateRoomTargetAccountIDUpdated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAccountID);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::OnHasUnlockedPrivateRoomsUpdated(bool newHasUnlockedPrivateRooms) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "OnHasUnlockedPrivateRoomsUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasUnlockedPrivateRooms);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::RefreshActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                             "RefreshActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::SetIsPlayerWithinHallway(bool newIsPlayerWithinHallway) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetIsPlayerWithinHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsPlayerWithinHallway);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::RefreshHasPriceTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                             "RefreshHasPriceTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::SetHasPriceTag(bool newHasPriceTag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "SetHasPriceTag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasPriceTag);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::TryPurchase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(),
                                                                             "TryPurchase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivateRoomsEntranceBlocker* GlobalNamespace::PrivateRoomsEntranceBlocker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivateRoomsEntranceBlocker*>());
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::_SetActive_b__17_0(int32_t newPrice) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "<SetActive>b__17_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPrice);
}
inline void GlobalNamespace::PrivateRoomsEntranceBlocker::_SetActive_b__17_1(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomsEntranceBlocker*>::get(), "<SetActive>b__17_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivateRoomsEntranceBlocker::PrivateRoomsEntranceBlocker() {}
