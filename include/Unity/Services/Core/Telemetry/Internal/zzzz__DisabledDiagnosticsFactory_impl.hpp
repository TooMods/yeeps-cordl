#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DisabledDiagnosticsFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory.Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* (::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::*)()>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(),
                                    "Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.get_CommonTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory.Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics* (::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::*)(::StringW)>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x270b76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(),
                                                 "Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.Create", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x270b7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
constexpr Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::operator ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsFactory() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent*
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*&
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::__cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::__cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::__cordl_internal_set__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField(
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(),
                                  "Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.get_CommonTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*
Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create(::StringW packageName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(),
                                               "Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.Create", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*, false>(this, ___internal_method, packageName);
}
inline ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory* Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>());
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory::DisabledDiagnosticsFactory() {}
