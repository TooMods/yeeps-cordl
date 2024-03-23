#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SourceTableFeatureDetails_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalSecondaryIndexInfo_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__LocalSecondaryIndexInfo_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SSEDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamSpecification_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TimeToLiveDescription_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.get_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* (
    ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(&::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105142c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.set_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*)>(&::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.IsSetGlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetGlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x105143c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.get_LocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* (
    ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(&::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_LocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "get_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.set_LocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*)>(&::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_LocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.IsSetLocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetLocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10514a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "IsSetLocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.get_SSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::SSEDescription* (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_SSEDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10514f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "get_SSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.set_SSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)(::Amazon::DynamoDBv2::Model::SSEDescription*)>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_SSEDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10514fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_SSEDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSEDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.IsSetSSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetSSEDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "IsSetSSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.get_StreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::StreamSpecification* (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_StreamDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "get_StreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.set_StreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)(::Amazon::DynamoDBv2::Model::StreamSpecification*)>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_StreamDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_StreamDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.IsSetStreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetStreamDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "IsSetStreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.get_TimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TimeToLiveDescription* (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_TimeToLiveDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "get_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.set_TimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)(
    ::Amazon::DynamoDBv2::Model::TimeToLiveDescription*)>(&::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_TimeToLiveDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105153c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails.IsSetTimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetTimeToLiveDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               "IsSetTimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::*)()>(
    &::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1051554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__globalSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*> const&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__globalSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_set__globalSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__localSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*> const&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__localSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexes;
}
constexpr void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_set__localSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::SSEDescription*& Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__sseDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSEDescription*> const& Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__sseDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseDescription;
}
constexpr void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_set__sseDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sseDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__streamDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__streamDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamDescription;
}
constexpr void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_set__streamDescription(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveDescription*& Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__timeToLiveDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*> const&
Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_get__timeToLiveDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveDescription;
}
constexpr void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::__cordl_internal_set__timeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeToLiveDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_GlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetGlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_LocalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "get_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_LocalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetLocalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "IsSetLocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SSEDescription* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_SSEDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "get_SSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::SSEDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_SSEDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_SSEDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSEDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetSSEDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "IsSetSSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::StreamSpecification* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_StreamDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "get_StreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::StreamSpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_StreamDescription(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_StreamDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetStreamDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "IsSetStreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::TimeToLiveDescription* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::get_TimeToLiveDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "get_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::set_TimeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(), "set_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::IsSetTimeToLiveDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             "IsSetTimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>());
}
inline void Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails::SourceTableFeatureDetails() {}
