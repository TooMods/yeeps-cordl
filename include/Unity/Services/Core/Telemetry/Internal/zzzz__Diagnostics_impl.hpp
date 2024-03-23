#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Diagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsHandler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Diagnostics.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* (
    ::Unity::Services::Core::Telemetry::Internal::Diagnostics::*)()>(&::Unity::Services::Core::Telemetry::Internal::Diagnostics::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), "get_Handler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Diagnostics.get_PackageTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Unity::Services::Core::Telemetry::Internal::Diagnostics::*)()>(&::Unity::Services::Core::Telemetry::Internal::Diagnostics::get_PackageTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), "get_PackageTags",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Diagnostics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::Diagnostics::*)(
    ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Unity::Services::Core::Telemetry::Internal::Diagnostics::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x270b124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Diagnostics.SendDiagnostic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::Diagnostics::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::Diagnostics::SendDiagnostic)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x270b150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), "SendDiagnostic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
constexpr Unity::Services::Core::Telemetry::Internal::Diagnostics::operator ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* Unity::Services::Core::Telemetry::Internal::Diagnostics::i___Unity__Services__Core__Telemetry__Internal__IDiagnostics() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*& Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_get__Handler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*> const&
Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_get__Handler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Handler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_get__PackageTags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PackageTags_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_get__PackageTags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PackageTags_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::Diagnostics::__cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PackageTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* Unity::Services::Core::Telemetry::Internal::Diagnostics::get_Handler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(),
                                                                             "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Unity::Services::Core::Telemetry::Internal::Diagnostics::get_PackageTags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(),
                                                                             "get_PackageTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::Diagnostics*
Unity::Services::Core::Telemetry::Internal::Diagnostics::New_ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler,
                                                                  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>(handler, packageTags));
}
inline void Unity::Services::Core::Telemetry::Internal::Diagnostics::_ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler,
                                                                           ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, packageTags);
}
/// @param tags: ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (default: nullptr)
inline void Unity::Services::Core::Telemetry::Internal::Diagnostics::SendDiagnostic(::StringW name, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Diagnostics*>::get(), "SendDiagnostic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, message, tags);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::Diagnostics::Diagnostics() {}
