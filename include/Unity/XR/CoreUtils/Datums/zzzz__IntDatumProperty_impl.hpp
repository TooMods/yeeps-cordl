#pragma once
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatum_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatumProperty::*)(int32_t)>(
    &::Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatumProperty::*)(::Unity::XR::CoreUtils::Datums::IntDatum*)>(
    &::Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::IntDatum*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* Unity::XR::CoreUtils::Datums::IntDatumProperty::New_ctor(int32_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(value));
}
inline void Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* Unity::XR::CoreUtils::Datums::IntDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::IntDatum* datum) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(datum));
}
inline void Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::IntDatum* datum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::IntDatum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datum);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::IntDatumProperty::IntDatumProperty() {}
