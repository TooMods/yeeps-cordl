#pragma once
#include "Amazon/zzzz__LogMetricsFormatOption_impl.hpp"
#include "Amazon/zzzz__LoggingOptions_impl.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__LoggingConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IMetricsFormatter_def.hpp"
#include "Amazon/zzzz__LogMetricsFormatOption_def.hpp"
#include "Amazon/zzzz__LoggingOptions_def.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_def.hpp"
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::LoggingOptions (::Amazon::Util::LoggingConfig::*)()>(&::Amazon::Util::LoggingConfig::get_LogTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogTo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(::Amazon::LoggingOptions)>(&::Amazon::Util::LoggingConfig::set_LogTo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21f2044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LoggingOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogResponses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::ResponseLoggingOption (::Amazon::Util::LoggingConfig::*)()>(
    &::Amazon::Util::LoggingConfig::get_LogResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogResponses",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogResponses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(::Amazon::ResponseLoggingOption)>(
    &::Amazon::Util::LoggingConfig::set_LogResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogResponses", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::ResponseLoggingOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogResponsesSizeLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Util::LoggingConfig::*)()>(&::Amazon::Util::LoggingConfig::get_LogResponsesSizeLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(),
                                                                               "get_LogResponsesSizeLimit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogResponsesSizeLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(int32_t)>(&::Amazon::Util::LoggingConfig::set_LogResponsesSizeLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogResponsesSizeLimit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::LoggingConfig::*)()>(&::Amazon::Util::LoggingConfig::get_LogMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogMetrics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(bool)>(&::Amazon::Util::LoggingConfig::set_LogMetrics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21fcc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogMetricsFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::LogMetricsFormatOption (::Amazon::Util::LoggingConfig::*)()>(
    &::Amazon::Util::LoggingConfig::get_LogMetricsFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogMetricsFormat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogMetricsFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(::Amazon::LogMetricsFormatOption)>(
    &::Amazon::Util::LoggingConfig::set_LogMetricsFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetricsFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LogMetricsFormatOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.get_LogMetricsCustomFormatter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IMetricsFormatter* (::Amazon::Util::LoggingConfig::*)()>(
    &::Amazon::Util::LoggingConfig::get_LogMetricsCustomFormatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(),
                                                                               "get_LogMetricsCustomFormatter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig.set_LogMetricsCustomFormatter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)(::Amazon::Runtime::IMetricsFormatter*)>(
    &::Amazon::Util::LoggingConfig::set_LogMetricsCustomFormatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fcc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetricsCustomFormatter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IMetricsFormatter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::LoggingConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::LoggingConfig::*)()>(&::Amazon::Util::LoggingConfig::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21fcca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::LoggingOptions& Amazon::Util::LoggingConfig::__cordl_internal_get__logTo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logTo;
}
constexpr ::Amazon::LoggingOptions const& Amazon::Util::LoggingConfig::__cordl_internal_get__logTo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logTo;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__logTo(::Amazon::LoggingOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logTo = value;
}
constexpr ::Amazon::ResponseLoggingOption& Amazon::Util::LoggingConfig::__cordl_internal_get__LogResponses_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogResponses_k__BackingField;
}
constexpr ::Amazon::ResponseLoggingOption const& Amazon::Util::LoggingConfig::__cordl_internal_get__LogResponses_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogResponses_k__BackingField;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__LogResponses_k__BackingField(::Amazon::ResponseLoggingOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LogResponses_k__BackingField = value;
}
constexpr int32_t& Amazon::Util::LoggingConfig::__cordl_internal_get__LogResponsesSizeLimit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogResponsesSizeLimit_k__BackingField;
}
constexpr int32_t const& Amazon::Util::LoggingConfig::__cordl_internal_get__LogResponsesSizeLimit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogResponsesSizeLimit_k__BackingField;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__LogResponsesSizeLimit_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LogResponsesSizeLimit_k__BackingField = value;
}
constexpr bool& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetrics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetrics_k__BackingField;
}
constexpr bool const& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetrics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetrics_k__BackingField;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__LogMetrics_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LogMetrics_k__BackingField = value;
}
constexpr ::Amazon::LogMetricsFormatOption& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetricsFormat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetricsFormat_k__BackingField;
}
constexpr ::Amazon::LogMetricsFormatOption const& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetricsFormat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetricsFormat_k__BackingField;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__LogMetricsFormat_k__BackingField(::Amazon::LogMetricsFormatOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LogMetricsFormat_k__BackingField = value;
}
constexpr ::Amazon::Runtime::IMetricsFormatter*& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetricsCustomFormatter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetricsCustomFormatter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IMetricsFormatter*> const& Amazon::Util::LoggingConfig::__cordl_internal_get__LogMetricsCustomFormatter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogMetricsCustomFormatter_k__BackingField;
}
constexpr void Amazon::Util::LoggingConfig::__cordl_internal_set__LogMetricsCustomFormatter_k__BackingField(::Amazon::Runtime::IMetricsFormatter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LogMetricsCustomFormatter_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Util::LoggingConfig::setStaticF_DefaultLogResponsesSizeLimit(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DefaultLogResponsesSizeLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Util::LoggingConfig::getStaticF_DefaultLogResponsesSizeLimit() {
  return ::cordl_internals::getStaticField<int32_t, "DefaultLogResponsesSizeLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get>();
}
inline ::Amazon::LoggingOptions Amazon::Util::LoggingConfig::get_LogTo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogTo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::LoggingOptions, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogTo(::Amazon::LoggingOptions value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LoggingOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::ResponseLoggingOption Amazon::Util::LoggingConfig::get_LogResponses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogResponses",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::ResponseLoggingOption, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogResponses(::Amazon::ResponseLoggingOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogResponses", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::ResponseLoggingOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Util::LoggingConfig::get_LogResponsesSizeLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogResponsesSizeLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogResponsesSizeLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogResponsesSizeLimit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Util::LoggingConfig::get_LogMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogMetrics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogMetrics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::LogMetricsFormatOption Amazon::Util::LoggingConfig::get_LogMetricsFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "get_LogMetricsFormat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::LogMetricsFormatOption, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogMetricsFormat(::Amazon::LogMetricsFormatOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetricsFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LogMetricsFormatOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IMetricsFormatter* Amazon::Util::LoggingConfig::get_LogMetricsCustomFormatter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(),
                                                                             "get_LogMetricsCustomFormatter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IMetricsFormatter*, false>(this, ___internal_method);
}
inline void Amazon::Util::LoggingConfig::set_LogMetricsCustomFormatter(::Amazon::Runtime::IMetricsFormatter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), "set_LogMetricsCustomFormatter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IMetricsFormatter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::LoggingConfig* Amazon::Util::LoggingConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::LoggingConfig*>());
}
inline void Amazon::Util::LoggingConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::LoggingConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::LoggingConfig::LoggingConfig() {}
