#pragma once
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderSample_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions::__ProfilerRecorder__ControlOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions::__ProfilerRecorder__ControlOptions() {}
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::Start{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::Stop{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::Reset{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::Release{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::SetFilterToCurrentThread{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Profiling::__ProfilerRecorder__ControlOptions Unity::Profiling::__ProfilerRecorder__ControlOptions::SetToCollectFromAllThreads{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::__ProfilerRecorder__CountOptions::__ProfilerRecorder__CountOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::__ProfilerRecorder__CountOptions::__ProfilerRecorder__CountOptions() {}
constexpr ::Unity::Profiling::__ProfilerRecorder__CountOptions Unity::Profiling::__ProfilerRecorder__CountOptions::Count{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Profiling::__ProfilerRecorder__CountOptions Unity::Profiling::__ProfilerRecorder__CountOptions::MaxCount{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27dfe7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_Valid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27dff00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Valid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27dff98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27e0090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_LastValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_LastValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27e00e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_LastValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27e016c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_IsRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_IsRunning)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27e0204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_IsRunning",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerRecorderSample (::Unity::Profiling::ProfilerRecorder::*)(int32_t)>(
    &::Unity::Profiling::ProfilerRecorder::GetSample)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27e0298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerRecorder (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27dfea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Profiling::ProfilerRecorder, ::Unity::Profiling::__ProfilerRecorder__ControlOptions)>(
    &::Unity::Profiling::ProfilerRecorder::Control)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27e0048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__ControlOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetLastValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27e012c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Unity::Profiling::ProfilerRecorder, ::Unity::Profiling::__ProfilerRecorder__CountOptions)>(
    &::Unity::Profiling::ProfilerRecorder::GetCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27e01bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__CountOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27dff54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetRunning)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e0254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetRunning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSampleInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerRecorderSample (*)(::Unity::Profiling::ProfilerRecorder, int32_t)>(
    &::Unity::Profiling::ProfilerRecorder::GetSampleInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27e02ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSampleInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27e0544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.CheckInitializedAndThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27dffe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                               "CheckInitializedAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, int32_t, ::Unity::Profiling::ProfilerRecorderOptions, ByRef<::Unity::Profiling::ProfilerRecorder>)>(
        &::Unity::Profiling::ProfilerRecorder::Create_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27e0358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Profiling::ProfilerRecorder>, ::Unity::Profiling::__ProfilerRecorder__ControlOptions)>(
    &::Unity::Profiling::ProfilerRecorder::Control_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e03b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__ControlOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<::Unity::Profiling::ProfilerRecorder>)>(
    &::Unity::Profiling::ProfilerRecorder::GetLastValue_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e03f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::Unity::Profiling::ProfilerRecorder>, ::Unity::Profiling::__ProfilerRecorder__CountOptions)>(
    &::Unity::Profiling::ProfilerRecorder::GetCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e0434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetCount_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__CountOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e0478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetRunning_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetRunning_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e04b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetRunning_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSampleInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Profiling::ProfilerRecorder>, int32_t, ByRef<::Unity::Profiling::ProfilerRecorderSample>)>(
    &::Unity::Profiling::ProfilerRecorder::GetSampleInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27e04f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSampleInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorderSample>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Profiling::ProfilerRecorder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Profiling::ProfilerRecorder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @param capacity: int32_t (default: static_cast<int32_t>(0x1))
/// @param options: ::Unity::Profiling::ProfilerRecorderOptions (default: static_cast<int32_t>(0x18))
inline void Unity::Profiling::ProfilerRecorder::_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statHandle, capacity, options);
}
inline bool Unity::Profiling::ProfilerRecorder::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t Unity::Profiling::ProfilerRecorder::get_LastValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_LastValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t Unity::Profiling::ProfilerRecorder::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Profiling::ProfilerRecorder::get_IsRunning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_IsRunning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerRecorderSample Unity::Profiling::ProfilerRecorder::GetSample(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSample",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorderSample, false>(this, ___internal_method, index);
}
inline ::Unity::Profiling::ProfilerRecorder Unity::Profiling::ProfilerRecorder::Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t maxSampleCount,
                                                                                       ::Unity::Profiling::ProfilerRecorderOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorder, false>(nullptr, ___internal_method, statHandle, maxSampleCount, options);
}
inline void Unity::Profiling::ProfilerRecorder::Control(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::__ProfilerRecorder__ControlOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__ControlOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, options);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Profiling::ProfilerRecorder::GetCount(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::__ProfilerRecorder__CountOptions countOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__CountOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, countOptions);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetRunning(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetRunning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline ::Unity::Profiling::ProfilerRecorderSample Unity::Profiling::ProfilerRecorder::GetSampleInternal(::Unity::Profiling::ProfilerRecorder handle, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSampleInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorderSample, false>(nullptr, ___internal_method, handle, index);
}
inline void Unity::Profiling::ProfilerRecorder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                             "CheckInitializedAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Create_Injected(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> statHandle, int32_t maxSampleCount,
                                                                ::Unity::Profiling::ProfilerRecorderOptions options, ByRef<::Unity::Profiling::ProfilerRecorder> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statHandle, maxSampleCount, options, ret);
}
inline void Unity::Profiling::ProfilerRecorder::Control_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::__ProfilerRecorder__ControlOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__ControlOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, options);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue_Injected", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Profiling::ProfilerRecorder::GetCount_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::__ProfilerRecorder__CountOptions countOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetCount_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::__ProfilerRecorder__CountOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, countOptions);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetRunning_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetRunning_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::ProfilerRecorder::GetSampleInternal_Injected(ByRef<::Unity::Profiling::ProfilerRecorder> handle, int32_t index, ByRef<::Unity::Profiling::ProfilerRecorderSample> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetSampleInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Profiling::ProfilerRecorderSample>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, index, ret);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder() {}
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorder::SharedRecorder{ static_cast<int32_t>(0x80) };
