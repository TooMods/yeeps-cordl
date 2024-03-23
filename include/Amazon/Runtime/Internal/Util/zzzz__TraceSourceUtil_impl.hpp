#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__TraceSourceUtil_def.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/Diagnostics/zzzz__TraceSource_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::TraceSourceUtil.GetTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceSource* (*)(::System::Type*)>(
    &::Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x243e07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::TraceSourceUtil.GetTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceSource* (*)(::System::Type*, ::System::Diagnostics::SourceLevels)>(
    &::Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSource)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x243e5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::TraceSourceUtil.GetTraceSourceWithListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceSource* (*)(::StringW, ::System::Diagnostics::SourceLevels)>(
    &::Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSourceWithListeners)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x243e5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSourceWithListeners", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::TraceSource* Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSource(::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSource*, false>(nullptr, ___internal_method, targetType);
}
inline ::System::Diagnostics::TraceSource* Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSource(::System::Type* targetType, ::System::Diagnostics::SourceLevels sourceLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSource*, false>(nullptr, ___internal_method, targetType, sourceLevels);
}
inline ::System::Diagnostics::TraceSource* Amazon::Runtime::Internal::Util::TraceSourceUtil::GetTraceSourceWithListeners(::StringW name, ::System::Diagnostics::SourceLevels sourceLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::TraceSourceUtil*>::get(), "GetTraceSourceWithListeners", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSource*, false>(nullptr, ___internal_method, name, sourceLevels);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::TraceSourceUtil::TraceSourceUtil() {}
