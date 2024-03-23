#pragma once
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonWriter_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*)>(&::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24530dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.get_UniqueKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_UniqueKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24531ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                                 "get_UniqueKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24517b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::set_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24518e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "set_Item",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.GetValueOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::GetValueOrDefault)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24531f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "GetValueOrDefault",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2453210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "Remove",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2453268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_IsEmpty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24532b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                                 "get_IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)()>(&::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_Keys)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2453318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                                 "get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings.WriteToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::*)(
    ::ThirdParty::Json::LitJson::JsonWriter*)>(&::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::WriteToJson)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2452d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "WriteToJson",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_get__uniqueKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniqueKey;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_get__uniqueKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniqueKey;
}
constexpr void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_set__uniqueKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uniqueKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const&
Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void
Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__cordl_internal_set__values(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*
Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::New_ctor(::StringW uniqueKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* values) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>(uniqueKey, values));
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::_ctor(::StringW uniqueKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueKey, values);
}
inline ::StringW Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_UniqueKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                               "get_UniqueKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_Item(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "get_Item",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::set_Item(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::StringW Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::GetValueOrDefault(::StringW key, ::StringW defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "GetValueOrDefault",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::Remove(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                               "get_IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "get_Keys",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::WriteToJson(::ThirdParty::Json::LitJson::JsonWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(), "WriteToJson",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings::__SettingsCollection__ObjectSettings() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)(int32_t)>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2452fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24537e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2453800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24539dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
        &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::
            System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2453a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "System.Collections.Generic.IEnumerator<Amazon.Runtime.Internal.Settings.SettingsCollection.ObjectSettings>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2453a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::*)()>(
    &::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2453a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
constexpr Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::operator ::System::Collections::Generic::IEnumerator_1<
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>* Amazon::Runtime::Internal::Settings::
    __SettingsCollection___GetEnumerator_d__11::i___System__Collections__Generic__IEnumerator_1___Amazon__Runtime__Internal__Settings____SettingsCollection__ObjectSettings__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*&
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> const&
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_set___2__current(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Settings::SettingsCollection*& Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Settings::SettingsCollection*> const&
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_set___4__this(::Amazon::Runtime::Internal::Settings::SettingsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>&
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const&
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__cordl_internal_set___7__wrap1(
    ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*
Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>(__1__state));
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::
    System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "System.Collections.Generic.IEnumerator<Amazon.Runtime.Internal.Settings.SettingsCollection.ObjectSettings>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11::__SettingsCollection___GetEnumerator_d__11() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24503ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*)>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x245261c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2451d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "get_Count",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.get_InitializedEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::get_InitializedEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2452d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "get_InitializedEmpty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.set_InitializedEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(bool)>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::set_InitializedEmpty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2452d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "set_InitializedEmpty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.Persist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(::System::IO::StreamWriter*)>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::Persist)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2451db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2452f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>* (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2452f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (
    ::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::SettingsCollection::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24516fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.NewObjectSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (
    ::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(&::Amazon::Runtime::Internal::Settings::SettingsCollection::NewObjectSettings)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2453108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "NewObjectSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.NewObjectSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (
    ::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::SettingsCollection::NewObjectSettings)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2453000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "NewObjectSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2453144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "Remove",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::SettingsCollection.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::SettingsCollection::*)()>(
    &::Amazon::Runtime::Internal::Settings::SettingsCollection::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
constexpr Amazon::Runtime::Internal::Settings::SettingsCollection::operator ::System::Collections::Generic::IEnumerable_1<
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*
Amazon::Runtime::Internal::Settings::SettingsCollection::i___System__Collections__Generic__IEnumerable_1___Amazon__Runtime__Internal__Settings____SettingsCollection__ObjectSettings__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Amazon::Runtime::Internal::Settings::SettingsCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Amazon::Runtime::Internal::Settings::SettingsCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*&
Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*> const&
Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_set__values(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_get__InitializedEmpty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitializedEmpty_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_get__InitializedEmpty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitializedEmpty_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Settings::SettingsCollection::__cordl_internal_set__InitializedEmpty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InitializedEmpty_k__BackingField = value;
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::SettingsCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::SettingsCollection*>());
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::SettingsCollection::New_ctor(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* values) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Settings::SettingsCollection*>(values));
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::_ctor(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline int32_t Amazon::Runtime::Internal::Settings::SettingsCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Settings::SettingsCollection::get_InitializedEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             "get_InitializedEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::set_InitializedEmpty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "set_InitializedEmpty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::Persist(::System::IO::StreamWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::System::Collections::IEnumerator* Amazon::Runtime::Internal::Settings::SettingsCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*
Amazon::Runtime::Internal::Settings::SettingsCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Runtime::Internal::Settings::SettingsCollection::get_Item(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "get_Item",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(this, ___internal_method, key);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Runtime::Internal::Settings::SettingsCollection::NewObjectSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             "NewObjectSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Runtime::Internal::Settings::SettingsCollection::NewObjectSettings(::StringW uniqueKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "NewObjectSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(this, ___internal_method, uniqueKey);
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::Remove(::StringW uniqueKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueKey);
}
inline void Amazon::Runtime::Internal::Settings::SettingsCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::SettingsCollection::SettingsCollection() {}
