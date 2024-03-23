#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__UpdateFunctionConfigurationRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__DeadLetterConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__Environment_def.hpp"
#include "Amazon/Lambda/Model/zzzz__FileSystemConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ImageConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__TracingConfig_def.hpp"
#include "Amazon/Lambda/Model/zzzz__VpcConfig_def.hpp"
#include "Amazon/Lambda/zzzz__Runtime_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::DeadLetterConfig* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310b9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_DeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_DeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Model::DeadLetterConfig*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_DeadLetterConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310b9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetDeadLetterConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetDeadLetterConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetDeadLetterConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Description",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310b9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Description",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310b9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetDescription",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Environment* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Environment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Model::Environment*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::Environment*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310ba18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetEnvironment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* (
    ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_FileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_FileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_FileSystemConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetFileSystemConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetFileSystemConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x310ba38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetFileSystemConfigs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_FunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310ba94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310ba9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetFunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310baac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Handler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Handler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310babc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetHandler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_ImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfig* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_ImageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_ImageConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_ImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Model::ImageConfig*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_ImageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_ImageConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetImageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetImageConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310badc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetImageConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310baec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_KMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_KMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_KMSKeyArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310baf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_KMSKeyArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetKMSKeyArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetKMSKeyArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310bafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetKMSKeyArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Layers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Layers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_IsLayersSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_IsLayersSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x310bb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_IsLayersSet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_IsLayersSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(bool)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_IsLayersSet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x310bb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_IsLayersSet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetLayers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x310bc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_MemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310bc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_MemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_MemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(int32_t)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_MemorySize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x310bc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_MemorySize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetMemorySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetMemorySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310bcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetMemorySize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_RevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_RevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_RevisionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_RevisionId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetRevisionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRevisionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRevisionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Role",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Role
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Role",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310bd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRole",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Runtime* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Runtime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Runtime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Runtime*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Runtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x310bd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRuntime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Timeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(int32_t)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x310bddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Timeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x310be44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetTimeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::TracingConfig* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310be80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_TracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_TracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Model::TracingConfig*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_TracingConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310be88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetTracingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetTracingConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310be90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetTracingConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.get_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::VpcConfig* (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_VpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.set_VpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)(::Amazon::Lambda::Model::VpcConfig*)>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_VpcConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x310bea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest.IsSetVpcConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetVpcConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x310beb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetVpcConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::*)()>(
    &::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x310bec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__deadLetterConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__deadLetterConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deadLetterConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deadLetterConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::Environment*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::Environment*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__environment(::Amazon::Lambda::Model::Environment* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__fileSystemConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__fileSystemConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileSystemConfigs;
}
constexpr void
Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileSystemConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__handler(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::ImageConfig*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__imageConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfig*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__imageConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__imageConfig(::Amazon::Lambda::Model::ImageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imageConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__kmsKeyArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__kmsKeyArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsKeyArn;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__kmsKeyArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kmsKeyArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__layers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__memorySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__memorySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memorySize;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memorySize = value;
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__revisionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__revisionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revisionId;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__revisionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____revisionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__role() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr ::StringW const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__role() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____role;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__role(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____role)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Runtime*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtime;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runtime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__timeout(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeout = value;
}
constexpr ::Amazon::Lambda::Model::TracingConfig*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__tracingConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfig*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__tracingConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracingConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tracingConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::VpcConfig*& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__vpcConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfig*> const& Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_get__vpcConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vpcConfig;
}
constexpr void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::__cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vpcConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Lambda::Model::DeadLetterConfig* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_DeadLetterConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_DeadLetterConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::DeadLetterConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_DeadLetterConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::DeadLetterConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetDeadLetterConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetDeadLetterConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Description() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Description",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Description(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Description",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetDescription",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::Environment* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Environment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Environment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Environment*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Environment(::Amazon::Lambda::Model::Environment* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Environment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::Environment*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetEnvironment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_FileSystemConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_FileSystemConfigs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_FileSystemConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetFileSystemConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetFileSystemConfigs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_FunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_FunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_FunctionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetFunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetFunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Handler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Handler(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Handler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetHandler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ImageConfig* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_ImageConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_ImageConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_ImageConfig(::Amazon::Lambda::Model::ImageConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_ImageConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ImageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetImageConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetImageConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_KMSKeyArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_KMSKeyArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_KMSKeyArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_KMSKeyArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetKMSKeyArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetKMSKeyArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Layers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Layers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Layers(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Layers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_IsLayersSet() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_IsLayersSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_IsLayersSet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_IsLayersSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_MemorySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_MemorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_MemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetMemorySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetMemorySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_RevisionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_RevisionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_RevisionId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_RevisionId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRevisionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRevisionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Role() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Role",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Role(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Role",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRole() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRole",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Runtime* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Runtime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Runtime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Runtime*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Runtime(::Amazon::Lambda::Runtime* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Runtime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Runtime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetRuntime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetRuntime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_Timeout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_Timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::TracingConfig* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_TracingConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_TracingConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::TracingConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_TracingConfig(::Amazon::Lambda::Model::TracingConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_TracingConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::TracingConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetTracingConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetTracingConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::VpcConfig* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::get_VpcConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "get_VpcConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::VpcConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::set_VpcConfig(::Amazon::Lambda::Model::VpcConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "set_VpcConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::VpcConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::IsSetVpcConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), "IsSetVpcConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest* Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>());
}
inline void Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest() {}
