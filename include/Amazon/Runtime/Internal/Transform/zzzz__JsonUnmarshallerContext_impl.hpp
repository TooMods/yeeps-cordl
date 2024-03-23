#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonToken_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonReader_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType::__JsonUnmarshallerContext__PathSegmentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType::__JsonUnmarshallerContext__PathSegmentType() {}
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType::Value{
  static_cast<int32_t>(0x0)
};
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType::Delimiter{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment.get_SegmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType (
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::*)()>(&::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::get_SegmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(),
                                                 "get_SegmentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment.set_SegmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::*)(
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType)>(&::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::set_SegmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(), "set_SegmentType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::*)()>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(),
                                                 "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(), "set_Value",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::get_SegmentType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(),
                                               "get_SegmentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::set_SegmentType(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(), "set_SegmentType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(),
                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::set_Value(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get(), "set_Value",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SegmentType_k__BackingField", ty: "::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::__JsonUnmarshallerContext__PathSegment(
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType _SegmentType_k__BackingField, ::StringW _Value_k__BackingField) noexcept {
  this->_SegmentType_k__BackingField = _SegmentType_k__BackingField;
  this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment::__JsonUnmarshallerContext__PathSegment() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.get_CurrentDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_CurrentDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 "get_CurrentDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.get_CurrentPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_CurrentPath)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x244aa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 "get_CurrentPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)(
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment)>(&::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Push)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x244b09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(), "Push",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment (
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(&::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Pop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x244b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 "Pop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment (
    ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(&::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Peek)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x244b130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 "Peek", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244b230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::*)()>(
    &::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x244a74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>*&
Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>*> const&
Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_set_stack(
    ::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_currentDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDepth;
}
constexpr int32_t const& Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_currentDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDepth;
}
constexpr void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_set_currentDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentDepth = value;
}
constexpr ::System::Text::StringBuilder*& Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stackStringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackStringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const&
Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stackStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackStringBuilder;
}
constexpr void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_set_stackStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stackStringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stackString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackString;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_get_stackString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackString;
}
constexpr void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__cordl_internal_set_stackString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stackString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_CurrentDepth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                               "get_CurrentDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_CurrentPath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                               "get_CurrentPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Push(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment segment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(), "Push",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segment);
}
inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Pop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(), "Pop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::Peek() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(), "Peek",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>());
}
inline void Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack::__JsonUnmarshallerContext__JsonPathStack() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)(
    ::System::IO::Stream*, bool, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(&::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x244a3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_IsStartOfDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsStartOfDocument)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x244a938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_IsEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsEndElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x244a9bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsStartElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x244a9d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_CurrentDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentDepth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x244a9ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_CurrentPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentPath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x244aa08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Read)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x244aa54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)(::ThirdParty::Json::LitJson::JsonToken)>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Peek)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x244acbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "Peek", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.ReadText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::ReadText)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x244ad64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_CurrentTokenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::Json::LitJson::JsonToken (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentTokenType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244a974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                 "get_CurrentTokenType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.get_Stream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_Stream)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x244b020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "get_Stream",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Peek)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2449d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "Peek",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.StreamPeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::StreamPeek)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x244b044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "StreamPeek",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.UpdateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::UpdateContext)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x244ab14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "UpdateContext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::*)(bool)>(
    &::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x244b278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::IO::StreamReader*& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_streamReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_streamReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamReader;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_streamReader(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___streamReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ThirdParty::Json::LitJson::JsonReader*& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_jsonReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jsonReader;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonReader*> const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_jsonReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jsonReader;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_jsonReader(::ThirdParty::Json::LitJson::JsonReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___jsonReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*> const&
Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_stack(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_currentField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_currentField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentField;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_currentField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken>& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_currentToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentToken;
}
constexpr ::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_currentToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentToken;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_currentToken(::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentToken = value;
}
constexpr bool& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr bool& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_wasPeeked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasPeeked;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_get_wasPeeked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasPeeked;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::__cordl_internal_set_wasPeeked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasPeeked = value;
}
/// @param isException: bool (default: false)
inline ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*
Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                        ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>(responseStream, maintainResponseBody, responseData, isException));
}
/// @param isException: bool (default: false)
inline void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                 ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseStream, maintainResponseBody, responseData, isException);
}
inline bool Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsStartOfDocument() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsEndElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_IsStartElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentDepth() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentPath() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Peek(::ThirdParty::Json::LitJson::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "Peek", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
inline ::StringW Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::ReadText() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ThirdParty::Json::LitJson::JsonToken Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_CurrentTokenType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "get_CurrentTokenType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::JsonToken, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::get_Stream() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "get_Stream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Peek() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "Peek",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::StreamPeek() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "StreamPeek",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::UpdateContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), "UpdateContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext::JsonUnmarshallerContext() {}
