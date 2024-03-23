#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MapSyncDataCompressed_def.hpp"
#include "GlobalNamespace/zzzz__MapSyncData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapSyncDataCompressed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapSyncDataCompressed::*)(::GlobalNamespace::MapSyncData*)>(
    &::GlobalNamespace::MapSyncDataCompressed::_ctor)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x2f702d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapSyncDataCompressed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapSyncDataCompressed.TryDecompress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MapSyncDataCompressed::*)(ByRef<::GlobalNamespace::MapSyncData*>)>(
    &::GlobalNamespace::MapSyncDataCompressed::TryDecompress)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2f6ff24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapSyncDataCompressed*>::get(), "TryDecompress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapSyncData*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_mapObjectByteStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectByteStream;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_mapObjectByteStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectByteStream;
}
constexpr void GlobalNamespace::MapSyncDataCompressed::__cordl_internal_set_mapObjectByteStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapObjectByteStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void GlobalNamespace::MapSyncDataCompressed::__cordl_internal_set_keys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_colorKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorKeys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_colorKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorKeys;
}
constexpr void GlobalNamespace::MapSyncDataCompressed::__cordl_internal_set_colorKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_ownerUserIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerUserIDs;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::MapSyncDataCompressed::__cordl_internal_get_ownerUserIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerUserIDs;
}
constexpr void GlobalNamespace::MapSyncDataCompressed::__cordl_internal_set_ownerUserIDs(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownerUserIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MapSyncDataCompressed* GlobalNamespace::MapSyncDataCompressed::New_ctor(::GlobalNamespace::MapSyncData* mapSyncData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapSyncDataCompressed*>(mapSyncData));
}
inline void GlobalNamespace::MapSyncDataCompressed::_ctor(::GlobalNamespace::MapSyncData* mapSyncData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapSyncDataCompressed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapSyncData);
}
inline bool GlobalNamespace::MapSyncDataCompressed::TryDecompress(ByRef<::GlobalNamespace::MapSyncData*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapSyncDataCompressed*>::get(), "TryDecompress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapSyncData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapSyncDataCompressed::MapSyncDataCompressed() {}
