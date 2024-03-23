#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/XR/CoreUtils/GUI/zzzz__EnumDisplayAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x28826c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_set_Values(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute* Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> enumValues) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>(enumValues));
}
inline void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> enumValues) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumValues);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::EnumDisplayAttribute() {}
