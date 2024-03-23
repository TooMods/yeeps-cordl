#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__DefaultRequest_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4SigningResult_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__DefaultRequest_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ParameterCollection_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__DefaultRequest____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__DefaultRequest____c::*)()>(
    &::Amazon::Runtime::Internal::__DefaultRequest____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__DefaultRequest____c._ComputeContentStreamHash_b__68_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::__DefaultRequest____c::*)(::System::IO::Stream*)>(
    &::Amazon::Runtime::Internal::__DefaultRequest____c::_ComputeContentStreamHash_b__68_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23d6540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get(), "<ComputeContentStreamHash>b__68_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::__DefaultRequest____c::setStaticF___9(::Amazon::Runtime::Internal::__DefaultRequest____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::__DefaultRequest____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get>(
      std::forward<::Amazon::Runtime::Internal::__DefaultRequest____c*>(value));
}
inline ::Amazon::Runtime::Internal::__DefaultRequest____c* Amazon::Runtime::Internal::__DefaultRequest____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::__DefaultRequest____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get>();
}
inline void Amazon::Runtime::Internal::__DefaultRequest____c::setStaticF___9__68_0(::System::Func_2<::System::IO::Stream*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::IO::Stream*, bool>*, "<>9__68_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get>(
      std::forward<::System::Func_2<::System::IO::Stream*, bool>*>(value));
}
inline ::System::Func_2<::System::IO::Stream*, bool>* Amazon::Runtime::Internal::__DefaultRequest____c::getStaticF___9__68_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::IO::Stream*, bool>*, "<>9__68_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get>();
}
inline ::Amazon::Runtime::Internal::__DefaultRequest____c* Amazon::Runtime::Internal::__DefaultRequest____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__DefaultRequest____c*>());
}
inline void Amazon::Runtime::Internal::__DefaultRequest____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::__DefaultRequest____c::_ComputeContentStreamHash_b__68_0(::System::IO::Stream* s) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__DefaultRequest____c*>::get(), "<ComputeContentStreamHash>b__68_0",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__DefaultRequest____c::__DefaultRequest____c() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::Amazon::Runtime::AmazonWebServiceRequest*, ::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x23d5750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_RequestName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_RequestName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_RequestName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_HttpMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_HttpMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_HttpMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_HttpMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_HttpMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_HttpMethod",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_UseQueryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_UseQueryString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23d5c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_UseQueryString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_UseQueryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(bool)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_UseQueryString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d5c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseQueryString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_OriginalRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonWebServiceRequest* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_OriginalRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_OriginalRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(&::Amazon::Runtime::Internal::DefaultRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_Headers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Runtime::Internal::DefaultRequest::*)()>(&::Amazon::Runtime::Internal::DefaultRequest::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_ParameterCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::ParameterCollection* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_ParameterCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_ParameterCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_SubResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Runtime::Internal::DefaultRequest::*)()>(&::Amazon::Runtime::Internal::DefaultRequest::get_SubResources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_SubResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.AddSubResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::AddSubResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddSubResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.AddSubResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::AddSubResource)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23d5cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddSubResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_Endpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::System::Uri*)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Endpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_ResourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_ResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_ResourcePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_ResourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_ResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_ResourcePath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_PathResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Runtime::Internal::DefaultRequest::*)()>(&::Amazon::Runtime::Internal::DefaultRequest::get_PathResources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_PathResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.AddPathResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::AddPathResource)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23d5d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddPathResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_MarshallerVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_MarshallerVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_MarshallerVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_MarshallerVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(int32_t)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_MarshallerVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_MarshallerVersion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_CanonicalResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_CanonicalResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_CanonicalResource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_CanonicalResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_CanonicalResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_CanonicalResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_Content", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Content", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_SetContentFromParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_SetContentFromParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_SetContentFromParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_SetContentFromParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(bool)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_SetContentFromParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d5e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_SetContentFromParameters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_ContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_ContentStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_ContentStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_ContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::System::IO::Stream*)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_ContentStream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23d5e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_ContentStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_OriginalStreamPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_OriginalStreamPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_OriginalStreamPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_OriginalStreamPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(int64_t)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_OriginalStreamPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_OriginalStreamPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.ComputeContentStreamHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::ComputeContentStreamHash)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x23d5f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "ComputeContentStreamHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_ServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_ServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_ServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_AlternateEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_AlternateEndpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d616c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_AlternateEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_AlternateEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::Amazon::RegionEndpoint*)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_AlternateEndpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AlternateEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_HostPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_HostPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d617c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_HostPrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_HostPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_HostPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_HostPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_Suppress404Exceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_Suppress404Exceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_Suppress404Exceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_Suppress404Exceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(bool)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_Suppress404Exceptions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d6194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Suppress404Exceptions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_AWS4SignerResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AWS4SigningResult* (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_AWS4SignerResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_AWS4SignerResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_AWS4SignerResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::Amazon::Runtime::Internal::Auth::AWS4SigningResult*)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_AWS4SignerResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AWS4SignerResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_DisablePayloadSigning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_DisablePayloadSigning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_DisablePayloadSigning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_DisablePayloadSigning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::System::Nullable_1<bool>)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_DisablePayloadSigning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_DisablePayloadSigning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_UseChunkEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_UseChunkEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_UseChunkEncoding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_UseChunkEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(bool)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_UseChunkEncoding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d61c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseChunkEncoding",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_CanonicalResourcePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_CanonicalResourcePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_CanonicalResourcePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_CanonicalResourcePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_CanonicalResourcePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_CanonicalResourcePrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_UseSigV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_UseSigV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_UseSigV4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_UseSigV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(bool)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_UseSigV4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d61ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseSigV4",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_AuthenticationRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_AuthenticationRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d61f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_AuthenticationRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_AuthenticationRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_AuthenticationRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AuthenticationRegion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_DeterminedSigningRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_DeterminedSigningRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_DeterminedSigningRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_DeterminedSigningRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_DeterminedSigningRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_DeterminedSigningRegion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.get_OverrideSigningServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::get_OverrideSigningServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "get_OverrideSigningServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.set_OverrideSigningServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::set_OverrideSigningServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_OverrideSigningServiceName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.IsRequestStreamRewindable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::IsRequestStreamRewindable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23d6228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "IsRequestStreamRewindable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.MayContainRequestBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::MayContainRequestBody)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23d6260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "MayContainRequestBody", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.HasRequestBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::DefaultRequest::*)()>(
    &::Amazon::Runtime::Internal::DefaultRequest::HasRequestBody)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23d630c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                               "HasRequestBody", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DefaultRequest.GetHeaderValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::DefaultRequest::*)(::StringW)>(
    &::Amazon::Runtime::Internal::DefaultRequest::GetHeaderValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x23d63ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "GetHeaderValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::IRequest"
constexpr Amazon::Runtime::Internal::DefaultRequest::operator ::Amazon::Runtime::Internal::IRequest*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::IRequest"
constexpr ::Amazon::Runtime::Internal::IRequest* Amazon::Runtime::Internal::DefaultRequest::i___Amazon__Runtime__Internal__IRequest() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IRequest*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::ParameterCollection*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_parametersCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parametersCollection;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParameterCollection*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_parametersCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parametersCollection;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_parametersCollection(::Amazon::Runtime::Internal::ParameterCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parametersCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_parametersFacade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parametersFacade;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_parametersFacade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parametersFacade;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_parametersFacade(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parametersFacade)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_subResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subResources;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_subResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subResources;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_subResources(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_pathResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathResources;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_pathResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathResources;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_pathResources(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pathResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_endpoint(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_serviceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceName;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_serviceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceName;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_serviceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serviceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_originalRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_originalRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalRequest;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_originalRequest(::Amazon::Runtime::AmazonWebServiceRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_content(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_contentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_contentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentStream;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_contentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_contentStreamHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentStreamHash;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_contentStreamHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentStreamHash;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_contentStreamHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentStreamHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_httpMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpMethod;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_httpMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpMethod;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_httpMethod(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___httpMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_useQueryString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useQueryString;
}
constexpr bool const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_useQueryString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useQueryString;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_useQueryString(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useQueryString = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_requestName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestName;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_requestName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestName;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_requestName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_canonicalResource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canonicalResource;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_canonicalResource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canonicalResource;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_canonicalResource(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___canonicalResource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::RegionEndpoint*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_alternateRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternateRegion;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_alternateRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternateRegion;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_alternateRegion(::Amazon::RegionEndpoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alternateRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_originalStreamLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalStreamLength;
}
constexpr int64_t const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_originalStreamLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalStreamLength;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_originalStreamLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalStreamLength = value;
}
constexpr int32_t& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_marshallerVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshallerVersion;
}
constexpr int32_t const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get_marshallerVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshallerVersion;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set_marshallerVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___marshallerVersion = value;
}
constexpr bool& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__SetContentFromParameters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SetContentFromParameters_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__SetContentFromParameters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SetContentFromParameters_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__SetContentFromParameters_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SetContentFromParameters_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__HostPrefix_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HostPrefix_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__HostPrefix_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HostPrefix_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__HostPrefix_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HostPrefix_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__Suppress404Exceptions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Suppress404Exceptions_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__Suppress404Exceptions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Suppress404Exceptions_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__Suppress404Exceptions_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Suppress404Exceptions_k__BackingField = value;
}
constexpr ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__AWS4SignerResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AWS4SignerResult_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*> const&
Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__AWS4SignerResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AWS4SignerResult_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__AWS4SignerResult_k__BackingField(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AWS4SignerResult_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__DisablePayloadSigning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisablePayloadSigning_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__DisablePayloadSigning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisablePayloadSigning_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__DisablePayloadSigning_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisablePayloadSigning_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__UseChunkEncoding_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseChunkEncoding_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__UseChunkEncoding_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseChunkEncoding_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__UseChunkEncoding_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseChunkEncoding_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__CanonicalResourcePrefix_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CanonicalResourcePrefix_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__CanonicalResourcePrefix_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CanonicalResourcePrefix_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__CanonicalResourcePrefix_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CanonicalResourcePrefix_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__UseSigV4_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseSigV4_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__UseSigV4_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseSigV4_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__UseSigV4_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseSigV4_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__AuthenticationRegion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthenticationRegion_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__AuthenticationRegion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthenticationRegion_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__AuthenticationRegion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AuthenticationRegion_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__DeterminedSigningRegion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeterminedSigningRegion_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__DeterminedSigningRegion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeterminedSigningRegion_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__DeterminedSigningRegion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DeterminedSigningRegion_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__OverrideSigningServiceName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OverrideSigningServiceName_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_get__OverrideSigningServiceName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OverrideSigningServiceName_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DefaultRequest::__cordl_internal_set__OverrideSigningServiceName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OverrideSigningServiceName_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::DefaultRequest* Amazon::Runtime::Internal::DefaultRequest::New_ctor(::Amazon::Runtime::AmazonWebServiceRequest* request, ::StringW serviceName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::DefaultRequest*>(request, serviceName));
}
inline void Amazon::Runtime::Internal::DefaultRequest::_ctor(::Amazon::Runtime::AmazonWebServiceRequest* request, ::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, serviceName);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_RequestName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_RequestName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_HttpMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_HttpMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_HttpMethod(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_HttpMethod",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::get_UseQueryString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_UseQueryString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_UseQueryString(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseQueryString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::AmazonWebServiceRequest* Amazon::Runtime::Internal::DefaultRequest::get_OriginalRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_OriginalRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceRequest*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::DefaultRequest::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "get_Headers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::DefaultRequest::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::ParameterCollection* Amazon::Runtime::Internal::DefaultRequest::get_ParameterCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_ParameterCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::ParameterCollection*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::DefaultRequest::get_SubResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_SubResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::AddSubResource(::StringW subResource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddSubResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subResource);
}
inline void Amazon::Runtime::Internal::DefaultRequest::AddSubResource(::StringW subResource, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddSubResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subResource, value);
}
inline ::System::Uri* Amazon::Runtime::Internal::DefaultRequest::get_Endpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_Endpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_Endpoint(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Endpoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_ResourcePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_ResourcePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_ResourcePath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_ResourcePath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::DefaultRequest::get_PathResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_PathResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::AddPathResource(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "AddPathResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline int32_t Amazon::Runtime::Internal::DefaultRequest::get_MarshallerVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_MarshallerVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_MarshallerVersion(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_MarshallerVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_CanonicalResource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_CanonicalResource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_CanonicalResource(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_CanonicalResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::Internal::DefaultRequest::get_Content() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "get_Content",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_Content(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Content", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::get_SetContentFromParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_SetContentFromParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_SetContentFromParameters(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_SetContentFromParameters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IO::Stream* Amazon::Runtime::Internal::DefaultRequest::get_ContentStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_ContentStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_ContentStream(::System::IO::Stream* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_ContentStream",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Amazon::Runtime::Internal::DefaultRequest::get_OriginalStreamPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_OriginalStreamPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_OriginalStreamPosition(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_OriginalStreamPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::ComputeContentStreamHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "ComputeContentStreamHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_ServiceName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_ServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::Internal::DefaultRequest::get_AlternateEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_AlternateEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_AlternateEndpoint(::Amazon::RegionEndpoint* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AlternateEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_HostPrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_HostPrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_HostPrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_HostPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::get_Suppress404Exceptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_Suppress404Exceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_Suppress404Exceptions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_Suppress404Exceptions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* Amazon::Runtime::Internal::DefaultRequest::get_AWS4SignerResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_AWS4SignerResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_AWS4SignerResult(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AWS4SignerResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Amazon::Runtime::Internal::DefaultRequest::get_DisablePayloadSigning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_DisablePayloadSigning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_DisablePayloadSigning(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_DisablePayloadSigning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::get_UseChunkEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_UseChunkEncoding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_UseChunkEncoding(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseChunkEncoding",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_CanonicalResourcePrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_CanonicalResourcePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_CanonicalResourcePrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_CanonicalResourcePrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::get_UseSigV4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_UseSigV4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_UseSigV4(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_UseSigV4",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_AuthenticationRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_AuthenticationRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_AuthenticationRegion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_AuthenticationRegion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_DeterminedSigningRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_DeterminedSigningRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_DeterminedSigningRegion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_DeterminedSigningRegion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::get_OverrideSigningServiceName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "get_OverrideSigningServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DefaultRequest::set_OverrideSigningServiceName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "set_OverrideSigningServiceName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::IsRequestStreamRewindable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "IsRequestStreamRewindable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::MayContainRequestBody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "MayContainRequestBody", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::DefaultRequest::HasRequestBody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(),
                                                                             "HasRequestBody", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::DefaultRequest::GetHeaderValue(::StringW headerName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DefaultRequest*>::get(), "GetHeaderValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, headerName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::DefaultRequest::DefaultRequest() {}
