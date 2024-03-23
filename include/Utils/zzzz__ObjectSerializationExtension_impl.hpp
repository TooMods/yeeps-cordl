#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Utils/zzzz__ObjectSerializationExtension_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Utils::ObjectSerializationExtension.GetCustomFormatter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* (*)()>(
    &::Utils::ObjectSerializationExtension::GetCustomFormatter)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xf353cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utils::ObjectSerializationExtension*>::get(),
                                                                               "GetCustomFormatter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utils::ObjectSerializationExtension.SerializeToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Object*)>(
    &::Utils::ObjectSerializationExtension::SerializeToByteArray)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf35620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utils::ObjectSerializationExtension*>::get(), "SerializeToByteArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* Utils::ObjectSerializationExtension::GetCustomFormatter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utils::ObjectSerializationExtension*>::get(),
                                                                             "GetCustomFormatter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, false>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Utils::ObjectSerializationExtension::SerializeToByteArray(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utils::ObjectSerializationExtension*>::get(), "SerializeToByteArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, obj);
}
template <typename T> inline T Utils::ObjectSerializationExtension::Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> byteArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Utils::ObjectSerializationExtension*>::get(), "Deserialize",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, byteArray);
}
// Ctor Parameters []
constexpr ::Utils::ObjectSerializationExtension::ObjectSerializationExtension() {}
