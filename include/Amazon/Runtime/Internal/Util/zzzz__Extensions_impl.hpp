#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Extensions_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::Extensions.GetElapsedDateTimeTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Diagnostics::Stopwatch*)>(
    &::Amazon::Runtime::Internal::Util::Extensions::GetElapsedDateTimeTicks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24384c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get(), "GetElapsedDateTimeTicks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::Extensions.HasRequestData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::IRequest*)>(&::Amazon::Runtime::Internal::Util::Extensions::HasRequestData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2438558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get(), "HasRequestData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::Extensions::setStaticF_TicksPerSecond(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "TicksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get>(
      std::forward<int64_t>(value));
}
inline int64_t Amazon::Runtime::Internal::Util::Extensions::getStaticF_TicksPerSecond() {
  return ::cordl_internals::getStaticField<int64_t, "TicksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get>();
}
inline void Amazon::Runtime::Internal::Util::Extensions::setStaticF_TickFrequency(double_t value) {
  ::cordl_internals::setStaticField<double_t, "TickFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get>(
      std::forward<double_t>(value));
}
inline double_t Amazon::Runtime::Internal::Util::Extensions::getStaticF_TickFrequency() {
  return ::cordl_internals::getStaticField<double_t, "TickFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get>();
}
inline int64_t Amazon::Runtime::Internal::Util::Extensions::GetElapsedDateTimeTicks(::System::Diagnostics::Stopwatch* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get(), "GetElapsedDateTimeTicks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, self);
}
inline bool Amazon::Runtime::Internal::Util::Extensions::HasRequestData(::Amazon::Runtime::Internal::IRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Extensions*>::get(), "HasRequestData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::Extensions::Extensions() {}
