#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetFunctionConfigurationResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__DeadLetterConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__EnvironmentResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__FileSystemConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ImageConfigResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__Layer_def.hpp"
#include "Amazon/Lambda/Model/zzzz__TracingConfigResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__VpcConfigDetail_def.hpp"
#include "Amazon/Lambda/zzzz__LastUpdateStatusReasonCode_def.hpp"
#include "Amazon/Lambda/zzzz__LastUpdateStatus_def.hpp"
#include "Amazon/Lambda/zzzz__PackageType_def.hpp"
#include "Amazon/Lambda/zzzz__Runtime_def.hpp"
#include "Amazon/Lambda/zzzz__StateReasonCode_def.hpp"
#include "Amazon/Lambda/zzzz__State_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_CodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_CodeSha256)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_CodeSha256",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_CodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_CodeSha256)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_CodeSha256",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetCodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetCodeSha256)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bca9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetCodeSha256",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_CodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_CodeSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcaa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_CodeSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_CodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(int64_t)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_CodeSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bcaa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_CodeSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetCodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetCodeSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcaab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetCodeSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::DeadLetterConfig* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_DeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::DeadLetterConfig*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetDeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetDeadLetterConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcab00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetDeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Description",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Description",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcab20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetDescription",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::EnvironmentResponse* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Environment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::EnvironmentResponse*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::EnvironmentResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcab40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetEnvironment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* (
    ::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(&::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_FileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*)>(&::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcab58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetFileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFileSystemConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bcab60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetFileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_FunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FunctionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_FunctionArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_FunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FunctionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FunctionArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetFunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFunctionArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcabc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetFunctionArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_FunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcabe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetFunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Handler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcabfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Handler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcac04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetHandler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_ImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfigResponse* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_ImageConfigResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_ImageConfigResponse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_ImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::ImageConfigResponse*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_ImageConfigResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_ImageConfigResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfigResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetImageConfigResponse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcac24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetImageConfigResponse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_KMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_KMSKeyArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetKMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetKMSKeyArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcac44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetKMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_LastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_LastModified",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_LastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastModified",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetLastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastModified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetLastModified",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_LastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatus* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_LastUpdateStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_LastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::LastUpdateStatus*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcac7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetLastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcac84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetLastUpdateStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_LastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcace4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "get_LastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_LastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcacec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReason",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetLastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcacf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "IsSetLastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_LastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatusReasonCode* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcad04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "get_LastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_LastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::LastUpdateStatusReasonCode*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcad0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReasonCode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatusReasonCode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetLastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcad14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "IsSetLastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* (
    ::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(&::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcad74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Layers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*)>(&::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcad7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLayers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bcad84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_MasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_MasterArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcadd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_MasterArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_MasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_MasterArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcade0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_MasterArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetMasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetMasterArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcade8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetMasterArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_MemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcadf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_MemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(int32_t)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_MemorySize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bcae34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_MemorySize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetMemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetMemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetMemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::PackageType* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_PackageType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::PackageType*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetPackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetPackageType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcaee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetPackageType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_RevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_RevisionId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetRevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRevisionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcaf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetRevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Role",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Role",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcaf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetRole",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Runtime* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Runtime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Runtime*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcaf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetRuntime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_SigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_SigningJobArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcaff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_SigningJobArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_SigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_SigningJobArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_SigningJobArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetSigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetSigningJobArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetSigningJobArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_SigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_SigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "get_SigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_SigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_SigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_SigningProfileVersionArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetSigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetSigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                 "IsSetSigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::State* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_State",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::State*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcb048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_StateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_StateReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_StateReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_StateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_StateReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_StateReason",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetStateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetStateReason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetStateReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_StateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::StateReasonCode* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_StateReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_StateReasonCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_StateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::StateReasonCode*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_StateReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_StateReasonCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::StateReasonCode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetStateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetStateReasonCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bcb0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetStateReasonCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Timeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcb138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Timeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(int32_t)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Timeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bcb174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Timeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcb1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetTimeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::TracingConfigResponse* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_TracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::TracingConfigResponse*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfigResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetTracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetTracingConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetTracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_Version",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Version",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.get_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::VpcConfigDetail* (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "get_VpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.set_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::VpcConfigDetail*)>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcb260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfigDetail*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse.IsSetVpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetVpcConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcb268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "IsSetVpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConfigurationResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConfigurationResponse::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bcb278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__codeSha256() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSha256;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__codeSha256() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSha256;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__codeSha256(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSha256)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__codeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSize;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__codeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSize;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__codeSize(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____codeSize = value;
}
constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__deadLetterConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__deadLetterConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deadLetterConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::EnvironmentResponse*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::EnvironmentResponse*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__environment(::Amazon::Lambda::Model::EnvironmentResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__fileSystemConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__fileSystemConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr void
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileSystemConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__functionArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__functionArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionArn;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__functionArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__handler(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::ImageConfigResponse*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__imageConfigResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfigResponse;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfigResponse*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__imageConfigResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfigResponse;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__imageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imageConfigResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__kmsKeyArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__kmsKeyArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__kmsKeyArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kmsKeyArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__lastModified(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastModified)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::LastUpdateStatus*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatus*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatus;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReason;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReason;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatusReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatusReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::LastUpdateStatusReasonCode*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReasonCode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatusReasonCode*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReasonCode;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatusReasonCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__masterArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__masterArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterArn;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__masterArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__memorySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__memorySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memorySize = value;
}
constexpr ::Amazon::Lambda::PackageType*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__packageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::PackageType*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__packageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__packageType(::Amazon::Lambda::PackageType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packageType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__revisionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__revisionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__revisionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____revisionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__role() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__role() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__role(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____role)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Runtime*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__signingJobArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingJobArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__signingJobArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingJobArn;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__signingJobArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signingJobArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__signingProfileVersionArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingProfileVersionArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__signingProfileVersionArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingProfileVersionArn;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__signingProfileVersionArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signingProfileVersionArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::State*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::State*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__state(::Amazon::Lambda::State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__stateReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReason;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__stateReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReason;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__stateReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::StateReasonCode*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__stateReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReasonCode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::StateReasonCode*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__stateReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReasonCode;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__stateReasonCode(::Amazon::Lambda::StateReasonCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateReasonCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__timeout(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeout = value;
}
constexpr ::Amazon::Lambda::Model::TracingConfigResponse*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__tracingConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfigResponse*> const&
Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__tracingConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tracingConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::VpcConfigDetail*& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__vpcConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfigDetail*> const& Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_get__vpcConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr void Amazon::Lambda::Model::GetFunctionConfigurationResponse::__cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vpcConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_CodeSha256() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_CodeSha256", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_CodeSha256(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_CodeSha256",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetCodeSha256() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetCodeSha256", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_CodeSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_CodeSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_CodeSize(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_CodeSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetCodeSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetCodeSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeadLetterConfig* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_DeadLetterConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::DeadLetterConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetDeadLetterConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetDeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Description(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Description",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::EnvironmentResponse* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Environment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Environment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::EnvironmentResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Environment(::Amazon::Lambda::Model::EnvironmentResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::EnvironmentResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetEnvironment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FileSystemConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFileSystemConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetFileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FunctionArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_FunctionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FunctionArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FunctionArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFunctionArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetFunctionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_FunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_FunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_FunctionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetFunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetFunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Handler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Handler(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Handler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ImageConfigResponse* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_ImageConfigResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_ImageConfigResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfigResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_ImageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_ImageConfigResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfigResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetImageConfigResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetImageConfigResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_KMSKeyArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_KMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_KMSKeyArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_KMSKeyArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetKMSKeyArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetKMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_LastModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastModified(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastModified",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetLastModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_LastUpdateStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatus*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetLastUpdateStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatusReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_LastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatusReason(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReason",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatusReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetLastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::LastUpdateStatusReasonCode* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_LastUpdateStatusReasonCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_LastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatusReasonCode*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_LastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReasonCode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatusReasonCode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLastUpdateStatusReasonCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetLastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Layers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Layers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_MasterArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_MasterArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_MasterArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_MasterArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetMasterArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetMasterArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_MemorySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_MemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_MemorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetMemorySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetMemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::PackageType* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_PackageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_PackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::PackageType*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_PackageType(::Amazon::Lambda::PackageType* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetPackageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetPackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_RevisionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_RevisionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_RevisionId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_RevisionId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRevisionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetRevisionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Role() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Role", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Role(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Role",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRole() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetRole", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Runtime* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Runtime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Runtime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Runtime*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Runtime(::Amazon::Lambda::Runtime* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetRuntime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_SigningJobArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_SigningJobArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_SigningJobArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_SigningJobArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetSigningJobArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetSigningJobArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_SigningProfileVersionArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_SigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_SigningProfileVersionArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_SigningProfileVersionArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetSigningProfileVersionArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetSigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::State* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::State*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_State(::Amazon::Lambda::State* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_StateReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_StateReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_StateReason(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_StateReason",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetStateReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetStateReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::StateReasonCode* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_StateReasonCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_StateReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::StateReasonCode*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_StateReasonCode(::Amazon::Lambda::StateReasonCode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_StateReasonCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::StateReasonCode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetStateReasonCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetStateReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::TracingConfigResponse* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_TracingConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_TracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::TracingConfigResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_TracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfigResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetTracingConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetTracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_Version(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_Version",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::VpcConfigDetail* Amazon::Lambda::Model::GetFunctionConfigurationResponse::get_VpcConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "get_VpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::VpcConfigDetail*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::set_VpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfigDetail*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConfigurationResponse::IsSetVpcConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             "IsSetVpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetFunctionConfigurationResponse* Amazon::Lambda::Model::GetFunctionConfigurationResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>());
}
inline void Amazon::Lambda::Model::GetFunctionConfigurationResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConfigurationResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetFunctionConfigurationResponse::GetFunctionConfigurationResponse() {}
