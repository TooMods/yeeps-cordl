#pragma once
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithShareMediaResult::*)(void*)>(
    &::Oculus::Platform::MessageWithShareMediaResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x19b14ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult.GetShareMediaResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::MessageWithShareMediaResult::*)()>(
    &::Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x19b56b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::MessageWithShareMediaResult::*)(void*)>(
    &::Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x19b56f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithShareMediaResult*>(c_message));
}
inline void Oculus::Platform::MessageWithShareMediaResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithShareMediaResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithShareMediaResult::MessageWithShareMediaResult() {}
