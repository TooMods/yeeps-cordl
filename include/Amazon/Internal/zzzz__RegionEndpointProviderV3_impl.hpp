#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Internal/zzzz__RegionEndpointProviderV3_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpointProvider_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonData_def.hpp"
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointProviderV3::*)()>(&::Amazon::Internal::RegionEndpointProviderV3::_ctor)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x21f5780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointProviderV3::*)(::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Internal::RegionEndpointProviderV3::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x21f5640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.GetEndpointJsonSourceStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)()>(&::Amazon::Internal::RegionEndpointProviderV3::GetEndpointJsonSourceStream)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x21fa370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                               "GetEndpointJsonSourceStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.get_AllRegionEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* (
    ::Amazon::Internal::RegionEndpointProviderV3::*)()>(&::Amazon::Internal::RegionEndpointProviderV3::get_AllRegionEndpoints)> {
  constexpr static std::size_t size = 0x9ac;
  constexpr static std::size_t addrs = 0x21fa598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                               "get_AllRegionEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.get_AllRegionRegex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Amazon::Internal::RegionEndpointProviderV3::*)()>(
    &::Amazon::Internal::RegionEndpointProviderV3::get_AllRegionRegex)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x21faf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                               "get_AllRegionRegex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.GetUnknownRegionDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Internal::RegionEndpointProviderV3::GetUnknownRegionDescription)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21fb4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetUnknownRegionDescription",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.IsRegionInPartition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ThirdParty::Json::LitJson::JsonData*, ByRef<::StringW>)>(
    &::Amazon::Internal::RegionEndpointProviderV3::IsRegionInPartition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x21fb578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "IsRegionInPartition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.GetRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::IRegionEndpoint* (::Amazon::Internal::RegionEndpointProviderV3::*)(::StringW)>(
    &::Amazon::Internal::RegionEndpointProviderV3::GetRegionEndpoint)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x21fb788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetRegionEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.GetNonstandardRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::IRegionEndpoint* (::Amazon::Internal::RegionEndpointProviderV3::*)(::StringW)>(
    &::Amazon::Internal::RegionEndpointProviderV3::GetNonstandardRegionEndpoint)> {
  constexpr static std::size_t size = 0xb6c;
  constexpr static std::size_t addrs = 0x21fbf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetNonstandardRegionEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointProviderV3::*)(bool)>(
    &::Amazon::Internal::RegionEndpointProviderV3::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21fcaa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV3.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointProviderV3::*)()>(&::Amazon::Internal::RegionEndpointProviderV3::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21fcae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Internal::IRegionEndpointProvider"
constexpr Amazon::Internal::RegionEndpointProviderV3::operator ::Amazon::Internal::IRegionEndpointProvider*() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpointProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Internal::IRegionEndpointProvider"
constexpr ::Amazon::Internal::IRegionEndpointProvider* Amazon::Internal::RegionEndpointProviderV3::i___Amazon__Internal__IRegionEndpointProvider() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpointProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Internal::RegionEndpointProviderV3::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Internal::RegionEndpointProviderV3::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::ThirdParty::Json::LitJson::JsonData*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__root(::ThirdParty::Json::LitJson::JsonData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__regionEndpointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionEndpointMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*> const&
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__regionEndpointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionEndpointMap;
}
constexpr void
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__regionEndpointMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionEndpointMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*&
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__nonStandardRegionNameToObjectMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonStandardRegionNameToObjectMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*> const&
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__nonStandardRegionNameToObjectMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonStandardRegionNameToObjectMap;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__nonStandardRegionNameToObjectMap(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nonStandardRegionNameToObjectMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__readerWriterLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__readerWriterLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLock;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__readerWriterLock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readerWriterLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionEndpoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionEndpoints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*> const&
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionEndpoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionEndpoints;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__allRegionEndpoints(::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allRegionEndpoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionRegexLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionRegexLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionRegexLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionRegexLock;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__allRegionRegexLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allRegionRegexLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionRegex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionRegex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const&
Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get__allRegionRegex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allRegionRegex;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set__allRegionRegex(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allRegionRegex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void Amazon::Internal::RegionEndpointProviderV3::__cordl_internal_set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline void Amazon::Internal::RegionEndpointProviderV3::setStaticF__emptyDictionaryJsonData(::ThirdParty::Json::LitJson::JsonData* value) {
  ::cordl_internals::setStaticField<::ThirdParty::Json::LitJson::JsonData*, "_emptyDictionaryJsonData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get>(
      std::forward<::ThirdParty::Json::LitJson::JsonData*>(value));
}
inline ::ThirdParty::Json::LitJson::JsonData* Amazon::Internal::RegionEndpointProviderV3::getStaticF__emptyDictionaryJsonData() {
  return ::cordl_internals::getStaticField<::ThirdParty::Json::LitJson::JsonData*, "_emptyDictionaryJsonData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get>();
}
inline ::Amazon::Internal::RegionEndpointProviderV3* Amazon::Internal::RegionEndpointProviderV3::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::RegionEndpointProviderV3*>());
}
inline void Amazon::Internal::RegionEndpointProviderV3::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Internal::RegionEndpointProviderV3* Amazon::Internal::RegionEndpointProviderV3::New_ctor(::ThirdParty::Json::LitJson::JsonData* root) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::RegionEndpointProviderV3*>(root));
}
inline void Amazon::Internal::RegionEndpointProviderV3::_ctor(::ThirdParty::Json::LitJson::JsonData* root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root);
}
inline ::System::IO::Stream* Amazon::Internal::RegionEndpointProviderV3::GetEndpointJsonSourceStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                             "GetEndpointJsonSourceStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* Amazon::Internal::RegionEndpointProviderV3::get_AllRegionEndpoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                             "get_AllRegionEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Internal::RegionEndpointProviderV3::get_AllRegionRegex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(),
                                                                             "get_AllRegionRegex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW Amazon::Internal::RegionEndpointProviderV3::GetUnknownRegionDescription(::StringW regionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetUnknownRegionDescription",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, regionName);
}
inline bool Amazon::Internal::RegionEndpointProviderV3::IsRegionInPartition(::StringW regionName, ::ThirdParty::Json::LitJson::JsonData* partition, ByRef<::StringW> description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "IsRegionInPartition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, regionName, partition, description);
}
inline ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::RegionEndpointProviderV3::GetRegionEndpoint(::StringW regionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetRegionEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::IRegionEndpoint*, false>(this, ___internal_method, regionName);
}
inline ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::RegionEndpointProviderV3::GetNonstandardRegionEndpoint(::StringW regionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "GetNonstandardRegionEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::IRegionEndpoint*, false>(this, ___internal_method, regionName);
}
inline void Amazon::Internal::RegionEndpointProviderV3::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::Internal::RegionEndpointProviderV3::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV3*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Internal::RegionEndpointProviderV3::RegionEndpointProviderV3() {}
