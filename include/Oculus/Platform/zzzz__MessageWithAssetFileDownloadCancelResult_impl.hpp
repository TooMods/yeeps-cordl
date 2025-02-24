#pragma once
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(void*)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x19b08e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetAssetFileDownloadCancelResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (
    ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)()>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x19b2d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (
    ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(void*)>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x19b2db0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>(c_message));
}
inline void Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::MessageWithAssetFileDownloadCancelResult() {}
