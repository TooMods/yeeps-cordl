#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/zzzz__Version_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Environment__SpecialFolder::__Environment__SpecialFolder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Environment__SpecialFolder::__Environment__SpecialFolder() {}
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::MyDocuments{ static_cast<int32_t>(0x5) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Desktop{ static_cast<int32_t>(0x0) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::MyComputer{ static_cast<int32_t>(0x11) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Programs{ static_cast<int32_t>(0x2) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Personal{ static_cast<int32_t>(0x5) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Favorites{ static_cast<int32_t>(0x6) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Startup{ static_cast<int32_t>(0x7) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Recent{ static_cast<int32_t>(0x8) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::SendTo{ static_cast<int32_t>(0x9) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::StartMenu{ static_cast<int32_t>(0xb) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::MyMusic{ static_cast<int32_t>(0xd) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::DesktopDirectory{ static_cast<int32_t>(0x10) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Templates{ static_cast<int32_t>(0x15) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::ApplicationData{ static_cast<int32_t>(0x1a) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::LocalApplicationData{ static_cast<int32_t>(0x1c) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::InternetCache{ static_cast<int32_t>(0x20) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Cookies{ static_cast<int32_t>(0x21) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::History{ static_cast<int32_t>(0x22) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonApplicationData{ static_cast<int32_t>(0x23) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::System{ static_cast<int32_t>(0x25) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::ProgramFiles{ static_cast<int32_t>(0x26) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::MyPictures{ static_cast<int32_t>(0x27) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonProgramFiles{ static_cast<int32_t>(0x2b) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::MyVideos{ static_cast<int32_t>(0xe) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::NetworkShortcuts{ static_cast<int32_t>(0x13) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Fonts{ static_cast<int32_t>(0x14) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonStartMenu{ static_cast<int32_t>(0x16) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonPrograms{ static_cast<int32_t>(0x17) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonStartup{ static_cast<int32_t>(0x18) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonDesktopDirectory{ static_cast<int32_t>(0x19) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::PrinterShortcuts{ static_cast<int32_t>(0x1b) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Windows{ static_cast<int32_t>(0x24) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::UserProfile{ static_cast<int32_t>(0x28) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::SystemX86{ static_cast<int32_t>(0x29) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::ProgramFilesX86{ static_cast<int32_t>(0x2a) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonProgramFilesX86{ static_cast<int32_t>(0x2c) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonTemplates{ static_cast<int32_t>(0x2d) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonDocuments{ static_cast<int32_t>(0x2e) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonAdminTools{ static_cast<int32_t>(0x2f) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::AdminTools{ static_cast<int32_t>(0x30) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonMusic{ static_cast<int32_t>(0x35) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonPictures{ static_cast<int32_t>(0x36) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonVideos{ static_cast<int32_t>(0x37) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::Resources{ static_cast<int32_t>(0x38) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::LocalizedResources{ static_cast<int32_t>(0x39) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CommonOemLinks{ static_cast<int32_t>(0x3a) };
constexpr ::System::__Environment__SpecialFolder System::__Environment__SpecialFolder::CDBurning{ static_cast<int32_t>(0x3b) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Environment__SpecialFolderOption::__Environment__SpecialFolderOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Environment__SpecialFolderOption::__Environment__SpecialFolderOption() {}
constexpr ::System::__Environment__SpecialFolderOption System::__Environment__SpecialFolderOption::None{ static_cast<int32_t>(0x0) };
constexpr ::System::__Environment__SpecialFolderOption System::__Environment__SpecialFolderOption::DoNotVerify{ static_cast<int32_t>(0x4000) };
constexpr ::System::__Environment__SpecialFolderOption System::__Environment__SpecialFolderOption::Create{ static_cast<int32_t>(0x8000) };
//  Writing Method size for method: ::System::Environment.GetResourceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e78994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetResourceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2e7a808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetResourceStringEncodingName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::System::Environment::GetResourceStringEncodingName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2e7c5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceStringEncodingName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_CurrentDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_CurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7c74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_CurrentDirectory",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_CurrentManagedThreadId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Environment::get_CurrentManagedThreadId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e7c754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_CurrentManagedThreadId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_HasShutdownStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::get_HasShutdownStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7c774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_HasShutdownStarted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_MachineName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_MachineName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7c778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_MachineName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::GetNewLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7c77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetNewLine",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_NewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_NewLine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e7c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_NewLine",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::PlatformID (*)()>(&::System::Environment::get_Platform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7c7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Platform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetOSVersionString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::GetOSVersionString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7c7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetOSVersionString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_OSVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::OperatingSystem* (*)()>(&::System::Environment::get_OSVersion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e7c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_OSVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.CreateVersionFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&::System::Environment::CreateVersionFromString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2e7c8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "CreateVersionFromString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_StackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_StackTrace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e7cac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_StackTrace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_TickCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Environment::get_TickCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_TickCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_UserDomainName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_UserDomainName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_UserDomainName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_UserName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::get_UserName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_UserName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.Exit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Environment::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "Exit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(&::System::Environment::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetCommandLineArgs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetEnvironmentVariable_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*)>(&::System::Environment::internalGetEnvironmentVariable_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetEnvironmentVariable_native",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetEnvironmentVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::internalGetEnvironmentVariable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2e7cb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetEnvironmentVariable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)()>(&::System::Environment::GetEnvironmentVariables)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e7cc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::__Environment__SpecialFolder)>(&::System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7cce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetWindowsFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::System::Environment::GetWindowsFolderPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetWindowsFolderPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::__Environment__SpecialFolder, ::System::__Environment__SpecialFolderOption)>(
    &::System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e7ccf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolderOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.ReadXdgUserDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Environment::ReadXdgUserDir)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2e7d1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "ReadXdgUserDir", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.UnixGetFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::__Environment__SpecialFolder, ::System::__Environment__SpecialFolderOption)>(
    &::System::Environment::UnixGetFolderPath)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2e7cd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "UnixGetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolderOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e7d658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7d668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Exception*, ::StringW)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetIs64BitOperatingSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::GetIs64BitOperatingSystem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetIs64BitOperatingSystem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Is64BitOperatingSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::get_Is64BitOperatingSystem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Is64BitOperatingSystem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Is64BitProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::get_Is64BitProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7d678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Is64BitProcess",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_ProcessorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Environment::get_ProcessorCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_ProcessorCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_IsRunningOnWindows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::get_IsRunningOnWindows)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e7cd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_IsRunningOnWindows",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariableNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(&::System::Environment::GetEnvironmentVariableNames)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7cce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariableNames",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetMachineConfigPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::GetMachineConfigPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetMachineConfigPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetHome
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Environment::internalGetHome)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetHome",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetPageSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Environment::GetPageSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e7d690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetPageSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_IsUnix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Environment::get_IsUnix)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e7d694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_IsUnix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetStackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*, bool)>(&::System::Environment::GetStackTrace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e7d6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetStackTrace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void System::Environment::setStaticF_nl(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "nl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Environment::getStaticF_nl() {
  return ::cordl_internals::getStaticField<::StringW, "nl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get>();
}
inline void System::Environment::setStaticF_os(::System::OperatingSystem* value) {
  ::cordl_internals::setStaticField<::System::OperatingSystem*, "os", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get>(
      std::forward<::System::OperatingSystem*>(value));
}
inline ::System::OperatingSystem* System::Environment::getStaticF_os() {
  return ::cordl_internals::getStaticField<::System::OperatingSystem*, "os", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get>();
}
inline ::StringW System::Environment::GetResourceString(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key);
}
inline ::StringW System::Environment::GetResourceString(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key, values);
}
inline ::StringW System::Environment::GetResourceStringEncodingName(int32_t codePage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetResourceStringEncodingName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, codePage);
}
inline ::StringW System::Environment::get_CurrentDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_CurrentDirectory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_CurrentManagedThreadId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_CurrentManagedThreadId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Environment::get_HasShutdownStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_HasShutdownStarted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_MachineName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_MachineName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetNewLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetNewLine",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_NewLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_NewLine",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::PlatformID System::Environment::get_Platform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Platform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::PlatformID, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetOSVersionString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetOSVersionString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::OperatingSystem* System::Environment::get_OSVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_OSVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::OperatingSystem*, false>(nullptr, ___internal_method);
}
inline ::System::Version* System::Environment::CreateVersionFromString(::StringW info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "CreateVersionFromString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method, info);
}
inline ::StringW System::Environment::get_StackTrace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_StackTrace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_TickCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_TickCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_UserDomainName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_UserDomainName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_UserName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_UserName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void System::Environment::Exit(int32_t exitCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "Exit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exitCode);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Environment::GetCommandLineArgs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetCommandLineArgs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::internalGetEnvironmentVariable_native(void* variable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetEnvironmentVariable_native",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
inline ::StringW System::Environment::internalGetEnvironmentVariable(::StringW variable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetEnvironmentVariable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
inline ::StringW System::Environment::GetEnvironmentVariable(::StringW variable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
inline ::System::Collections::IDictionary* System::Environment::GetEnvironmentVariables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetFolderPath(::System::__Environment__SpecialFolder folder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder);
}
inline ::StringW System::Environment::GetWindowsFolderPath(int32_t folder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetWindowsFolderPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder);
}
inline ::StringW System::Environment::GetFolderPath(::System::__Environment__SpecialFolder folder, ::System::__Environment__SpecialFolderOption option) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolderOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder, option);
}
inline ::StringW System::Environment::ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "ReadXdgUserDir", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, config_dir, home_dir, key, fallback);
}
inline ::StringW System::Environment::UnixGetFolderPath(::System::__Environment__SpecialFolder folder, ::System::__Environment__SpecialFolderOption option) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "UnixGetFolderPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolderOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder, option);
}
inline void System::Environment::FailFast(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void System::Environment::FailFast(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, exception);
}
inline void System::Environment::FailFast(::StringW message, ::System::Exception* exception, ::StringW errorSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "FailFast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, exception, errorSource);
}
inline bool System::Environment::GetIs64BitOperatingSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetIs64BitOperatingSystem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Environment::get_Is64BitOperatingSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Is64BitOperatingSystem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Environment::get_Is64BitProcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_Is64BitProcess",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_ProcessorCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_ProcessorCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Environment::get_IsRunningOnWindows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_IsRunningOnWindows",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Environment::GetEnvironmentVariableNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetEnvironmentVariableNames",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetMachineConfigPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetMachineConfigPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::internalGetHome() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "internalGetHome",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t System::Environment::GetPageSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetPageSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Environment::get_IsUnix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "get_IsUnix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetStackTrace(::System::Exception* e, bool needFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Environment*>::get(), "GetStackTrace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, e, needFileInfo);
}
// Ctor Parameters []
constexpr ::System::Environment::Environment() {}
