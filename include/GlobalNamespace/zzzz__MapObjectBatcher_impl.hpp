#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectBatcher_def.hpp"
#include "GlobalNamespace/zzzz__MapManager_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectBatch_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::Start)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3074370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.OnIsCreativeModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)(bool)>(&::GlobalNamespace::MapObjectBatcher::OnIsCreativeModeUpdated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3074784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "OnIsCreativeModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.OnSetLoadedMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)(bool)>(&::GlobalNamespace::MapObjectBatcher::OnSetLoadedMapData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3074a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "OnSetLoadedMapData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.RegisterForBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::MapObjectBatch* (::GlobalNamespace::MapObjectBatcher::*)(::GlobalNamespace::MapObject*, ::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW)>(
        &::GlobalNamespace::MapObjectBatcher::RegisterForBatching)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3074cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "RegisterForBatching", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapManager__MapObjectMaterialCache*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.BakeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::BakeAll)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3074564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "BakeAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.UnbakeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::UnbakeAll)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3074804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "UnbakeAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.DeleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::DeleteAll)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3074aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "DeleteAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.DeleteAllSilent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::DeleteAllSilent)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3074e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "DeleteAllSilent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher.TryCreateBakedMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*, ByRef<::UnityEngine::Mesh*>)>(&::GlobalNamespace::MapObjectBatcher::TryCreateBakedMesh)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x3073564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "TryCreateBakedMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectBatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectBatcher::*)()>(&::GlobalNamespace::MapObjectBatcher::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3075080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>*&
GlobalNamespace::MapObjectBatcher::__cordl_internal_get_batches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batches;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>*> const&
GlobalNamespace::MapObjectBatcher::__cordl_internal_get_batches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batches;
}
constexpr void GlobalNamespace::MapObjectBatcher::__cordl_internal_set_batches(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___batches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MapObjectBatcher::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectBatcher::OnIsCreativeModeUpdated(bool newIsCreativeMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "OnIsCreativeModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreativeMode);
}
inline void GlobalNamespace::MapObjectBatcher::OnSetLoadedMapData(bool newHasLoadedMapData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "OnSetLoadedMapData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasLoadedMapData);
}
inline ::GlobalNamespace::MapObjectBatch* GlobalNamespace::MapObjectBatcher::RegisterForBatching(::GlobalNamespace::MapObject* mapObject,
                                                                                                 ::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache, ::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "RegisterForBatching", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapManager__MapObjectMaterialCache*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapObjectBatch*, false>(this, ___internal_method, mapObject, materialCache, colorKey);
}
inline void GlobalNamespace::MapObjectBatcher::BakeAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "BakeAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectBatcher::UnbakeAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "UnbakeAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectBatcher::DeleteAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "DeleteAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MapObjectBatcher::DeleteAllSilent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "DeleteAllSilent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MapObjectBatcher::TryCreateBakedMesh(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects, ByRef<::UnityEngine::Mesh*> mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), "TryCreateBakedMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mapObjects, mesh);
}
inline ::GlobalNamespace::MapObjectBatcher* GlobalNamespace::MapObjectBatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapObjectBatcher*>());
}
inline void GlobalNamespace::MapObjectBatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectBatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectBatcher::MapObjectBatcher() {}
