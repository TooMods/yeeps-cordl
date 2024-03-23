#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__InMemoryPersistenceManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__IPersistenceManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsCollection* (
    ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::GetSettings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2450330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), "GetSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager.SaveSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::*)(
    ::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*)>(&::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::SaveSettings)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2450474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::*)()>(
    &::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24504dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
constexpr Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::operator ::Amazon::Runtime::Internal::Settings::IPersistenceManager*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
constexpr ::Amazon::Runtime::Internal::Settings::IPersistenceManager*
Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::i___Amazon__Runtime__Internal__Settings__IPersistenceManager() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>*&
Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::__cordl_internal_get__settingsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>*> const&
Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::__cordl_internal_get__settingsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsDictionary;
}
constexpr void Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::__cordl_internal_set__settingsDictionary(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::GetSettings(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), "GetSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsCollection*, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, settings);
}
inline ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager* Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>());
}
inline void Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager::InMemoryPersistenceManager() {}
