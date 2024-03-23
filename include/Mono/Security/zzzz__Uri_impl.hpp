#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__Uri_def.hpp"
#include "Mono/Security/zzzz__UriPartial_def.hpp"
#include "Mono/Security/zzzz__Uri_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::__Uri__UriScheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::__Uri__UriScheme::*)(::StringW, ::StringW, int32_t)>(
    &::Mono::Security::__Uri__UriScheme::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2896838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::__Uri__UriScheme>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Security::__Uri__UriScheme::_ctor(::StringW s, ::StringW d, int32_t p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::__Uri__UriScheme>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, d, p);
}
// Ctor Parameters [CppParam { name: "scheme", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "defaultPort", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::__Uri__UriScheme::__Uri__UriScheme(::StringW scheme, ::StringW delimiter, int32_t defaultPort) noexcept {
  this->scheme = scheme;
  this->delimiter = delimiter;
  this->defaultPort = defaultPort;
}
// Ctor Parameters []
constexpr ::Mono::Security::__Uri__UriScheme::__Uri__UriScheme() {}
//  Writing Method size for method: ::Mono::Security::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d0fcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW, bool)>(&::Mono::Security::Uri::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1d0fcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.get_AbsolutePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::get_AbsolutePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d0fddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_AbsolutePath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.get_IsFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::get_IsFile)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1d0fde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_IsFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.get_IsUnc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::get_IsUnc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d0fe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_IsUnc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.get_LocalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::get_LocalPath)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x1d0fe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_LocalPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Uri::*)(::System::Object*)>(&::Mono::Security::Uri::Equals)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1d10108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::GetHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1d10338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.GetLeftPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)(::Mono::Security::UriPartial)>(&::Mono::Security::Uri::GetLeftPart)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x1d1040c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetLeftPart", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::UriPartial>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.FromHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::Mono::Security::Uri::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1d10980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "FromHex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.HexEscape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(char16_t)>(&::Mono::Security::Uri::HexEscape)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1d10a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "HexEscape", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.HexUnescape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::StringW, ByRef<int32_t>)>(&::Mono::Security::Uri::HexUnescape)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x1d10b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "HexUnescape", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.IsHexDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Mono::Security::Uri::IsHexDigit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1d10e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsHexDigit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.IsHexEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t)>(&::Mono::Security::Uri::IsHexEncoding)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1d10ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsHexEncoding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1d10fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.EscapeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Mono::Security::Uri::EscapeString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1d11254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "EscapeString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.EscapeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool, bool, bool)>(&::Mono::Security::Uri::EscapeString)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1d112b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "EscapeString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::Parse)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1d0fd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Parse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Unescape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::Unescape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d10100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Unescape", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Unescape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)(::StringW, bool)>(&::Mono::Security::Uri::Unescape)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1d110c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Unescape", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.ParseAsWindowsUNC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::ParseAsWindowsUNC)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1d1211c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsWindowsUNC", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.ParseAsWindowsAbsoluteFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::ParseAsWindowsAbsoluteFilePath)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1d122b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsWindowsAbsoluteFilePath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.ParseAsUnixAbsoluteFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::ParseAsUnixAbsoluteFilePath)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1d12440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsUnixAbsoluteFilePath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Uri::*)(::StringW)>(&::Mono::Security::Uri::Parse)> {
  constexpr static std::size_t size = 0xb6c;
  constexpr static std::size_t addrs = 0x1d115b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.Reduce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Mono::Security::Uri::Reduce)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x1d12768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Reduce", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.GetSchemeDelimiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Mono::Security::Uri::GetSchemeDelimiter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1d12aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetSchemeDelimiter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.GetDefaultPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::Mono::Security::Uri::GetDefaultPort)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1d10874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetDefaultPort", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.GetOpaqueWiseSchemeDelimiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Uri::*)()>(&::Mono::Security::Uri::GetOpaqueWiseSchemeDelimiter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1d107f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetOpaqueWiseSchemeDelimiter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Uri.IsPredefinedScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Uri::IsPredefinedScheme)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1d125a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsPredefinedScheme", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Uri::__cordl_internal_get_isUnixFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUnixFilePath;
}
constexpr bool const& Mono::Security::Uri::__cordl_internal_get_isUnixFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUnixFilePath;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_isUnixFilePath(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isUnixFilePath = value;
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_scheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scheme;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_scheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scheme;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_scheme(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Uri::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& Mono::Security::Uri::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_query() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_query() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_query(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___query)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_fragment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragment;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_fragment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragment;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_fragment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fragment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_userinfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userinfo;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_userinfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userinfo;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_userinfo(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userinfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::Uri::__cordl_internal_get_isUnc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUnc;
}
constexpr bool const& Mono::Security::Uri::__cordl_internal_get_isUnc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUnc;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_isUnc(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isUnc = value;
}
constexpr bool& Mono::Security::Uri::__cordl_internal_get_isOpaquePart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpaquePart;
}
constexpr bool const& Mono::Security::Uri::__cordl_internal_get_isOpaquePart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpaquePart;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_isOpaquePart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOpaquePart = value;
}
constexpr bool& Mono::Security::Uri::__cordl_internal_get_userEscaped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userEscaped;
}
constexpr bool const& Mono::Security::Uri::__cordl_internal_get_userEscaped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userEscaped;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_userEscaped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userEscaped = value;
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_cachedToString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedToString;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_cachedToString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedToString;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_cachedToString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedToString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Uri::__cordl_internal_get_cachedLocalPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedLocalPath;
}
constexpr ::StringW const& Mono::Security::Uri::__cordl_internal_get_cachedLocalPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedLocalPath;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_cachedLocalPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedLocalPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Uri::__cordl_internal_get_cachedHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHashCode;
}
constexpr int32_t const& Mono::Security::Uri::__cordl_internal_get_cachedHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHashCode;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_cachedHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedHashCode = value;
}
constexpr bool& Mono::Security::Uri::__cordl_internal_get_reduce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduce;
}
constexpr bool const& Mono::Security::Uri::__cordl_internal_get_reduce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduce;
}
constexpr void Mono::Security::Uri::__cordl_internal_set_reduce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reduce = value;
}
inline void Mono::Security::Uri::setStaticF_hexUpperChars(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "hexUpperChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_hexUpperChars() {
  return ::cordl_internals::getStaticField<::StringW, "hexUpperChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_SchemeDelimiter(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_SchemeDelimiter() {
  return ::cordl_internals::getStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeFile(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeFile() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeFtp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeFtp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeGopher(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeGopher() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeHttp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeHttp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeHttps(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeHttps() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeMailto(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeMailto() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeNews(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeNews() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_UriSchemeNntp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Uri::getStaticF_UriSchemeNntp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline void Mono::Security::Uri::setStaticF_schemes(::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*>, "schemes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>(
      std::forward<::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*>>(value));
}
inline ::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*> Mono::Security::Uri::getStaticF_schemes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*>, "schemes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get>();
}
inline ::Mono::Security::Uri* Mono::Security::Uri::New_ctor(::StringW uriString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Uri*>(uriString));
}
inline void Mono::Security::Uri::_ctor(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline ::Mono::Security::Uri* Mono::Security::Uri::New_ctor(::StringW uriString, bool dontEscape) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Uri*>(uriString, dontEscape));
}
inline void Mono::Security::Uri::_ctor(::StringW uriString, bool dontEscape) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString, dontEscape);
}
inline ::StringW Mono::Security::Uri::get_AbsolutePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_AbsolutePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Mono::Security::Uri::get_IsFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_IsFile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Security::Uri::get_IsUnc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_IsUnc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::Uri::get_LocalPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "get_LocalPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Mono::Security::Uri::Equals(::System::Object* comparant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, comparant);
}
inline int32_t Mono::Security::Uri::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::Uri::GetLeftPart(::Mono::Security::UriPartial part) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetLeftPart", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::UriPartial>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, part);
}
inline int32_t Mono::Security::Uri::FromHex(char16_t digit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "FromHex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digit);
}
inline ::StringW Mono::Security::Uri::HexEscape(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "HexEscape", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, character);
}
inline char16_t Mono::Security::Uri::HexUnescape(::StringW pattern, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "HexUnescape", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, pattern, index);
}
inline bool Mono::Security::Uri::IsHexDigit(char16_t digit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsHexDigit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, digit);
}
inline bool Mono::Security::Uri::IsHexEncoding(::StringW pattern, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsHexEncoding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, index);
}
inline ::StringW Mono::Security::Uri::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::Uri::EscapeString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "EscapeString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline ::StringW Mono::Security::Uri::EscapeString(::StringW str, bool escapeReserved, bool escapeHex, bool escapeBrackets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "EscapeString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str, escapeReserved, escapeHex, escapeBrackets);
}
inline void Mono::Security::Uri::Parse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Parse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::Uri::Unescape(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Unescape", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str);
}
inline ::StringW Mono::Security::Uri::Unescape(::StringW str, bool excludeSharp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Unescape", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str, excludeSharp);
}
inline void Mono::Security::Uri::ParseAsWindowsUNC(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsWindowsUNC", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline void Mono::Security::Uri::ParseAsWindowsAbsoluteFilePath(::StringW uriString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsWindowsAbsoluteFilePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline void Mono::Security::Uri::ParseAsUnixAbsoluteFilePath(::StringW uriString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "ParseAsUnixAbsoluteFilePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline void Mono::Security::Uri::Parse(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline ::StringW Mono::Security::Uri::Reduce(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "Reduce", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW Mono::Security::Uri::GetSchemeDelimiter(::StringW scheme) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetSchemeDelimiter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, scheme);
}
inline int32_t Mono::Security::Uri::GetDefaultPort(::StringW scheme) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetDefaultPort", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, scheme);
}
inline ::StringW Mono::Security::Uri::GetOpaqueWiseSchemeDelimiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "GetOpaqueWiseSchemeDelimiter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Mono::Security::Uri::IsPredefinedScheme(::StringW scheme) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Uri*>::get(), "IsPredefinedScheme", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scheme);
}
// Ctor Parameters []
constexpr ::Mono::Security::Uri::Uri() {}
