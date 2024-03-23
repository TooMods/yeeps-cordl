#pragma once
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderDescription_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)(uint64_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e0a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "get_Valid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27e0a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27e0b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e0bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle() {
  return this->___handle;
}
constexpr uint64_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle() const {
  return this->___handle;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_set_handle(uint64_t value) {
  this->___handle = value;
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor(uint64_t handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline bool Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "get_Valid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, false>(nullptr, ___internal_method, handle);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, false>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> handle,
                                                                                                        ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, ret);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle() {}
