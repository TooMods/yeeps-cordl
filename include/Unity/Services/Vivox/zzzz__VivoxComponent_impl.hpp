#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxComponent_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Vivox/Internal/zzzz__IVivoxTokenProviderInternal_def.hpp"
#include "Unity/Services/Vivox/Internal/zzzz__IVivox_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxServiceInternal_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxComponent::*)(::Unity::Services::Vivox::VivoxServiceInternal*)>(
    &::Unity::Services::Vivox::VivoxComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1c13110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxServiceInternal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxComponent.RegisterTokenProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxComponent::*)(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*)>(
    &::Unity::Services::Vivox::VivoxComponent::RegisterTokenProvider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1c13138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxComponent*>::get(), "RegisterTokenProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::Internal::IVivox"
constexpr Unity::Services::Vivox::VivoxComponent::operator ::Unity::Services::Vivox::Internal::IVivox*() noexcept {
  return static_cast<::Unity::Services::Vivox::Internal::IVivox*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::Internal::IVivox"
constexpr ::Unity::Services::Vivox::Internal::IVivox* Unity::Services::Vivox::VivoxComponent::i___Unity__Services__Vivox__Internal__IVivox() noexcept {
  return static_cast<::Unity::Services::Vivox::Internal::IVivox*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Vivox::VivoxComponent::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Vivox::VivoxComponent::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Vivox::VivoxServiceInternal*& Unity::Services::Vivox::VivoxComponent::__cordl_internal_get_m_vivoxService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_vivoxService;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxServiceInternal*> const& Unity::Services::Vivox::VivoxComponent::__cordl_internal_get_m_vivoxService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_vivoxService;
}
constexpr void Unity::Services::Vivox::VivoxComponent::__cordl_internal_set_m_vivoxService(::Unity::Services::Vivox::VivoxServiceInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_vivoxService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::VivoxComponent* Unity::Services::Vivox::VivoxComponent::New_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::VivoxComponent*>(vivoxService));
}
inline void Unity::Services::Vivox::VivoxComponent::_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxServiceInternal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vivoxService);
}
inline void Unity::Services::Vivox::VivoxComponent::RegisterTokenProvider(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* tokenProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxComponent*>::get(), "RegisterTokenProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenProvider);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxComponent::VivoxComponent() {}
