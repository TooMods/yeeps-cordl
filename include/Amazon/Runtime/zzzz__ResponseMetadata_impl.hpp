#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__ResponseMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::ResponseMetadata.get_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ResponseMetadata::*)()>(&::Amazon::Runtime::ResponseMetadata::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20210a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "get_RequestId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ResponseMetadata.set_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ResponseMetadata::*)(::StringW)>(&::Amazon::Runtime::ResponseMetadata::set_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20210ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "set_RequestId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ResponseMetadata.get_Metadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::Amazon::Runtime::ResponseMetadata::*)()>(
    &::Amazon::Runtime::ResponseMetadata::get_Metadata)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20210b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "get_Metadata",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ResponseMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ResponseMetadata::*)()>(&::Amazon::Runtime::ResponseMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2021134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::ResponseMetadata::__cordl_internal_get_requestIdField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestIdField;
}
constexpr ::StringW const& Amazon::Runtime::ResponseMetadata::__cordl_internal_get_requestIdField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestIdField;
}
constexpr void Amazon::Runtime::ResponseMetadata::__cordl_internal_set_requestIdField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestIdField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::ResponseMetadata::__cordl_internal_get__metadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadata;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& Amazon::Runtime::ResponseMetadata::__cordl_internal_get__metadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadata;
}
constexpr void Amazon::Runtime::ResponseMetadata::__cordl_internal_set__metadata(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::ResponseMetadata::get_RequestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "get_RequestId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ResponseMetadata::set_RequestId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "set_RequestId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Runtime::ResponseMetadata::get_Metadata() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), "get_Metadata",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ResponseMetadata* Amazon::Runtime::ResponseMetadata::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ResponseMetadata*>());
}
inline void Amazon::Runtime::ResponseMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ResponseMetadata*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ResponseMetadata::ResponseMetadata() {}
