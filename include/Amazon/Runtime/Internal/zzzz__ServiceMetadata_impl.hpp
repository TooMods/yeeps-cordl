#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ServiceMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceMetadata.get_ServiceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::ServiceMetadata::*)()>(
    &::Amazon::Runtime::Internal::ServiceMetadata::get_ServiceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dbad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(),
                                                                               "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceMetadata.get_OperationNameMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Runtime::Internal::ServiceMetadata::*)()>(&::Amazon::Runtime::Internal::ServiceMetadata::get_OperationNameMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dbad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(),
                                                                               "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ServiceMetadata::*)()>(&::Amazon::Runtime::Internal::ServiceMetadata::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23dbae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr Amazon::Runtime::Internal::ServiceMetadata::operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::Runtime::Internal::ServiceMetadata::i___Amazon__Runtime__Internal__IServiceMetadata() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
constexpr ::StringW& Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_get__ServiceId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServiceId_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_get__ServiceId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServiceId_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_set__ServiceId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServiceId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_get__OperationNameMapping_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OperationNameMapping_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_get__OperationNameMapping_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OperationNameMapping_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ServiceMetadata::__cordl_internal_set__OperationNameMapping_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OperationNameMapping_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::Internal::ServiceMetadata::get_ServiceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(),
                                                                             "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::ServiceMetadata::get_OperationNameMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(),
                                                                             "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::ServiceMetadata* Amazon::Runtime::Internal::ServiceMetadata::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ServiceMetadata*>());
}
inline void Amazon::Runtime::Internal::ServiceMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceMetadata*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ServiceMetadata::ServiceMetadata() {}
