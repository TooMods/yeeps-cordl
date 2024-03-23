#pragma once
#include "System/Collections/Specialized/zzzz__BitVector32_impl.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_def.hpp"
#include "System/ComponentModel/zzzz__MaskedTextResultHint_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion::__MaskedTextProvider__CaseConversion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion::__MaskedTextProvider__CaseConversion() {}
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion System::ComponentModel::__MaskedTextProvider__CaseConversion::None{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion System::ComponentModel::__MaskedTextProvider__CaseConversion::ToLower{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion System::ComponentModel::__MaskedTextProvider__CaseConversion::ToUpper{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType::__MaskedTextProvider__CharType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType::__MaskedTextProvider__CharType() {}
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType System::ComponentModel::__MaskedTextProvider__CharType::EditOptional{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType System::ComponentModel::__MaskedTextProvider__CharType::EditRequired{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType System::ComponentModel::__MaskedTextProvider__CharType::Separator{ static_cast<int32_t>(0x4) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType System::ComponentModel::__MaskedTextProvider__CharType::Literal{ static_cast<int32_t>(0x8) };
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType System::ComponentModel::__MaskedTextProvider__CharType::Modifier{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::System::ComponentModel::__MaskedTextProvider__CharDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__MaskedTextProvider__CharDescriptor::*)(
    int32_t, ::System::ComponentModel::__MaskedTextProvider__CharType)>(&::System::ComponentModel::__MaskedTextProvider__CharDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1b02ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__MaskedTextProvider__CharDescriptor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__MaskedTextProvider__CharDescriptor::*)()>(
    &::System::ComponentModel::__MaskedTextProvider__CharDescriptor::ToString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1b02d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_MaskPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaskPosition;
}
constexpr int32_t const& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_MaskPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaskPosition;
}
constexpr void System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_set_MaskPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaskPosition = value;
}
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_CaseConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseConversion;
}
constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion const& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_CaseConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseConversion;
}
constexpr void System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_set_CaseConversion(::System::ComponentModel::__MaskedTextProvider__CaseConversion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CaseConversion = value;
}
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_CharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharType;
}
constexpr ::System::ComponentModel::__MaskedTextProvider__CharType const& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_CharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharType;
}
constexpr void System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_set_CharType(::System::ComponentModel::__MaskedTextProvider__CharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CharType = value;
}
constexpr bool& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_IsAssigned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsAssigned;
}
constexpr bool const& System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_get_IsAssigned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsAssigned;
}
constexpr void System::ComponentModel::__MaskedTextProvider__CharDescriptor::__cordl_internal_set_IsAssigned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsAssigned = value;
}
inline ::System::ComponentModel::__MaskedTextProvider__CharDescriptor*
System::ComponentModel::__MaskedTextProvider__CharDescriptor::New_ctor(int32_t maskPos, ::System::ComponentModel::__MaskedTextProvider__CharType charType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>(maskPos, charType));
}
inline void System::ComponentModel::__MaskedTextProvider__CharDescriptor::_ctor(int32_t maskPos, ::System::ComponentModel::__MaskedTextProvider__CharType charType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maskPos, charType);
}
inline ::StringW System::ComponentModel::__MaskedTextProvider__CharDescriptor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__MaskedTextProvider__CharDescriptor::__MaskedTextProvider__CharDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW)>(
    &::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1afd260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, bool)>(
    &::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1afd650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, ::System::Globalization::CultureInfo*)>(
    &::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1afd668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, ::System::Globalization::CultureInfo*, bool)>(
    &::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1afd67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, char16_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1afd690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, ::System::Globalization::CultureInfo*, char16_t, bool)>(&::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1afd6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, ::System::Globalization::CultureInfo*, bool, char16_t, char16_t, bool)>(&::System::ComponentModel::MaskedTextProvider::_ctor)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x1afd278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::Initialize)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1afd774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_AllowPromptAsInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_AllowPromptAsInput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afdbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_AllowPromptAsInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_AssignedEditPositionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_AssignedEditPositionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afdc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_AssignedEditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_AssignedEditPositionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::set_AssignedEditPositionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afdc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_AssignedEditPositionCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_AvailableEditPositionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_AvailableEditPositionCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1afdc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_AvailableEditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::Clone)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1afdc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afe5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_Culture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_DefaultPasswordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::ComponentModel::MaskedTextProvider::get_DefaultPasswordChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afe5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_DefaultPasswordChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_EditPositionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_EditPositionCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1afdc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_EditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_EditPositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_EditPositions)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1afe5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_EditPositions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_IncludeLiterals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_IncludeLiterals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_IncludeLiterals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_IncludeLiterals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_IncludeLiterals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1afe484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IncludeLiterals",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_IncludePrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_IncludePrompt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_IncludePrompt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_IncludePrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_IncludePrompt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1afe564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IncludePrompt",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_AsciiOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_AsciiOnly)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_AsciiOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_IsPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_IsPassword)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1afe8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_IsPassword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_IsPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_IsPassword)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1afe8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IsPassword",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_InvalidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::ComponentModel::MaskedTextProvider::get_InvalidIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afe940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_InvalidIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_LastAssignedPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_LastAssignedPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1afe948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_LastAssignedPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1afea10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_Mask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_Mask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afea2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "get_Mask",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_MaskCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_MaskCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1afea34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_MaskCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_MaskFull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_MaskFull)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1afea44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_MaskFull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_PasswordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_PasswordChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_PasswordChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_PasswordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(char16_t)>(
    &::System::ComponentModel::MaskedTextProvider::set_PasswordChar)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1afea64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_PasswordChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_PromptChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_PromptChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afebd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_PromptChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_PromptChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(char16_t)>(
    &::System::ComponentModel::MaskedTextProvider::set_PromptChar)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1afebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_PromptChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_ResetOnPrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_ResetOnPrompt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_ResetOnPrompt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_ResetOnPrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_ResetOnPrompt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1afe15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_ResetOnPrompt",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_ResetOnSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_ResetOnSpace)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_ResetOnSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_ResetOnSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_ResetOnSpace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1afe1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_ResetOnSpace",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_SkipLiterals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::get_SkipLiterals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afe3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "get_SkipLiterals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.set_SkipLiterals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::set_SkipLiterals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1afe24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_SkipLiterals",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1afee30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(char16_t)>(
    &::System::ComponentModel::MaskedTextProvider::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1afeeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Add)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1afef0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(::StringW)>(
    &::System::ComponentModel::MaskedTextProvider::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1aff09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1aff0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)()>(&::System::ComponentModel::MaskedTextProvider::Clear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1aff1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(ByRef<::System::ComponentModel::MaskedTextResultHint>)>(
    &::System::ComponentModel::MaskedTextProvider::Clear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1aff1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindAssignedEditPositionFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindAssignedEditPositionFrom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1afe994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindAssignedEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindAssignedEditPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindAssignedEditPositionInRange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1aff2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindAssignedEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindEditPositionFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindEditPositionFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1afefe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindEditPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindEditPositionInRange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1aff40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindEditPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t, bool, uint8_t)>(
    &::System::ComponentModel::MaskedTextProvider::FindEditPositionInRange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1aff314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindNonEditPositionFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindNonEditPositionFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1aff510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindNonEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindNonEditPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindNonEditPositionInRange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1aff568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindNonEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(
    int32_t, int32_t, bool, ::System::ComponentModel::__MaskedTextProvider__CharType)>(&::System::ComponentModel::MaskedTextProvider::FindPositionInRange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1aff418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindUnassignedEditPositionFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindUnassignedEditPositionFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1aff574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindUnassignedEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.FindUnassignedEditPositionInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t, bool)>(
    &::System::ComponentModel::MaskedTextProvider::FindUnassignedEditPositionInRange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1aff5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindUnassignedEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.GetOperationResultFromHint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::MaskedTextResultHint)>(
    &::System::ComponentModel::MaskedTextProvider::GetOperationResultFromHint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1aff6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "GetOperationResultFromHint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MaskedTextResultHint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.InsertAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(char16_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::InsertAt)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1aff6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.InsertAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::InsertAt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1aff78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.InsertAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(::StringW, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::InsertAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1aff76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.InsertAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::InsertAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1aff7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.InsertAtInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>, bool)>(&::System::ComponentModel::MaskedTextProvider::InsertAtInt)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x1aff8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAtInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsAscii
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsAscii)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1b002e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAscii", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsAciiAlphanumeric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsAciiAlphanumeric)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1b002f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAciiAlphanumeric",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsAlphanumeric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsAlphanumeric)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1b00330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAlphanumeric",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsAsciiLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsAsciiLetter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1b003b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAsciiLetter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsAvailablePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::IsAvailablePosition)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1b003e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAvailablePosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsEditPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::IsEditPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1afed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsEditPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsEditPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::__MaskedTextProvider__CharDescriptor*)>(
    &::System::ComponentModel::MaskedTextProvider::IsEditPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1afdbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsEditPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsLiteralPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::__MaskedTextProvider__CharDescriptor*)>(
    &::System::ComponentModel::MaskedTextProvider::IsLiteralPosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1b004b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsLiteralPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsPrintableChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsPrintableChar)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1afd6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsPrintableChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsValidInputChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsValidInputChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1b004dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidInputChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsValidMaskChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsValidMaskChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1b00530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidMaskChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.IsValidPasswordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::ComponentModel::MaskedTextProvider::IsValidPasswordChar)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1afeb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidPasswordChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)()>(&::System::ComponentModel::MaskedTextProvider::Remove)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1b00584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Remove",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Remove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1b005b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::RemoveAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1b00610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::RemoveAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1b00634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    int32_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::RemoveAt)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1b00654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.RemoveAtInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    int32_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>, bool)>(&::System::ComponentModel::MaskedTextProvider::RemoveAtInt)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1b006ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAtInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(char16_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1afe2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1b00a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1b00b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(::StringW, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1b00f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1b00f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Replace)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x1b00c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ResetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ResetChar)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1aff23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ResetChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ResetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ResetString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1b009bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ResetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(::StringW)>(
    &::System::ComponentModel::MaskedTextProvider::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1b01080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::Set)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1b010a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.SetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(char16_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::SetChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1b001c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.SetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor*)>(&::System::ComponentModel::MaskedTextProvider::SetChar)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1b01198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.SetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MaskedTextProvider::*)(::StringW, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::SetString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1b00240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::TestChar)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1affd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestEscapeChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(char16_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::TestEscapeChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1b00b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestEscapeChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestEscapeChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor*)>(&::System::ComponentModel::MaskedTextProvider::TestEscapeChar)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1b01340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestEscapeChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestSetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::TestSetChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1aff03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestSetChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestSetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::TestSetString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1aff178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestSetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.TestString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, int32_t, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::TestString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1affbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::ToDisplayString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1b01438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                               "ToDisplayString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)()>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1b015b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(bool)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1b01904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1b0196c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(bool, int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1b019bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(bool, bool)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1b01a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(bool, bool, int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1b01a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::MaskedTextProvider::*)(bool, bool, bool, int32_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::ToString)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x1b01610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.VerifyChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    char16_t, int32_t, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::VerifyChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1b01a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.VerifyEscapeChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(char16_t, int32_t)>(
    &::System::ComponentModel::MaskedTextProvider::VerifyEscapeChar)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1b01af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyEscapeChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.VerifyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(::StringW)>(
    &::System::ComponentModel::MaskedTextProvider::VerifyString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1b01b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MaskedTextProvider.VerifyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MaskedTextProvider::*)(
    ::StringW, ByRef<int32_t>, ByRef<::System::ComponentModel::MaskedTextResultHint>)>(&::System::ComponentModel::MaskedTextProvider::VerifyString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1b01b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::ComponentModel::MaskedTextProvider::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::ComponentModel::MaskedTextProvider::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Specialized::BitVector32& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__flagState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flagState;
}
constexpr ::System::Collections::Specialized::BitVector32 const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__flagState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flagState;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__flagState(::System::Collections::Specialized::BitVector32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flagState = value;
}
constexpr ::System::Text::StringBuilder*& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__testString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testString;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__testString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testString;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__testString(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____testString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__requiredCharCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiredCharCount;
}
constexpr int32_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__requiredCharCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiredCharCount;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__requiredCharCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiredCharCount = value;
}
constexpr int32_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__requiredEditChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiredEditChars;
}
constexpr int32_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__requiredEditChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiredEditChars;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__requiredEditChars(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiredEditChars = value;
}
constexpr int32_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__optionalEditChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalEditChars;
}
constexpr int32_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__optionalEditChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalEditChars;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__optionalEditChars(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionalEditChars = value;
}
constexpr char16_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__passwordChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passwordChar;
}
constexpr char16_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__passwordChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passwordChar;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__passwordChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passwordChar = value;
}
constexpr char16_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__promptChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promptChar;
}
constexpr char16_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__promptChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promptChar;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__promptChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promptChar = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>*&
System::ComponentModel::MaskedTextProvider::__cordl_internal_get__stringDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringDescriptor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>*> const&
System::ComponentModel::MaskedTextProvider::__cordl_internal_get__stringDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringDescriptor;
}
constexpr void
System::ComponentModel::MaskedTextProvider::__cordl_internal_set__stringDescriptor(::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringDescriptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__AssignedEditPositionCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssignedEditPositionCount_k__BackingField;
}
constexpr int32_t const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__AssignedEditPositionCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssignedEditPositionCount_k__BackingField;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__AssignedEditPositionCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AssignedEditPositionCount_k__BackingField = value;
}
constexpr ::System::Globalization::CultureInfo*& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__Culture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Culture_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__Culture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Culture_k__BackingField;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__Culture_k__BackingField(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Culture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__Mask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Mask_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::MaskedTextProvider::__cordl_internal_get__Mask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Mask_k__BackingField;
}
constexpr void System::ComponentModel::MaskedTextProvider::__cordl_internal_set__Mask_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Mask_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_ASCII_ONLY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ASCII_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_ASCII_ONLY() {
  return ::cordl_internals::getStaticField<int32_t, "s_ASCII_ONLY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_ALLOW_PROMPT_AS_INPUT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ALLOW_PROMPT_AS_INPUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_ALLOW_PROMPT_AS_INPUT() {
  return ::cordl_internals::getStaticField<int32_t, "s_ALLOW_PROMPT_AS_INPUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_INCLUDE_PROMPT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_INCLUDE_PROMPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_INCLUDE_PROMPT() {
  return ::cordl_internals::getStaticField<int32_t, "s_INCLUDE_PROMPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_INCLUDE_LITERALS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_INCLUDE_LITERALS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_INCLUDE_LITERALS() {
  return ::cordl_internals::getStaticField<int32_t, "s_INCLUDE_LITERALS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_RESET_ON_PROMPT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_RESET_ON_PROMPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_RESET_ON_PROMPT() {
  return ::cordl_internals::getStaticField<int32_t, "s_RESET_ON_PROMPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_RESET_ON_LITERALS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_RESET_ON_LITERALS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_RESET_ON_LITERALS() {
  return ::cordl_internals::getStaticField<int32_t, "s_RESET_ON_LITERALS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_SKIP_SPACE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SKIP_SPACE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::MaskedTextProvider::getStaticF_s_SKIP_SPACE() {
  return ::cordl_internals::getStaticField<int32_t, "s_SKIP_SPACE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline void System::ComponentModel::MaskedTextProvider::setStaticF_s_maskTextProviderType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_maskTextProviderType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::ComponentModel::MaskedTextProvider::getStaticF_s_maskTextProviderType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_maskTextProviderType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get>();
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, bool restrictToAscii) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, restrictToAscii));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, bool restrictToAscii) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, restrictToAscii);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, culture));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, culture);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool restrictToAscii) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, culture, restrictToAscii));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool restrictToAscii) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, culture, restrictToAscii);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, char16_t passwordChar, bool allowPromptAsInput) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, passwordChar, allowPromptAsInput));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, char16_t passwordChar, bool allowPromptAsInput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, passwordChar, allowPromptAsInput);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, char16_t passwordChar,
                                                                                                          bool allowPromptAsInput) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, culture, passwordChar, allowPromptAsInput));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, char16_t passwordChar, bool allowPromptAsInput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, culture, passwordChar, allowPromptAsInput);
}
inline ::System::ComponentModel::MaskedTextProvider* System::ComponentModel::MaskedTextProvider::New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool allowPromptAsInput,
                                                                                                          char16_t promptChar, char16_t passwordChar, bool restrictToAscii) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MaskedTextProvider*>(mask, culture, allowPromptAsInput, promptChar, passwordChar, restrictToAscii));
}
inline void System::ComponentModel::MaskedTextProvider::_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool allowPromptAsInput, char16_t promptChar, char16_t passwordChar,
                                                              bool restrictToAscii) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask, culture, allowPromptAsInput, promptChar, passwordChar, restrictToAscii);
}
inline void System::ComponentModel::MaskedTextProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::get_AllowPromptAsInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_AllowPromptAsInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_AssignedEditPositionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_AssignedEditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_AssignedEditPositionCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_AssignedEditPositionCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_AvailableEditPositionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_AvailableEditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::MaskedTextProvider::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::ComponentModel::MaskedTextProvider::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_Culture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline char16_t System::ComponentModel::MaskedTextProvider::get_DefaultPasswordChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_DefaultPasswordChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_EditPositionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_EditPositionCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::MaskedTextProvider::get_EditPositions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_EditPositions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::get_IncludeLiterals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_IncludeLiterals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_IncludeLiterals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IncludeLiterals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::MaskedTextProvider::get_IncludePrompt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_IncludePrompt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_IncludePrompt(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IncludePrompt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::MaskedTextProvider::get_AsciiOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_AsciiOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::get_IsPassword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_IsPassword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_IsPassword(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_IsPassword",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_InvalidIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_InvalidIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_LastAssignedPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_LastAssignedPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::MaskedTextProvider::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::get_Mask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "get_Mask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::get_MaskCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_MaskCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::get_MaskFull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_MaskFull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::ComponentModel::MaskedTextProvider::get_PasswordChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_PasswordChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_PasswordChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_PasswordChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t System::ComponentModel::MaskedTextProvider::get_PromptChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_PromptChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_PromptChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_PromptChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::MaskedTextProvider::get_ResetOnPrompt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_ResetOnPrompt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_ResetOnPrompt(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_ResetOnPrompt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::MaskedTextProvider::get_ResetOnSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_ResetOnSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_ResetOnSpace(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_ResetOnSpace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::MaskedTextProvider::get_SkipLiterals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "get_SkipLiterals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::set_SkipLiterals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "set_SkipLiterals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t System::ComponentModel::MaskedTextProvider::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, index);
}
inline bool System::ComponentModel::MaskedTextProvider::Add(char16_t input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::ComponentModel::MaskedTextProvider::Add(char16_t input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::Add(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::ComponentModel::MaskedTextProvider::Add(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, testPosition, resultHint);
}
inline void System::ComponentModel::MaskedTextProvider::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::MaskedTextProvider::Clear(ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultHint);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindAssignedEditPositionFrom(int32_t position, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindAssignedEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindAssignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindAssignedEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindEditPositionFrom(int32_t position, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction, uint8_t assignedStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction, assignedStatus);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindNonEditPositionFrom(int32_t position, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindNonEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindNonEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindNonEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindPositionInRange(int32_t startPosition, int32_t endPosition, bool direction,
                                                                               ::System::ComponentModel::__MaskedTextProvider__CharType charTypeFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction, charTypeFlags);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindUnassignedEditPositionFrom(int32_t position, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindUnassignedEditPositionFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, direction);
}
inline int32_t System::ComponentModel::MaskedTextProvider::FindUnassignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "FindUnassignedEditPositionInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPosition, endPosition, direction);
}
inline bool System::ComponentModel::MaskedTextProvider::GetOperationResultFromHint(::System::ComponentModel::MaskedTextResultHint hint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "GetOperationResultFromHint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MaskedTextResultHint>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hint);
}
inline bool System::ComponentModel::MaskedTextProvider::InsertAt(char16_t input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::InsertAt(char16_t input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::InsertAt(::StringW input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::InsertAt(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::InsertAtInt(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint,
                                                                    bool testOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "InsertAtInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint, testOnly);
}
inline bool System::ComponentModel::MaskedTextProvider::IsAscii(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAscii", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsAciiAlphanumeric(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAciiAlphanumeric",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsAlphanumeric(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAlphanumeric",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsAsciiLetter(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAsciiLetter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsAvailablePosition(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsAvailablePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool System::ComponentModel::MaskedTextProvider::IsEditPosition(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsEditPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool System::ComponentModel::MaskedTextProvider::IsEditPosition(::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsEditPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charDescriptor);
}
inline bool System::ComponentModel::MaskedTextProvider::IsLiteralPosition(::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsLiteralPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charDescriptor);
}
inline bool System::ComponentModel::MaskedTextProvider::IsPrintableChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsPrintableChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsValidInputChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidInputChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsValidMaskChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidMaskChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::IsValidPasswordChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "IsValidPasswordChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::ComponentModel::MaskedTextProvider::Remove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Remove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MaskedTextProvider::Remove(ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::RemoveAt(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool System::ComponentModel::MaskedTextProvider::RemoveAt(int32_t startPosition, int32_t endPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPosition, endPosition);
}
inline bool System::ComponentModel::MaskedTextProvider::RemoveAt(int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition,
                                                                 ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPosition, endPosition, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::RemoveAtInt(int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition,
                                                                    ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint, bool testOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "RemoveAtInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPosition, endPosition, testPosition, resultHint, testOnly);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(char16_t input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(char16_t input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(char16_t input, int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition,
                                                                ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, startPosition, endPosition, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(::StringW input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::Replace(::StringW input, int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition,
                                                                ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, startPosition, endPosition, testPosition, resultHint);
}
inline void System::ComponentModel::MaskedTextProvider::ResetChar(int32_t testPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ResetChar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, testPosition);
}
inline void System::ComponentModel::MaskedTextProvider::ResetString(int32_t startPosition, int32_t endPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ResetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startPosition, endPosition);
}
inline bool System::ComponentModel::MaskedTextProvider::Set(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::ComponentModel::MaskedTextProvider::Set(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, testPosition, resultHint);
}
inline void System::ComponentModel::MaskedTextProvider::SetChar(char16_t input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, position);
}
inline void System::ComponentModel::MaskedTextProvider::SetChar(char16_t input, int32_t position, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, position, charDescriptor);
}
inline void System::ComponentModel::MaskedTextProvider::SetString(::StringW input, int32_t testPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "SetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, testPosition);
}
inline bool System::ComponentModel::MaskedTextProvider::TestChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::TestEscapeChar(char16_t input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestEscapeChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::TestEscapeChar(char16_t input, int32_t position, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestEscapeChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, charDex);
}
inline bool System::ComponentModel::MaskedTextProvider::TestSetChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestSetChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::TestSetString(::StringW input, int32_t position, ByRef<int32_t> testPosition,
                                                                      ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestSetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline bool System::ComponentModel::MaskedTextProvider::TestString(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "TestString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, testPosition, resultHint);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToDisplayString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(),
                                                                             "ToDisplayString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(bool ignorePasswordChar) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ignorePasswordChar);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(int32_t startPosition, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, startPosition, length);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(bool ignorePasswordChar, int32_t startPosition, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ignorePasswordChar, startPosition, length);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(bool includePrompt, bool includeLiterals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, includePrompt, includeLiterals);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, includePrompt, includeLiterals, startPosition, length);
}
inline ::StringW System::ComponentModel::MaskedTextProvider::ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ignorePasswordChar, includePrompt, includeLiterals, startPosition, length);
}
inline bool System::ComponentModel::MaskedTextProvider::VerifyChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> hint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position, hint);
}
inline bool System::ComponentModel::MaskedTextProvider::VerifyEscapeChar(char16_t input, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyEscapeChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, position);
}
inline bool System::ComponentModel::MaskedTextProvider::VerifyString(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::ComponentModel::MaskedTextProvider::VerifyString(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MaskedTextProvider*>::get(), "VerifyString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ComponentModel::MaskedTextResultHint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, testPosition, resultHint);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MaskedTextProvider::MaskedTextProvider() {}
