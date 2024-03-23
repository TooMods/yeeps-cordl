#pragma once
#include "System/ComponentModel/zzzz__DescriptionAttribute_impl.hpp"
#include "System/zzzz__SRDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::SRDescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::SRDescriptionAttribute::*)(::StringW)>(&::System::SRDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1715a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SRDescriptionAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SRDescriptionAttribute.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::SRDescriptionAttribute::*)()>(&::System::SRDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1715aa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SRDescriptionAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SRDescriptionAttribute*>::get(), 7));
    return ___internal_method;
  }
};
constexpr bool& System::SRDescriptionAttribute::__cordl_internal_get_isReplaced() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReplaced;
}
constexpr bool const& System::SRDescriptionAttribute::__cordl_internal_get_isReplaced() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReplaced;
}
constexpr void System::SRDescriptionAttribute::__cordl_internal_set_isReplaced(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReplaced = value;
}
inline ::System::SRDescriptionAttribute* System::SRDescriptionAttribute::New_ctor(::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::SRDescriptionAttribute*>(description));
}
inline void System::SRDescriptionAttribute::_ctor(::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SRDescriptionAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description);
}
inline ::StringW System::SRDescriptionAttribute::get_Description() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SRDescriptionAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::SRDescriptionAttribute::SRDescriptionAttribute() {}
