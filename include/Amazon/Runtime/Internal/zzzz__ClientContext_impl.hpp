#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ClientContext_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ClientContext.get_AppID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::ClientContext::*)()>(
    &::Amazon::Runtime::Internal::ClientContext::get_AppID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203468c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "get_AppID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ClientContext.set_AppID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ClientContext::*)(::StringW)>(
    &::Amazon::Runtime::Internal::ClientContext::set_AppID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2034694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "set_AppID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ClientContext.AddCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ClientContext::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::ClientContext::AddCustomAttributes)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x203469c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "AddCustomAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ClientContext.ToJsonString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::ClientContext::*)()>(
    &::Amazon::Runtime::Internal::ClientContext::ToJsonString)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2034878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(),
                                                                               "ToJsonString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ClientContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ClientContext::*)()>(&::Amazon::Runtime::Internal::ClientContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2034e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__client(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__custom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____custom;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__custom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____custom;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__custom(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____custom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__env() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____env;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__env() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____env;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__env(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____env)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>*& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__services() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____services;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>*> const&
Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__services() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____services;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__services(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____services)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__clientContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__clientContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientContext;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__clientContext(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__AppID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppID_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::ClientContext::__cordl_internal_get__AppID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppID_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ClientContext::__cordl_internal_set__AppID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AppID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::ClientContext::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::Internal::ClientContext::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get>();
}
inline ::StringW Amazon::Runtime::Internal::ClientContext::get_AppID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "get_AppID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ClientContext::set_AppID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "set_AppID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::Internal::ClientContext::AddCustomAttributes(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "AddCustomAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::StringW Amazon::Runtime::Internal::ClientContext::ToJsonString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), "ToJsonString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::ClientContext* Amazon::Runtime::Internal::ClientContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ClientContext*>());
}
inline void Amazon::Runtime::Internal::ClientContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ClientContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ClientContext::ClientContext() {}
