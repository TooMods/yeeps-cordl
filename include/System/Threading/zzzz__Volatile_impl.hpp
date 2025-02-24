#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__Volatile__VolatileBoolean::__Volatile__VolatileBoolean(bool Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::__Volatile__VolatileBoolean::__Volatile__VolatileBoolean() {}
// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__Volatile__VolatileInt32::__Volatile__VolatileInt32(int32_t Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::__Volatile__VolatileInt32::__Volatile__VolatileInt32() {}
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Threading::__Volatile__VolatileObject::__Volatile__VolatileObject(::System::Object* Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::__Volatile__VolatileObject::__Volatile__VolatileObject() {}
//  Writing Method size for method: ::System::Threading::Volatile.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<bool>, bool)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xed1f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, int32_t)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xed1fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Volatile::Write(ByRef<bool> location, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
inline void System::Threading::Volatile::Write(ByRef<int32_t> location, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
template <typename T> inline T System::Threading::Volatile::Read(ByRef<T> location) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Read",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, location);
}
template <typename T> inline void System::Threading::Volatile::Write(ByRef<T> location, T value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Volatile*>::get(), "Write",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile::Volatile() {}
