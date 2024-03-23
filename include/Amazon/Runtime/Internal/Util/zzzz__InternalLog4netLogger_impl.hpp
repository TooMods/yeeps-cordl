#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLog4netLogger_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLogger_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLog4netLogger_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLog4netLogger_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::__InternalLog4netLogger__LoadState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::__InternalLog4netLogger__LoadState() {}
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::Failed{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::Loading{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState::Success{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.loadStatics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Runtime::Internal::Util::InternalLog4netLogger::loadStatics)> {
  constexpr static std::size_t size = 0xe58;
  constexpr static std::size_t addrs = 0x243eb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                                               "loadStatics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)(::System::Type*)>(
    &::Amazon::Runtime::Internal::Util::InternalLog4netLogger::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x243d298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)()>(
    &::Amazon::Runtime::Internal::Util::InternalLog4netLogger::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x243f964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.get_IsErrorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)()>(
    &::Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsErrorEnabled)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x243f968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)(
    ::System::Exception*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalLog4netLogger::Error)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x243fc38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.get_IsDebugEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)()>(
    &::Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsDebugEnabled)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x243fe24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.Debug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)(
    ::System::Exception*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalLog4netLogger::Debug)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x24400f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.DebugFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)(
    ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalLog4netLogger::DebugFormat)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x24402e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.get_IsInfoEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)()>(
    &::Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsInfoEnabled)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2440498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalLog4netLogger.InfoFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalLog4netLogger::*)(
    ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalLog4netLogger::InfoFormat)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2440768;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_internalLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalLogger;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_internalLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalLogger;
}
constexpr void Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_set_internalLogger(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isErrorEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isErrorEnabled;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isErrorEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isErrorEnabled;
}
constexpr void Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_set_isErrorEnabled(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isErrorEnabled = value;
}
constexpr ::System::Nullable_1<bool>& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isDebugEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDebugEnabled;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isDebugEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDebugEnabled;
}
constexpr void Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_set_isDebugEnabled(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDebugEnabled = value;
}
constexpr ::System::Nullable_1<bool>& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isInfoEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInfoEnabled;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_get_isInfoEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInfoEnabled;
}
constexpr void Amazon::Runtime::Internal::Util::InternalLog4netLogger::__cordl_internal_set_isInfoEnabled(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInfoEnabled = value;
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_loadState(::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState, "loadState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState>(value));
}
inline ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_loadState() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState, "loadState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_LOCK(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "LOCK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_LOCK() {
  return ::cordl_internals::getStaticField<::System::Object*, "LOCK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_logMangerType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "logMangerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_logMangerType() {
  return ::cordl_internals::getStaticField<::System::Type*, "logMangerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_logMangerTypeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::ITypeInfo*, "logMangerTypeInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::Amazon::Util::Internal::ITypeInfo*>(value));
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_logMangerTypeInfo() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::ITypeInfo*, "logMangerTypeInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_getLoggerWithTypeMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "getLoggerWithTypeMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_getLoggerWithTypeMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "getLoggerWithTypeMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_logType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "logType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_logType() {
  return ::cordl_internals::getStaticField<::System::Type*, "logType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_logTypeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::ITypeInfo*, "logTypeInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::Amazon::Util::Internal::ITypeInfo*>(value));
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_logTypeInfo() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::ITypeInfo*, "logTypeInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_logMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "logMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_logMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "logMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_levelType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "levelType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_levelType() {
  return ::cordl_internals::getStaticField<::System::Type*, "levelType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_levelTypeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::ITypeInfo*, "levelTypeInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::Amazon::Util::Internal::ITypeInfo*>(value));
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_levelTypeInfo() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::ITypeInfo*, "levelTypeInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_debugLevelPropertyValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "debugLevelPropertyValue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_debugLevelPropertyValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "debugLevelPropertyValue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_infoLevelPropertyValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "infoLevelPropertyValue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_infoLevelPropertyValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "infoLevelPropertyValue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_errorLevelPropertyValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "errorLevelPropertyValue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_errorLevelPropertyValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "errorLevelPropertyValue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_isEnabledForMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "isEnabledForMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_isEnabledForMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "isEnabledForMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_systemStringFormatType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "systemStringFormatType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_systemStringFormatType() {
  return ::cordl_internals::getStaticField<::System::Type*, "systemStringFormatType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::setStaticF_loggerType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "loggerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::Runtime::Internal::Util::InternalLog4netLogger::getStaticF_loggerType() {
  return ::cordl_internals::getStaticField<::System::Type*, "loggerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get>();
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::loadStatics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(),
                                                                             "loadStatics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Util::InternalLog4netLogger* Amazon::Runtime::Internal::Util::InternalLog4netLogger::New_ctor(::System::Type* declaringType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>(declaringType));
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::_ctor(::System::Type* declaringType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, declaringType);
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::Flush() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsErrorEnabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, messageFormat, args);
}
inline bool Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsDebugEnabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, messageFormat, args);
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::DebugFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, arguments);
}
inline bool Amazon::Runtime::Internal::Util::InternalLog4netLogger::get_IsInfoEnabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::InternalLog4netLogger::InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalLog4netLogger*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, arguments);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::InternalLog4netLogger::InternalLog4netLogger() {}
