#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__Lexer_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__FsmContext_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__Lexer_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::__Lexer__StateHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::__Lexer__StateHandler::*)(::System::Object*, void*)>(
    &::ThirdParty::Json::LitJson::__Lexer__StateHandler::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x14b1cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::__Lexer__StateHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::__Lexer__StateHandler::*)(::ThirdParty::Json::LitJson::FsmContext*)>(
    &::ThirdParty::Json::LitJson::__Lexer__StateHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x14b319c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::__Lexer__StateHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::ThirdParty::Json::LitJson::__Lexer__StateHandler::*)(::ThirdParty::Json::LitJson::FsmContext*, ::System::AsyncCallback*, ::System::Object*)>(
        &::ThirdParty::Json::LitJson::__Lexer__StateHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14b31b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::__Lexer__StateHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::__Lexer__StateHandler::*)(::System::IAsyncResult*)>(
    &::ThirdParty::Json::LitJson::__Lexer__StateHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14b31d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ThirdParty::Json::LitJson::__Lexer__StateHandler* ThirdParty::Json::LitJson::__Lexer__StateHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>(object, method));
}
inline void ThirdParty::Json::LitJson::__Lexer__StateHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool ThirdParty::Json::LitJson::__Lexer__StateHandler::Invoke(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ctx);
}
inline ::System::IAsyncResult* ThirdParty::Json::LitJson::__Lexer__StateHandler::BeginInvoke(::ThirdParty::Json::LitJson::FsmContext* ctx, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ctx, callback, object);
}
inline bool ThirdParty::Json::LitJson::__Lexer__StateHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::__Lexer__StateHandler::__Lexer__StateHandler() {}
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.get_AllowComments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::get_AllowComments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_AllowComments",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.set_AllowComments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::Lexer::*)(bool)>(&::ThirdParty::Json::LitJson::Lexer::set_AllowComments)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14b11c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "set_AllowComments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.get_AllowSingleQuotedStrings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::get_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(),
                                                                               "get_AllowSingleQuotedStrings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.set_AllowSingleQuotedStrings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::Lexer::*)(bool)>(
    &::ThirdParty::Json::LitJson::Lexer::set_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14b11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "set_AllowSingleQuotedStrings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.get_EndOfInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::get_EndOfInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_EndOfInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_Token",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.get_StringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::get_StringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_StringValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::Lexer::*)(::System::IO::TextReader*)>(
    &::ThirdParty::Json::LitJson::Lexer::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x14b001c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.HexValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::ThirdParty::Json::LitJson::Lexer::HexValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x14b1c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "HexValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.PopulateFsmTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::ThirdParty::Json::LitJson::Lexer::PopulateFsmTables)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x14b1204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "PopulateFsmTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.ProcessEscChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int32_t)>(&::ThirdParty::Json::LitJson::Lexer::ProcessEscChar)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x14b1de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "ProcessEscChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State1)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x14b1ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State1", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State2)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14b20dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State3)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x14b2180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State3", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State4)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x14b22bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State5)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x14b23b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State5", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State6)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x14b2438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State6", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State7)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x14b2534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State7", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State8)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x14b25c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State8", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State9)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b2684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State9", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State10)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b26f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State10", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State11)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b275c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State11", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State12)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b27c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State12", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State13)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b2834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State13", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State14)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b28a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State14", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State15
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State15)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State15", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State16)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b2978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State17
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State17)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b29e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State17", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State18
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State18)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b2a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State18", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State19
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State19)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x14b2abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State19", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State20
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State20)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14b2b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State20", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State21
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State21)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x14b2bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State21", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State22
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State22)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x14b2d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State22", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State23
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State23)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x14b2e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State23", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State24)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x14b2f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State24", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State25
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State25)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x14b2fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State25", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State26
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State26)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14b301c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State26", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State27
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State27)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14b3084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State27", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.State28
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ThirdParty::Json::LitJson::FsmContext*)>(&::ThirdParty::Json::LitJson::Lexer::State28)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14b30ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State28", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.GetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::GetChar)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14b20b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "GetChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.NextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::NextChar)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x14b3164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "NextChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.NextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::NextToken)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x14b0564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "NextToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::Lexer.UngetChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::Lexer::*)()>(&::ThirdParty::Json::LitJson::Lexer::UngetChar)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14b22b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "UngetChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_allow_comments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allow_comments;
}
constexpr bool const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_allow_comments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allow_comments;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_allow_comments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allow_comments = value;
}
constexpr bool& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_allow_single_quoted_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allow_single_quoted_strings;
}
constexpr bool const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_allow_single_quoted_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allow_single_quoted_strings;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_allow_single_quoted_strings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allow_single_quoted_strings = value;
}
constexpr bool& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_end_of_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end_of_input;
}
constexpr bool const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_end_of_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end_of_input;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_end_of_input(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___end_of_input = value;
}
constexpr ::ThirdParty::Json::LitJson::FsmContext*& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_fsm_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsm_context;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::FsmContext*> const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_fsm_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsm_context;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_fsm_context(::ThirdParty::Json::LitJson::FsmContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fsm_context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_input_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_buffer;
}
constexpr int32_t const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_input_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_buffer;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_input_buffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input_buffer = value;
}
constexpr int32_t& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_input_char() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_char;
}
constexpr int32_t const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_input_char() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_char;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_input_char(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input_char = value;
}
constexpr ::System::IO::TextReader*& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_reader(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr int32_t const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Text::StringBuilder*& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_string_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___string_buffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_string_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___string_buffer;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_string_buffer(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___string_buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_string_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___string_value;
}
constexpr ::StringW const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_string_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___string_value;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_string_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___string_value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr int32_t const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_token(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___token = value;
}
constexpr int32_t& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_unichar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unichar;
}
constexpr int32_t const& ThirdParty::Json::LitJson::Lexer::__cordl_internal_get_unichar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unichar;
}
constexpr void ThirdParty::Json::LitJson::Lexer::__cordl_internal_set_unichar(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unichar = value;
}
inline void ThirdParty::Json::LitJson::Lexer::setStaticF_fsm_return_table(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "fsm_return_table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> ThirdParty::Json::LitJson::Lexer::getStaticF_fsm_return_table() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "fsm_return_table",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get>();
}
inline void
ThirdParty::Json::LitJson::Lexer::setStaticF_fsm_handler_table(::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*>, "fsm_handler_table",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get>(
      std::forward<::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*>>(value));
}
inline ::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*> ThirdParty::Json::LitJson::Lexer::getStaticF_fsm_handler_table() {
  return ::cordl_internals::getStaticField<::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*>, "fsm_handler_table",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get>();
}
inline bool ThirdParty::Json::LitJson::Lexer::get_AllowComments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_AllowComments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ThirdParty::Json::LitJson::Lexer::set_AllowComments(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "set_AllowComments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ThirdParty::Json::LitJson::Lexer::get_AllowSingleQuotedStrings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(),
                                                                             "get_AllowSingleQuotedStrings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ThirdParty::Json::LitJson::Lexer::set_AllowSingleQuotedStrings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "set_AllowSingleQuotedStrings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ThirdParty::Json::LitJson::Lexer::get_EndOfInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_EndOfInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t ThirdParty::Json::LitJson::Lexer::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_Token",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW ThirdParty::Json::LitJson::Lexer::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "get_StringValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ThirdParty::Json::LitJson::Lexer* ThirdParty::Json::LitJson::Lexer::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::Lexer*>(reader));
}
inline void ThirdParty::Json::LitJson::Lexer::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline int32_t ThirdParty::Json::LitJson::Lexer::HexValue(int32_t digit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "HexValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digit);
}
inline void ThirdParty::Json::LitJson::Lexer::PopulateFsmTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "PopulateFsmTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline char16_t ThirdParty::Json::LitJson::Lexer::ProcessEscChar(int32_t esc_char) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "ProcessEscChar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, esc_char);
}
inline bool ThirdParty::Json::LitJson::Lexer::State1(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State2(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State3(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State4(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State5(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State5", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State6(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State6", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State7(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State7", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State8(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State8", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State9(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State9", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State10(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State10", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State11(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State11", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State12(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State12", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State13(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State13", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State14(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State14", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State15(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State15", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State16(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State17(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State17", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State18(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State18", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State19(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State19", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State20(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State20", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State21(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State21", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State22(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State22", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State23(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State23", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State24(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State24", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State25(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State25", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State26(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State26", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State27(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State27", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::State28(::ThirdParty::Json::LitJson::FsmContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "State28", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::FsmContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline bool ThirdParty::Json::LitJson::Lexer::GetChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "GetChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t ThirdParty::Json::LitJson::Lexer::NextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "NextChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool ThirdParty::Json::LitJson::Lexer::NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "NextToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ThirdParty::Json::LitJson::Lexer::UngetChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::Lexer*>::get(), "UngetChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::Lexer::Lexer() {}
