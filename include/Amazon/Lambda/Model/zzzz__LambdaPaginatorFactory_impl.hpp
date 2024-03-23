#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__LambdaPaginatorFactory_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ILambdaPaginatorFactory_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListAliasesPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListCodeSigningConfigsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListEventSourceMappingsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListFunctionEventInvokeConfigsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListFunctionsByCodeSigningConfigPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListFunctionsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListLayerVersionsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListLayersPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListProvisionedConcurrencyConfigsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListVersionsByFunctionPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListAliasesRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListCodeSigningConfigsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListEventSourceMappingsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListFunctionEventInvokeConfigsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListFunctionsByCodeSigningConfigRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListFunctionsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayersRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListProvisionedConcurrencyConfigsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListVersionsByFunctionRequest_def.hpp"
#include "Amazon/Lambda/zzzz__IAmazonLambda_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::IAmazonLambda*)>(
    &::Amazon::Lambda::Model::LambdaPaginatorFactory::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x310d0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::IAmazonLambda*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListAliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListAliasesPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListAliasesRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListAliases)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListAliases", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListAliasesRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListCodeSigningConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListCodeSigningConfigs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListCodeSigningConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListCodeSigningConfigsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListEventSourceMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListEventSourceMappingsRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListEventSourceMappings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListEventSourceMappings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListEventSourceMappingsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListFunctionEventInvokeConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest*)>(
    &::Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctionEventInvokeConfigs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctionEventInvokeConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListFunctions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListFunctionsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListFunctionsRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListFunctionsByCodeSigningConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest*)>(
    &::Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctionsByCodeSigningConfig)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctionsByCodeSigningConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListLayersPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListLayersRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListLayers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListLayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayersRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListLayerVersions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListLayerVersionsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListLayerVersionsRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListLayerVersions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListLayerVersions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListProvisionedConcurrencyConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest*)>(
    &::Amazon::Lambda::Model::LambdaPaginatorFactory::ListProvisionedConcurrencyConfigs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::LambdaPaginatorFactory.ListVersionsByFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::IListVersionsByFunctionPaginator* (
    ::Amazon::Lambda::Model::LambdaPaginatorFactory::*)(::Amazon::Lambda::Model::ListVersionsByFunctionRequest*)>(&::Amazon::Lambda::Model::LambdaPaginatorFactory::ListVersionsByFunction)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x310d6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListVersionsByFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListVersionsByFunctionRequest*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Lambda::Model::ILambdaPaginatorFactory"
constexpr Amazon::Lambda::Model::LambdaPaginatorFactory::operator ::Amazon::Lambda::Model::ILambdaPaginatorFactory*() noexcept {
  return static_cast<::Amazon::Lambda::Model::ILambdaPaginatorFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Lambda::Model::ILambdaPaginatorFactory"
constexpr ::Amazon::Lambda::Model::ILambdaPaginatorFactory* Amazon::Lambda::Model::LambdaPaginatorFactory::i___Amazon__Lambda__Model__ILambdaPaginatorFactory() noexcept {
  return static_cast<::Amazon::Lambda::Model::ILambdaPaginatorFactory*>(static_cast<void*>(this));
}
constexpr ::Amazon::Lambda::IAmazonLambda*& Amazon::Lambda::Model::LambdaPaginatorFactory::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::IAmazonLambda*> const& Amazon::Lambda::Model::LambdaPaginatorFactory::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Amazon::Lambda::Model::LambdaPaginatorFactory::__cordl_internal_set_client(::Amazon::Lambda::IAmazonLambda* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Lambda::Model::LambdaPaginatorFactory* Amazon::Lambda::Model::LambdaPaginatorFactory::New_ctor(::Amazon::Lambda::IAmazonLambda* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::LambdaPaginatorFactory*>(client));
}
inline void Amazon::Lambda::Model::LambdaPaginatorFactory::_ctor(::Amazon::Lambda::IAmazonLambda* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::IAmazonLambda*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline ::Amazon::Lambda::Model::IListAliasesPaginator* Amazon::Lambda::Model::LambdaPaginatorFactory::ListAliases(::Amazon::Lambda::Model::ListAliasesRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListAliases", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListAliasesRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListAliasesPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListCodeSigningConfigs(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListCodeSigningConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListCodeSigningConfigsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListEventSourceMappings(::Amazon::Lambda::Model::ListEventSourceMappingsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListEventSourceMappings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListEventSourceMappingsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListEventSourceMappingsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctionEventInvokeConfigs(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctionEventInvokeConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListFunctionsPaginator* Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctions(::Amazon::Lambda::Model::ListFunctionsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListFunctionsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListFunctionsByCodeSigningConfig(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListFunctionsByCodeSigningConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListLayersPaginator* Amazon::Lambda::Model::LambdaPaginatorFactory::ListLayers(::Amazon::Lambda::Model::ListLayersRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListLayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayersRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListLayersPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListLayerVersionsPaginator* Amazon::Lambda::Model::LambdaPaginatorFactory::ListLayerVersions(::Amazon::Lambda::Model::ListLayerVersionsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListLayerVersions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListLayerVersionsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListProvisionedConcurrencyConfigs(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::Lambda::Model::IListVersionsByFunctionPaginator*
Amazon::Lambda::Model::LambdaPaginatorFactory::ListVersionsByFunction(::Amazon::Lambda::Model::ListVersionsByFunctionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::LambdaPaginatorFactory*>::get(), "ListVersionsByFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListVersionsByFunctionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::IListVersionsByFunctionPaginator*, false>(this, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::LambdaPaginatorFactory::LambdaPaginatorFactory() {}
