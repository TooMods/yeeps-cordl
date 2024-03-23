#pragma once
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/ComponentModel/zzzz__BackgroundWorker_def.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/ComponentModel/zzzz__DoWorkEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__DoWorkEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__RunWorkerCompletedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__RunWorkerCompletedEventHandler_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1ae5f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.AsyncOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::AsyncOperationCompleted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1ae6034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "AsyncOperationCompleted",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_CancellationPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(
    &::System::ComponentModel::BackgroundWorker::get_CancellationPending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae60c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                               "get_CancellationPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.CancelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::CancelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ae60d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                               "CancelAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_DoWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::add_DoWork)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae6138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_DoWork", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::DoWorkEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_DoWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::remove_DoWork)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae61d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_DoWork", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::DoWorkEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_IsBusy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::get_IsBusy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae6270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "get_IsBusy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnDoWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventArgs*)>(
    &::System::ComponentModel::BackgroundWorker::OnDoWork)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ae6278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnRunWorkerCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventArgs*)>(
    &::System::ComponentModel::BackgroundWorker::OnRunWorkerCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ae62a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnProgressChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventArgs*)>(
    &::System::ComponentModel::BackgroundWorker::OnProgressChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ae62c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_ProgressChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::add_ProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae62f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_ProgressChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ProgressChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_ProgressChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::remove_ProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae638c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_ProgressChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ProgressChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ProgressReporter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::ProgressReporter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1ae6428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ProgressReporter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ReportProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(int32_t)>(
    &::System::ComponentModel::BackgroundWorker::ReportProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae64b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ReportProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ReportProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(int32_t, ::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::ReportProgress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1ae64c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ReportProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.RunWorkerAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(
    &::System::ComponentModel::BackgroundWorker::RunWorkerAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae65c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                               "RunWorkerAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.RunWorkerAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::RunWorkerAsync)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1ae65c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "RunWorkerAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_RunWorkerCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::add_RunWorkerCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae67d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_RunWorkerCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RunWorkerCompletedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_RunWorkerCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventHandler*)>(
    &::System::ComponentModel::BackgroundWorker::remove_RunWorkerCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1ae6870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_RunWorkerCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RunWorkerCompletedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_WorkerReportsProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(
    &::System::ComponentModel::BackgroundWorker::get_WorkerReportsProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae690c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                               "get_WorkerReportsProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.set_WorkerReportsProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(
    &::System::ComponentModel::BackgroundWorker::set_WorkerReportsProgress)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ae6914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "set_WorkerReportsProgress",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_WorkerSupportsCancellation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(
    &::System::ComponentModel::BackgroundWorker::get_WorkerSupportsCancellation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae6920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                               "get_WorkerSupportsCancellation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.set_WorkerSupportsCancellation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(
    &::System::ComponentModel::BackgroundWorker::set_WorkerSupportsCancellation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ae6928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "set_WorkerSupportsCancellation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.WorkerThreadStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::WorkerThreadStart)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1ae6934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "WorkerThreadStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(&::System::ComponentModel::BackgroundWorker::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ae6abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker._RunWorkerAsync_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(
    &::System::ComponentModel::BackgroundWorker::_RunWorkerAsync_b__27_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ae6ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "<RunWorkerAsync>b__27_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__canCancelWorker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canCancelWorker;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__canCancelWorker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canCancelWorker;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__canCancelWorker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canCancelWorker = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__workerReportsProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workerReportsProgress;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__workerReportsProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workerReportsProgress;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__workerReportsProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____workerReportsProgress = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__cancellationPending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationPending;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__cancellationPending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationPending;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__cancellationPending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationPending = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__isRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__isRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__isRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRunning = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__asyncOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperation;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AsyncOperation*> const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__asyncOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperation;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__asyncOperation(::System::ComponentModel::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SendOrPostCallback*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__operationCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationCompleted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__operationCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationCompleted;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__operationCompleted(::System::Threading::SendOrPostCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____operationCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SendOrPostCallback*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__progressReporter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressReporter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__progressReporter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressReporter;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__progressReporter(::System::Threading::SendOrPostCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressReporter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::DoWorkEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_DoWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DoWork;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::DoWorkEventHandler*> const& System::ComponentModel::BackgroundWorker::__cordl_internal_get_DoWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DoWork;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_DoWork(::System::ComponentModel::DoWorkEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DoWork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ProgressChangedEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_ProgressChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProgressChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ProgressChangedEventHandler*> const& System::ComponentModel::BackgroundWorker::__cordl_internal_get_ProgressChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProgressChanged;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProgressChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_RunWorkerCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunWorkerCompleted;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::RunWorkerCompletedEventHandler*> const&
System::ComponentModel::BackgroundWorker::__cordl_internal_get_RunWorkerCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunWorkerCompleted;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RunWorkerCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::BackgroundWorker* System::ComponentModel::BackgroundWorker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::BackgroundWorker*>());
}
inline void System::ComponentModel::BackgroundWorker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::AsyncOperationCompleted(::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "AsyncOperationCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg);
}
inline bool System::ComponentModel::BackgroundWorker::get_CancellationPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                             "get_CancellationPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::CancelAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "CancelAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::add_DoWork(::System::ComponentModel::DoWorkEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_DoWork", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::DoWorkEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_DoWork(::System::ComponentModel::DoWorkEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_DoWork", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::DoWorkEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_IsBusy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "get_IsBusy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::OnDoWork(::System::ComponentModel::DoWorkEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_ProgressChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ProgressChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_ProgressChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ProgressChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::ProgressReporter(::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ProgressReporter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg);
}
inline void System::ComponentModel::BackgroundWorker::ReportProgress(int32_t percentProgress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ReportProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, percentProgress);
}
inline void System::ComponentModel::BackgroundWorker::ReportProgress(int32_t percentProgress, ::System::Object* userState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "ReportProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, percentProgress, userState);
}
inline void System::ComponentModel::BackgroundWorker::RunWorkerAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                             "RunWorkerAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::RunWorkerAsync(::System::Object* argument) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "RunWorkerAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argument);
}
inline void System::ComponentModel::BackgroundWorker::add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "add_RunWorkerCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RunWorkerCompletedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "remove_RunWorkerCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RunWorkerCompletedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_WorkerReportsProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                             "get_WorkerReportsProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::set_WorkerReportsProgress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "set_WorkerReportsProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_WorkerSupportsCancellation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(),
                                                                             "get_WorkerSupportsCancellation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::set_WorkerSupportsCancellation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "set_WorkerSupportsCancellation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::WorkerThreadStart(::System::Object* argument) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "WorkerThreadStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argument);
}
inline void System::ComponentModel::BackgroundWorker::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::ComponentModel::BackgroundWorker::_RunWorkerAsync_b__27_0(::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BackgroundWorker*>::get(), "<RunWorkerAsync>b__27_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BackgroundWorker::BackgroundWorker() {}
