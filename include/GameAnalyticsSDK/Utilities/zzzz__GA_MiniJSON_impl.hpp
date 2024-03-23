#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GameAnalyticsSDK/Utilities/zzzz__GA_MiniJSON_def.hpp"
#include "GameAnalyticsSDK/Utilities/zzzz__GA_MiniJSON_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__StringReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::__GA_MiniJSON__Parser__TOKEN(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::__GA_MiniJSON__Parser__TOKEN() {}
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::NONE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::CURLY_OPEN{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::CURLY_CLOSE{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::SQUARED_OPEN{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::SQUARED_CLOSE{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::COLON{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::COMMA{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::STRING{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::NUMBER{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::TRUE{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::FALSE{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GlobalNamespace::__GA_MiniJSON__Parser__TOKEN::_cordl_NULL{ static_cast<int32_t>(0xb) };
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.IsWordBreak
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::IsWordBreak)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x107e33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "IsWordBreak",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)(::StringW)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x107e3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::Parse)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x107e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "Parse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x107e470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* (
    ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x107e498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "ParseObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (
    ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseArray)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x107e9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "ParseArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x107e454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "ParseValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseByToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN)>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseByToken)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x107eb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "ParseByToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x107e780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "ParseString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.ParseNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseNumber)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x107ebec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "ParseNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.EatWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::EatWhitespace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x107ede0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "EatWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.get_PeekChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_PeekChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x107ee84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "get_PeekChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.get_NextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x107ecbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "get_NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.get_NextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextWord)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x107ed34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "get_NextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser.get_NextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextToken)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x107e5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                               "get_NextToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::IO::StringReader*& GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::__cordl_internal_get_json() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StringReader*> const& GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::__cordl_internal_get_json() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::__cordl_internal_set_json(::System::IO::StringReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___json)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::IsWordBreak(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "IsWordBreak",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::New_ctor(::StringW jsonString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>(jsonString));
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::_ctor(::StringW jsonString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonString);
}
inline ::System::Object* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::Parse(::StringW jsonString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "Parse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, jsonString);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "ParseObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "ParseArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Object* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "ParseValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseByToken(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(), "ParseByToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, token);
}
inline ::StringW GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "ParseString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::ParseNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "ParseNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::EatWhitespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "EatWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_PeekChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "get_PeekChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline char16_t GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "get_NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::StringW GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "get_NextWord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::get_NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*>::get(),
                                                                             "get_NextToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser::__GA_MiniJSON__Parser() {}
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)()>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x107eefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::Serialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x107e2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "Serialize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.SerializeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)(::System::Object*)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeValue)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x107ef68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.SerializeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)(::System::Collections::IDictionary*)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeObject)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x107f784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.SerializeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)(::System::Collections::IList*)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeArray)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x107f424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.SerializeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)(::StringW)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x107f138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer.SerializeOther
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::*)(::System::Object*)>(
    &::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeOther)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x107fc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeOther",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::__cordl_internal_get_builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___builder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::__cordl_internal_get_builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___builder;
}
constexpr void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::__cordl_internal_set_builder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___builder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer* GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>());
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::Serialize(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "Serialize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeObject(::System::Collections::IDictionary* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeArray(::System::Collections::IList* anArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anArray);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline void GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::SerializeOther(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*>::get(), "SerializeOther",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer::__GA_MiniJSON__Serializer() {}
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::GA_MiniJSON.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::GameAnalyticsSDK::Utilities::GA_MiniJSON::Deserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1078468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::GA_MiniJSON.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::GameAnalyticsSDK::Utilities::GA_MiniJSON::Serialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x107defc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Utilities::GA_MiniJSON._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Utilities::GA_MiniJSON::*)()>(&::GameAnalyticsSDK::Utilities::GA_MiniJSON::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x107e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Object* GameAnalyticsSDK::Utilities::GA_MiniJSON::Deserialize(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, json);
}
inline ::StringW GameAnalyticsSDK::Utilities::GA_MiniJSON::Serialize(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
inline ::GameAnalyticsSDK::Utilities::GA_MiniJSON* GameAnalyticsSDK::Utilities::GA_MiniJSON::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>());
}
inline void GameAnalyticsSDK::Utilities::GA_MiniJSON::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Utilities::GA_MiniJSON*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Utilities::GA_MiniJSON::GA_MiniJSON() {}
