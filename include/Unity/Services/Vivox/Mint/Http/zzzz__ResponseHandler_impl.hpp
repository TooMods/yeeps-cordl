#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__ResponseHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpException_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__IDeserializable_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.DeserializeListOfJsonObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>* (*)(::System::Collections::Generic::List_1<::System::Object*>*)>(
        &::Unity::Services::Vivox::Mint::Http::ResponseHandler::DeserializeListOfJsonObjects)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1706458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "DeserializeListOfJsonObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.TryDeserializeResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, ::System::Type*)>(
    &::Unity::Services::Vivox::Mint::Http::ResponseHandler::TryDeserializeResponse)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17066d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "TryDeserializeResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.GetDeserializedJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Unity::Services::Vivox::Mint::Http::ResponseHandler::GetDeserializedJson)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1706858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "GetDeserializedJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.HandleAsyncResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*)>(
        &::Unity::Services::Vivox::Mint::Http::ResponseHandler::HandleAsyncResponse)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1706894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "HandleAsyncResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.CreateOneOfException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::Mint::Http::HttpException* (*)(::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, ::System::Type*)>(
        &::Unity::Services::Vivox::Mint::Http::ResponseHandler::CreateOneOfException)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1706a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "CreateOneOfException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::ResponseHandler.CreateHttpException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::Mint::Http::HttpException* (*)(::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, ::System::Type*)>(
        &::Unity::Services::Vivox::Mint::Http::ResponseHandler::CreateHttpException)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x1706dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "CreateHttpException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*
Unity::Services::Vivox::Mint::Http::ResponseHandler::DeserializeListOfJsonObjects(::System::Collections::Generic::List_1<::System::Object*>* objectList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "DeserializeListOfJsonObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*, false>(nullptr, ___internal_method, objectList);
}
template <typename T> inline T Unity::Services::Vivox::Mint::Http::ResponseHandler::TryDeserializeResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "TryDeserializeResponse",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, response);
}
inline ::System::Object* Unity::Services::Vivox::Mint::Http::ResponseHandler::TryDeserializeResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "TryDeserializeResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, response, type);
}
inline ::StringW Unity::Services::Vivox::Mint::Http::ResponseHandler::GetDeserializedJson(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "GetDeserializedJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data);
}
inline void Unity::Services::Vivox::Mint::Http::ResponseHandler::HandleAsyncResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                                                                     ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* statusCodeToTypeMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "HandleAsyncResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, response, statusCodeToTypeMap);
}
inline ::Unity::Services::Vivox::Mint::Http::HttpException*
Unity::Services::Vivox::Mint::Http::ResponseHandler::CreateOneOfException(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, ::System::Type* responseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "CreateOneOfException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Http::HttpException*, false>(nullptr, ___internal_method, response, responseType);
}
inline ::Unity::Services::Vivox::Mint::Http::HttpException* Unity::Services::Vivox::Mint::Http::ResponseHandler::CreateHttpException(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                                                                                                                     ::System::Type* responseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "CreateHttpException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Http::HttpException*, false>(nullptr, ___internal_method, response, responseType);
}
template <typename T>
inline T Unity::Services::Vivox::Mint::Http::ResponseHandler::HandleAsyncResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* statusCodeToTypeMap) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::ResponseHandler*>::get(), "HandleAsyncResponse",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, response, statusCodeToTypeMap);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::ResponseHandler::ResponseHandler() {}
