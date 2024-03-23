#pragma once
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatum_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::StringDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::StringDatumProperty::*)(::StringW)>(
    &::Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::StringDatumProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::StringDatumProperty::*)(::Unity::XR::CoreUtils::Datums::StringDatum*)>(
    &::Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2882034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::StringDatum*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* Unity::XR::CoreUtils::Datums::StringDatumProperty::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(value));
}
inline void Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* Unity::XR::CoreUtils::Datums::StringDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::StringDatum* datum) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(datum));
}
inline void Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::StringDatum* datum) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::StringDatum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datum);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::StringDatumProperty::StringDatumProperty() {}
