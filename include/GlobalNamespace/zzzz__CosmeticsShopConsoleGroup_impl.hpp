#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopConsoleGroup_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsShopConsole_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsoleGroup.TryGetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::CosmeticsShopConsoleGroup*>)>(
    &::GlobalNamespace::CosmeticsShopConsoleGroup::TryGetGroup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x15464ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "TryGetGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticsShopConsoleGroup*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsoleGroup.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsoleGroup::*)()>(&::GlobalNamespace::CosmeticsShopConsoleGroup::Start)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x15465c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsoleGroup.SendPreviewItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsoleGroup::*)(int32_t, int32_t)>(
    &::GlobalNamespace::CosmeticsShopConsoleGroup::SendPreviewItem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1546794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "SendPreviewItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsoleGroup.OnReceivePreviewBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsoleGroup::*)(int32_t, int32_t)>(
    &::GlobalNamespace::CosmeticsShopConsoleGroup::OnReceivePreviewBundle)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1546894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "OnReceivePreviewBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsShopConsoleGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsShopConsoleGroup::*)()>(&::GlobalNamespace::CosmeticsShopConsoleGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15469a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_get_groupKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupKey;
}
constexpr ::StringW const& GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_get_groupKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupKey;
}
constexpr void GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_set_groupKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*>&
GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_get_consoles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___consoles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> const&
GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_get_consoles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___consoles;
}
constexpr void GlobalNamespace::CosmeticsShopConsoleGroup::__cordl_internal_set_consoles(
    ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsShopConsole>, ::Array<::UnityW<::GlobalNamespace::CosmeticsShopConsole>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___consoles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CosmeticsShopConsoleGroup::setStaticF_groups(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>*, "groups",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>* GlobalNamespace::CosmeticsShopConsoleGroup::getStaticF_groups() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::CosmeticsShopConsoleGroup>>*, "groups",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get>();
}
inline bool GlobalNamespace::CosmeticsShopConsoleGroup::TryGetGroup(::StringW groupKey, ByRef<::GlobalNamespace::CosmeticsShopConsoleGroup*> group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "TryGetGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticsShopConsoleGroup*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, groupKey, group);
}
inline void GlobalNamespace::CosmeticsShopConsoleGroup::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsShopConsoleGroup::SendPreviewItem(int32_t indexInGroup, int32_t bundleIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "SendPreviewItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexInGroup, bundleIndex);
}
inline void GlobalNamespace::CosmeticsShopConsoleGroup::OnReceivePreviewBundle(int32_t indexInGroup, int32_t bundleIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), "OnReceivePreviewBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexInGroup, bundleIndex);
}
inline ::GlobalNamespace::CosmeticsShopConsoleGroup* GlobalNamespace::CosmeticsShopConsoleGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsShopConsoleGroup*>());
}
inline void GlobalNamespace::CosmeticsShopConsoleGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsShopConsoleGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsShopConsoleGroup::CosmeticsShopConsoleGroup() {}
