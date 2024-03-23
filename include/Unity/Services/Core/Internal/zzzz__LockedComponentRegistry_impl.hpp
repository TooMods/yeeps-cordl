#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__LockedComponentRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IComponentRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedComponentRegistry.get_Registry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::IComponentRegistry* (
    ::Unity::Services::Core::Internal::LockedComponentRegistry::*)()>(&::Unity::Services::Core::Internal::LockedComponentRegistry::get_Registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266b21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), "get_Registry",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedComponentRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::LockedComponentRegistry::*)(
    ::Unity::Services::Core::Internal::IComponentRegistry*)>(&::Unity::Services::Core::Internal::LockedComponentRegistry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x266b224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IComponentRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedComponentRegistry.ResetProvidedComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Internal::LockedComponentRegistry::*)(::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*)>(
        &::Unity::Services::Core::Internal::LockedComponentRegistry::ResetProvidedComponents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x266b24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), "ResetProvidedComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr Unity::Services::Core::Internal::LockedComponentRegistry::operator ::Unity::Services::Core::Internal::IComponentRegistry*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IComponentRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr ::Unity::Services::Core::Internal::IComponentRegistry* Unity::Services::Core::Internal::LockedComponentRegistry::i___Unity__Services__Core__Internal__IComponentRegistry() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IComponentRegistry*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::Internal::IComponentRegistry*& Unity::Services::Core::Internal::LockedComponentRegistry::__cordl_internal_get__Registry_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Registry_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::IComponentRegistry*> const&
Unity::Services::Core::Internal::LockedComponentRegistry::__cordl_internal_get__Registry_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Registry_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::LockedComponentRegistry::__cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IComponentRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Registry_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::IComponentRegistry* Unity::Services::Core::Internal::LockedComponentRegistry::get_Registry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(),
                                                                             "get_Registry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::IComponentRegistry*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::LockedComponentRegistry*
Unity::Services::Core::Internal::LockedComponentRegistry::New_ctor(::Unity::Services::Core::Internal::IComponentRegistry* registryToLock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::LockedComponentRegistry*>(registryToLock));
}
inline void Unity::Services::Core::Internal::LockedComponentRegistry::_ctor(::Unity::Services::Core::Internal::IComponentRegistry* registryToLock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IComponentRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registryToLock);
}
template <typename TComponent> inline void Unity::Services::Core::Internal::LockedComponentRegistry::RegisterServiceComponent(TComponent component) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), "RegisterServiceComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComponent>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component);
}
template <typename TComponent> inline TComponent Unity::Services::Core::Internal::LockedComponentRegistry::GetServiceComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), "GetServiceComponent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }));
  return ::cordl_internals::RunMethodRethrow<TComponent, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::LockedComponentRegistry::ResetProvidedComponents(
    ::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedComponentRegistry*>::get(), "ResetProvidedComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentTypeHashToInstance);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::LockedComponentRegistry::LockedComponentRegistry() {}
