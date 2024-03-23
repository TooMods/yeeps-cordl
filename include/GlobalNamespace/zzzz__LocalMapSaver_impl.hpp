#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__LocalMapSaver_def.hpp"
#include "GlobalNamespace/zzzz__ButtonController_def.hpp"
#include "GlobalNamespace/zzzz__LocalMapSaver_def.hpp"
#include "GlobalNamespace/zzzz__MapSyncData_def.hpp"
#include "GlobalNamespace/zzzz__RoomDatabase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x154a940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0._LoadMap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::*)(bool)>(
    &::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::_LoadMap_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x154ac8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*>::get(), "<LoadMap>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalMapSaver>& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LocalMapSaver> const& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalMapSaver> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MapSyncData*& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get_mapSyncData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapSyncData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get_mapSyncData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapSyncData;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_set_mapSyncData(::GlobalNamespace::MapSyncData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapSyncData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get_floorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floorDepth;
}
constexpr int32_t const& GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_get_floorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floorDepth;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__cordl_internal_set_floorDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___floorDepth = value;
}
inline ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0* GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*>());
}
inline void GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::_LoadMap_b__0(bool approved) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*>::get(), "<LoadMap>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, approved);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0::__LocalMapSaver____c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x154ac5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0._ExecuteLoadMap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::_ExecuteLoadMap_b__0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x154acbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*>::get(), "<ExecuteLoadMap>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_floorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floorDepth;
}
constexpr int32_t const& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_floorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floorDepth;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_set_floorDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___floorDepth = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalMapSaver>& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LocalMapSaver> const& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalMapSaver> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MapSyncData*& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_mapSyncData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapSyncData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_mapSyncData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapSyncData;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_set_mapSyncData(::GlobalNamespace::MapSyncData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapSyncData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_roomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr ::StringW const& GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_get_roomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__cordl_internal_set_roomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0* GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*>());
}
inline void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::_ExecuteLoadMap_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*>::get(),
                                                                             "<ExecuteLoadMap>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0::__LocalMapSaver____c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c::*)()>(&::GlobalNamespace::__LocalMapSaver____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x154aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalMapSaver____c._ExecuteLoadMap_b__20_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalMapSaver____c::*)(::StringW)>(
    &::GlobalNamespace::__LocalMapSaver____c::_ExecuteLoadMap_b__20_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x154aee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get(), "<ExecuteLoadMap>b__20_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LocalMapSaver____c::setStaticF___9(::GlobalNamespace::__LocalMapSaver____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LocalMapSaver____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get>(
      std::forward<::GlobalNamespace::__LocalMapSaver____c*>(value));
}
inline ::GlobalNamespace::__LocalMapSaver____c* GlobalNamespace::__LocalMapSaver____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LocalMapSaver____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get>();
}
inline void GlobalNamespace::__LocalMapSaver____c::setStaticF___9__20_1(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__20_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnFailure*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnFailure* GlobalNamespace::__LocalMapSaver____c::getStaticF___9__20_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__20_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get>();
}
inline ::GlobalNamespace::__LocalMapSaver____c* GlobalNamespace::__LocalMapSaver____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalMapSaver____c*>());
}
inline void GlobalNamespace::__LocalMapSaver____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalMapSaver____c::_ExecuteLoadMap_b__20_1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalMapSaver____c*>::get(), "<ExecuteLoadMap>b__20_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalMapSaver____c::__LocalMapSaver____c() {}
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1549994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.TrySaveActiveWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::TrySaveActiveWorld)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1549a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "TrySaveActiveWorld",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.TryCopyActiveWorldToClipboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::TryCopyActiveWorldToClipboard)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1549da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "TryCopyActiveWorldToClipboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.ClearSavedWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::ClearSavedWorld)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x154a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "ClearSavedWorld",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.TryLoadWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::TryLoadWorld)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x154a21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "TryLoadWorld",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.TryLoadMapFromClipboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::TryLoadMapFromClipboard)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x154a66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "TryLoadMapFromClipboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.LoadMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)(::GlobalNamespace::MapSyncData*, int32_t)>(
    &::GlobalNamespace::LocalMapSaver::LoadMap)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x154a378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "LoadMap", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.ExecuteLoadMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)(::GlobalNamespace::MapSyncData*, int32_t)>(
    &::GlobalNamespace::LocalMapSaver::ExecuteLoadMap)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x154a948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "ExecuteLoadMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.DisplayStatusError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)(::StringW)>(&::GlobalNamespace::LocalMapSaver::DisplayStatusError)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1549cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "DisplayStatusError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnSaveWorldButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::OnSaveWorldButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x154ac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "OnSaveWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnCopyWorldToClipboardButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(
    &::GlobalNamespace::LocalMapSaver::OnCopyWorldToClipboardButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x154ac68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "OnCopyWorldToClipboardButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnLoadWorldButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::OnLoadWorldButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x154ac6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "OnLoadWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnPasteWorldFromClipboardButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(
    &::GlobalNamespace::LocalMapSaver::OnPasteWorldFromClipboardButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x154ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "OnPasteWorldFromClipboardButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnClearSaveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::OnClearSaveButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x154ac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "OnClearSaveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.OnLoadEmptyButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::OnLoadEmptyButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x154ac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                               "OnLoadEmptyButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver.RefreshPasteButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::RefreshPasteButton)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1549998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "RefreshPasteButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMapSaver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalMapSaver::*)()>(&::GlobalNamespace::LocalMapSaver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x154ac84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LocalMapSaver::__cordl_internal_get_copySoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copySoundKey;
}
constexpr ::StringW const& GlobalNamespace::LocalMapSaver::__cordl_internal_get_copySoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copySoundKey;
}
constexpr void GlobalNamespace::LocalMapSaver::__cordl_internal_set_copySoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___copySoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LocalMapSaver::__cordl_internal_get_pasteSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pasteSoundKey;
}
constexpr ::StringW const& GlobalNamespace::LocalMapSaver::__cordl_internal_get_pasteSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pasteSoundKey;
}
constexpr void GlobalNamespace::LocalMapSaver::__cordl_internal_set_pasteSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pasteSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ButtonController>& GlobalNamespace::LocalMapSaver::__cordl_internal_get_pasteButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pasteButton;
}
constexpr ::UnityW<::GlobalNamespace::ButtonController> const& GlobalNamespace::LocalMapSaver::__cordl_internal_get_pasteButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pasteButton;
}
constexpr void GlobalNamespace::LocalMapSaver::__cordl_internal_set_pasteButton(::UnityW<::GlobalNamespace::ButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pasteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LocalMapSaver::setStaticF_mapClipboard(::GlobalNamespace::MapSyncData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MapSyncData*, "mapClipboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>(
      std::forward<::GlobalNamespace::MapSyncData*>(value));
}
inline ::GlobalNamespace::MapSyncData* GlobalNamespace::LocalMapSaver::getStaticF_mapClipboard() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MapSyncData*, "mapClipboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>();
}
inline void GlobalNamespace::LocalMapSaver::setStaticF_mapClipboardFloorDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mapClipboardFloorDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LocalMapSaver::getStaticF_mapClipboardFloorDepth() {
  return ::cordl_internals::getStaticField<int32_t, "mapClipboardFloorDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>();
}
inline void GlobalNamespace::LocalMapSaver::setStaticF_mapClipboardDimensions(::UnityEngine::Vector3Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3Int, "mapClipboardDimensions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>(
      std::forward<::UnityEngine::Vector3Int>(value));
}
inline ::UnityEngine::Vector3Int GlobalNamespace::LocalMapSaver::getStaticF_mapClipboardDimensions() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3Int, "mapClipboardDimensions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get>();
}
inline void GlobalNamespace::LocalMapSaver::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::TrySaveActiveWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "TrySaveActiveWorld",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::TryCopyActiveWorldToClipboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "TryCopyActiveWorldToClipboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::ClearSavedWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "ClearSavedWorld",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::TryLoadWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "TryLoadWorld",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::TryLoadMapFromClipboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "TryLoadMapFromClipboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::LoadMap(::GlobalNamespace::MapSyncData* mapSyncData, int32_t floorDepth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "LoadMap", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapSyncData, floorDepth);
}
inline void GlobalNamespace::LocalMapSaver::ExecuteLoadMap(::GlobalNamespace::MapSyncData* mapSyncData, int32_t floorDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "ExecuteLoadMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapSyncData, floorDepth);
}
inline void GlobalNamespace::LocalMapSaver::DisplayStatusError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "DisplayStatusError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::LocalMapSaver::OnSaveWorldButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "OnSaveWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::OnCopyWorldToClipboardButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "OnCopyWorldToClipboardButtonPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::OnLoadWorldButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "OnLoadWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::OnPasteWorldFromClipboardButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "OnPasteWorldFromClipboardButtonPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::OnClearSaveButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "OnClearSaveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::OnLoadEmptyButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(),
                                                                             "OnLoadEmptyButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalMapSaver::RefreshPasteButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), "RefreshPasteButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalMapSaver* GlobalNamespace::LocalMapSaver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalMapSaver*>());
}
inline void GlobalNamespace::LocalMapSaver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMapSaver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalMapSaver::LocalMapSaver() {}
