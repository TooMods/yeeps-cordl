#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ExecutionContext_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext.get_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IRequestContext* (::Amazon::Runtime::Internal::ExecutionContext::*)()>(
    &::Amazon::Runtime::Internal::ExecutionContext::get_RequestContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(),
                                                                               "get_RequestContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext.set_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ExecutionContext::*)(::Amazon::Runtime::IRequestContext*)>(
    &::Amazon::Runtime::Internal::ExecutionContext::set_RequestContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "set_RequestContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext.get_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IResponseContext* (::Amazon::Runtime::Internal::ExecutionContext::*)()>(
    &::Amazon::Runtime::Internal::ExecutionContext::get_ResponseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(),
                                                                               "get_ResponseContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext.set_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ExecutionContext::*)(::Amazon::Runtime::IResponseContext*)>(
    &::Amazon::Runtime::Internal::ExecutionContext::set_ResponseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "set_ResponseContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ExecutionContext::*)(bool, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*)>(
    &::Amazon::Runtime::Internal::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dcdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ExecutionContext::*)(
    ::Amazon::Runtime::IRequestContext*, ::Amazon::Runtime::IResponseContext*)>(&::Amazon::Runtime::Internal::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dce78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ExecutionContext.CreateFromAsyncContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IExecutionContext* (*)(::Amazon::Runtime::IAsyncExecutionContext*)>(
    &::Amazon::Runtime::Internal::ExecutionContext::CreateFromAsyncContext)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23dcea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "CreateFromAsyncContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncExecutionContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IExecutionContext"
constexpr Amazon::Runtime::Internal::ExecutionContext::operator ::Amazon::Runtime::IExecutionContext*() noexcept {
  return static_cast<::Amazon::Runtime::IExecutionContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IExecutionContext"
constexpr ::Amazon::Runtime::IExecutionContext* Amazon::Runtime::Internal::ExecutionContext::i___Amazon__Runtime__IExecutionContext() noexcept {
  return static_cast<::Amazon::Runtime::IExecutionContext*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::IRequestContext*& Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_get__RequestContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IRequestContext*> const& Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_get__RequestContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestContext_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_set__RequestContext_k__BackingField(::Amazon::Runtime::IRequestContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RequestContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IResponseContext*& Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_get__ResponseContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResponseContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IResponseContext*> const& Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_get__ResponseContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResponseContext_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ExecutionContext::__cordl_internal_set__ResponseContext_k__BackingField(::Amazon::Runtime::IResponseContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ResponseContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::IRequestContext* Amazon::Runtime::Internal::ExecutionContext::get_RequestContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(),
                                                                             "get_RequestContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IRequestContext*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ExecutionContext::set_RequestContext(::Amazon::Runtime::IRequestContext* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "set_RequestContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IResponseContext* Amazon::Runtime::Internal::ExecutionContext::get_ResponseContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(),
                                                                             "get_ResponseContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IResponseContext*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ExecutionContext::set_ResponseContext(::Amazon::Runtime::IResponseContext* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "set_ResponseContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::ExecutionContext* Amazon::Runtime::Internal::ExecutionContext::New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ExecutionContext*>(enableMetrics, clientSigner));
}
inline void Amazon::Runtime::Internal::ExecutionContext::_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableMetrics, clientSigner);
}
inline ::Amazon::Runtime::Internal::ExecutionContext* Amazon::Runtime::Internal::ExecutionContext::New_ctor(::Amazon::Runtime::IRequestContext* requestContext,
                                                                                                            ::Amazon::Runtime::IResponseContext* responseContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ExecutionContext*>(requestContext, responseContext));
}
inline void Amazon::Runtime::Internal::ExecutionContext::_ctor(::Amazon::Runtime::IRequestContext* requestContext, ::Amazon::Runtime::IResponseContext* responseContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContext, responseContext);
}
inline ::Amazon::Runtime::IExecutionContext* Amazon::Runtime::Internal::ExecutionContext::CreateFromAsyncContext(::Amazon::Runtime::IAsyncExecutionContext* asyncContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExecutionContext*>::get(), "CreateFromAsyncContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IAsyncExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IExecutionContext*, false>(nullptr, ___internal_method, asyncContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ExecutionContext::ExecutionContext() {}
