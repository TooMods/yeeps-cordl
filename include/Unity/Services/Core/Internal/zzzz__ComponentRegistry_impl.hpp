#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__ComponentRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IComponentRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::ComponentRegistry.get_ComponentTypeHashToInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* (
    ::Unity::Services::Core::Internal::ComponentRegistry::*)()>(&::Unity::Services::Core::Internal::ComponentRegistry::get_ComponentTypeHashToInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266b0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(),
                                                 "get_ComponentTypeHashToInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::ComponentRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::ComponentRegistry::*)(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*)>(&::Unity::Services::Core::Internal::ComponentRegistry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x266b0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::ComponentRegistry.IsComponentTypeRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::ComponentRegistry::*)(int32_t)>(
    &::Unity::Services::Core::Internal::ComponentRegistry::IsComponentTypeRegistered)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x266b0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "IsComponentTypeRegistered",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::ComponentRegistry.ResetProvidedComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::ComponentRegistry::*)(
    ::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*)>(&::Unity::Services::Core::Internal::ComponentRegistry::ResetProvidedComponents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x266b1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "ResetProvidedComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr Unity::Services::Core::Internal::ComponentRegistry::operator ::Unity::Services::Core::Internal::IComponentRegistry*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IComponentRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr ::Unity::Services::Core::Internal::IComponentRegistry* Unity::Services::Core::Internal::ComponentRegistry::i___Unity__Services__Core__Internal__IComponentRegistry() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IComponentRegistry*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*&
Unity::Services::Core::Internal::ComponentRegistry::__cordl_internal_get__ComponentTypeHashToInstance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ComponentTypeHashToInstance_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*> const&
Unity::Services::Core::Internal::ComponentRegistry::__cordl_internal_get__ComponentTypeHashToInstance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ComponentTypeHashToInstance_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::ComponentRegistry::__cordl_internal_set__ComponentTypeHashToInstance_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ComponentTypeHashToInstance_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*
Unity::Services::Core::Internal::ComponentRegistry::get_ComponentTypeHashToInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(),
                                                                             "get_ComponentTypeHashToInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::ComponentRegistry* Unity::Services::Core::Internal::ComponentRegistry::New_ctor(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::ComponentRegistry*>(componentTypeHashToInstance));
}
inline void
Unity::Services::Core::Internal::ComponentRegistry::_ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentTypeHashToInstance);
}
template <typename TComponent> inline void Unity::Services::Core::Internal::ComponentRegistry::RegisterServiceComponent(TComponent component) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "RegisterServiceComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComponent>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component);
}
template <typename TComponent> inline TComponent Unity::Services::Core::Internal::ComponentRegistry::GetServiceComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "GetServiceComponent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get() }));
  return ::cordl_internals::RunMethodRethrow<TComponent, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Internal::ComponentRegistry::IsComponentTypeRegistered(int32_t componentTypeHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "IsComponentTypeRegistered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, componentTypeHash);
}
inline void Unity::Services::Core::Internal::ComponentRegistry::ResetProvidedComponents(
    ::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ComponentRegistry*>::get(), "ResetProvidedComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentTypeHashToInstance);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::ComponentRegistry::ComponentRegistry() {}
