#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Credentials/Internal/zzzz__SsoTokenCache_def.hpp"
#include "Amazon/Runtime/Credentials/Internal/zzzz__SsoToken_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.get_StartUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)()>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenCache::get_StartUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2026594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                               "get_StartUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)(::StringW)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenCache::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x202659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenCache::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x20267cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.GetAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)()>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetAccessToken)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20269e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                               "GetAccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.TrySave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)(
    ::Amazon::Runtime::Credentials::Internal::SsoToken*)>(&::Amazon::Runtime::Credentials::Internal::SsoTokenCache::TrySave)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2026d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "TrySave", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Credentials::Internal::SsoToken* (::Amazon::Runtime::Credentials::Internal::SsoTokenCache::*)()>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenCache::Load)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2026a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                               "Load", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.GetCacheFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetCacheFilename)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2026990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "GetCacheFilename",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.GetDefaultSsoTokenCacheFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetDefaultSsoTokenCacheFolder)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x20265c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                               "GetDefaultSsoTokenCacheFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenCache.GenerateSha1Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Runtime::Credentials::Internal::SsoTokenCache::GenerateSha1Hash)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2027388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "GenerateSha1Hash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__StartUrl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StartUrl_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__StartUrl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StartUrl_k__BackingField;
}
constexpr void Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_set__StartUrl_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StartUrl_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__cachePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePath;
}
constexpr ::StringW const& Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_get__cachePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePath;
}
constexpr void Amazon::Runtime::Credentials::Internal::SsoTokenCache::__cordl_internal_set__cachePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenCache::get_StartUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                             "get_StartUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* Amazon::Runtime::Credentials::Internal::SsoTokenCache::New_ctor(::StringW startUrl) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>(startUrl));
}
inline void Amazon::Runtime::Credentials::Internal::SsoTokenCache::_ctor(::StringW startUrl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startUrl);
}
inline ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* Amazon::Runtime::Credentials::Internal::SsoTokenCache::New_ctor(::StringW cacheFolder, ::StringW startUrl) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>(cacheFolder, startUrl));
}
inline void Amazon::Runtime::Credentials::Internal::SsoTokenCache::_ctor(::StringW cacheFolder, ::StringW startUrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cacheFolder, startUrl);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetAccessToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                             "GetAccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Credentials::Internal::SsoTokenCache::TrySave(::Amazon::Runtime::Credentials::Internal::SsoToken* token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "TrySave", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
inline ::Amazon::Runtime::Credentials::Internal::SsoToken* Amazon::Runtime::Credentials::Internal::SsoTokenCache::Load() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                             "Load", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Credentials::Internal::SsoToken*, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetCacheFilename(::StringW startUrl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "GetCacheFilename",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, startUrl);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenCache::GetDefaultSsoTokenCacheFolder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(),
                                                                             "GetDefaultSsoTokenCacheFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenCache::GenerateSha1Hash(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenCache*>::get(), "GenerateSha1Hash",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Credentials::Internal::SsoTokenCache::SsoTokenCache() {}
