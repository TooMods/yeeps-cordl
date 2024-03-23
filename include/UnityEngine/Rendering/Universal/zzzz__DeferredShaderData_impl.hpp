#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ComputeBufferType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DeferredShaderData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DeferredShaderData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PreTile_def.hpp"
#include "UnityEngine/zzzz__ComputeBufferType_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "frameUsed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::ComputeBufferType", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo::__DeferredShaderData__ComputeBufferInfo(uint32_t frameUsed, ::UnityEngine::ComputeBufferType type) noexcept {
  this->frameUsed = frameUsed;
  this->type = type;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo::__DeferredShaderData__ComputeBufferInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DeferredShaderData::*)()>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e1a41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DeferredShaderData* (*)()>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::get_instance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e1a4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                               "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DeferredShaderData::*)()>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e1a544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.ResetBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DeferredShaderData::*)()>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::ResetBuffers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e1a5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                               "ResetBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.GetPreTiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile> (
    ::UnityEngine::Rendering::Universal::DeferredShaderData::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::DeferredShaderData::GetPreTiles)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e1a608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "GetPreTiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.GetOrUpdateBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::Universal::DeferredShaderData::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::GetOrUpdateBuffer)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2e1a66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "GetOrUpdateBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.DisposeBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DeferredShaderData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::Universal::DeferredShaderData::DisposeBuffers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e1a9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "DisposeBuffers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.IsLessCircular
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::Universal::DeferredShaderData::IsLessCircular)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e1a9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "IsLessCircular", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DeferredShaderData.Align
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::DeferredShaderData::Align)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e1aae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "Align", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::DeferredShaderData::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::DeferredShaderData::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*>&
UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_PreTiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreTiles;
}
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>,
                   ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*> const&
UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_PreTiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreTiles;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_PreTiles(
    ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreTiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*>& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_Buffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffers;
}
constexpr ::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> const& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_Buffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffers;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_Buffers(::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*>&
UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_BufferInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferInfos;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> const&
UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_BufferInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferInfos;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_BufferInfos(
    ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BufferInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_BufferCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_BufferCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferCount;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_BufferCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BufferCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_CachedBufferIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedBufferIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_CachedBufferIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedBufferIndex;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_CachedBufferIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedBufferIndex = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_FrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_get_m_FrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr void UnityEngine::Rendering::Universal::DeferredShaderData::__cordl_internal_set_m_FrameIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameIndex = value;
}
inline void UnityEngine::Rendering::Universal::DeferredShaderData::setStaticF_m_Instance(::UnityEngine::Rendering::Universal::DeferredShaderData* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DeferredShaderData*, "m_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DeferredShaderData*>(value));
}
inline ::UnityEngine::Rendering::Universal::DeferredShaderData* UnityEngine::Rendering::Universal::DeferredShaderData::getStaticF_m_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DeferredShaderData*, "m_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get>();
}
inline ::UnityEngine::Rendering::Universal::DeferredShaderData* UnityEngine::Rendering::Universal::DeferredShaderData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DeferredShaderData*>());
}
inline void UnityEngine::Rendering::Universal::DeferredShaderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DeferredShaderData* UnityEngine::Rendering::Universal::DeferredShaderData::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DeferredShaderData*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DeferredShaderData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DeferredShaderData::ResetBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(),
                                                                             "ResetBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile> UnityEngine::Rendering::Universal::DeferredShaderData::GetPreTiles(int32_t level, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "GetPreTiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, false>(this, ___internal_method, level, count);
}
template <typename T> inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::DeferredShaderData::ReserveBuffer(int32_t count, bool asCBuffer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "ReserveBuffer",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*, false>(this, ___internal_method, count, asCBuffer);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T>
UnityEngine::Rendering::Universal::DeferredShaderData::GetOrUpdateNativeArray(ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>> nativeArrays,
                                                                              int32_t level, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "GetOrUpdateNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, nativeArrays, level, count);
}
template <typename T>
inline void
UnityEngine::Rendering::Universal::DeferredShaderData::DisposeNativeArrays(ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>> nativeArrays) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "DisposeNativeArrays",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeArrays);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::DeferredShaderData::GetOrUpdateBuffer(int32_t count, int32_t stride, bool isConstantBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "GetOrUpdateBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*, false>(this, ___internal_method, count, stride, isConstantBuffer);
}
inline void UnityEngine::Rendering::Universal::DeferredShaderData::DisposeBuffers(Il2CppObject* buffers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "DisposeBuffers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffers);
}
inline bool UnityEngine::Rendering::Universal::DeferredShaderData::IsLessCircular(uint32_t a, uint32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "IsLessCircular", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::Rendering::Universal::DeferredShaderData::Align(int32_t s, int32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DeferredShaderData*>::get(), "Align", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, alignment);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DeferredShaderData::DeferredShaderData() {}
