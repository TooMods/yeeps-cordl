#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__ListProvisionedConcurrencyConfigsResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ProvisionedConcurrencyConfigListItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.get_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::get_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "get_NextMarker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.set_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::set_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "set_NextMarker",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.IsSetNextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::IsSetNextMarker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bce610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "IsSetNextMarker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.get_ProvisionedConcurrencyConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* (
    ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)()>(&::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::get_ProvisionedConcurrencyConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(),
                                                 "get_ProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.set_ProvisionedConcurrencyConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*)>(
        &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::set_ProvisionedConcurrencyConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "set_ProvisionedConcurrencyConfigs",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse.IsSetProvisionedConcurrencyConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::IsSetProvisionedConcurrencyConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bce630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(),
                                                 "IsSetProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bce684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_get__nextMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr ::StringW const& Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_get__nextMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr void Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_set__nextMarker(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextMarker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*&
Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_get__provisionedConcurrencyConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedConcurrencyConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*> const&
Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_get__provisionedConcurrencyConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedConcurrencyConfigs;
}
constexpr void Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::__cordl_internal_set__provisionedConcurrencyConfigs(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedConcurrencyConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::get_NextMarker() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "get_NextMarker",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::set_NextMarker(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "set_NextMarker",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::IsSetNextMarker() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "IsSetNextMarker",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*
Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::get_ProvisionedConcurrencyConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(),
                                               "get_ProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::set_ProvisionedConcurrencyConfigs(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), "set_ProvisionedConcurrencyConfigs",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::IsSetProvisionedConcurrencyConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(),
                                               "IsSetProvisionedConcurrencyConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse* Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>());
}
inline void Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse::ListProvisionedConcurrencyConfigsResponse() {}
