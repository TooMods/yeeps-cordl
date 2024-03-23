#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__ExceptionPredicate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::*)(::System::Object*, void*)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1707530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::*)(::System::Exception*)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x170765c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::*)(::System::Exception*, ::System::AsyncCallback*, ::System::Object*)>(
        &::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1707670;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::*)(::System::IAsyncResult*)>(&::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1707690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>(object, method));
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Exception* Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::Invoke(::System::Exception* ex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, ex);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::BeginInvoke(::System::Exception* ex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ex, callback, object);
}
inline ::System::Exception* Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate::ExceptionPredicate() {}
