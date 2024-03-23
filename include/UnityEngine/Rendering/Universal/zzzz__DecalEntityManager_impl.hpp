#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityIndexer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalProjector_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "entityChunk", ty: "::UnityEngine::Rendering::Universal::DecalEntityChunk*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cachedChunk", ty:
// "::UnityEngine::Rendering::Universal::DecalCachedChunk*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "culledChunk", ty: "::UnityEngine::Rendering::Universal::DecalCulledChunk*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "drawCallChunk", ty: "::UnityEngine::Rendering::Universal::DecalDrawCallChunk*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "previousChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks::__DecalEntityManager__CombinedChunks(::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk,
                                                                                                                          ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk,
                                                                                                                          ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk,
                                                                                                                          ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk,
                                                                                                                          int32_t previousChunkIndex, bool valid) noexcept {
  this->entityChunk = entityChunk;
  this->cachedChunk = cachedChunk;
  this->culledChunk = culledChunk;
  this->drawCallChunk = drawCallChunk;
  this->previousChunkIndex = previousChunkIndex;
  this->valid = valid;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks::__DecalEntityManager__CombinedChunks() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DecalEntityManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__DecalEntityManager____c::*)()>(
    &::UnityEngine::Rendering::Universal::__DecalEntityManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e16808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DecalEntityManager____c._Update_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__DecalEntityManager____c::*)(
    ::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks, ::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks)>(
    &::UnityEngine::Rendering::Universal::__DecalEntityManager____c::_Update_b__25_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e16810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get(), "<Update>b__25_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__DecalEntityManager____c::setStaticF___9(::UnityEngine::Rendering::Universal::__DecalEntityManager____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__DecalEntityManager____c* UnityEngine::Rendering::Universal::__DecalEntityManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::__DecalEntityManager____c::setStaticF___9__25_0(::System::Comparison_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>* UnityEngine::Rendering::Universal::__DecalEntityManager____c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__DecalEntityManager____c* UnityEngine::Rendering::Universal::__DecalEntityManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>());
}
inline void UnityEngine::Rendering::Universal::__DecalEntityManager____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::__DecalEntityManager____c::_Update_b__25_0(::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks a,
                                                                                             ::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalEntityManager____c*>::get(), "<Update>b__25_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DecalEntityManager____c::__DecalEntityManager____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.get_errorMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::get_errorMaterial)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e13fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                               "get_errorMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.get_decalProjectorMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::Universal::DecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::get_decalProjectorMesh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e14088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                               "get_decalProjectorMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2e14140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e14438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.CreateDecalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalEntity (::UnityEngine::Rendering::Universal::DecalEntityManager::*)(
    ::UnityEngine::Rendering::Universal::DecalProjector*)>(&::UnityEngine::Rendering::Universal::DecalEntityManager::CreateDecalEntity)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x2e14454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "CreateDecalEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalProjector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.CreateChunkIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalEntityManager::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::CreateChunkIndex)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x2e149d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "CreateChunkIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.UpdateDecalEntityData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityManager::*)(
    ::UnityEngine::Rendering::Universal::DecalEntity, ::UnityEngine::Rendering::Universal::DecalProjector*)>(&::UnityEngine::Rendering::Universal::DecalEntityManager::UpdateDecalEntityData)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2e14ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "UpdateDecalEntityData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalProjector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.DestroyDecalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::DestroyDecalEntity)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2e1525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "DestroyDecalEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::Update)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x2e15444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityManager::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityManager::Dispose)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x2e15df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::DecalEntityManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::DecalEntityManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_entityChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_entityChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityChunks;
}
constexpr void
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_entityChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entityChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_cachedChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_cachedChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedChunks;
}
constexpr void
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_cachedChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_culledChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___culledChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_culledChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___culledChunks;
}
constexpr void
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_culledChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___culledChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>*&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_drawCallChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawCallChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_drawCallChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawCallChunks;
}
constexpr void
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_drawCallChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___drawCallChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_chunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_chunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_chunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkCount = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_AddDecalSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDecalSampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_AddDecalSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDecalSampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_AddDecalSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddDecalSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_ResizeChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizeChunks;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_ResizeChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizeChunks;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_ResizeChunks(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResizeChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_SortChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortChunks;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_SortChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortChunks;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_SortChunks(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_DecalEntityIndexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityIndexer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityIndexer*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_DecalEntityIndexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityIndexer;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_DecalEntityIndexer(::UnityEngine::Rendering::Universal::DecalEntityIndexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalEntityIndexer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>*&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_MaterialToChunkIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialToChunkIndex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_MaterialToChunkIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialToChunkIndex;
}
constexpr void
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_MaterialToChunkIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaterialToChunkIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>*&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_CombinedChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_CombinedChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedChunks;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_CombinedChunks(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityManager__CombinedChunks>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CombinedChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_CombinedChunkRemmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedChunkRemmap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_CombinedChunkRemmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedChunkRemmap;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_CombinedChunkRemmap(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CombinedChunkRemmap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_ErrorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ErrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_ErrorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ErrorMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_ErrorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ErrorMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_DecalProjectorMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalProjectorMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_get_m_DecalProjectorMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalProjectorMesh;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityManager::__cordl_internal_set_m_DecalProjectorMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalProjectorMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalEntityManager::get_errorMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                             "get_errorMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::DecalEntityManager::get_decalProjectorMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                             "get_decalProjectorMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalEntityManager* UnityEngine::Rendering::Universal::DecalEntityManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalEntityManager*>());
}
inline void UnityEngine::Rendering::Universal::DecalEntityManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalEntityManager::IsValid(::UnityEngine::Rendering::Universal::DecalEntity decalEntity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, decalEntity);
}
inline ::UnityEngine::Rendering::Universal::DecalEntity UnityEngine::Rendering::Universal::DecalEntityManager::CreateDecalEntity(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "CreateDecalEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalProjector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalEntity, false>(this, ___internal_method, decalProjector);
}
inline int32_t UnityEngine::Rendering::Universal::DecalEntityManager::CreateChunkIndex(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "CreateChunkIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::Universal::DecalEntityManager::UpdateDecalEntityData(::UnityEngine::Rendering::Universal::DecalEntity decalEntity,
                                                                                         ::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "UpdateDecalEntityData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalProjector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decalEntity, decalProjector);
}
inline void UnityEngine::Rendering::Universal::DecalEntityManager::DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity decalEntity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(), "DestroyDecalEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decalEntity);
}
inline void UnityEngine::Rendering::Universal::DecalEntityManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalEntityManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager::DecalEntityManager() {}
