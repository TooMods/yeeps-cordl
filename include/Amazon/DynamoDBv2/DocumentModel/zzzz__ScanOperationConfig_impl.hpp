#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Expression_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanFilter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x141f49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_AttributesToGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_ConsistentRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_ConsistentRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x141f538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_ConsistentRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_Limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_Limit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_Limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Limit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_FilterExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Expression* (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_FilterExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_FilterExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_FilterExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(::Amazon::DynamoDBv2::DocumentModel::Expression*)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_FilterExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_FilterExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_Filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ScanFilter* (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_Filter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_Filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(::Amazon::DynamoDBv2::DocumentModel::ScanFilter*)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Filter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_IndexName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_IndexName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_Select
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::SelectValues (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_Select", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_Select
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(
    ::Amazon::DynamoDBv2::DocumentModel::SelectValues)>(&::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Select", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::SelectValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_TotalSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_TotalSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_TotalSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_TotalSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_TotalSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_TotalSegments",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_Segment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Segment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_Segment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_Segment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Segment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Segment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_CollectResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_CollectResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_CollectResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_CollectResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_CollectResults)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x141f5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_CollectResults",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues (
    ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(&::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(
    ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues)>(&::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.get_PaginationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_PaginationToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                               "get_PaginationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig.set_PaginationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_PaginationToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_PaginationToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__AttributesToGet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__AttributesToGet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributesToGet_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__ConsistentRead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__ConsistentRead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__ConsistentRead_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConsistentRead_k__BackingField = value;
}
constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Limit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Limit_k__BackingField;
}
constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Limit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Limit_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__Limit_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Limit_k__BackingField = value;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__FilterExpression_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilterExpression_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const&
Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__FilterExpression_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilterExpression_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__FilterExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FilterExpression_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanFilter*& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Filter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*> const&
Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Filter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filter_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__Filter_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ScanFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Filter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__IndexName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__IndexName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__IndexName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Select_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Select_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Select_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Select_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__Select_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::SelectValues value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Select_k__BackingField = value;
}
constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__TotalSegments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TotalSegments_k__BackingField;
}
constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__TotalSegments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TotalSegments_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__TotalSegments_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TotalSegments_k__BackingField = value;
}
constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Segment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Segment_k__BackingField;
}
constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__Segment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Segment_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__Segment_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Segment_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__CollectResults_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CollectResults_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__CollectResults_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CollectResults_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__CollectResults_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CollectResults_k__BackingField = value;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__ConditionalOperator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const&
Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__ConditionalOperator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConditionalOperator_k__BackingField = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__PaginationToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PaginationToken_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_get__PaginationToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PaginationToken_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::__cordl_internal_set__PaginationToken_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PaginationToken_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_AttributesToGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_AttributesToGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_ConsistentRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_ConsistentRead(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_ConsistentRead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Limit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_Limit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Limit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Limit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Expression* Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_FilterExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_FilterExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Expression*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_FilterExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_FilterExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ScanFilter* Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Filter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_Filter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Filter(::Amazon::DynamoDBv2::DocumentModel::ScanFilter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Filter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_IndexName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_IndexName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_IndexName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_IndexName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::SelectValues Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Select() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_Select", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::SelectValues, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Select(::Amazon::DynamoDBv2::DocumentModel::SelectValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Select", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::SelectValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_TotalSegments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_TotalSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_TotalSegments(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_TotalSegments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_Segment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_Segment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_Segment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_Segment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_CollectResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_CollectResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_CollectResults(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_CollectResults",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_ConditionalOperator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::get_PaginationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                             "get_PaginationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::set_PaginationToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(), "set_PaginationToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig::ScanOperationConfig() {}
