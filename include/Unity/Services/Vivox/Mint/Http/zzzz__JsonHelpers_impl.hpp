#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__JsonHelpers_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__JsonHelpers_def.hpp"
template <typename T> constexpr bool& Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
template <typename T> constexpr bool const& Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_get_success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::__cordl_internal_set_success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___success = value;
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>* Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::_TryParseJson_b__0(::System::Object* sender, ::Newtonsoft::Json::Serialization::ErrorEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>*>::get(), "<TryParseJson>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, args);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>::__JsonHelpers____c__DisplayClass1_0_1() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::JsonHelpers.RegisterTypesForAOT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::Mint::Http::JsonHelpers::RegisterTypesForAOT)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1704d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonHelpers*>::get(),
                                                                               "RegisterTypesForAOT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::Mint::Http::JsonHelpers::RegisterTypesForAOT() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonHelpers*>::get(),
                                                                             "RegisterTypesForAOT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T> inline bool Unity::Services::Vivox::Mint::Http::JsonHelpers::TryParseJson(::StringW _cordl_this, ByRef<T> result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonHelpers*>::get(), "TryParseJson",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _cordl_this, result);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::JsonHelpers::JsonHelpers() {}
