#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsPreviewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticZone_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsPreviewAvatar.MoveToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsPreviewAvatar::*)(
    ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>, float_t)>(&::GlobalNamespace::CosmeticsPreviewAvatar::MoveToFit)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x158c5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsPreviewAvatar*>::get(), "MoveToFit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsPreviewAvatar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsPreviewAvatar::*)()>(&::GlobalNamespace::CosmeticsPreviewAvatar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158cc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsPreviewAvatar*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*>& GlobalNamespace::CosmeticsPreviewAvatar::__cordl_internal_get_cosmeticsZones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsZones;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> const&
GlobalNamespace::CosmeticsPreviewAvatar::__cordl_internal_get_cosmeticsZones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsZones;
}
constexpr void
GlobalNamespace::CosmeticsPreviewAvatar::__cordl_internal_set_cosmeticsZones(::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticsZones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CosmeticsPreviewAvatar::MoveToFit(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> spannedZones, float_t boundingRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsPreviewAvatar*>::get(), "MoveToFit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spannedZones, boundingRadius);
}
inline ::GlobalNamespace::CosmeticsPreviewAvatar* GlobalNamespace::CosmeticsPreviewAvatar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsPreviewAvatar*>());
}
inline void GlobalNamespace::CosmeticsPreviewAvatar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsPreviewAvatar*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsPreviewAvatar::CosmeticsPreviewAvatar() {}
