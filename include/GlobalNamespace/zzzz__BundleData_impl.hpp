#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BundleData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BundleData::*)(
    ::StringW, ::StringW, ::System::DateTime, ::System::DateTime, ::ArrayW<::StringW, ::Array<::StringW>*>, int32_t, int32_t)>(&::GlobalNamespace::BundleData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x15959e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BundleData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleData.GetDollarCostString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BundleData::*)()>(&::GlobalNamespace::BundleData::GetDollarCostString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1595a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BundleData*>::get(), "GetDollarCostString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BundleData::__cordl_internal_get_bundleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bundleKey;
}
constexpr ::StringW const& GlobalNamespace::BundleData::__cordl_internal_get_bundleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bundleKey;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_bundleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bundleKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BundleData::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::BundleData::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& GlobalNamespace::BundleData::__cordl_internal_get_startTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startTimestamp;
}
constexpr ::System::DateTime const& GlobalNamespace::BundleData::__cordl_internal_get_startTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startTimestamp;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_startTimestamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startTimestamp = value;
}
constexpr ::System::DateTime& GlobalNamespace::BundleData::__cordl_internal_get_expireTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expireTimestamp;
}
constexpr ::System::DateTime const& GlobalNamespace::BundleData::__cordl_internal_get_expireTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expireTimestamp;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_expireTimestamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expireTimestamp = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::BundleData::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::BundleData::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_items(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BundleData::__cordl_internal_get_currencyAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmount;
}
constexpr int32_t const& GlobalNamespace::BundleData::__cordl_internal_get_currencyAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmount;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_currencyAmount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyAmount = value;
}
constexpr int32_t& GlobalNamespace::BundleData::__cordl_internal_get_centCost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centCost;
}
constexpr int32_t const& GlobalNamespace::BundleData::__cordl_internal_get_centCost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centCost;
}
constexpr void GlobalNamespace::BundleData::__cordl_internal_set_centCost(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___centCost = value;
}
inline ::GlobalNamespace::BundleData* GlobalNamespace::BundleData::New_ctor(::StringW bundleKey, ::StringW displayName, ::System::DateTime startTimestamp, ::System::DateTime expireTimestamp,
                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> items, int32_t currencyAmount, int32_t centCost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BundleData*>(bundleKey, displayName, startTimestamp, expireTimestamp, items, currencyAmount, centCost));
}
inline void GlobalNamespace::BundleData::_ctor(::StringW bundleKey, ::StringW displayName, ::System::DateTime startTimestamp, ::System::DateTime expireTimestamp,
                                               ::ArrayW<::StringW, ::Array<::StringW>*> items, int32_t currencyAmount, int32_t centCost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BundleData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundleKey, displayName, startTimestamp, expireTimestamp, items, currencyAmount, centCost);
}
inline ::StringW GlobalNamespace::BundleData::GetDollarCostString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BundleData*>::get(), "GetDollarCostString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BundleData::BundleData() {}
