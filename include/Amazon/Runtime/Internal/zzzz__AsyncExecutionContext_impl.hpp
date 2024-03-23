#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AsyncExecutionContext_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncResponseContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.get_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IAsyncResponseContext* (::Amazon::Runtime::Internal::AsyncExecutionContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::get_ResponseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                               "get_ResponseContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.set_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncExecutionContext::*)(::Amazon::Runtime::IAsyncResponseContext*)>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::set_ResponseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_ResponseContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncResponseContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.get_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IAsyncRequestContext* (::Amazon::Runtime::Internal::AsyncExecutionContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::get_RequestContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                               "get_RequestContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.set_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncExecutionContext::*)(::Amazon::Runtime::IAsyncRequestContext*)>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::set_RequestContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_RequestContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncRequestContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.get_RuntimeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::Internal::AsyncExecutionContext::*)()>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::get_RuntimeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                               "get_RuntimeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext.set_RuntimeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncExecutionContext::*)(::System::Object*)>(
    &::Amazon::Runtime::Internal::AsyncExecutionContext::set_RuntimeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_RuntimeState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncExecutionContext::*)(
    bool, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*)>(&::Amazon::Runtime::Internal::AsyncExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dd010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AsyncExecutionContext::*)(
    ::Amazon::Runtime::IAsyncRequestContext*, ::Amazon::Runtime::IAsyncResponseContext*)>(&::Amazon::Runtime::Internal::AsyncExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dd0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncRequestContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncResponseContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IAsyncExecutionContext"
constexpr Amazon::Runtime::Internal::AsyncExecutionContext::operator ::Amazon::Runtime::IAsyncExecutionContext*() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncExecutionContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IAsyncExecutionContext"
constexpr ::Amazon::Runtime::IAsyncExecutionContext* Amazon::Runtime::Internal::AsyncExecutionContext::i___Amazon__Runtime__IAsyncExecutionContext() noexcept {
  return static_cast<::Amazon::Runtime::IAsyncExecutionContext*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::IAsyncResponseContext*& Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__ResponseContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResponseContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IAsyncResponseContext*> const&
Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__ResponseContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResponseContext_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_set__ResponseContext_k__BackingField(::Amazon::Runtime::IAsyncResponseContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ResponseContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IAsyncRequestContext*& Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__RequestContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IAsyncRequestContext*> const&
Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__RequestContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestContext_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_set__RequestContext_k__BackingField(::Amazon::Runtime::IAsyncRequestContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RequestContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__RuntimeState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RuntimeState_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_get__RuntimeState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RuntimeState_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AsyncExecutionContext::__cordl_internal_set__RuntimeState_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RuntimeState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::IAsyncResponseContext* Amazon::Runtime::Internal::AsyncExecutionContext::get_ResponseContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                             "get_ResponseContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IAsyncResponseContext*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AsyncExecutionContext::set_ResponseContext(::Amazon::Runtime::IAsyncResponseContext* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_ResponseContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncResponseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IAsyncRequestContext* Amazon::Runtime::Internal::AsyncExecutionContext::get_RequestContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                             "get_RequestContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IAsyncRequestContext*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AsyncExecutionContext::set_RequestContext(::Amazon::Runtime::IAsyncRequestContext* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_RequestContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* Amazon::Runtime::Internal::AsyncExecutionContext::get_RuntimeState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(),
                                                                             "get_RuntimeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AsyncExecutionContext::set_RuntimeState(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), "set_RuntimeState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::AsyncExecutionContext* Amazon::Runtime::Internal::AsyncExecutionContext::New_ctor(bool enableMetrics,
                                                                                                                      ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AsyncExecutionContext*>(enableMetrics, clientSigner));
}
inline void Amazon::Runtime::Internal::AsyncExecutionContext::_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableMetrics, clientSigner);
}
inline ::Amazon::Runtime::Internal::AsyncExecutionContext* Amazon::Runtime::Internal::AsyncExecutionContext::New_ctor(::Amazon::Runtime::IAsyncRequestContext* requestContext,
                                                                                                                      ::Amazon::Runtime::IAsyncResponseContext* responseContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AsyncExecutionContext*>(requestContext, responseContext));
}
inline void Amazon::Runtime::Internal::AsyncExecutionContext::_ctor(::Amazon::Runtime::IAsyncRequestContext* requestContext, ::Amazon::Runtime::IAsyncResponseContext* responseContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncRequestContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncResponseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContext, responseContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AsyncExecutionContext::AsyncExecutionContext() {}
