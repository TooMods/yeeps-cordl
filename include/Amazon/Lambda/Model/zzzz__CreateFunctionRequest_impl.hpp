#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__CreateFunctionRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__DeadLetterConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__Environment_def.hpp"
#include "Amazon/Lambda/Model/zzzz__FileSystemConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__FunctionCode_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ImageConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__TracingConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__VpcConfig_def.hpp"
#include "Amazon/Lambda/zzzz__PackageType_def.hpp"
#include "Amazon/Lambda/zzzz__Runtime_def.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_StreamTransferProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* (
    ::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(&::Amazon::Lambda::Model::CreateFunctionRequest::get_StreamTransferProgress)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bc2cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_StreamTransferProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_StreamTransferProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(
    ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*)>(&::Amazon::Lambda::Model::CreateFunctionRequest::set_StreamTransferProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bc2d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_StreamTransferProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::FunctionCode* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Code", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::FunctionCode*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Code", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::FunctionCode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_CodeSigningConfigArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetCodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetCodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::DeadLetterConfig* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::DeadLetterConfig*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetDeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetDeadLetterConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetDeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Description",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Environment* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Environment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::Environment*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::Environment*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* (
    ::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(&::Amazon::Lambda::Model::CreateFunctionRequest::get_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*)>(&::Amazon::Lambda::Model::CreateFunctionRequest::set_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetFileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetFileSystemConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bc2ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetFileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_FunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetFunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Handler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_ImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfig* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_ImageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_ImageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_ImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::ImageConfig*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_ImageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_ImageConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetImageConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetImageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_KMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_KMSKeyArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetKMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetKMSKeyArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc2f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetKMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Layers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetLayers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bc2fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_MemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc3010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_MemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(int32_t)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_MemorySize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bc304c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_MemorySize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetMemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetMemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc30b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetMemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::PackageType* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc30f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_PackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_PackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::PackageType*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_PackageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc30f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetPackageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetPackageType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc3100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetPackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Publish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Publish)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc3160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Publish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Publish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(bool)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Publish)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bc319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Publish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetPublish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetPublish)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc3204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetPublish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Role", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Role",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetRole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetRole", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Runtime* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Runtime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Runtime*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc3270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(&::Amazon::Lambda::Model::CreateFunctionRequest::get_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc32d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Tags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::Lambda::Model::CreateFunctionRequest::set_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc32d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Tags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetTags)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bc32e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc3338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_Timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(int32_t)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bc3374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Timeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bc33dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::TracingConfig* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_TracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::TracingConfig*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetTracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetTracingConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetTracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.get_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::VpcConfig* (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::get_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "get_VpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.set_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)(::Amazon::Lambda::Model::VpcConfig*)>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::set_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest.IsSetVpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(
    &::Amazon::Lambda::Model::CreateFunctionRequest::IsSetVpcConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                               "IsSetVpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CreateFunctionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CreateFunctionRequest::*)()>(&::Amazon::Lambda::Model::CreateFunctionRequest::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2bc3458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Lambda::Model::FunctionCode*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::FunctionCode*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__code(::Amazon::Lambda::Model::FunctionCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__codeSigningConfigArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__codeSigningConfigArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__codeSigningConfigArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSigningConfigArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__deadLetterConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__deadLetterConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deadLetterConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::Environment*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::Environment*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__environment(::Amazon::Lambda::Model::Environment* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__fileSystemConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const&
Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__fileSystemConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileSystemConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__handler(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::ImageConfig*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__imageConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfig*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__imageConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfig;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__imageConfig(::Amazon::Lambda::Model::ImageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imageConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__kmsKeyArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__kmsKeyArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__kmsKeyArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kmsKeyArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__layers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__memorySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__memorySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memorySize = value;
}
constexpr ::Amazon::Lambda::PackageType*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__packageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::PackageType*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__packageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packageType;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__packageType(::Amazon::Lambda::PackageType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packageType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__publish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publish;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__publish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publish;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__publish(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publish = value;
}
constexpr ::StringW& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__role() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr ::StringW const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__role() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__role(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____role)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Runtime*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__timeout(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeout = value;
}
constexpr ::Amazon::Lambda::Model::TracingConfig*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__tracingConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfig*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__tracingConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tracingConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::VpcConfig*& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__vpcConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfig*> const& Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_get__vpcConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr void Amazon::Lambda::Model::CreateFunctionRequest::__cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vpcConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* Amazon::Lambda::Model::CreateFunctionRequest::get_StreamTransferProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_StreamTransferProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_StreamTransferProgress(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_StreamTransferProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::Model::FunctionCode* Amazon::Lambda::Model::CreateFunctionRequest::get_Code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "get_Code",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::FunctionCode*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Code(::Amazon::Lambda::Model::FunctionCode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Code", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::FunctionCode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_CodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_CodeSigningConfigArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_CodeSigningConfigArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetCodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeadLetterConfig* Amazon::Lambda::Model::CreateFunctionRequest::get_DeadLetterConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::DeadLetterConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetDeadLetterConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetDeadLetterConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_Description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Description(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Description",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::Environment* Amazon::Lambda::Model::CreateFunctionRequest::get_Environment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Environment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Environment*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Environment(::Amazon::Lambda::Model::Environment* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::Environment*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetEnvironment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* Amazon::Lambda::Model::CreateFunctionRequest::get_FileSystemConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetFileSystemConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetFileSystemConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_FunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_FunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_FunctionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetFunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetFunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_Handler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Handler(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Handler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ImageConfig* Amazon::Lambda::Model::CreateFunctionRequest::get_ImageConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_ImageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_ImageConfig(::Amazon::Lambda::Model::ImageConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_ImageConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetImageConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetImageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_KMSKeyArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_KMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_KMSKeyArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_KMSKeyArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetKMSKeyArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetKMSKeyArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Lambda::Model::CreateFunctionRequest::get_Layers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Layers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Layers(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::CreateFunctionRequest::get_MemorySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_MemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_MemorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetMemorySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetMemorySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::PackageType* Amazon::Lambda::Model::CreateFunctionRequest::get_PackageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_PackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::PackageType*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_PackageType(::Amazon::Lambda::PackageType* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_PackageType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::PackageType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetPackageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetPackageType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::get_Publish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Publish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Publish(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Publish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetPublish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetPublish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::CreateFunctionRequest::get_Role() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "get_Role",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Role(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Role", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetRole() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetRole", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Runtime* Amazon::Lambda::Model::CreateFunctionRequest::get_Runtime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Runtime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Runtime*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Runtime(::Amazon::Lambda::Runtime* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetRuntime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetRuntime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::Lambda::Model::CreateFunctionRequest::get_Tags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "get_Tags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Tags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetTags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::CreateFunctionRequest::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_Timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::TracingConfig* Amazon::Lambda::Model::CreateFunctionRequest::get_TracingConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_TracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::TracingConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_TracingConfig(::Amazon::Lambda::Model::TracingConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetTracingConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetTracingConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::VpcConfig* Amazon::Lambda::Model::CreateFunctionRequest::get_VpcConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "get_VpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::VpcConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::set_VpcConfig(::Amazon::Lambda::Model::VpcConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CreateFunctionRequest::IsSetVpcConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(),
                                                                             "IsSetVpcConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::CreateFunctionRequest* Amazon::Lambda::Model::CreateFunctionRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::CreateFunctionRequest*>());
}
inline void Amazon::Lambda::Model::CreateFunctionRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CreateFunctionRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::CreateFunctionRequest::CreateFunctionRequest() {}
