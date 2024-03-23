#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMFallbackConfigChain_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileStoreChain_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMConfiguration_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMFallbackConfigChain_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::*)(::System::Object*, void*)>(
    &::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2035398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::*)()>(
    &::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2035acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2035ae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::*)(::System::IAsyncResult*)>(
    &::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2035b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource* Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::New_ctor(::System::Object* object,
                                                                                                                                                                      void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>(object, method));
}
inline void Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource::__CSMFallbackConfigChain__ConfigurationSource() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.get_AllGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* (
    ::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(&::Amazon::Runtime::Internal::CSMFallbackConfigChain::get_AllGenerators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203505c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "get_AllGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.set_AllGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*)>(&::Amazon::Runtime::Internal::CSMFallbackConfigChain::set_AllGenerators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_AllGenerators", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.get_IsConfigSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::get_IsConfigSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203506c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "get_IsConfigSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.set_IsConfigSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)(bool)>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::set_IsConfigSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2035074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_IsConfigSet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.get_ConfigSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::get_ConfigSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "get_ConfigSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.set_ConfigSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)(::StringW)>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::set_ConfigSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_ConfigSource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.get_CSMConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::CSMConfiguration* (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::get_CSMConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "get_CSMConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.set_CSMConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)(::Amazon::Runtime::Internal::CSMConfiguration*)>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::set_CSMConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_CSMConfiguration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x20350a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.GetCSMConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::CSMConfiguration* (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::GetCSMConfig)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2035454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "GetCSMConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.__ctor_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2035818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "<.ctor>b__19_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.__ctor_b__19_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2035870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "<.ctor>b__19_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMFallbackConfigChain.__ctor_b__19_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CSMFallbackConfigChain::*)()>(
    &::Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x20358c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                               "<.ctor>b__19_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::ILogger*& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get_LOGGER() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOGGER;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get_LOGGER() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOGGER;
}
constexpr void Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_set_LOGGER(::Amazon::Runtime::Internal::Util::ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LOGGER)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*&
Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__AllGenerators_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllGenerators_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*> const&
Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__AllGenerators_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllGenerators_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_set__AllGenerators_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AllGenerators_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__IsConfigSet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsConfigSet_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__IsConfigSet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsConfigSet_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_set__IsConfigSet_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsConfigSet_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__ConfigSource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConfigSource_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__ConfigSource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConfigSource_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_set__ConfigSource_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConfigSource_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::CSMConfiguration*& Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__CSMConfiguration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMConfiguration_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::CSMConfiguration*> const&
Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_get__CSMConfiguration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMConfiguration_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::CSMFallbackConfigChain::__cordl_internal_set__CSMConfiguration_k__BackingField(::Amazon::Runtime::Internal::CSMConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CSMConfiguration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::Internal::CSMFallbackConfigChain::getStaticF_credentialProfileChain() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get>();
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* Amazon::Runtime::Internal::CSMFallbackConfigChain::get_AllGenerators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "get_AllGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*, false>(this, ___internal_method);
}
inline void
Amazon::Runtime::Internal::CSMFallbackConfigChain::set_AllGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_AllGenerators", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::CSMFallbackConfigChain::get_IsConfigSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "get_IsConfigSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::set_IsConfigSet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_IsConfigSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::CSMFallbackConfigChain::get_ConfigSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "get_ConfigSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::set_ConfigSource(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_ConfigSource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::CSMConfiguration* Amazon::Runtime::Internal::CSMFallbackConfigChain::get_CSMConfiguration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "get_CSMConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::CSMConfiguration*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::set_CSMConfiguration(::Amazon::Runtime::Internal::CSMConfiguration* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(), "set_CSMConfiguration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::CSMFallbackConfigChain* Amazon::Runtime::Internal::CSMFallbackConfigChain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>());
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::CSMConfiguration* Amazon::Runtime::Internal::CSMFallbackConfigChain::GetCSMConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "GetCSMConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::CSMConfiguration*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "<.ctor>b__19_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "<.ctor>b__19_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CSMFallbackConfigChain::__ctor_b__19_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                                                             "<.ctor>b__19_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::CSMFallbackConfigChain::CSMFallbackConfigChain() {}
