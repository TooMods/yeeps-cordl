#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1d9022c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.Reload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*)>(&::UnityEngine::Rendering::VolumeStack::Reload)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x1d902b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "Reload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.GetComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeStack::*)(::System::Type*)>(
    &::UnityEngine::Rendering::VolumeStack::GetComponent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1d90698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "GetComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1d90708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::VolumeStack::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::VolumeStack::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_components() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> const&
UnityEngine::Rendering::VolumeStack::__cordl_internal_get_components() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr void
UnityEngine::Rendering::VolumeStack::__cordl_internal_set_components(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___components)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
                   ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*>&
UnityEngine::Rendering::VolumeStack::__cordl_internal_get_defaultParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultParameters;
}
constexpr ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
                   ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*> const&
UnityEngine::Rendering::VolumeStack::__cordl_internal_get_defaultParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultParameters;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set_defaultParameters(
    ::ArrayW<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>,
             ::Array<::System::ValueTuple_2<::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresReset;
}
constexpr bool const& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresReset;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set_requiresReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresReset = value;
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeStack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeStack*>());
}
inline void UnityEngine::Rendering::VolumeStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeStack::Reload(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* componentDefaultStates) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "Reload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentDefaultStates);
}
template <typename T> inline T UnityEngine::Rendering::VolumeStack::GetComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "GetComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::VolumeStack::GetComponent(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "GetComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>, false>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::VolumeStack::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeStack*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeStack::VolumeStack() {}
