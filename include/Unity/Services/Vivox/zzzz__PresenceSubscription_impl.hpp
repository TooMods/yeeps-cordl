#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__PresenceSubscription_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IPresenceLocation_def.hpp"
#include "Unity/Services/Vivox/zzzz__IPresenceSubscription_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__PresenceLocation_def.hpp"
#include "Unity/Services/Vivox/zzzz__PresenceStatus_def.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteDictionary_3_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::PresenceSubscription::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::PresenceSubscription::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cabf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::PresenceSubscription::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(
    &::Unity::Services::Vivox::PresenceSubscription::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cabfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::PresenceSubscription::*)()>(
    &::Unity::Services::Vivox::PresenceSubscription::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cac05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(),
                                                                               "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::PresenceSubscription::*)(::Unity::Services::Vivox::AccountId*)>(
    &::Unity::Services::Vivox::PresenceSubscription::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cac064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.get_Locations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* (
    ::Unity::Services::Vivox::PresenceSubscription::*)()>(&::Unity::Services::Vivox::PresenceSubscription::get_Locations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cac06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(),
                                                                               "get_Locations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.UpdateLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::PresenceSubscription::*)(
    ::StringW, ::Unity::Services::Vivox::PresenceStatus, ::StringW)>(&::Unity::Services::Vivox::PresenceSubscription::UpdateLocation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2cac074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "UpdateLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::PresenceStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription.get_SubscribedAccount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::PresenceSubscription::*)()>(
    &::Unity::Services::Vivox::PresenceSubscription::get_SubscribedAccount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cac23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(),
                                                                               "get_SubscribedAccount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::PresenceSubscription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::PresenceSubscription::*)()>(&::Unity::Services::Vivox::PresenceSubscription::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ca75cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::IPresenceSubscription"
constexpr Unity::Services::Vivox::PresenceSubscription::operator ::Unity::Services::Vivox::IPresenceSubscription*() noexcept {
  return static_cast<::Unity::Services::Vivox::IPresenceSubscription*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IPresenceSubscription"
constexpr ::Unity::Services::Vivox::IPresenceSubscription* Unity::Services::Vivox::PresenceSubscription::i___Unity__Services__Vivox__IPresenceSubscription() noexcept {
  return static_cast<::Unity::Services::Vivox::IPresenceSubscription*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
constexpr Unity::Services::Vivox::PresenceSubscription::operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
Unity::Services::Vivox::PresenceSubscription::i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept {
  return static_cast<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr Unity::Services::Vivox::PresenceSubscription::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::PresenceSubscription::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>*&
Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get__locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locations;
}
constexpr ::cordl_internals::to_const_pointer<
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>*> const&
Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get__locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locations;
}
constexpr void Unity::Services::Vivox::PresenceSubscription::__cordl_internal_set__locations(
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____locations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const&
Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void Unity::Services::Vivox::PresenceSubscription::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AccountId*& Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& Unity::Services::Vivox::PresenceSubscription::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void Unity::Services::Vivox::PresenceSubscription::__cordl_internal_set__Key_k__BackingField(::Unity::Services::Vivox::AccountId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Vivox::PresenceSubscription::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Vivox::PresenceSubscription::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::PresenceSubscription::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::PresenceSubscription::set_Key(::Unity::Services::Vivox::AccountId* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* Unity::Services::Vivox::PresenceSubscription::get_Locations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(),
                                                                             "get_Locations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::PresenceSubscription::UpdateLocation(::StringW uriWithTag, ::Unity::Services::Vivox::PresenceStatus status, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), "UpdateLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::PresenceStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriWithTag, status, message);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::PresenceSubscription::get_SubscribedAccount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(),
                                                                             "get_SubscribedAccount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::PresenceSubscription* Unity::Services::Vivox::PresenceSubscription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::PresenceSubscription*>());
}
inline void Unity::Services::Vivox::PresenceSubscription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::PresenceSubscription*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::PresenceSubscription::PresenceSubscription() {}
