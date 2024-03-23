#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__CustomMarshallTransformations_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations.ConvertDateTimeToEpochMilliseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::DateTime)>(
    &::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations::ConvertDateTimeToEpochMilliseconds)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2448ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations*>::get(), "ConvertDateTimeToEpochMilliseconds",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
inline int64_t Amazon::Runtime::Internal::Transform::CustomMarshallTransformations::ConvertDateTimeToEpochMilliseconds(::System::DateTime dateTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations*>::get(), "ConvertDateTimeToEpochMilliseconds",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::CustomMarshallTransformations::CustomMarshallTransformations() {}
