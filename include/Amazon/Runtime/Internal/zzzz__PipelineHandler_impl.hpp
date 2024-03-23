#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IPipelineHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.get_Logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::ILogger* (::Amazon::Runtime::Internal::PipelineHandler::*)()>(
    &::Amazon::Runtime::Internal::PipelineHandler::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9ef0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.set_Logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)(::Amazon::Runtime::Internal::Util::ILogger*)>(
    &::Amazon::Runtime::Internal::PipelineHandler::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.get_InnerHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPipelineHandler* (::Amazon::Runtime::Internal::PipelineHandler::*)()>(
    &::Amazon::Runtime::Internal::PipelineHandler::get_InnerHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                               "get_InnerHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.set_InnerHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)(::Amazon::Runtime::IPipelineHandler*)>(
    &::Amazon::Runtime::Internal::PipelineHandler::set_InnerHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "set_InnerHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IPipelineHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.get_OuterHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPipelineHandler* (::Amazon::Runtime::Internal::PipelineHandler::*)()>(
    &::Amazon::Runtime::Internal::PipelineHandler::get_OuterHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                               "get_OuterHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.set_OuterHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)(::Amazon::Runtime::IPipelineHandler*)>(
    &::Amazon::Runtime::Internal::PipelineHandler::set_OuterHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "set_OuterHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IPipelineHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.InvokeSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::PipelineHandler::InvokeSync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23dd3d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler.LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::PipelineHandler::LogMetrics)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x23e9f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "LogMetrics", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::PipelineHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::PipelineHandler::*)()>(&::Amazon::Runtime::Internal::PipelineHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IPipelineHandler"
constexpr Amazon::Runtime::Internal::PipelineHandler::operator ::Amazon::Runtime::IPipelineHandler*() noexcept {
  return static_cast<::Amazon::Runtime::IPipelineHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IPipelineHandler"
constexpr ::Amazon::Runtime::IPipelineHandler* Amazon::Runtime::Internal::PipelineHandler::i___Amazon__Runtime__IPipelineHandler() noexcept {
  return static_cast<::Amazon::Runtime::IPipelineHandler*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::Util::ILogger*& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__Logger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Logger_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__Logger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Logger_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_set__Logger_k__BackingField(::Amazon::Runtime::Internal::Util::ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Logger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IPipelineHandler*& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__InnerHandler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerHandler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__InnerHandler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerHandler_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_set__InnerHandler_k__BackingField(::Amazon::Runtime::IPipelineHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InnerHandler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IPipelineHandler*& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__OuterHandler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OuterHandler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPipelineHandler*> const& Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_get__OuterHandler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OuterHandler_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::PipelineHandler::__cordl_internal_set__OuterHandler_k__BackingField(::Amazon::Runtime::IPipelineHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OuterHandler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Util::ILogger* Amazon::Runtime::Internal::PipelineHandler::get_Logger() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::ILogger*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::PipelineHandler::set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IPipelineHandler* Amazon::Runtime::Internal::PipelineHandler::get_InnerHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                             "get_InnerHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPipelineHandler*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::PipelineHandler::set_InnerHandler(::Amazon::Runtime::IPipelineHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "set_InnerHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IPipelineHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IPipelineHandler* Amazon::Runtime::Internal::PipelineHandler::get_OuterHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(),
                                                                             "get_OuterHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPipelineHandler*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::PipelineHandler::set_OuterHandler(::Amazon::Runtime::IPipelineHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "set_OuterHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IPipelineHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::Internal::PipelineHandler::InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::PipelineHandler::InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::Internal::PipelineHandler::LogMetrics(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), "LogMetrics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline ::Amazon::Runtime::Internal::PipelineHandler* Amazon::Runtime::Internal::PipelineHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::PipelineHandler*>());
}
inline void Amazon::Runtime::Internal::PipelineHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::PipelineHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::PipelineHandler::PipelineHandler() {}
