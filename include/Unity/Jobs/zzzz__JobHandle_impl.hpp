#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::JobHandle.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::Complete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27e0c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Complete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CompleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::CompleteAll)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27e0d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CompleteAll", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::get_IsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e0e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobs)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e0e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e0d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndIsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e0e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndIsCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndCompleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, int32_t)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndCompleteAll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e0dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndCompleteAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle)>(
    &::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e0ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(ByRef<::Unity::Jobs::JobHandle>, ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27e0ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Jobs::JobHandle>, ByRef<::Unity::Jobs::JobHandle>, ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27e0f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::JobHandle::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Complete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Jobs::JobHandle::CompleteAll(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CompleteAll", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobs);
}
inline bool Unity::Jobs::JobHandle::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete(ByRef<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, job);
}
inline bool Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted(ByRef<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndIsCompleted", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, job);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobsAndCompleteAll(::cordl_internals::Ptr<void> jobs, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndCompleteAll", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobs, count);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, job0, job1);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependenciesInternal2(ByRef<::Unity::Jobs::JobHandle> job0, ByRef<::Unity::Jobs::JobHandle> job1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, job0, job1);
}
inline void Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected(ByRef<::Unity::Jobs::JobHandle> job0, ByRef<::Unity::Jobs::JobHandle> job1, ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, job0, job1, ret);
}
// Ctor Parameters [CppParam { name: "jobGroup", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::JobHandle::JobHandle(void* jobGroup, int32_t version) noexcept {
  this->jobGroup = jobGroup;
  this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::JobHandle::JobHandle() {}
