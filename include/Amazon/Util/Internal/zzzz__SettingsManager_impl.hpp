#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/zzzz__SettingsManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "Amazon/Util/Internal/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::__SettingsManager____c::*)()>(
    &::Amazon::Util::Internal::__SettingsManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd8984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c._ListUniqueKeys_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::__SettingsManager____c::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::Internal::__SettingsManager____c::_ListUniqueKeys_b__11_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fd898c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get(), "<ListUniqueKeys>b__11_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Util::Internal::__SettingsManager____c::setStaticF___9(::Amazon::Util::Internal::__SettingsManager____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::__SettingsManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get>(
      std::forward<::Amazon::Util::Internal::__SettingsManager____c*>(value));
}
inline ::Amazon::Util::Internal::__SettingsManager____c* Amazon::Util::Internal::__SettingsManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::__SettingsManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get>();
}
inline void Amazon::Util::Internal::__SettingsManager____c::setStaticF___9__11_0(::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* Amazon::Util::Internal::__SettingsManager____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get>();
}
inline ::Amazon::Util::Internal::__SettingsManager____c* Amazon::Util::Internal::__SettingsManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::__SettingsManager____c*>());
}
inline void Amazon::Util::Internal::__SettingsManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::__SettingsManager____c::_ListUniqueKeys_b__11_0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c*>::get(), "<ListUniqueKeys>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::__SettingsManager____c::__SettingsManager____c() {}
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::*)()>(
    &::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd8830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0._SelectProperty_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::_SelectProperty_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fd89a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*>::get(), "<SelectProperty>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0* Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*>());
}
inline void Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::_SelectProperty_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*>::get(), "<SelectProperty>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0::__SettingsManager____c__DisplayClass12_0() {}
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::*)()>(
    &::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd88a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0._TryGetObjectSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::_TryGetObjectSettings_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1fd89c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*>::get(), "<TryGetObjectSettings>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0* Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*>());
}
inline void Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::_TryGetObjectSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*>::get(), "<TryGetObjectSettings>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0::__SettingsManager____c__DisplayClass16_0() {}
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::*)()>(
    &::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd88b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0._TryGetObjectSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::_TryGetObjectSettings_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1fd8a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*>::get(), "<TryGetObjectSettings>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::__cordl_internal_get_uniqueKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uniqueKey;
}
constexpr ::StringW const& Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::__cordl_internal_get_uniqueKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uniqueKey;
}
constexpr void Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::__cordl_internal_set_uniqueKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uniqueKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0* Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*>());
}
inline void Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::_TryGetObjectSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*>::get(), "<TryGetObjectSettings>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0::__SettingsManager____c__DisplayClass17_0() {}
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.get_IsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Util::Internal::SettingsManager::get_IsAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd7708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                               "get_IsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::SettingsManager::*)(::StringW)>(&::Amazon::Util::Internal::SettingsManager::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1fd7710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.get_SettingsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::SettingsManager::*)()>(
    &::Amazon::Util::Internal::SettingsManager::get_SettingsType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd779c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                               "get_SettingsType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.set_SettingsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::SettingsManager::*)(::StringW)>(
    &::Amazon::Util::Internal::SettingsManager::set_SettingsType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd77a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "set_SettingsType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::SettingsManager::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::Util::Internal::SettingsManager::RegisterObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fd77ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::SettingsManager::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::Util::Internal::SettingsManager::RegisterObject)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1fd77b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.TryGetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::Internal::SettingsManager::*)(
    ::StringW, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>)>(&::Amazon::Util::Internal::SettingsManager::TryGetObject)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1fd7d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.TryGetObjectByProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::Internal::SettingsManager::*)(
    ::StringW, ::StringW, ByRef<::StringW>, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>)>(&::Amazon::Util::Internal::SettingsManager::TryGetObjectByProperty)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x1fd80cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectByProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.ListUniqueKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::Util::Internal::SettingsManager::*)()>(
    &::Amazon::Util::Internal::SettingsManager::ListUniqueKeys)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1fd8598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                               "ListUniqueKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.SelectProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::Util::Internal::SettingsManager::*)(::StringW)>(
    &::Amazon::Util::Internal::SettingsManager::SelectProperty)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fd86f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "SelectProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.UnregisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::SettingsManager::*)(::StringW)>(
    &::Amazon::Util::Internal::SettingsManager::UnregisterObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fd8838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "UnregisterObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsCollection* (::Amazon::Util::Internal::SettingsManager::*)()>(
    &::Amazon::Util::Internal::SettingsManager::GetSettings)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1fd7a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "GetSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.SaveSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::SettingsManager::*)(::Amazon::Runtime::Internal::Settings::SettingsCollection*)>(
    &::Amazon::Util::Internal::SettingsManager::SaveSettings)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1fd7bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.TryGetObjectSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*, ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>)>(
        &::Amazon::Util::Internal::SettingsManager::TryGetObjectSettings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1fd84a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.TryGetObjectSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*, ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>)>(
        &::Amazon::Util::Internal::SettingsManager::TryGetObjectSettings)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1fd7b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::SettingsManager.EnsureAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Util::Internal::SettingsManager::EnsureAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1fd773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                               "EnsureAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::Internal::SettingsManager::__cordl_internal_get__SettingsType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SettingsType_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::Internal::SettingsManager::__cordl_internal_get__SettingsType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SettingsType_k__BackingField;
}
constexpr void Amazon::Util::Internal::SettingsManager::__cordl_internal_set__SettingsType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SettingsType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Amazon::Util::Internal::SettingsManager::get_IsAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                             "get_IsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Amazon::Util::Internal::SettingsManager* Amazon::Util::Internal::SettingsManager::New_ctor(::StringW settingsType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::SettingsManager*>(settingsType));
}
inline void Amazon::Util::Internal::SettingsManager::_ctor(::StringW settingsType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsType);
}
inline ::StringW Amazon::Util::Internal::SettingsManager::get_SettingsType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                             "get_SettingsType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::Internal::SettingsManager::set_SettingsType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "set_SettingsType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Util::Internal::SettingsManager::RegisterObject(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, properties);
}
inline ::StringW Amazon::Util::Internal::SettingsManager::RegisterObject(::StringW uniqueKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uniqueKey, properties);
}
inline bool Amazon::Util::Internal::SettingsManager::TryGetObject(::StringW uniqueKey, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uniqueKey, properties);
}
inline bool Amazon::Util::Internal::SettingsManager::TryGetObjectByProperty(::StringW propertyName, ::StringW value, ByRef<::StringW> uniqueKey,
                                                                            ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectByProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propertyName, value, uniqueKey, properties);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Util::Internal::SettingsManager::ListUniqueKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                             "ListUniqueKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Util::Internal::SettingsManager::SelectProperty(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "SelectProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, propertyName);
}
inline void Amazon::Util::Internal::SettingsManager::UnregisterObject(::StringW uniqueKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "UnregisterObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueKey);
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Util::Internal::SettingsManager::GetSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "GetSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsCollection*, false>(this, ___internal_method);
}
inline void Amazon::Util::Internal::SettingsManager::SaveSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "SaveSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline bool Amazon::Util::Internal::SettingsManager::TryGetObjectSettings(::StringW propertyName, ::StringW value, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                                                          ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> objectSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, propertyName, value, settings, objectSettings);
}
inline bool Amazon::Util::Internal::SettingsManager::TryGetObjectSettings(::StringW uniqueKey, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                                                          ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> objectSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(), "TryGetObjectSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uniqueKey, settings, objectSettings);
}
inline void Amazon::Util::Internal::SettingsManager::EnsureAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::SettingsManager*>::get(),
                                                                             "EnsureAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::SettingsManager::SettingsManager() {}
