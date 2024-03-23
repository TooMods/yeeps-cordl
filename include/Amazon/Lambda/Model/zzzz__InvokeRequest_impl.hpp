#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__InvokeRequest_def.hpp"
#include "Amazon/Lambda/zzzz__InvocationType_def.hpp"
#include "Amazon/Lambda/zzzz__LogType_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::get_Payload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2bc36c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_Payload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_Payload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::StringW)>(&::Amazon::Lambda::Model::InvokeRequest::set_Payload)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bc376c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_Payload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_ClientContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::get_ClientContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bc37dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "get_ClientContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_ClientContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_ClientContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bc3880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_ClientContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_ClientContextBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::get_ClientContextBase64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "get_ClientContextBase64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_ClientContextBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_ClientContextBase64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_ClientContextBase64",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetClientContextBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::IsSetClientContextBase64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "IsSetClientContextBase64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "get_FunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc393c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "IsSetFunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_InvocationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::InvocationType* (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::get_InvocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "get_InvocationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_InvocationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::Amazon::Lambda::InvocationType*)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_InvocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc395c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_InvocationType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::InvocationType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetInvocationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::IsSetInvocationType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc3964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "IsSetInvocationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_LogType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LogType* (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::get_LogType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc39c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_LogType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_LogType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::Amazon::Lambda::LogType*)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_LogType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc39cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_LogType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LogType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetLogType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::IsSetLogType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc39d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "IsSetLogType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_PayloadStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (::Amazon::Lambda::Model::InvokeRequest::*)()>(
    &::Amazon::Lambda::Model::InvokeRequest::get_PayloadStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "get_PayloadStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_PayloadStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::System::IO::MemoryStream*)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_PayloadStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_PayloadStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetPayloadStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::IsSetPayloadStream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                               "IsSetPayloadStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.get_Qualifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::get_Qualifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_Qualifier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.set_Qualifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::InvokeRequest::set_Qualifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_Qualifier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest.IsSetQualifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::IsSetQualifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc3a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "IsSetQualifier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::InvokeRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::InvokeRequest::*)()>(&::Amazon::Lambda::Model::InvokeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc3a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__clientContextBase64() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientContextBase64;
}
constexpr ::StringW const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__clientContextBase64() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientContextBase64;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__clientContextBase64(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientContextBase64)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::InvocationType*& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__invocationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invocationType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::InvocationType*> const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__invocationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invocationType;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__invocationType(::Amazon::Lambda::InvocationType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____invocationType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::LogType*& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__logType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LogType*> const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__logType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logType;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__logType(::Amazon::Lambda::LogType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__payloadStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____payloadStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__payloadStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____payloadStream;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__payloadStream(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____payloadStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__qualifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____qualifier;
}
constexpr ::StringW const& Amazon::Lambda::Model::InvokeRequest::__cordl_internal_get__qualifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____qualifier;
}
constexpr void Amazon::Lambda::Model::InvokeRequest::__cordl_internal_set__qualifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____qualifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::InvokeRequest::get_Payload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_Payload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_Payload(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_Payload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Lambda::Model::InvokeRequest::get_ClientContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "get_ClientContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_ClientContext(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_ClientContext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Lambda::Model::InvokeRequest::get_ClientContextBase64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "get_ClientContextBase64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_ClientContextBase64(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_ClientContextBase64",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetClientContextBase64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "IsSetClientContextBase64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::InvokeRequest::get_FunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_FunctionName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_FunctionName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetFunctionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "IsSetFunctionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::Model::InvokeRequest::get_InvocationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "get_InvocationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::InvocationType*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_InvocationType(::Amazon::Lambda::InvocationType* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_InvocationType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::InvocationType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetInvocationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "IsSetInvocationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::LogType* Amazon::Lambda::Model::InvokeRequest::get_LogType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_LogType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LogType*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_LogType(::Amazon::Lambda::LogType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_LogType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::LogType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetLogType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "IsSetLogType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IO::MemoryStream* Amazon::Lambda::Model::InvokeRequest::get_PayloadStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "get_PayloadStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_PayloadStream(::System::IO::MemoryStream* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_PayloadStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetPayloadStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(),
                                                                             "IsSetPayloadStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::InvokeRequest::get_Qualifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "get_Qualifier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::InvokeRequest::set_Qualifier(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "set_Qualifier", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::InvokeRequest::IsSetQualifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), "IsSetQualifier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::InvokeRequest* Amazon::Lambda::Model::InvokeRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::InvokeRequest*>());
}
inline void Amazon::Lambda::Model::InvokeRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::InvokeRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::InvokeRequest::InvokeRequest() {}
