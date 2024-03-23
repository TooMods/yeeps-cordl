#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase.ClearAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::ClearAll)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1bc84e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), "ClearAll",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc865c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::setStaticF_s_AllocatedPools(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>*, "s_AllocatedPools",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::getStaticF_s_AllocatedPools() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>*, "s_AllocatedPools",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::ClearAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), "ClearAll",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase::__RenderGraphObjectPool__SharedObjectPoolBase() {}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::__cordl_internal_set_m_Pool(::System::Collections::Generic::Stack_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::setStaticF_s_Instance(
    ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>*, "s_Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get>(
      std::forward<::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>*>(value));
}
template <typename T>
inline ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<
      ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>*, "s_Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get>();
}
template <typename T> inline T UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), "Get",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::Release(T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), "Release",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::AllocatePool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), "AllocatePool",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::get_sharedPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), "get_sharedPool",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>());
}
template <typename T> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>::__RenderGraphObjectPool__SharedObjectPool_1() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1bc7e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool.GetTempMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1bc7f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 "GetTempMaterialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool.ReleaseAllTempAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1bc8040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 "ReleaseAllTempAlloc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1bc83fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_ArrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrayPool;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_ArrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrayPool;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_ArrayPool(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ArrayPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedArrays;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedArrays;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_AllocatedArrays(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocatedArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedMaterialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedMaterialPropertyBlocks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedMaterialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedMaterialPropertyBlocks;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_AllocatedMaterialPropertyBlocks(
    ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocatedMaterialPropertyBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempArray(int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "GetTempArray", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, size);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempMaterialPropertyBlock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "GetTempMaterialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "ReleaseAllTempAlloc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "Get",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Release(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "Release", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::RenderGraphObjectPool() {}
