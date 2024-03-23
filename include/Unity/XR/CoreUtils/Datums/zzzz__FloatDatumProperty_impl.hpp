#pragma once
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatum_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::FloatDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::FloatDatumProperty::*)(float_t)>(
    &::Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::FloatDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::FloatDatumProperty::*)(::Unity::XR::CoreUtils::Datums::FloatDatum*)>(
    &::Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::FloatDatum*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* Unity::XR::CoreUtils::Datums::FloatDatumProperty::New_ctor(float_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(value));
}
inline void Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* Unity::XR::CoreUtils::Datums::FloatDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum* datum) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(datum));
}
inline void Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum* datum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::FloatDatum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datum);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::FloatDatumProperty::FloatDatumProperty() {}
