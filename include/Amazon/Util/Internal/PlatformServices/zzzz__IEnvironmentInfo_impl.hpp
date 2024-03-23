#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__IEnvironmentInfo_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo.get_Platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_Platform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo.get_PlatformUserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_PlatformUserAgent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo.get_FrameworkUserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_FrameworkUserAgent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 2));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_Platform() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_PlatformUserAgent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::IEnvironmentInfo::get_FrameworkUserAgent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
