#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolverBase_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruCache_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__DiscoveryEndpointBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolverBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointOperationContextBase_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::*)()>(
    &::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0._ResolveEndpoints_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::*)()>(
    &::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ResolveEndpoints_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d7afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                                 "<ResolveEndpoints>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0._ResolveEndpoints_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::*)()>(
    &::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ResolveEndpoints_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d7b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                                 "<ResolveEndpoints>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*& Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*> const&
Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_set___4__this(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get_cacheKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheKey;
}
constexpr ::StringW const& Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get_cacheKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheKey;
}
constexpr void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_set_cacheKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cacheKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*&
Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get_InvokeEndpointOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvokeEndpointOperation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*> const&
Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_get_InvokeEndpointOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvokeEndpointOperation;
}
constexpr void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__cordl_internal_set_InvokeEndpointOperation(
    ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvokeEndpointOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0* Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>());
}
inline void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ResolveEndpoints_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                               "<ResolveEndpoints>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::_ResolveEndpoints_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*>::get(),
                                               "<ResolveEndpoints>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0::__EndpointDiscoveryResolverBase____c__DisplayClass6_0() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)(
    ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::Logger*)>(&::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23d6930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::Logger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.ResolveEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* (
    ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)(::Amazon::Runtime::Internal::EndpointOperationContextBase*,
                                                                   ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ResolveEndpoints)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x23d6a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.ProcessInvokeEndpointOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* (
    ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)(::StringW, ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*, bool)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ProcessInvokeEndpointOperation)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x23d761c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "ProcessInvokeEndpointOperation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.GetDiscoveryEndpointsFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* (
    ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)(::StringW)>(&::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::GetDiscoveryEndpointsFromCache)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23d7a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.get_CacheCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)()>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::get_CacheCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23d7aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.ProcessEndpointCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* (
    ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::*)(::StringW, bool, ::System::Uri*, ByRef<bool>)>(&::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ProcessEndpointCache)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x23d7008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "ProcessEndpointCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase.BuildEndpointDiscoveryCacheKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Internal::EndpointOperationContextBase*)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::BuildEndpointDiscoveryCacheKey)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x23d6d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "BuildEndpointDiscoveryCacheKey",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointOperationContextBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::IClientConfig*& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__config() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____config;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__config() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____config;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_set__config(::Amazon::Runtime::IClientConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____config)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*&
Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::cordl_internals::to_const_pointer<
    ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*> const&
Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_set__cache(
    ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get_objectCacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectCacheLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_get_objectCacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectCacheLock;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::__cordl_internal_set_objectCacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectCacheLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::New_ctor(::Amazon::Runtime::IClientConfig* config,
                                                                                                                                      ::Amazon::Runtime::Internal::Util::Logger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>(config, logger));
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::_ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::Logger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, logger);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ResolveEndpoints(
    ::Amazon::Runtime::Internal::EndpointOperationContextBase* context,
    ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* InvokeEndpointOperation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*, false>(this, ___internal_method, context,
                                                                                                                                                         InvokeEndpointOperation);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ProcessInvokeEndpointOperation(
    ::StringW cacheKey, ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* InvokeEndpointOperation, bool endpointRequired) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "ProcessInvokeEndpointOperation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*, false>(this, ___internal_method, cacheKey,
                                                                                                                                                         InvokeEndpointOperation, endpointRequired);
}
inline ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*
Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::GetDiscoveryEndpointsFromCache(::StringW cacheKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*, false>(this, ___internal_method, cacheKey);
}
inline int32_t Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::get_CacheCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*
Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::ProcessEndpointCache(::StringW cacheKey, bool evictCacheKey, ::System::Uri* evictUri, ByRef<bool> refreshCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "ProcessEndpointCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*, false>(this, ___internal_method, cacheKey,
                                                                                                                                                         evictCacheKey, evictUri, refreshCache);
}
inline ::StringW Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::BuildEndpointDiscoveryCacheKey(::Amazon::Runtime::Internal::EndpointOperationContextBase* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get(), "BuildEndpointDiscoveryCacheKey",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointOperationContextBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase::EndpointDiscoveryResolverBase() {}
