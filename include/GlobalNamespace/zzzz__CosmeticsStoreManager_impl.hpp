#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsStoreManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsStoreInstance_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsStoreManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsStoreManager::*)()>(&::GlobalNamespace::CosmeticsStoreManager::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x276886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsStoreManager.GetStoreInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CosmeticsStoreInstance* (*)(::StringW)>(
    &::GlobalNamespace::CosmeticsStoreManager::GetStoreInstance)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2768980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "GetStoreInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsStoreManager.GetStoreInstanceForCurrentTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CosmeticsStoreInstance* (*)()>(
    &::GlobalNamespace::CosmeticsStoreManager::GetStoreInstanceForCurrentTheme)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2765e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "GetStoreInstanceForCurrentTheme",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsStoreManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsStoreManager::*)()>(&::GlobalNamespace::CosmeticsStoreManager::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2768b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsStoreManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsStoreManager::*)()>(&::GlobalNamespace::CosmeticsStoreManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2768cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticsStoreManager::__cordl_internal_get_nextTimeUntilNextRotationUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTimeUntilNextRotationUpdateTime;
}
constexpr float_t const& GlobalNamespace::CosmeticsStoreManager::__cordl_internal_get_nextTimeUntilNextRotationUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTimeUntilNextRotationUpdateTime;
}
constexpr void GlobalNamespace::CosmeticsStoreManager::__cordl_internal_set_nextTimeUntilNextRotationUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextTimeUntilNextRotationUpdateTime = value;
}
inline void GlobalNamespace::CosmeticsStoreManager::setStaticF_cosmeticsStoreInstances(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>*, "cosmeticsStoreInstances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>* GlobalNamespace::CosmeticsStoreManager::getStaticF_cosmeticsStoreInstances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>*, "cosmeticsStoreInstances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get>();
}
inline void GlobalNamespace::CosmeticsStoreManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsStoreInstance* GlobalNamespace::CosmeticsStoreManager::GetStoreInstance(::StringW themeKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "GetStoreInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsStoreInstance*, false>(nullptr, ___internal_method, themeKey);
}
inline ::GlobalNamespace::CosmeticsStoreInstance* GlobalNamespace::CosmeticsStoreManager::GetStoreInstanceForCurrentTheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(),
                                                                             "GetStoreInstanceForCurrentTheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsStoreInstance*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticsStoreManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsStoreManager* GlobalNamespace::CosmeticsStoreManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsStoreManager*>());
}
inline void GlobalNamespace::CosmeticsStoreManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsStoreManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsStoreManager::CosmeticsStoreManager() {}
