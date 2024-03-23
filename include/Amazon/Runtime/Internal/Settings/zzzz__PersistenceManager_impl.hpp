#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__PersistenceManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__IPersistenceManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsWatcher_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::IPersistenceManager* (*)()>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2450b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "get_Instance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::Settings::IPersistenceManager*)>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::set_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2450be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsCollection* (
    ::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::GetSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2450c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "GetSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.SaveSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(
    ::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::SaveSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2451168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.GetSetting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::GetSetting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x245169c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "GetSetting",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.SetSetting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::SetSetting)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2451858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "SetSetting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.GetSettingsStoreFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::GetSettingsStoreFolder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2451948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "GetSettingsStoreFolder",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.Watch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsWatcher* (
    ::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::Watch)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24519a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "Watch",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.enableWatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::enableWatcher)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2451be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "enableWatcher",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.disableWatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::disableWatcher)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2451c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "disableWatcher",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.IsEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::IsEncrypted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2451ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "IsEncrypted",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.saveSettingsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(
    ::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::saveSettingsType)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x245116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "saveSettingsType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.loadSettingsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsCollection* (
    ::Amazon::Runtime::Internal::Settings::PersistenceManager::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::loadSettingsType)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2450c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "loadSettingsType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.DecryptAnyEncryptedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*)>(
        &::Amazon::Runtime::Internal::Settings::PersistenceManager::DecryptAnyEncryptedValues)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x2451fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "DecryptAnyEncryptedValues",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager.getFileFromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::PersistenceManager::getFileFromType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2451a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "getFileFromType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::PersistenceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::PersistenceManager::*)()>(
    &::Amazon::Runtime::Internal::Settings::PersistenceManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2450b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
constexpr Amazon::Runtime::Internal::Settings::PersistenceManager::operator ::Amazon::Runtime::Internal::Settings::IPersistenceManager*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
constexpr ::Amazon::Runtime::Internal::Settings::IPersistenceManager* Amazon::Runtime::Internal::Settings::PersistenceManager::i___Amazon__Runtime__Internal__Settings__IPersistenceManager() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>*&
Amazon::Runtime::Internal::Settings::PersistenceManager::__cordl_internal_get__watchers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____watchers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>*> const&
Amazon::Runtime::Internal::Settings::PersistenceManager::__cordl_internal_get__watchers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____watchers;
}
constexpr void Amazon::Runtime::Internal::Settings::PersistenceManager::__cordl_internal_set__watchers(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____watchers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::setStaticF_ENCRYPTEDKEYS(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ENCRYPTEDKEYS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Settings::PersistenceManager::getStaticF_ENCRYPTEDKEYS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ENCRYPTEDKEYS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>();
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::setStaticF__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Util::Logger*, "_logger",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>(
      std::forward<::Amazon::Runtime::Internal::Util::Logger*>(value));
}
inline ::Amazon::Runtime::Internal::Util::Logger* Amazon::Runtime::Internal::Settings::PersistenceManager::getStaticF__logger() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Util::Logger*, "_logger",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>();
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::setStaticF_SettingsStoreFolder(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SettingsStoreFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Runtime::Internal::Settings::PersistenceManager::getStaticF_SettingsStoreFolder() {
  return ::cordl_internals::getStaticField<::StringW, "SettingsStoreFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>();
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::setStaticF__Instance_k__BackingField(::Amazon::Runtime::Internal::Settings::IPersistenceManager* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Settings::IPersistenceManager*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>(
      std::forward<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>(value));
}
inline ::Amazon::Runtime::Internal::Settings::IPersistenceManager* Amazon::Runtime::Internal::Settings::PersistenceManager::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Settings::IPersistenceManager*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get>();
}
inline ::Amazon::Runtime::Internal::Settings::IPersistenceManager* Amazon::Runtime::Internal::Settings::PersistenceManager::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::IPersistenceManager*, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::set_Instance(::Amazon::Runtime::Internal::Settings::IPersistenceManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::PersistenceManager::GetSettings(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "GetSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsCollection*, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, settings);
}
inline ::StringW Amazon::Runtime::Internal::Settings::PersistenceManager::GetSetting(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "GetSetting",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::SetSetting(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "SetSetting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::StringW Amazon::Runtime::Internal::Settings::PersistenceManager::GetSettingsStoreFolder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(),
                                                                             "GetSettingsStoreFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Settings::SettingsWatcher* Amazon::Runtime::Internal::Settings::PersistenceManager::Watch(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "Watch",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsWatcher*, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::enableWatcher(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "enableWatcher",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::disableWatcher(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "disableWatcher",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool Amazon::Runtime::Internal::Settings::PersistenceManager::IsEncrypted(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "IsEncrypted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::saveSettingsType(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "saveSettingsType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, settings);
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::PersistenceManager::loadSettingsType(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "loadSettingsType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsCollection*, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::DecryptAnyEncryptedValues(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "DecryptAnyEncryptedValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline ::StringW Amazon::Runtime::Internal::Settings::PersistenceManager::getFileFromType(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(), "getFileFromType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::Amazon::Runtime::Internal::Settings::PersistenceManager* Amazon::Runtime::Internal::Settings::PersistenceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::PersistenceManager*>());
}
inline void Amazon::Runtime::Internal::Settings::PersistenceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::PersistenceManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::PersistenceManager::PersistenceManager() {}
