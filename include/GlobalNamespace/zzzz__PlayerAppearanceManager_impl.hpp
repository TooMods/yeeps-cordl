#pragma once
#include "GlobalNamespace/zzzz__AWSDatabase_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAppearanceManager_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAppearanceManager_def.hpp"
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__AvatarIdentity_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAppearanceManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)()>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_displayName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)(::StringW)>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.get_activeCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)()>(&::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_activeCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_activeCosmetics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.set_activeCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(&::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_activeCosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_activeCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.get_avatarIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarIdentity* (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)()>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_avatarIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_avatarIdentity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance.set_avatarIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)(::GlobalNamespace::AvatarIdentity*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_avatarIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_avatarIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)(
    ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, ::GlobalNamespace::AvatarIdentity*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106b874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x106b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_displayName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_displayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_activeCosmetics() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_activeCosmetics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_activeCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_activeCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AvatarIdentity* GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::get_avatarIdentity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "get_avatarIdentity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarIdentity*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::set_avatarIdentity(::GlobalNamespace::AvatarIdentity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), "set_avatarIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::_ctor(::StringW displayName, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmetics,
                                                                                ::GlobalNamespace::AvatarIdentity* avatarIdentity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, activeCosmetics, avatarIdentity);
}
inline void GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::_ctor(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
// Ctor Parameters [CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_activeCosmetics_k__BackingField", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_avatarIdentity_k__BackingField", ty:
// "::GlobalNamespace::AvatarIdentity*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::__PlayerAppearanceManager__PlayerAppearance(
    ::StringW _displayName_k__BackingField, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* _activeCosmetics_k__BackingField,
    ::GlobalNamespace::AvatarIdentity* _avatarIdentity_k__BackingField) noexcept {
  this->_displayName_k__BackingField = _displayName_k__BackingField;
  this->_activeCosmetics_k__BackingField = _activeCosmetics_k__BackingField;
  this->_avatarIdentity_k__BackingField = _avatarIdentity_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance::__PlayerAppearanceManager__PlayerAppearance() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance.get_expirationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)()>(
    &::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::get_expirationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(),
                                                 "get_expirationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance.set_expirationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)(::System::DateTime)>(
    &::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::set_expirationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "set_expirationTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance.get_playerAppearance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance (
    ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)()>(&::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::get_playerAppearance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x106b890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(),
                                                 "get_playerAppearance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance.set_playerAppearance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::set_playerAppearance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x106b8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "set_playerAppearance",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance.IsExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)()>(
    &::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::IsExpired)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x106afbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "IsExpired",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x106b698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
inline ::System::DateTime GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::get_expirationTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(),
                                               "get_expirationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::set_expirationTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "set_expirationTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::get_playerAppearance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(),
                                               "get_playerAppearance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::set_playerAppearance(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "set_playerAppearance",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::IsExpired() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), "IsExpired",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::_ctor(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAppearance);
}
// Ctor Parameters [CppParam { name: "_expirationTime_k__BackingField", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerAppearance_k__BackingField", ty:
// "::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::__PlayerAppearanceManager__CachedPlayerAppearance(
    ::System::DateTime _expirationTime_k__BackingField, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance _playerAppearance_k__BackingField) noexcept {
  this->_expirationTime_k__BackingField = _expirationTime_k__BackingField;
  this->_playerAppearance_k__BackingField = _playerAppearance_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance::__PlayerAppearanceManager__CachedPlayerAppearance() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.get_onSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* (
    ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)()>(&::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::get_onSuccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "get_onSuccess",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.set_onSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*)>(&::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::set_onSuccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "set_onSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.get_onFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* (
    ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)()>(&::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::get_onFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "get_onFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.set_onFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*)>(&::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::set_onFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "set_onFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x106b0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.AddCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::AddCallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x106b01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "AddCallbacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.OnSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::OnSuccess)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x106b414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "OnSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest.OnFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::*)(::StringW)>(
    &::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::OnFailure)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x106b310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "OnFailure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*&
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_get__onSuccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSuccess_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*> const&
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_get__onSuccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSuccess_k__BackingField;
}
constexpr void
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_set__onSuccess_k__BackingField(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSuccess_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*&
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_get__onFailed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onFailed_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*> const&
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_get__onFailed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onFailed_k__BackingField;
}
constexpr void
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__cordl_internal_set__onFailed_k__BackingField(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onFailed_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::get_onSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "get_onSuccess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::set_onSuccess(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "set_onSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::get_onFailed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "get_onFailed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::set_onFailed(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "set_onFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*
GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::New_ctor(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                                                         ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>(onSuccess, onFailed));
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::_ctor(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                                                                  ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailed);
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::AddCallbacks(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                                                                         ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "AddCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailed);
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::OnSuccess(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "OnSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAppearance);
}
inline void GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::OnFailure(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>::get(), "OnFailure",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest::__PlayerAppearanceManager__ActiveFetchRequest() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x106b8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::*)(
    ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x106b99c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::*)(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x106b9d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106ba64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::New_ctor(::System::Object* object,
                                                                                                                                                                          void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>(object, method));
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::Invoke(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAppearance);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::BeginInvoke(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, playerAppearance, callback, object);
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x106ba70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::*)(::StringW)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x106bb44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x106bb58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106bb78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::New_ctor(::System::Object* object,
                                                                                                                                                                        void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>(object, method));
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::Invoke(::StringW errType) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, errType, callback, object);
}
inline void GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::*)()>(
    &::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x106bb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106c888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "accountIDs", ty: "::System::Collections::Generic::List_1<::StringW>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerAppearanceManager>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::__PlayerAppearanceManager___BatchGetAccountIDs_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Collections::Generic::List_1<::StringW>* accountIDs,
    ::UnityW<::GlobalNamespace::PlayerAppearanceManager> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->accountIDs = accountIDs;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11::__PlayerAppearanceManager___BatchGetAccountIDs_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)()>(&::GlobalNamespace::PlayerAppearanceManager::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x106aac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.FetchPlayerAppearance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(
    ::StringW, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*)>(
    &::GlobalNamespace::PlayerAppearanceManager::FetchPlayerAppearance)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x106add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "FetchPlayerAppearance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)()>(&::GlobalNamespace::PlayerAppearanceManager::LateUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x106b104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.BatchGetAccountIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerAppearanceManager::BatchGetAccountIDs)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x106b1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "BatchGetAccountIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.OnFetchFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::PlayerAppearanceManager::OnFetchFailed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x106b264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnFetchFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.OnFetchSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(
    ::StringW, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::PlayerAppearanceManager::OnFetchSuccess)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x106b32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnFetchSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.OnOtherPlayerJoinedPhotonRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerAppearanceManager::OnOtherPlayerJoinedPhotonRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x106b45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnOtherPlayerJoinedPhotonRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.OnPlayerDataModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(
    ::GlobalNamespace::PlayerData, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::PlayerAppearanceManager::OnPlayerDataModified)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x106b5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnPlayerDataModified", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager.ForceSetPlayerAppearance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)(
    ::StringW, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance)>(&::GlobalNamespace::PlayerAppearanceManager::ForceSetPlayerAppearance)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x106b4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "ForceSetPlayerAppearance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAppearanceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerAppearanceManager::*)()>(&::GlobalNamespace::PlayerAppearanceManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x106b72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>*&
GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_playerAppearanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAppearanceCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>*> const&
GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_playerAppearanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAppearanceCache;
}
constexpr void GlobalNamespace::PlayerAppearanceManager::__cordl_internal_set_playerAppearanceCache(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAppearanceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_accountIDsToFetchNextFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountIDsToFetchNextFrame;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_accountIDsToFetchNextFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountIDsToFetchNextFrame;
}
constexpr void GlobalNamespace::PlayerAppearanceManager::__cordl_internal_set_accountIDsToFetchNextFrame(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountIDsToFetchNextFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>*&
GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_activeRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeRequests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>*> const&
GlobalNamespace::PlayerAppearanceManager::__cordl_internal_get_activeRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeRequests;
}
constexpr void GlobalNamespace::PlayerAppearanceManager::__cordl_internal_set_activeRequests(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerAppearanceManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAppearanceManager::FetchPlayerAppearance(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                                                            ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "FetchPlayerAppearance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, onSuccess, onFailed);
}
inline void GlobalNamespace::PlayerAppearanceManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAppearanceManager::BatchGetAccountIDs(::System::Collections::Generic::List_1<::StringW>* accountIDs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "BatchGetAccountIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountIDs);
}
inline void GlobalNamespace::PlayerAppearanceManager::OnFetchFailed(::StringW accountID, ::StringW errTypeRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnFetchFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, errTypeRaw);
}
inline void GlobalNamespace::PlayerAppearanceManager::OnFetchSuccess(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnFetchSuccess", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, playerAppearance);
}
inline void GlobalNamespace::PlayerAppearanceManager::OnOtherPlayerJoinedPhotonRoom(::GlobalNamespace::PlayerData otherPlayerData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnOtherPlayerJoinedPhotonRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherPlayerData);
}
inline void GlobalNamespace::PlayerAppearanceManager::OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "OnPlayerDataModified", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData, modifiedFields);
}
inline void GlobalNamespace::PlayerAppearanceManager::ForceSetPlayerAppearance(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), "ForceSetPlayerAppearance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, playerAppearance);
}
inline ::GlobalNamespace::PlayerAppearanceManager* GlobalNamespace::PlayerAppearanceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerAppearanceManager*>());
}
inline void GlobalNamespace::PlayerAppearanceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerAppearanceManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAppearanceManager::PlayerAppearanceManager() {}
