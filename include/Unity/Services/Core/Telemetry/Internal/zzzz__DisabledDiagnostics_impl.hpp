#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DisabledDiagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics.Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::*)(::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x270b758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*>::get(),
        "Unity.Services.Core.Telemetry.Internal.IDiagnostics.SendDiagnostic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270b75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
constexpr Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::operator ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*
Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::i___Unity__Services__Core__Telemetry__Internal__IDiagnostics() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>(static_cast<void*>(this));
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic(
    ::StringW name, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*>::get(),
      "Unity.Services.Core.Telemetry.Internal.IDiagnostics.SendDiagnostic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, message, tags);
}
inline ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics* Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*>());
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics::DisabledDiagnostics() {}
