#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsHandler_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory.get_CommonTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* (
    ::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)()>(&::Unity::Services::Core::Telemetry::Internal::MetricsFactory::get_CommonTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270ceb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "get_CommonTags",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::MetricsHandler* (
    ::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)()>(&::Unity::Services::Core::Telemetry::Internal::MetricsFactory::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270cec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "get_Handler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)(
    ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(
    &::Unity::Services::Core::Telemetry::Internal::MetricsFactory::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x270cec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics* (
    ::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)(::StringW)>(&::Unity::Services::Core::Telemetry::Internal::MetricsFactory::Create)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x270cfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
constexpr Unity::Services::Core::Telemetry::Internal::MetricsFactory::operator ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*
Unity::Services::Core::Telemetry::Internal::MetricsFactory::i___Unity__Services__Core__Telemetry__Internal__IMetricsFactory() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Telemetry::Internal::MetricsFactory::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Telemetry::Internal::MetricsFactory::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*& Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get_m_ProjectConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*> const&
Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get_m_ProjectConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectConfig;
}
constexpr void Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_set_m_ProjectConfig(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProjectConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*& Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__CommonTags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CommonTags_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__CommonTags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CommonTags_k__BackingField;
}
constexpr void
Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_set__CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CommonTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*& Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__Handler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*> const&
Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__Handler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Handler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Unity::Services::Core::Telemetry::Internal::MetricsFactory::get_CommonTags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "get_CommonTags",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* Unity::Services::Core::Telemetry::Internal::MetricsFactory::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "get_Handler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::MetricsFactory*
Unity::Services::Core::Telemetry::Internal::MetricsFactory::New_ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler,
                                                                     ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>(handler, projectConfig));
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsFactory::_ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler,
                                                                              ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, projectConfig);
}
inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::MetricsFactory::Create(::StringW packageName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(), "Create",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IMetrics*, false>(this, ___internal_method, packageName);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsFactory::MetricsFactory() {}
