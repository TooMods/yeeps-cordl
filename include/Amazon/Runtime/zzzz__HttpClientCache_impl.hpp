#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__HttpClientCache_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::HttpClientCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::HttpClientCache::*)(::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*>)>(&::Amazon::Runtime::HttpClientCache::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x201af84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientCache.GetNextClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpClient* (::Amazon::Runtime::HttpClientCache::*)()>(
    &::Amazon::Runtime::HttpClientCache::GetNextClient)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x201abf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), "GetNextClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpClientCache::*)()>(&::Amazon::Runtime::HttpClientCache::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x201af18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpClientCache::*)(bool)>(&::Amazon::Runtime::HttpClientCache::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x201b838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::HttpClientCache::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::HttpClientCache::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*>& Amazon::Runtime::HttpClientCache::__cordl_internal_get__clients() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clients;
}
constexpr ::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*> const& Amazon::Runtime::HttpClientCache::__cordl_internal_get__clients() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clients;
}
constexpr void Amazon::Runtime::HttpClientCache::__cordl_internal_set__clients(::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clients)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::HttpClientCache::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& Amazon::Runtime::HttpClientCache::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void Amazon::Runtime::HttpClientCache::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline ::Amazon::Runtime::HttpClientCache* Amazon::Runtime::HttpClientCache::New_ctor(::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*> clients) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::HttpClientCache*>(clients));
}
inline void Amazon::Runtime::HttpClientCache::_ctor(::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*> clients) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::Http::HttpClient*, ::Array<::System::Net::Http::HttpClient*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clients);
}
inline ::System::Net::Http::HttpClient* Amazon::Runtime::HttpClientCache::GetNextClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), "GetNextClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpClientCache::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpClientCache::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientCache*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::HttpClientCache::HttpClientCache() {}
