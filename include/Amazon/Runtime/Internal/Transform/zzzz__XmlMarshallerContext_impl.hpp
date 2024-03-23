#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__MarshallerContext_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlMarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext.get_Writer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlWriter* (::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::get_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2449534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), "get_Writer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext.set_Writer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::*)(::System::Xml::XmlWriter*)>(
    &::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::set_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244953c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), "set_Writer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::System::Xml::XmlWriter*)>(&::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2449544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& Amazon::Runtime::Internal::Transform::XmlMarshallerContext::__cordl_internal_get__Writer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Writer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& Amazon::Runtime::Internal::Transform::XmlMarshallerContext::__cordl_internal_get__Writer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Writer_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlMarshallerContext::__cordl_internal_set__Writer_k__BackingField(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Writer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlWriter* Amazon::Runtime::Internal::Transform::XmlMarshallerContext::get_Writer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), "get_Writer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::XmlMarshallerContext::set_Writer(::System::Xml::XmlWriter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), "set_Writer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext* Amazon::Runtime::Internal::Transform::XmlMarshallerContext::New_ctor(::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                                          ::System::Xml::XmlWriter* writer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>(request, writer));
}
inline void Amazon::Runtime::Internal::Transform::XmlMarshallerContext::_ctor(::Amazon::Runtime::Internal::IRequest* request, ::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, writer);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext::XmlMarshallerContext() {}
