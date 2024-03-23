#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectRestrictions_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectRestrictionData_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectRestrictions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "mapObjectKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "canRemoveLastInstance", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw::__MapObjectRestrictions__MapObjectRestrictionDataRaw(::StringW mapObjectKey, bool canRemoveLastInstance,
                                                                                                                                        int32_t maxCount) noexcept {
  this->mapObjectKey = mapObjectKey;
  this->canRemoveLastInstance = canRemoveLastInstance;
  this->maxCount = maxCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw::__MapObjectRestrictions__MapObjectRestrictionDataRaw() {}
//  Writing Method size for method: ::GlobalNamespace::MapObjectRestrictions.CreateRestrictionDataDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::MapObjectRestrictions::CreateRestrictionDataDictionary)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3075b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(), "CreateRestrictionDataDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectRestrictions.TryGetMapObjectRestrictionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::MapObjectRestrictionData*>)>(
    &::GlobalNamespace::MapObjectRestrictions::TryGetMapObjectRestrictionData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3075cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(), "TryGetMapObjectRestrictionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObjectRestrictionData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectRestrictions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectRestrictions::*)()>(&::GlobalNamespace::MapObjectRestrictions::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3075d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*>&
GlobalNamespace::MapObjectRestrictions::__cordl_internal_get_mapObjectRestrictionDatasRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectRestrictionDatasRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> const&
GlobalNamespace::MapObjectRestrictions::__cordl_internal_get_mapObjectRestrictionDatasRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectRestrictionDatasRaw;
}
constexpr void GlobalNamespace::MapObjectRestrictions::__cordl_internal_set_mapObjectRestrictionDatasRaw(
    ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapObjectRestrictionDatasRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MapObjectRestrictions::setStaticF_mapObjectRestrictionDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>*, "mapObjectRestrictionDatas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>* GlobalNamespace::MapObjectRestrictions::getStaticF_mapObjectRestrictionDatas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>*, "mapObjectRestrictionDatas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get>();
}
inline void GlobalNamespace::MapObjectRestrictions::CreateRestrictionDataDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(),
                                                                             "CreateRestrictionDataDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::MapObjectRestrictions::TryGetMapObjectRestrictionData(::StringW mapObjectKey, ByRef<::GlobalNamespace::MapObjectRestrictionData*> mapObjectRestrictionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(), "TryGetMapObjectRestrictionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObjectRestrictionData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mapObjectKey, mapObjectRestrictionData);
}
inline ::GlobalNamespace::MapObjectRestrictions* GlobalNamespace::MapObjectRestrictions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapObjectRestrictions*>());
}
inline void GlobalNamespace::MapObjectRestrictions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRestrictions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectRestrictions::MapObjectRestrictions() {}
