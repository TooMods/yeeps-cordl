#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLogger_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalConsoleLogger_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalConsoleLogger_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::__InternalConsoleLogger__LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::__InternalConsoleLogger__LogLevel() {}
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::Verbose{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::Debug{ static_cast<int32_t>(0x3) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::Info{ static_cast<int32_t>(0x4) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::Warn{ static_cast<int32_t>(0x5) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::Error{ static_cast<int32_t>(0x6) };
constexpr ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel::_cordl_Assert{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(::System::Type*)>(
    &::Amazon::Runtime::Internal::Util::InternalConsoleLogger::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x243c83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)()>(
    &::Amazon::Runtime::Internal::Util::InternalConsoleLogger::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x243c89c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(
    ::System::Exception*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalConsoleLogger::Error)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x243c8a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.Debug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(
    ::System::Exception*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalConsoleLogger::Debug)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x243cd8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.DebugFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(
    ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalConsoleLogger::DebugFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x243ce20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.InfoFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(
    ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::Runtime::Internal::Util::InternalConsoleLogger::InfoFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x243cea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::InternalConsoleLogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::InternalConsoleLogger::*)(
    ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel, ::StringW, ::System::Exception*)>(&::Amazon::Runtime::Internal::Util::InternalConsoleLogger::Log)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x243c934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::setStaticF__sequanceId(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "_sequanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get>(
      std::forward<int64_t>(value));
}
inline int64_t Amazon::Runtime::Internal::Util::InternalConsoleLogger::getStaticF__sequanceId() {
  return ::cordl_internals::getStaticField<int64_t, "_sequanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get>();
}
inline ::Amazon::Runtime::Internal::Util::InternalConsoleLogger* Amazon::Runtime::Internal::Util::InternalConsoleLogger::New_ctor(::System::Type* declaringType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>(declaringType));
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::_ctor(::System::Type* declaringType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, declaringType);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::Flush() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, messageFormat, args);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, messageFormat, args);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::DebugFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, arguments);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, arguments);
}
inline void Amazon::Runtime::Internal::Util::InternalConsoleLogger::Log(::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel logLevel, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::InternalConsoleLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logLevel, message, ex);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::InternalConsoleLogger::InternalConsoleLogger() {}
