#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IAmazonWebServiceRequest_def.hpp"
#include "Amazon/Runtime/zzzz__RequestEventArgs_def.hpp"
#include "Amazon/Runtime/zzzz__RequestEventHandler_def.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.get_UserAgentAddition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::get_UserAgentAddition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                               "get_UserAgentAddition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.set_UserAgentAddition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::StringW)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::set_UserAgentAddition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "set_UserAgentAddition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.add_BeforeRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::add_BeforeRequestEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdf22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "add_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.remove_BeforeRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::remove_BeforeRequestEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdf354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "remove_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_StreamUploadProgressCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* (
    ::Amazon::Runtime::AmazonWebServiceRequest::*)()>(&::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_StreamUploadProgressCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                               "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_StreamUploadProgressCallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_StreamUploadProgressCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*)>(
        &::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_StreamUploadProgressCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_StreamUploadProgressCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_RequestState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* (
    ::Amazon::Runtime::AmazonWebServiceRequest::*)()>(&::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_RequestState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fdf48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                    "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_RequestState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(&::Amazon::Runtime::AmazonWebServiceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_AddBeforeRequestHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_AddBeforeRequestHandler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fdf514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.AddBeforeRequestHandler",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_RemoveBeforeRequestHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_RemoveBeforeRequestHandler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fdf518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.RemoveBeforeRequestHandler",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.FireBeforeRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(::System::Object*, ::Amazon::Runtime::RequestEventArgs*)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::FireBeforeRequestEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fdd14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "FireBeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_UseSigV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_UseSigV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                    "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_UseSigV4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_UseSigV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonWebServiceRequest::*)(bool)>(
    &::Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_UseSigV4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fdf524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                               "Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_UseSigV4", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.get_Expect100Continue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::get_Expect100Continue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.GetExpect100Continue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::GetExpect100Continue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fdf538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                               "GetExpect100Continue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.get_IncludeSHA256Header
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::get_IncludeSHA256Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.GetIncludeSHA256Header
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::GetIncludeSHA256Header)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fdf54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                               "GetIncludeSHA256Header", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.CreateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::CreateSigner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdf558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonWebServiceRequest.GetSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::AmazonWebServiceRequest::*)()>(
    &::Amazon::Runtime::AmazonWebServiceRequest::GetSigner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fdf560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "GetSigner",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::IAmazonWebServiceRequest"
constexpr Amazon::Runtime::AmazonWebServiceRequest::operator ::Amazon::Runtime::Internal::IAmazonWebServiceRequest*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IAmazonWebServiceRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::IAmazonWebServiceRequest"
constexpr ::Amazon::Runtime::Internal::IAmazonWebServiceRequest* Amazon::Runtime::AmazonWebServiceRequest::i___Amazon__Runtime__Internal__IAmazonWebServiceRequest() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IAmazonWebServiceRequest*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::RequestEventHandler*& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get_mBeforeRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeRequestEvent;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::RequestEventHandler*> const& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get_mBeforeRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeRequestEvent;
}
constexpr void Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_set_mBeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBeforeRequestEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__UserAgentAddition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserAgentAddition_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__UserAgentAddition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserAgentAddition_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_set__UserAgentAddition_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UserAgentAddition_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*&
Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*> const&
Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField(
    ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get_requestState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const&
Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get_requestState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestState;
}
constexpr void Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_set_requestState(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField;
}
constexpr bool const& Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonWebServiceRequest::__cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField = value;
}
inline ::StringW Amazon::Runtime::AmazonWebServiceRequest::get_UserAgentAddition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                             "get_UserAgentAddition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::set_UserAgentAddition(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "set_UserAgentAddition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::add_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "add_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::remove_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "remove_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*
Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_StreamUploadProgressCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                             "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_StreamUploadProgressCallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_StreamUploadProgressCallback(
    ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_StreamUploadProgressCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_RequestState() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                  "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_RequestState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AmazonWebServiceRequest* Amazon::Runtime::AmazonWebServiceRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AmazonWebServiceRequest*>());
}
inline void Amazon::Runtime::AmazonWebServiceRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_AddBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.AddBeforeRequestHandler",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_RemoveBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "Amazon.Runtime.Internal.IAmazonWebServiceRequest.RemoveBeforeRequestHandler",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::FireBeforeRequestEvent(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "FireBeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, args);
}
inline bool Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_UseSigV4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                               "Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_UseSigV4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonWebServiceRequest::Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_UseSigV4(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                             "Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_UseSigV4", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::AmazonWebServiceRequest::get_Expect100Continue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::AmazonWebServiceRequest::GetExpect100Continue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                             "GetExpect100Continue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::AmazonWebServiceRequest::get_IncludeSHA256Header() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::AmazonWebServiceRequest::GetIncludeSHA256Header() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                             "GetIncludeSHA256Header", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::AmazonWebServiceRequest::CreateSigner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::AmazonWebServiceRequest::GetSigner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonWebServiceRequest*>::get(), "GetSigner",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::AmazonWebServiceRequest::AmazonWebServiceRequest() {}
