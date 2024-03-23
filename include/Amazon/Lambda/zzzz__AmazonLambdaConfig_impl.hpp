#pragma once
#include "Amazon/Runtime/zzzz__ClientConfig_impl.hpp"
#include "Amazon/Lambda/zzzz__AmazonLambdaConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::AmazonLambdaConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::AmazonLambdaConfig::*)()>(&::Amazon::Lambda::AmazonLambdaConfig::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2bb4ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::AmazonLambdaConfig.get_RegionEndpointServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::AmazonLambdaConfig::*)()>(
    &::Amazon::Lambda::AmazonLambdaConfig::get_RegionEndpointServiceName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bb4f74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::AmazonLambdaConfig.get_ServiceVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::AmazonLambdaConfig::*)()>(&::Amazon::Lambda::AmazonLambdaConfig::get_ServiceVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bb4fb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::AmazonLambdaConfig.get_UserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::AmazonLambdaConfig::*)()>(&::Amazon::Lambda::AmazonLambdaConfig::get_UserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bb4ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 46));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::AmazonLambdaConfig::__cordl_internal_get__userAgent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr ::StringW const& Amazon::Lambda::AmazonLambdaConfig::__cordl_internal_get__userAgent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr void Amazon::Lambda::AmazonLambdaConfig::__cordl_internal_set__userAgent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userAgent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Lambda::AmazonLambdaConfig::setStaticF_UserAgentString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UserAgentString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Lambda::AmazonLambdaConfig::getStaticF_UserAgentString() {
  return ::cordl_internals::getStaticField<::StringW, "UserAgentString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get>();
}
inline ::Amazon::Lambda::AmazonLambdaConfig* Amazon::Lambda::AmazonLambdaConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::AmazonLambdaConfig*>());
}
inline void Amazon::Lambda::AmazonLambdaConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::AmazonLambdaConfig::get_RegionEndpointServiceName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::AmazonLambdaConfig::get_ServiceVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::AmazonLambdaConfig::get_UserAgent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::AmazonLambdaConfig*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::AmazonLambdaConfig::AmazonLambdaConfig() {}
