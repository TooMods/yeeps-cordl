#pragma once
#include "Amazon/Runtime/Internal/zzzz__RequestContext_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AsyncRequestContext_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRequestContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::Internal::AsyncRequestContext::*)(bool, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*)>(&::Amazon::Runtime::Internal::AsyncRequestContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRequestContext.get_Callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AsyncCallback* (::Amazon::Runtime::Internal::AsyncRequestContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncRequestContext::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(),
                                                                               "get_Callback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRequestContext.set_Callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncRequestContext::*)(::System::AsyncCallback*)>(
    &::Amazon::Runtime::Internal::AsyncRequestContext::set_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), "set_Callback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRequestContext.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::Internal::AsyncRequestContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncRequestContext::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(),
                                                                               "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRequestContext.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncRequestContext::*)(::System::Object*)>(
    &::Amazon::Runtime::Internal::AsyncRequestContext::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), "set_State",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IAsyncRequestContext"
constexpr Amazon::Runtime::Internal::AsyncRequestContext::operator ::Amazon::Runtime::IAsyncRequestContext*() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncRequestContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IAsyncRequestContext"
constexpr ::Amazon::Runtime::IAsyncRequestContext* Amazon::Runtime::Internal::AsyncRequestContext::i___Amazon__Runtime__IAsyncRequestContext() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncRequestContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
constexpr Amazon::Runtime::Internal::AsyncRequestContext::operator ::Amazon::Runtime::IRequestContext*() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IRequestContext"
constexpr ::Amazon::Runtime::IRequestContext* Amazon::Runtime::Internal::AsyncRequestContext::i___Amazon__Runtime__IRequestContext() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
constexpr ::System::AsyncCallback*& Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_get__Callback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callback_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_get__Callback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callback_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_set__Callback_k__BackingField(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Callback_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AsyncRequestContext::__cordl_internal_set__State_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____State_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::AsyncRequestContext* Amazon::Runtime::Internal::AsyncRequestContext::New_ctor(bool enableMetrics,
                                                                                                                  ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AsyncRequestContext*>(enableMetrics, clientSigner));
}
inline void Amazon::Runtime::Internal::AsyncRequestContext::_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableMetrics, clientSigner);
}
inline ::System::AsyncCallback* Amazon::Runtime::Internal::AsyncRequestContext::get_Callback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(),
                                                                             "get_Callback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AsyncRequestContext::set_Callback(::System::AsyncCallback* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), "set_Callback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* Amazon::Runtime::Internal::AsyncRequestContext::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(),
                                                                             "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AsyncRequestContext::set_State(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRequestContext*>::get(), "set_State",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AsyncRequestContext::AsyncRequestContext() {}
