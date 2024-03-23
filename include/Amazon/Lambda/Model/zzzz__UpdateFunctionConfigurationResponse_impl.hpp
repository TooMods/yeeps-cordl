#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__UpdateFunctionConfigurationResponse_def.hpp"
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
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_CodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_CodeSha256)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_CodeSha256",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_CodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_CodeSha256)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_CodeSha256",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetCodeSha256
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetCodeSha256)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310bf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetCodeSha256",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_CodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_CodeSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310bfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_CodeSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_CodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(int64_t)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_CodeSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x310bfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_CodeSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetCodeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetCodeSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310c04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetCodeSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::DeadLetterConfig* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_DeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::DeadLetterConfig*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetDeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetDeadLetterConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetDeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Description",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Description",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetDescription",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::EnvironmentResponse* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Environment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::Amazon::Lambda::Model::EnvironmentResponse*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::EnvironmentResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetEnvironment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* (
    ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetFileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFileSystemConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x310c0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_FunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FunctionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FunctionArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_FunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FunctionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FunctionArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetFunctionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFunctionArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFunctionArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Handler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Handler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetHandler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_ImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfigResponse* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_ImageConfigResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "get_ImageConfigResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_ImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::Amazon::Lambda::Model::ImageConfigResponse*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_ImageConfigResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_ImageConfigResponse",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfigResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetImageConfigResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetImageConfigResponse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "IsSetImageConfigResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_KMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_KMSKeyArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetKMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetKMSKeyArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetKMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_LastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_LastModified",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_LastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastModified",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetLastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastModified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLastModified",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_LastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatus* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_LastUpdateStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_LastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::LastUpdateStatus*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetLastUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLastUpdateStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_LastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "get_LastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_LastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReason",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetLastUpdateStatusReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatusReason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "IsSetLastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_LastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatusReasonCode* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "get_LastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_LastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::Amazon::Lambda::LastUpdateStatusReasonCode*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReasonCode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatusReasonCode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetLastUpdateStatusReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatusReasonCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "IsSetLastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* (
    ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Layers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLayers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x310c31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_MasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_MasterArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_MasterArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_MasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_MasterArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_MasterArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetMasterArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetMasterArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetMasterArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_MemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310c390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_MemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(int32_t)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_MemorySize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x310c3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_MemorySize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetMemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetMemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310c434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetMemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::PackageType* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_PackageType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::PackageType*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetPackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetPackageType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetPackageType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_RevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_RevisionId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetRevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRevisionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Role",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Role",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRole",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Runtime* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Runtime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::Runtime*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRuntime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_SigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_SigningJobArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_SigningJobArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_SigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_SigningJobArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_SigningJobArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetSigningJobArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetSigningJobArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetSigningJobArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_SigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_SigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "get_SigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_SigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_SigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_SigningProfileVersionArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetSigningProfileVersionArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetSigningProfileVersionArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                                 "IsSetSigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::State* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_State",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::State*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_StateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_StateReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_StateReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_StateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_StateReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_StateReason",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetStateReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetStateReason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetStateReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_StateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::StateReasonCode* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_StateReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_StateReasonCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_StateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::StateReasonCode*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_StateReasonCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_StateReasonCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::StateReasonCode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetStateReasonCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetStateReasonCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310c670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetStateReasonCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Timeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310c6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Timeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(int32_t)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Timeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x310c70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Timeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310c774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetTimeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::TracingConfigResponse* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_TracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(
    ::Amazon::Lambda::Model::TracingConfigResponse*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfigResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetTracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetTracingConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetTracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Version",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Version",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.get_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::VpcConfigDetail* (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_VpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.set_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)(::Amazon::Lambda::Model::VpcConfigDetail*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310c7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfigDetail*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse.IsSetVpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetVpcConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310c800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetVpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x310c810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__codeSha256() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSha256;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__codeSha256() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSha256;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__codeSha256(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSha256)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__codeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSize;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__codeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSize;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__codeSize(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____codeSize = value;
}
constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__deadLetterConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__deadLetterConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deadLetterConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::EnvironmentResponse*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::EnvironmentResponse*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__environment(::Amazon::Lambda::Model::EnvironmentResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__fileSystemConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__fileSystemConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr void
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileSystemConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__functionArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__functionArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__functionArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__handler(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::ImageConfigResponse*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__imageConfigResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfigResponse;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfigResponse*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__imageConfigResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfigResponse;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__imageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imageConfigResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__kmsKeyArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__kmsKeyArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__kmsKeyArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kmsKeyArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__lastModified(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastModified)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::LastUpdateStatus*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatus*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatus;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReason;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReason;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatusReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatusReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::LastUpdateStatusReasonCode*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReasonCode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatusReasonCode*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__lastUpdateStatusReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateStatusReasonCode;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__lastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUpdateStatusReasonCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__masterArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__masterArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__masterArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__memorySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__memorySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memorySize = value;
}
constexpr ::Amazon::Lambda::PackageType*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__packageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::PackageType*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__packageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__packageType(::Amazon::Lambda::PackageType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packageType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__revisionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__revisionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__revisionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____revisionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__role() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__role() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__role(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____role)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Runtime*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__signingJobArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingJobArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__signingJobArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingJobArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__signingJobArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signingJobArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__signingProfileVersionArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingProfileVersionArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__signingProfileVersionArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signingProfileVersionArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__signingProfileVersionArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signingProfileVersionArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::State*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::State*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__state(::Amazon::Lambda::State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__stateReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReason;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__stateReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReason;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__stateReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::StateReasonCode*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__stateReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReasonCode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::StateReasonCode*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__stateReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateReasonCode;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__stateReasonCode(::Amazon::Lambda::StateReasonCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateReasonCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__timeout(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeout = value;
}
constexpr ::Amazon::Lambda::Model::TracingConfigResponse*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__tracingConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfigResponse*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__tracingConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tracingConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::VpcConfigDetail*& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__vpcConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfigDetail*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_get__vpcConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::__cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vpcConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_CodeSha256() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_CodeSha256",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_CodeSha256(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_CodeSha256",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetCodeSha256() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetCodeSha256",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_CodeSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_CodeSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_CodeSize(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_CodeSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetCodeSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetCodeSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeadLetterConfig* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_DeadLetterConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_DeadLetterConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::DeadLetterConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetDeadLetterConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetDeadLetterConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Description() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Description",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Description(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Description",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetDescription",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::EnvironmentResponse* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Environment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Environment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::EnvironmentResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Environment(::Amazon::Lambda::Model::EnvironmentResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::EnvironmentResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetEnvironment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FileSystemConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FileSystemConfigs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFileSystemConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFileSystemConfigs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FunctionArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FunctionArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FunctionArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FunctionArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFunctionArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFunctionArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_FunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_FunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_FunctionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetFunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetFunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Handler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Handler(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Handler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetHandler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ImageConfigResponse* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_ImageConfigResponse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_ImageConfigResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfigResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_ImageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_ImageConfigResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfigResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetImageConfigResponse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetImageConfigResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_KMSKeyArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_KMSKeyArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_KMSKeyArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_KMSKeyArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetKMSKeyArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetKMSKeyArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastModified() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_LastModified",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastModified(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastModified",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastModified() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLastModified",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_LastUpdateStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatus*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLastUpdateStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatusReason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "get_LastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatusReason(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReason",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatusReason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "IsSetLastUpdateStatusReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::LastUpdateStatusReasonCode* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_LastUpdateStatusReasonCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "get_LastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatusReasonCode*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_LastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_LastUpdateStatusReasonCode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LastUpdateStatusReasonCode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLastUpdateStatusReasonCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "IsSetLastUpdateStatusReasonCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Layers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Layers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_MasterArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_MasterArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_MasterArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_MasterArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetMasterArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetMasterArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_MemorySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_MemorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetMemorySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetMemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::PackageType* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_PackageType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_PackageType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::PackageType*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_PackageType(::Amazon::Lambda::PackageType* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetPackageType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetPackageType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_RevisionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_RevisionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_RevisionId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_RevisionId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRevisionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRevisionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Role() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Role",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Role(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Role",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRole() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRole",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Runtime* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Runtime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Runtime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Runtime*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Runtime(::Amazon::Lambda::Runtime* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetRuntime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetRuntime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_SigningJobArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_SigningJobArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_SigningJobArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_SigningJobArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetSigningJobArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetSigningJobArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_SigningProfileVersionArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "get_SigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_SigningProfileVersionArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_SigningProfileVersionArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetSigningProfileVersionArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(),
                                               "IsSetSigningProfileVersionArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::State* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_State() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_State",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::State*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_State(::Amazon::Lambda::State* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_StateReason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_StateReason",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_StateReason(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_StateReason",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetStateReason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetStateReason",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::StateReasonCode* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_StateReasonCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_StateReasonCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::StateReasonCode*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_StateReasonCode(::Amazon::Lambda::StateReasonCode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_StateReasonCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::StateReasonCode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetStateReasonCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetStateReasonCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Timeout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::TracingConfigResponse* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_TracingConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_TracingConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::TracingConfigResponse*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_TracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfigResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetTracingConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetTracingConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_Version",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_Version(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_Version",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::VpcConfigDetail* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::get_VpcConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "get_VpcConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::VpcConfigDetail*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::set_VpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfigDetail*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::IsSetVpcConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), "IsSetVpcConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse* Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>());
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::UpdateFunctionConfigurationResponse::UpdateFunctionConfigurationResponse() {}
