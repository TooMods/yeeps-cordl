#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonPropertyAttribute_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::JsonPropertyAttribute.get_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::JsonPropertyAttribute::*)()>(
    &::ThirdParty::Json::LitJson::JsonPropertyAttribute::get_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14afe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(),
                                                                               "get_Required", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::JsonPropertyAttribute.set_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::JsonPropertyAttribute::*)(bool)>(
    &::ThirdParty::Json::LitJson::JsonPropertyAttribute::set_Required)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14afe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(), "set_Required",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::JsonPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::JsonPropertyAttribute::*)()>(
    &::ThirdParty::Json::LitJson::JsonPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14afe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& ThirdParty::Json::LitJson::JsonPropertyAttribute::__cordl_internal_get__Required_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr bool const& ThirdParty::Json::LitJson::JsonPropertyAttribute::__cordl_internal_get__Required_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr void ThirdParty::Json::LitJson::JsonPropertyAttribute::__cordl_internal_set__Required_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Required_k__BackingField = value;
}
inline bool ThirdParty::Json::LitJson::JsonPropertyAttribute::get_Required() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(),
                                                                             "get_Required", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ThirdParty::Json::LitJson::JsonPropertyAttribute::set_Required(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(), "set_Required",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ThirdParty::Json::LitJson::JsonPropertyAttribute* ThirdParty::Json::LitJson::JsonPropertyAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>());
}
inline void ThirdParty::Json::LitJson::JsonPropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::JsonPropertyAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::JsonPropertyAttribute::JsonPropertyAttribute() {}
