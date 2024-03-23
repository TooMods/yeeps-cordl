#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__ListCodeSigningConfigsResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__CodeSigningConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.get_CodeSigningConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* (
    ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)()>(&::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::get_CodeSigningConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcd5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                               "get_CodeSigningConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.set_CodeSigningConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*)>(&::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::set_CodeSigningConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcd5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(), "set_CodeSigningConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.IsSetCodeSigningConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::IsSetCodeSigningConfigs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bcd5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                               "IsSetCodeSigningConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.get_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::get_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcd604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                               "get_NextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.set_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::set_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcd60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(), "set_NextMarker",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse.IsSetNextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::IsSetNextMarker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bcd614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                               "IsSetNextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::*)()>(
    &::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bcd624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*& Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_get__codeSigningConfigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*> const&
Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_get__codeSigningConfigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigs;
}
constexpr void
Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_set__codeSigningConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSigningConfigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_get__nextMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr ::StringW const& Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_get__nextMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr void Amazon::Lambda::Model::ListCodeSigningConfigsResponse::__cordl_internal_set__nextMarker(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextMarker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* Amazon::Lambda::Model::ListCodeSigningConfigsResponse::get_CodeSigningConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                             "get_CodeSigningConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListCodeSigningConfigsResponse::set_CodeSigningConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(), "set_CodeSigningConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListCodeSigningConfigsResponse::IsSetCodeSigningConfigs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                             "IsSetCodeSigningConfigs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::ListCodeSigningConfigsResponse::get_NextMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                             "get_NextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListCodeSigningConfigsResponse::set_NextMarker(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(), "set_NextMarker",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListCodeSigningConfigsResponse::IsSetNextMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                             "IsSetNextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse* Amazon::Lambda::Model::ListCodeSigningConfigsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>());
}
inline void Amazon::Lambda::Model::ListCodeSigningConfigsResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse::ListCodeSigningConfigsResponse() {}
