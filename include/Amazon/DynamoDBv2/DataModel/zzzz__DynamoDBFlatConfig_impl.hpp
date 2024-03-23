#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContextConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ScanCondition_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "Amazon/Util/zzzz__CircularReferenceTracking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1422e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState.Track
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::Track)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1423084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get(), "Track",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::CircularReferenceTracking*& Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::__cordl_internal_get_referenceTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceTracking;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CircularReferenceTracking*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::__cordl_internal_get_referenceTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceTracking;
}
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::__cordl_internal_set_referenceTracking(::Amazon::Util::CircularReferenceTracking* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referenceTracking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>());
}
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IDisposable* Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::Track(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get(), "Track",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState::__DynamoDBFlatConfig__OperationState() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x1422ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_ConsistentRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::System::Nullable_1<bool>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_ConsistentRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_ConsistentRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_SkipVersionCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_SkipVersionCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_SkipVersionCheck", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_SkipVersionCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::System::Nullable_1<bool>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_SkipVersionCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_SkipVersionCheck", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_TableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_TableNamePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_TableNamePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_TableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_TableNamePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_TableNamePrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_IgnoreNullValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IgnoreNullValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_IgnoreNullValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_IgnoreNullValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::System::Nullable_1<bool>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IgnoreNullValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IgnoreNullValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_IsEmptyStringValueEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IsEmptyStringValueEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_IsEmptyStringValueEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_IsEmptyStringValueEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IsEmptyStringValueEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1422ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IsEmptyStringValueEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_OverrideTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_OverrideTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_OverrideTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_OverrideTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_OverrideTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_OverrideTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_BackwardQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_BackwardQuery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_BackwardQuery", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_BackwardQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::System::Nullable_1<bool>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_BackwardQuery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_BackwardQuery", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_IndexName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IndexName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(
    ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_QueryFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_QueryFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_QueryFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_QueryFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_QueryFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_QueryFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_Conversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_Conversion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_IsIndexOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IsIndexOperation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1422f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_IsIndexOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                               "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::*)(
    ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1422f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__ConsistentRead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__ConsistentRead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__ConsistentRead_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConsistentRead_k__BackingField = value;
}
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__SkipVersionCheck_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkipVersionCheck_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__SkipVersionCheck_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkipVersionCheck_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__SkipVersionCheck_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SkipVersionCheck_k__BackingField = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__TableNamePrefix_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableNamePrefix_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__TableNamePrefix_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableNamePrefix_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__TableNamePrefix_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TableNamePrefix_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IgnoreNullValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNullValues_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IgnoreNullValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNullValues_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__IgnoreNullValues_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreNullValues_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEmptyStringValueEnabled_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEmptyStringValueEnabled_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsEmptyStringValueEnabled_k__BackingField = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__OverrideTableName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OverrideTableName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__OverrideTableName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OverrideTableName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__OverrideTableName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OverrideTableName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__BackwardQuery_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BackwardQuery_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__BackwardQuery_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BackwardQuery_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__BackwardQuery_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BackwardQuery_k__BackingField = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IndexName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__IndexName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__IndexName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__ConditionalOperator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__ConditionalOperator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConditionalOperator_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*&
Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__QueryFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueryFilter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__QueryFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueryFilter_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__QueryFilter_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____QueryFilter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__Conversion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__Conversion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Conversion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*& Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::__cordl_internal_set__State_k__BackingField(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____State_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::setStaticF_DefaultIndexName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultIndexName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::getStaticF_DefaultIndexName() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultIndexName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::setStaticF__emptyOperationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*, "_emptyOperationConfig",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>(
      std::forward<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>(value));
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::getStaticF__emptyOperationConfig() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*, "_emptyOperationConfig",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::setStaticF__emptyContextConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*, "_emptyContextConfig",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>(
      std::forward<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>(value));
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::getStaticF__emptyContextConfig() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*, "_emptyContextConfig",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get>();
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* contextConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>(operationConfig, contextConfig));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                     ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* contextConfig) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationConfig, contextConfig);
}
inline ::System::Nullable_1<bool> Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_ConsistentRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_ConsistentRead(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_ConsistentRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_SkipVersionCheck() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_SkipVersionCheck", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_SkipVersionCheck(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_SkipVersionCheck", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_TableNamePrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_TableNamePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_TableNamePrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_TableNamePrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IgnoreNullValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_IgnoreNullValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IgnoreNullValues(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IgnoreNullValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IsEmptyStringValueEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_IsEmptyStringValueEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IsEmptyStringValueEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IsEmptyStringValueEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_OverrideTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_OverrideTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_OverrideTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_OverrideTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_BackwardQuery() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_BackwardQuery", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_BackwardQuery(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_BackwardQuery", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IndexName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_IndexName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_IndexName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_IndexName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_ConditionalOperator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_QueryFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_QueryFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_QueryFilter(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_QueryFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_Conversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_Conversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_Conversion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_IsIndexOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_IsIndexOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                             "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::set_State(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig::DynamoDBFlatConfig() {}
