#pragma once
#include "Amazon/Runtime/zzzz__ClientConfig_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBConfig_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBConfig::*)()>(&::Amazon::DynamoDBv2::AmazonDynamoDBConfig::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x120f3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBConfig.get_RegionEndpointServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::AmazonDynamoDBConfig::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_RegionEndpointServiceName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120f484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBConfig.get_ServiceVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::AmazonDynamoDBConfig::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_ServiceVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120f4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBConfig.get_UserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::AmazonDynamoDBConfig::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_UserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120f504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 46));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::AmazonDynamoDBConfig::__cordl_internal_get__userAgent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr ::StringW const& Amazon::DynamoDBv2::AmazonDynamoDBConfig::__cordl_internal_get__userAgent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr void Amazon::DynamoDBv2::AmazonDynamoDBConfig::__cordl_internal_set__userAgent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userAgent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBConfig::setStaticF_UserAgentString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UserAgentString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::DynamoDBv2::AmazonDynamoDBConfig::getStaticF_UserAgentString() {
  return ::cordl_internals::getStaticField<::StringW, "UserAgentString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get>();
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* Amazon::DynamoDBv2::AmazonDynamoDBConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>());
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_RegionEndpointServiceName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_ServiceVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::AmazonDynamoDBConfig::get_UserAgent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBConfig*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::AmazonDynamoDBConfig::AmazonDynamoDBConfig() {}
