#pragma once
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/Diagnostics/zzzz__Process_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/Diagnostics/zzzz__ProcessInfo_def.hpp"
#include "System/Diagnostics/zzzz__ProcessModuleCollection_def.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadCollection_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__StreamReadMode::__Process__StreamReadMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__StreamReadMode::__Process__StreamReadMode() {}
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::undefined{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::syncMode{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::asyncMode{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__State::__Process__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__State::__Process__State() {}
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveId{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsLocal{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsNt{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveProcessInfo{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::Exited{ static_cast<int32_t>(0x10) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::Associated{ static_cast<int32_t>(0x20) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsWin2k{ static_cast<int32_t>(0x40) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveNtProcessInfo{ static_cast<int32_t>(0xc) };
// Ctor Parameters [CppParam { name: "process_handle", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "envVariables", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Password", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__ProcInfo::__Process__ProcInfo(void* process_handle, int32_t pid, ::ArrayW<::StringW, ::Array<::StringW>*> envVariables, ::StringW UserName,
                                                                          ::StringW Domain, void* Password, bool LoadUserProfile) noexcept {
  this->process_handle = process_handle;
  this->pid = pid;
  this->envVariables = envVariables;
  this->UserName = UserName;
  this->Domain = Domain;
  this->Password = Password;
  this->LoadUserProfile = LoadUserProfile;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__ProcInfo::__Process__ProcInfo() {}
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x12ba928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::StringW, bool, int32_t, ::System::Diagnostics::ProcessInfo*)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12ba9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Associated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Associated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12baa4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Associated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ExitCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ExitCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x12baa6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ExitCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_HasExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_HasExited)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x12bacd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_HasExited",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Handle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x12bb738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Handle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12b6618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StartInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessStartInfo* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StartInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12bb824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StartInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.set_StartInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::set_StartInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12bb914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_StartInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_SynchronizingObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISynchronizeInvoke* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x12bb974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                               "get_SynchronizingObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.set_EnableRaisingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::set_EnableRaisingEvents)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12bbb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_EnableRaisingEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StandardOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12bbed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StandardError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12bbf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.add_Exited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::EventHandler*)>(&::System::Diagnostics::Process::add_Exited)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12bc008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "add_Exited", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.remove_Exited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::EventHandler*)>(&::System::Diagnostics::Process::remove_Exited)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12bc088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "remove_Exited", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ReleaseProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::ReleaseProcessHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12bc108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ReleaseProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CompletionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Object*, bool)>(
    &::System::Diagnostics::Process::CompletionCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12bc130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CompletionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x12bc148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Close)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x12bc198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::__Process__State)>(
    &::System::Diagnostics::Process::EnsureState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x12bab98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureWatchingForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::EnsureWatchingForExit)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x12bbb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureWatchingForExit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x12bc304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetCurrentProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)()>(&::System::Diagnostics::Process::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x12b6590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetCurrentProcess",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OnExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::OnExited)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x12bc524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OnExited",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t, bool)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x12bb040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12bc764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12bbb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x12bb768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x12bc2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Refresh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::SetProcessHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12bc76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::SetProcessId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12bc788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x12bc798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StopWatchingForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::StopWatchingForExit)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x12bbdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StopWatchingForExit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x12be088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.WaitForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::WaitForExit)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x12be1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "WaitForExit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.WaitForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::WaitForExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12be43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "WaitForExit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int32_t)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x12be444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*)>(&::System::Diagnostics::Process::ProcessName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12be4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_icall",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::ProcessName_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x12be4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ProcessName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ProcessName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x12b6634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ProcessName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcess_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12be5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcess_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t, ::StringW)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x12bc34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.IsLocalMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Diagnostics::Process::IsLocalMachine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x12be5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "IsLocalMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ShellExecuteEx_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(
    &::System::Diagnostics::Process::ShellExecuteEx_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12be64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ShellExecuteEx_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreateProcess_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, void*, void*, void*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(&::System::Diagnostics::Process::CreateProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12be650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreateProcess_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithShellExecuteEx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::StartWithShellExecuteEx)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x12bc8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithShellExecuteEx", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreatePipe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<void*>, ByRef<void*>, bool)>(&::System::Diagnostics::Process::CreatePipe)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x12be7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreatePipe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_IsWindows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::Process::get_IsWindows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12be984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_IsWindows",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithCreateProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::StartWithCreateProcess)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0x12bccb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithCreateProcess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.FillUserInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(
    &::System::Diagnostics::Process::FillUserInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x12be6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "FillUserInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.RaiseOnExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::RaiseOnExited)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x12bb658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "RaiseOnExited",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveProcessId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveProcessId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveProcessId(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessId = value;
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_processId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_processId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_processId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processId = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveProcessHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveProcessHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveProcessHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessHandle = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& System::Diagnostics::Process::__cordl_internal_get_m_processHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> const& System::Diagnostics::Process::__cordl_internal_get_m_processHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_processHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_isRemoteMachine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_isRemoteMachine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_isRemoteMachine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRemoteMachine = value;
}
constexpr ::StringW& System::Diagnostics::Process::__cordl_internal_get_machineName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr ::StringW const& System::Diagnostics::Process::__cordl_internal_get_machineName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_machineName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___machineName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_m_processAccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_m_processAccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_m_processAccess(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_processAccess = value;
}
constexpr ::System::Diagnostics::ProcessThreadCollection*& System::Diagnostics::Process::__cordl_internal_get_threads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessThreadCollection*> const& System::Diagnostics::Process::__cordl_internal_get_threads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_threads(::System::Diagnostics::ProcessThreadCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::ProcessModuleCollection*& System::Diagnostics::Process::__cordl_internal_get_modules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessModuleCollection*> const& System::Diagnostics::Process::__cordl_internal_get_modules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_modules(::System::Diagnostics::ProcessModuleCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveWorkingSetLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveWorkingSetLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveWorkingSetLimits(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveWorkingSetLimits = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_havePriorityClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_havePriorityClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_havePriorityClass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___havePriorityClass = value;
}
constexpr ::System::Diagnostics::ProcessStartInfo*& System::Diagnostics::Process::__cordl_internal_get_startInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> const& System::Diagnostics::Process::__cordl_internal_get_startInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_startInfo(::System::Diagnostics::ProcessStartInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_watchForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_watchForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_watchForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchForExit = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_watchingForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_watchingForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_watchingForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchingForExit = value;
}
constexpr ::System::EventHandler*& System::Diagnostics::Process::__cordl_internal_get_onExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& System::Diagnostics::Process::__cordl_internal_get_onExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_onExited(::System::EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_exited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_exited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_exited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exited = value;
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_exitCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_exitCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_exitCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exitCode = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_signaled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_signaled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_signaled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signaled = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveExitTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveExitTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveExitTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveExitTime = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_raisedOnExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_raisedOnExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_raisedOnExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raisedOnExited = value;
}
constexpr ::System::Threading::RegisteredWaitHandle*& System::Diagnostics::Process::__cordl_internal_get_registeredWaitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::RegisteredWaitHandle*> const& System::Diagnostics::Process::__cordl_internal_get_registeredWaitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registeredWaitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitHandle*& System::Diagnostics::Process::__cordl_internal_get_waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& System::Diagnostics::Process::__cordl_internal_get_waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_waitHandle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ISynchronizeInvoke*& System::Diagnostics::Process::__cordl_internal_get_synchronizingObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISynchronizeInvoke*> const& System::Diagnostics::Process::__cordl_internal_get_synchronizingObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synchronizingObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__cordl_internal_get_standardOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& System::Diagnostics::Process::__cordl_internal_get_standardOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardOutput(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamWriter*& System::Diagnostics::Process::__cordl_internal_get_standardInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> const& System::Diagnostics::Process::__cordl_internal_get_standardInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardInput(::System::IO::StreamWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__cordl_internal_get_standardError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& System::Diagnostics::Process::__cordl_internal_get_standardError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardError(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_outputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_outputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_outputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputStreamReadMode = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_errorStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_errorStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_errorStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorStreamReadMode = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_inputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_inputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_inputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputStreamReadMode = value;
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__cordl_internal_get_output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& System::Diagnostics::Process::__cordl_internal_get_output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_output(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___output)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& System::Diagnostics::Process::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_error(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Process::__cordl_internal_get_process_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr ::StringW const& System::Diagnostics::Process::__cordl_internal_get_process_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_process_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___process_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Process*>());
}
inline void System::Diagnostics::Process::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Process*>(machineName, isRemoteMachine, processId, processInfo));
}
inline void System::Diagnostics::Process::_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, machineName, isRemoteMachine, processId, processInfo);
}
inline bool System::Diagnostics::Process::get_Associated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Associated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_ExitCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ExitCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Diagnostics::Process::get_HasExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_HasExited",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void* System::Diagnostics::Process::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Handle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::Process::get_StartInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StartInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessStartInfo*, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::set_StartInfo(::System::Diagnostics::ProcessStartInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_StartInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ISynchronizeInvoke* System::Diagnostics::Process::get_SynchronizingObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_SynchronizingObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke*, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::set_EnableRaisingEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_EnableRaisingEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::add_Exited(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "add_Exited", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Process::remove_Exited(::System::EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "remove_Exited", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Process::ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ReleaseProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void System::Diagnostics::Process::CompletionCallback(::System::Object* context, bool wasSignaled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CompletionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, wasSignaled);
}
inline void System::Diagnostics::Process::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::Process::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::EnsureState(::System::Diagnostics::__Process__State state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Diagnostics::Process::EnsureWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureWatchingForExit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetCurrentProcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetCurrentProcess",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Process::OnExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OnExited",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access, bool throwIfExited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access, throwIfExited);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::OpenProcessHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::OpenProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access);
}
inline void System::Diagnostics::Process::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processHandle);
}
inline void System::Diagnostics::Process::SetProcessId(int32_t processId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processId);
}
inline bool System::Diagnostics::Process::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::StopWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StopWatchingForExit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::Process::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Diagnostics::Process::WaitForExit(int32_t milliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "WaitForExit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, milliseconds);
}
inline void System::Diagnostics::Process::WaitForExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "WaitForExit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Process*>(handle, id));
}
inline void System::Diagnostics::Process::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, id);
}
inline ::StringW System::Diagnostics::Process::ProcessName_icall(void* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_icall",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::get_ProcessName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ProcessName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void* System::Diagnostics::Process::GetProcess_internal(int32_t pid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcess_internal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, pid);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId, ::StringW machineName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId, machineName);
}
inline bool System::Diagnostics::Process::IsLocalMachine(::StringW machineName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "IsLocalMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, machineName);
}
inline bool System::Diagnostics::Process::ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ShellExecuteEx_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline bool System::Diagnostics::Process::CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, void* stdin, void* stdout, void* stderr,
                                                                 ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreateProcess_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, stdin, stdout, stderr, procInfo);
}
inline bool System::Diagnostics::Process::StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithShellExecuteEx", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::CreatePipe(ByRef<void*> read, ByRef<void*> write, bool writeDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreatePipe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, read, write, writeDirection);
}
inline bool System::Diagnostics::Process::get_IsWindows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_IsWindows",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::Process::StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithCreateProcess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "FillUserInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline void System::Diagnostics::Process::RaiseOnExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "RaiseOnExited",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process::Process() {}
