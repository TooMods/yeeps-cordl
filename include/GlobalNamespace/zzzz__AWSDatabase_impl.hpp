#pragma once
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetItemResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateItemResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__InvokeResponse_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValueUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBClient_def.hpp"
#include "Amazon/Lambda/Model/zzzz__InvokeResponse_def.hpp"
#include "Amazon/Lambda/zzzz__AmazonLambdaClient_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)()>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::get_data)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x158fe18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(),
                                                                               "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(bool, ::StringW, ::OVRSimpleJSON::JSONNode*, ::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x158fe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x158fea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.FailureResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__LambdaResponse (*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::FailureResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x15900b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "FailureResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)()>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetErrorMessage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x15861f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(),
                                                                               "GetErrorMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.ContainsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::ContainsKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x15900c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "ContainsKey",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetInt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x159012c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetIntAsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetIntAsBool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1590194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetIntAsBool",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x15901b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW, ::UnityEngine::Color)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetColor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1590214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW, ::System::DateTime)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetDate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x159031c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetDate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.TryGetDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW, ByRef<::System::DateTime>)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::TryGetDate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x15903e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "TryGetDate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetStringList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetStringList)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x15904f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetStringList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.GetIntList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__LambdaResponse::GetIntList)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1590680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetIntList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__LambdaResponse.TryGetSubData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__LambdaResponse::*)(
    ::StringW, ByRef<::GlobalNamespace::__AWSDatabase__LambdaResponse>)>(&::GlobalNamespace::__AWSDatabase__LambdaResponse::TryGetSubData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1590810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "TryGetSubData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AWSDatabase__LambdaResponse>>::get() })));
    return ___internal_method;
  }
};
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::__AWSDatabase__LambdaResponse::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(),
                                                                             "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase__LambdaResponse::_ctor(bool success, ::StringW errTypeRaw, ::OVRSimpleJSON::JSONNode* body, ::StringW alternateError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, errTypeRaw, body, alternateError);
}
inline void GlobalNamespace::__AWSDatabase__LambdaResponse::_ctor(::OVRSimpleJSON::JSONNode* responseData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseData);
}
/// @param alternateError: ::StringW (default: nullptr)
inline ::GlobalNamespace::__AWSDatabase__LambdaResponse GlobalNamespace::__AWSDatabase__LambdaResponse::FailureResponse(::StringW errTypeRaw, ::StringW alternateError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "FailureResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__LambdaResponse, false>(nullptr, ___internal_method, errTypeRaw, alternateError);
}
inline ::StringW GlobalNamespace::__AWSDatabase__LambdaResponse::GetErrorMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(),
                                                                             "GetErrorMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AWSDatabase__LambdaResponse::ContainsKey(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "ContainsKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline int32_t GlobalNamespace::__AWSDatabase__LambdaResponse::GetInt(::StringW key, int32_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, defaultValue);
}
inline bool GlobalNamespace::__AWSDatabase__LambdaResponse::GetIntAsBool(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetIntAsBool",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline ::StringW GlobalNamespace::__AWSDatabase__LambdaResponse::GetString(::StringW key, ::StringW defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
inline ::UnityEngine::Color GlobalNamespace::__AWSDatabase__LambdaResponse::GetColor(::StringW key, ::UnityEngine::Color defaultColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, key, defaultColor);
}
inline ::System::DateTime GlobalNamespace::__AWSDatabase__LambdaResponse::GetDate(::StringW key, ::System::DateTime defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetDate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, key, defaultValue);
}
inline bool GlobalNamespace::__AWSDatabase__LambdaResponse::TryGetDate(::StringW key, ByRef<::System::DateTime> date) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "TryGetDate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, date);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__AWSDatabase__LambdaResponse::GetStringList(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetStringList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::__AWSDatabase__LambdaResponse::GetIntList(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "GetIntList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, key);
}
inline bool GlobalNamespace::__AWSDatabase__LambdaResponse::TryGetSubData(::StringW key, ByRef<::GlobalNamespace::__AWSDatabase__LambdaResponse> map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__LambdaResponse>::get(), "TryGetSubData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AWSDatabase__LambdaResponse>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, map);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "body", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "alternateError", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }]
constexpr ::GlobalNamespace::__AWSDatabase__LambdaResponse::__AWSDatabase__LambdaResponse(bool success, ::StringW errTypeRaw, ::OVRSimpleJSON::JSONNode* body, ::StringW alternateError) noexcept {
  this->success = success;
  this->errTypeRaw = errTypeRaw;
  this->body = body;
  this->alternateError = alternateError;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase__LambdaResponse::__AWSDatabase__LambdaResponse() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::GlobalNamespace::__AWSDatabase__DynamoResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1590914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.FailureResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__DynamoResponse (*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::FailureResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1590924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "FailureResponse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.ContainsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::ContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x15909c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "ContainsKey",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1590a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetIntAsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetIntAsBool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1590aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetIntAsBool",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1590ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW, ::UnityEngine::Color)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetColor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1590b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW, ::System::DateTime)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetDate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1590c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetDate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.TryGetDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW, ByRef<::System::DateTime>)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::TryGetDate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1590d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "TryGetDate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetStringList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetStringList)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x1590e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetStringList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetIntList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::GetIntList)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1591084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetIntList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetSubDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* (
    ::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(&::GlobalNamespace::__AWSDatabase__DynamoResponse::GetSubDataList)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x15912d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetSubDataList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.TryGetSubData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(
    ::StringW, ByRef<::GlobalNamespace::__AWSDatabase__DynamoResponse>)>(&::GlobalNamespace::__AWSDatabase__DynamoResponse::TryGetSubData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1591560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "TryGetSubData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AWSDatabase__DynamoResponse>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.ExtractKeysFromSubData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::__AWSDatabase__DynamoResponse::*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__DynamoResponse::ExtractKeysFromSubData)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1591634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "ExtractKeysFromSubData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__DynamoResponse.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* (
    ::GlobalNamespace::__AWSDatabase__DynamoResponse::*)()>(&::GlobalNamespace::__AWSDatabase__DynamoResponse::GetAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1591870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(),
                                                                               "GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AWSDatabase__DynamoResponse::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline ::GlobalNamespace::__AWSDatabase__DynamoResponse GlobalNamespace::__AWSDatabase__DynamoResponse::FailureResponse(::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "FailureResponse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__DynamoResponse, false>(nullptr, ___internal_method, errTypeRaw);
}
inline bool GlobalNamespace::__AWSDatabase__DynamoResponse::ContainsKey(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "ContainsKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline int32_t GlobalNamespace::__AWSDatabase__DynamoResponse::GetInt(::StringW key, int32_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, defaultValue);
}
inline bool GlobalNamespace::__AWSDatabase__DynamoResponse::GetIntAsBool(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetIntAsBool",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline ::StringW GlobalNamespace::__AWSDatabase__DynamoResponse::GetString(::StringW key, ::StringW defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
inline ::UnityEngine::Color GlobalNamespace::__AWSDatabase__DynamoResponse::GetColor(::StringW key, ::UnityEngine::Color defaultColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, key, defaultColor);
}
inline ::System::DateTime GlobalNamespace::__AWSDatabase__DynamoResponse::GetDate(::StringW key, ::System::DateTime defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetDate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, key, defaultValue);
}
inline bool GlobalNamespace::__AWSDatabase__DynamoResponse::TryGetDate(::StringW key, ByRef<::System::DateTime> date) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "TryGetDate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, date);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__AWSDatabase__DynamoResponse::GetStringList(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetStringList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::__AWSDatabase__DynamoResponse::GetIntList(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetIntList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GlobalNamespace::__AWSDatabase__DynamoResponse::GetSubDataList(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "GetSubDataList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*, false>(this, ___internal_method, key);
}
inline bool GlobalNamespace::__AWSDatabase__DynamoResponse::TryGetSubData(::StringW key, ByRef<::GlobalNamespace::__AWSDatabase__DynamoResponse> map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "TryGetSubData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AWSDatabase__DynamoResponse>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, map);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__AWSDatabase__DynamoResponse::ExtractKeysFromSubData(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(), "ExtractKeysFromSubData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* GlobalNamespace::__AWSDatabase__DynamoResponse::GetAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__DynamoResponse>::get(),
                                                                             "GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "attributes", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__AWSDatabase__DynamoResponse::__AWSDatabase__DynamoResponse(
    bool success, ::StringW errTypeRaw, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* attributes) noexcept {
  this->success = success;
  this->errTypeRaw = errTypeRaw;
  this->attributes = attributes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase__DynamoResponse::__AWSDatabase__DynamoResponse() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__BatchDynamoResponse::*)(
    bool, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>*)>(&::GlobalNamespace::__AWSDatabase__BatchDynamoResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1591878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse.FailureResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse (*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__BatchDynamoResponse::FailureResponse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1591888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>::get(), "FailureResponse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AWSDatabase__BatchDynamoResponse::_ctor(bool success, ::StringW errTypeRaw,
                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, errTypeRaw, responses);
}
inline ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse GlobalNamespace::__AWSDatabase__BatchDynamoResponse::FailureResponse(::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>::get(), "FailureResponse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, false>(nullptr, ___internal_method, errTypeRaw);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "responses", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__AWSDatabase__DynamoResponse>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse::__AWSDatabase__BatchDynamoResponse(
    bool success, ::StringW errTypeRaw, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses) noexcept {
  this->success = success;
  this->errTypeRaw = errTypeRaw;
  this->responses = responses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse::__AWSDatabase__BatchDynamoResponse() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::*)(bool, ::StringW)>(
    &::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x159190c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse.FailureResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse (*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::FailureResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x159191c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>::get(), "FailureResponse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::_ctor(bool success, ::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, errTypeRaw);
}
inline ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::FailureResponse(::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>::get(), "FailureResponse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse, false>(nullptr, ___internal_method, errTypeRaw);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::__AWSDatabase__UpdateDynamoResponse(bool success, ::StringW errTypeRaw) noexcept {
  this->success = success;
  this->errTypeRaw = errTypeRaw;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse::__AWSDatabase__UpdateDynamoResponse() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::*)(
    bool, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1591928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse.FailureResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse (*)(::StringW)>(
    &::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::FailureResponse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x159193c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(), "FailureResponse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse.EmptyResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse (*)()>(
    &::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::EmptyResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x15919c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(),
                                                                               "EmptyResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AWSDatabase__QueryDynamoResponse::_ctor(bool success, ::StringW errTypeRaw,
                                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses,
                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* lastEvaluatedKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, errTypeRaw, responses, lastEvaluatedKey);
}
inline ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse GlobalNamespace::__AWSDatabase__QueryDynamoResponse::FailureResponse(::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(), "FailureResponse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, false>(nullptr, ___internal_method, errTypeRaw);
}
inline ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse GlobalNamespace::__AWSDatabase__QueryDynamoResponse::EmptyResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>::get(),
                                                                             "EmptyResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "responses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "lastEvaluatedKey", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::__AWSDatabase__QueryDynamoResponse(
    bool success, ::StringW errTypeRaw, ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* lastEvaluatedKey) noexcept {
  this->success = success;
  this->errTypeRaw = errTypeRaw;
  this->responses = responses;
  this->lastEvaluatedKey = lastEvaluatedKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse::__AWSDatabase__QueryDynamoResponse() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::*)()>(
    &::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::MoveNext)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x1591a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x15925f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "endpoint", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "inputJSON", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_lambdaClient_5__2", ty: "::Amazon::Lambda::AmazonLambdaClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::Lambda::Model::InvokeResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::__AWSDatabase___InvokeLambda_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __t__builder, ::StringW endpoint,
    ::OVRSimpleJSON::JSONNode* inputJSON, ::Amazon::Lambda::AmazonLambdaClient* _lambdaClient_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::Lambda::Model::InvokeResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->endpoint = endpoint;
  this->inputJSON = inputJSON;
  this->_lambdaClient_5__2 = _lambdaClient_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18::__AWSDatabase___InvokeLambda_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___GetItem_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___GetItem_d__24::*)()>(
    &::GlobalNamespace::__AWSDatabase___GetItem_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1592650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__24>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___GetItem_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___GetItem_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__AWSDatabase___GetItem_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x159294c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__24>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___GetItem_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___GetItem_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___GetItem_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__24>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___GetItem_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__24>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyValue", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "attribute", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___GetItem_d__24::__AWSDatabase___GetItem_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder, ::StringW tableName, ::StringW keyName,
    ::StringW keyValue, ::StringW attribute, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->keyName = keyName;
  this->keyValue = keyValue;
  this->attribute = attribute;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___GetItem_d__24::__AWSDatabase___GetItem_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___GetItem_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___GetItem_d__25::*)()>(
    &::GlobalNamespace::__AWSDatabase___GetItem_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x15929a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__25>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___GetItem_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___GetItem_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__AWSDatabase___GetItem_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x15930a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__25>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___GetItem_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___GetItem_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___GetItem_d__25::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__25>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___GetItem_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___GetItem_d__25>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyValue", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::GetItemResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___GetItem_d__25::__AWSDatabase___GetItem_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder, ::StringW tableName, ::StringW keyName,
    ::StringW keyValue, ::System::Collections::Generic::List_1<::StringW>* attributesToGet, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::GetItemResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->keyName = keyName;
  this->keyValue = keyValue;
  this->attributesToGet = attributesToGet;
  this->_dynamoClient_5__2 = _dynamoClient_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___GetItem_d__25::__AWSDatabase___GetItem_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::*)()>(
    &::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xf58;
  constexpr static std::size_t addrs = 0x15930f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1594050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyValues", ty:
// "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "tableName", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::__AWSDatabase___BatchGetItems_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder,
    ::System::Collections::Generic::List_1<::StringW>* keyValues, ::StringW keyName, ::System::Collections::Generic::List_1<::StringW>* attributesToGet, ::StringW tableName,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->keyValues = keyValues;
  this->keyName = keyName;
  this->attributesToGet = attributesToGet;
  this->tableName = tableName;
  this->_dynamoClient_5__2 = _dynamoClient_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27::__AWSDatabase___BatchGetItems_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___UpdateItem_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::*)()>(
    &::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x15940a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___UpdateItem_d__28>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___UpdateItem_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1594738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___UpdateItem_d__28>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___UpdateItem_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___UpdateItem_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___UpdateItem_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___UpdateItem_d__28>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___UpdateItem_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___UpdateItem_d__28>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyValue", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updates", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::__AWSDatabase___UpdateItem_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder, ::StringW tableName, ::StringW keyName,
    ::StringW keyValue, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->keyName = keyName;
  this->keyValue = keyValue;
  this->updates = updates;
  this->_dynamoClient_5__2 = _dynamoClient_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___UpdateItem_d__28::__AWSDatabase___UpdateItem_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__29::*)()>(
    &::GlobalNamespace::__AWSDatabase___QueryItems_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1594790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__29>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___QueryItems_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1594a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__29>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___QueryItems_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___QueryItems_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__29>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__29>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sortDescending", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "partitionKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "partitionValue", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startKey", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__29::__AWSDatabase___QueryItems_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder, ::StringW tableName, ::StringW indexName,
    bool sortDescending, ::StringW partitionKey, ::StringW partitionValue, int32_t limit,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->indexName = indexName;
  this->sortDescending = sortDescending;
  this->partitionKey = partitionKey;
  this->partitionValue = partitionValue;
  this->limit = limit;
  this->startKey = startKey;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__29::__AWSDatabase___QueryItems_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__30::*)()>(
    &::GlobalNamespace::__AWSDatabase___QueryItems_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x1594a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__30>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__30::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___QueryItems_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1594d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__30>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___QueryItems_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___QueryItems_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__30::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__30>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__30>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sortDescending", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "partitionKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "partitionValue", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startKey", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__30::__AWSDatabase___QueryItems_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder, ::StringW tableName, ::StringW indexName,
    bool sortDescending, ::StringW partitionKey, int32_t partitionValue, int32_t limit, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->indexName = indexName;
  this->sortDescending = sortDescending;
  this->partitionKey = partitionKey;
  this->partitionValue = partitionValue;
  this->limit = limit;
  this->startKey = startKey;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__30::__AWSDatabase___QueryItems_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__31::*)()>(
    &::GlobalNamespace::__AWSDatabase___QueryItems_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x1594d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__31>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___QueryItems_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___QueryItems_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___QueryItems_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1595748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__31>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___QueryItems_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___QueryItems_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__31::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__31>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___QueryItems_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___QueryItems_d__31>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tableName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sortDescending", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "partitionKeyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "partitionValue", ty:
// "::Amazon::DynamoDBv2::Model::AttributeValue*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "startKey", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::QueryResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__31::__AWSDatabase___QueryItems_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder, ::StringW tableName, ::StringW indexName,
    bool sortDescending, ::StringW partitionKeyName, ::Amazon::DynamoDBv2::Model::AttributeValue* partitionValue, int32_t limit,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::QueryResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tableName = tableName;
  this->indexName = indexName;
  this->sortDescending = sortDescending;
  this->partitionKeyName = partitionKeyName;
  this->partitionValue = partitionValue;
  this->limit = limit;
  this->startKey = startKey;
  this->_dynamoClient_5__2 = _dynamoClient_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___QueryItems_d__31::__AWSDatabase___QueryItems_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::*)()>(
    &::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x15957a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1595990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "seconds", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::__AWSDatabase___WaitForSeconds_d__32(int32_t __1__state,
                                                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                        float_t seconds, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->seconds = seconds;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32::__AWSDatabase___WaitForSeconds_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.get_CLIENT_APPLICATION_VERSION
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::AWSDatabase::get_CLIENT_APPLICATION_VERSION)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x158dea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(),
                                                                               "get_CLIENT_APPLICATION_VERSION", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW)>(&::GlobalNamespace::AWSDatabase::GetCredentials)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x158def8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetCredentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.TryInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::AWSDatabase::TryInitialize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x158e02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "TryInitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.InitializeAsUtility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::AWSDatabase::InitializeAsUtility)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x158e1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "InitializeAsUtility",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.CreateLambdaClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::AmazonLambdaClient* (*)()>(&::GlobalNamespace::AWSDatabase::CreateLambdaClient)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x158e284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "CreateLambdaClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.InvokeLambda
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>* (*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::GlobalNamespace::AWSDatabase::InvokeLambda)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x15860f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "InvokeLambda", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.CreateDynamoClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::AmazonDynamoDBClient* (*)()>(&::GlobalNamespace::AWSDatabase::CreateDynamoClient)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x158e42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "CreateDynamoClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::AWSDatabase::GetItem)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x158e5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* (*)(::StringW, ::StringW, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
        &::GlobalNamespace::AWSDatabase::GetItem)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x158e6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.BatchGetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>* (*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AWSDatabase::BatchGetItems)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x158e804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "BatchGetItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.UpdateItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>* (*)(::StringW, ::StringW, ::StringW,
                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*)>(
    &::GlobalNamespace::AWSDatabase::UpdateItem)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x158e91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "UpdateItem", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 4>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.QueryItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>* (*)(::StringW, ::StringW, bool, ::StringW, ::StringW, int32_t,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(
    &::GlobalNamespace::AWSDatabase::QueryItems)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x158ea34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 7>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.QueryItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>* (*)(::StringW, ::StringW, bool, ::StringW, int32_t, int32_t,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(
    &::GlobalNamespace::AWSDatabase::QueryItems)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x158eb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 7>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.QueryItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>* (*)(::StringW, ::StringW, bool, ::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*, int32_t,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(
    &::GlobalNamespace::AWSDatabase::QueryItems)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x158ecb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 7>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AttributeValue*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.WaitForSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(float_t)>(&::GlobalNamespace::AWSDatabase::WaitForSeconds)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x158edfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "WaitForSeconds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GenerateJSONArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AWSDatabase::GenerateJSONArray)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x158eef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GenerateJSONArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::AWSDatabase::GenerateJSONArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x158f0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GenerateJSONArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::GlobalNamespace::AWSDatabase::GenerateJSONArray)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x158f1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.GenerateJSONArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::GlobalNamespace::AWSDatabase::GenerateJSONArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x158f37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.ConvertColorToHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Color)>(&::GlobalNamespace::AWSDatabase::ConvertColorToHex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x158f470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "ConvertColorToHex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.ConvertHexToColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(int32_t)>(&::GlobalNamespace::AWSDatabase::ConvertHexToColor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x158f4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "ConvertHexToColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.StringUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AttributeValueUpdate* (*)(::StringW)>(&::GlobalNamespace::AWSDatabase::StringUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x158f51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "StringUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.IntUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AttributeValueUpdate* (*)(int32_t)>(&::GlobalNamespace::AWSDatabase::IntUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x158f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "IntUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AWSDatabase.StringListAppendUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AttributeValueUpdate* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AWSDatabase::StringListAppendUpdate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x158f6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "StringListAppendUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AWSDatabase::setStaticF_initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::AWSDatabase::getStaticF_initialized() {
  return ::cordl_internals::getStaticField<bool, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_region(::Amazon::RegionEndpoint* value) {
  ::cordl_internals::setStaticField<::Amazon::RegionEndpoint*, "region", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(
      std::forward<::Amazon::RegionEndpoint*>(value));
}
inline ::Amazon::RegionEndpoint* GlobalNamespace::AWSDatabase::getStaticF_region() {
  return ::cordl_internals::getStaticField<::Amazon::RegionEndpoint*, "region", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_credentials(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "credentials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::AWSDatabase::getStaticF_credentials() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "credentials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_isMissingCredentials(bool value) {
  ::cordl_internals::setStaticField<bool, "isMissingCredentials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::AWSDatabase::getStaticF_isMissingCredentials() {
  return ::cordl_internals::getStaticField<bool, "isMissingCredentials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_CREDENTIALS_QUEST_FILE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CREDENTIALS_QUEST_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AWSDatabase::getStaticF_CREDENTIALS_QUEST_FILE() {
  return ::cordl_internals::getStaticField<::StringW, "CREDENTIALS_QUEST_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_CREDENTIALS_MOBILE_FILE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CREDENTIALS_MOBILE_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AWSDatabase::getStaticF_CREDENTIALS_MOBILE_FILE() {
  return ::cordl_internals::getStaticField<::StringW, "CREDENTIALS_MOBILE_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_CREDENTIALS_PC_FILE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CREDENTIALS_PC_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AWSDatabase::getStaticF_CREDENTIALS_PC_FILE() {
  return ::cordl_internals::getStaticField<::StringW, "CREDENTIALS_PC_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_CREDENTIALS_UTILITY_FILE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CREDENTIALS_UTILITY_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AWSDatabase::getStaticF_CREDENTIALS_UTILITY_FILE() {
  return ::cordl_internals::getStaticField<::StringW, "CREDENTIALS_UTILITY_FILE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_PHONE_VALIDATED_FUNCTIONS(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "PHONE_VALIDATED_FUNCTIONS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AWSDatabase::getStaticF_PHONE_VALIDATED_FUNCTIONS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "PHONE_VALIDATED_FUNCTIONS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline void GlobalNamespace::AWSDatabase::setStaticF_PC_VALIDATED_FUNCTIONS(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "PC_VALIDATED_FUNCTIONS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AWSDatabase::getStaticF_PC_VALIDATED_FUNCTIONS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "PC_VALIDATED_FUNCTIONS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get>();
}
inline ::StringW GlobalNamespace::AWSDatabase::get_CLIENT_APPLICATION_VERSION() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(),
                                                                             "get_CLIENT_APPLICATION_VERSION", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::AWSDatabase::GetCredentials(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetCredentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, filePath);
}
inline void GlobalNamespace::AWSDatabase::TryInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "TryInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AWSDatabase::InitializeAsUtility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "InitializeAsUtility",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::AmazonLambdaClient* GlobalNamespace::AWSDatabase::CreateLambdaClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "CreateLambdaClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::AmazonLambdaClient*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>* GlobalNamespace::AWSDatabase::InvokeLambda(::StringW endpoint, ::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "InvokeLambda", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>*, false>(nullptr, ___internal_method, endpoint, inputJSON);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* GlobalNamespace::AWSDatabase::CreateDynamoClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "CreateDynamoClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::AmazonDynamoDBClient*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GlobalNamespace::AWSDatabase::GetItem(::StringW tableName, ::StringW keyName, ::StringW keyValue,
                                                                                                                                   ::StringW attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*, false>(nullptr, ___internal_method, tableName, keyName, keyValue,
                                                                                                                                           attribute);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GlobalNamespace::AWSDatabase::GetItem(::StringW tableName, ::StringW keyName, ::StringW keyValue,
                                                                                                                                   ::System::Collections::Generic::List_1<::StringW>* attributesToGet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*, false>(nullptr, ___internal_method, tableName, keyName, keyValue,
                                                                                                                                           attributesToGet);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>*
GlobalNamespace::AWSDatabase::BatchGetItems(::StringW tableName, ::StringW keyName, ::System::Collections::Generic::List_1<::StringW>* keyValues,
                                            ::System::Collections::Generic::List_1<::StringW>* attributesToGet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "BatchGetItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>*, false>(nullptr, ___internal_method, tableName, keyName,
                                                                                                                                                keyValues, attributesToGet);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>*
GlobalNamespace::AWSDatabase::UpdateItem(::StringW tableName, ::StringW keyName, ::StringW keyValue,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "UpdateItem", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 4>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>*, false>(nullptr, ___internal_method, tableName, keyName,
                                                                                                                                                 keyValue, updates);
}
/// @param startKey: ::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
GlobalNamespace::AWSDatabase::QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, ::StringW partitionValue, int32_t limit,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 7>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*, false>(
      nullptr, ___internal_method, tableName, indexName, sortDescending, partitionKey, partitionValue, limit, startKey);
}
/// @param startKey: ::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
GlobalNamespace::AWSDatabase::QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, int32_t partitionValue, int32_t limit,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 7>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*, false>(
      nullptr, ___internal_method, tableName, indexName, sortDescending, partitionKey, partitionValue, limit, startKey);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
GlobalNamespace::AWSDatabase::QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKeyName, ::Amazon::DynamoDBv2::Model::AttributeValue* partitionValue,
                                         int32_t limit, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "QueryItems", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 7>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AttributeValue*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*, false>(
      nullptr, ___internal_method, tableName, indexName, sortDescending, partitionKeyName, partitionValue, limit, startKey);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::AWSDatabase::WaitForSeconds(float_t seconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "WaitForSeconds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, seconds);
}
inline ::OVRSimpleJSON::JSONArray* GlobalNamespace::AWSDatabase::GenerateJSONArray(::System::Collections::Generic::List_1<::StringW>* stringList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(nullptr, ___internal_method, stringList);
}
inline ::OVRSimpleJSON::JSONArray* GlobalNamespace::AWSDatabase::GenerateJSONArray(::ArrayW<::StringW, ::Array<::StringW>*> stringArray) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(nullptr, ___internal_method, stringArray);
}
inline ::OVRSimpleJSON::JSONArray* GlobalNamespace::AWSDatabase::GenerateJSONArray(::System::Collections::Generic::List_1<int32_t>* intList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(nullptr, ___internal_method, intList);
}
inline ::OVRSimpleJSON::JSONArray* GlobalNamespace::AWSDatabase::GenerateJSONArray(::ArrayW<int32_t, ::Array<int32_t>*> intArray) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "GenerateJSONArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(nullptr, ___internal_method, intArray);
}
inline int32_t GlobalNamespace::AWSDatabase::ConvertColorToHex(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "ConvertColorToHex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::AWSDatabase::ConvertHexToColor(int32_t hex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "ConvertHexToColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, hex);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* GlobalNamespace::AWSDatabase::StringUpdate(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "StringUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValueUpdate*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* GlobalNamespace::AWSDatabase::IntUpdate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "IntUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValueUpdate*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* GlobalNamespace::AWSDatabase::StringListAppendUpdate(::System::Collections::Generic::List_1<::StringW>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AWSDatabase*>::get(), "StringListAppendUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValueUpdate*, false>(nullptr, ___internal_method, values);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AWSDatabase::AWSDatabase() {}
