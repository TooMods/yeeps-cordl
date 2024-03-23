#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__AliasRoutingConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::AliasRoutingConfiguration.get_AdditionalVersionWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, double_t>* (
    ::Amazon::Lambda::Model::AliasRoutingConfiguration::*)()>(&::Amazon::Lambda::Model::AliasRoutingConfiguration::get_AdditionalVersionWeights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc44e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                               "get_AdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::AliasRoutingConfiguration.set_AdditionalVersionWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::AliasRoutingConfiguration::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, double_t>*)>(&::Amazon::Lambda::Model::AliasRoutingConfiguration::set_AdditionalVersionWeights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc44ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(), "set_AdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, double_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::AliasRoutingConfiguration.IsSetAdditionalVersionWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::AliasRoutingConfiguration::*)()>(
    &::Amazon::Lambda::Model::AliasRoutingConfiguration::IsSetAdditionalVersionWeights)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bc44f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                               "IsSetAdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::AliasRoutingConfiguration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::AliasRoutingConfiguration::*)()>(
    &::Amazon::Lambda::Model::AliasRoutingConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bc454c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, double_t>*& Amazon::Lambda::Model::AliasRoutingConfiguration::__cordl_internal_get__additionalVersionWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalVersionWeights;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, double_t>*> const&
Amazon::Lambda::Model::AliasRoutingConfiguration::__cordl_internal_get__additionalVersionWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalVersionWeights;
}
constexpr void Amazon::Lambda::Model::AliasRoutingConfiguration::__cordl_internal_set__additionalVersionWeights(::System::Collections::Generic::Dictionary_2<::StringW, double_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalVersionWeights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, double_t>* Amazon::Lambda::Model::AliasRoutingConfiguration::get_AdditionalVersionWeights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                             "get_AdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, double_t>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::AliasRoutingConfiguration::set_AdditionalVersionWeights(::System::Collections::Generic::Dictionary_2<::StringW, double_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(), "set_AdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, double_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::AliasRoutingConfiguration::IsSetAdditionalVersionWeights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                             "IsSetAdditionalVersionWeights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::AliasRoutingConfiguration* Amazon::Lambda::Model::AliasRoutingConfiguration::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::AliasRoutingConfiguration*>());
}
inline void Amazon::Lambda::Model::AliasRoutingConfiguration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::AliasRoutingConfiguration*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::AliasRoutingConfiguration::AliasRoutingConfiguration() {}
