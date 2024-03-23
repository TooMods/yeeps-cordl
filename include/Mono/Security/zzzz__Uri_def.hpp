#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri)
namespace Mono::Security {
struct UriPartial;
}
namespace Mono::Security {
struct __Uri__UriScheme;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security {
class Uri;
}
namespace Mono::Security {
struct __Uri__UriScheme;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Uri);
MARK_VAL_T(::Mono::Security::__Uri__UriScheme);
// Type: ::UriScheme
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: true
// CS Name: ::Uri::UriScheme
struct CORDL_TYPE __Uri__UriScheme {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2896838, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW s, ::StringW d, int32_t p);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__UriScheme();

  // Ctor Parameters [CppParam { name: "scheme", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "defaultPort", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Uri__UriScheme(::StringW scheme, ::StringW delimiter, int32_t defaultPort) noexcept;

  /// @brief Field scheme, offset: 0x0, size: 0x8, def value: None
  ::StringW scheme;

  /// @brief Field delimiter, offset: 0x8, size: 0x8, def value: None
  ::StringW delimiter;

  /// @brief Field defaultPort, offset: 0x10, size: 0x4, def value: None
  int32_t defaultPort;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__Uri__UriScheme, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::__Uri__UriScheme, scheme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__Uri__UriScheme, delimiter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__Uri__UriScheme, defaultPort) == 0x10, "Offset mismatch!");

} // namespace Mono::Security
// Type: Mono.Security::Uri
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 117, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::Mono.Security::Uri*
class CORDL_TYPE Uri : public ::System::Object {
public:
  // Declarations
  using UriScheme = ::Mono::Security::__Uri__UriScheme;

  __declspec(property(get = get_AbsolutePath))::StringW AbsolutePath;

  __declspec(property(get = get_IsFile)) bool IsFile;

  __declspec(property(get = get_IsUnc)) bool IsUnc;

  __declspec(property(get = get_LocalPath))::StringW LocalPath;

  /// @brief Field SchemeDelimiter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SchemeDelimiter, put = setStaticF_SchemeDelimiter))::StringW SchemeDelimiter;

  /// @brief Field UriSchemeFile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeFile, put = setStaticF_UriSchemeFile))::StringW UriSchemeFile;

  /// @brief Field UriSchemeFtp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeFtp, put = setStaticF_UriSchemeFtp))::StringW UriSchemeFtp;

  /// @brief Field UriSchemeGopher, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeGopher, put = setStaticF_UriSchemeGopher))::StringW UriSchemeGopher;

  /// @brief Field UriSchemeHttp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeHttp, put = setStaticF_UriSchemeHttp))::StringW UriSchemeHttp;

  /// @brief Field UriSchemeHttps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeHttps, put = setStaticF_UriSchemeHttps))::StringW UriSchemeHttps;

  /// @brief Field UriSchemeMailto, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeMailto, put = setStaticF_UriSchemeMailto))::StringW UriSchemeMailto;

  /// @brief Field UriSchemeNews, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNews, put = setStaticF_UriSchemeNews))::StringW UriSchemeNews;

  /// @brief Field UriSchemeNntp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNntp, put = setStaticF_UriSchemeNntp))::StringW UriSchemeNntp;

  /// @brief Field cachedHashCode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedHashCode, put = __cordl_internal_set_cachedHashCode)) int32_t cachedHashCode;

  /// @brief Field cachedLocalPath, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedLocalPath, put = __cordl_internal_set_cachedLocalPath))::StringW cachedLocalPath;

  /// @brief Field cachedToString, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedToString, put = __cordl_internal_set_cachedToString))::StringW cachedToString;

  /// @brief Field fragment, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fragment, put = __cordl_internal_set_fragment))::StringW fragment;

  /// @brief Field hexUpperChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hexUpperChars, put = setStaticF_hexUpperChars))::StringW hexUpperChars;

  /// @brief Field host, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_host, put = __cordl_internal_set_host))::StringW host;

  /// @brief Field isOpaquePart, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpaquePart, put = __cordl_internal_set_isOpaquePart)) bool isOpaquePart;

  /// @brief Field isUnc, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isUnc, put = __cordl_internal_set_isUnc)) bool isUnc;

  /// @brief Field isUnixFilePath, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isUnixFilePath, put = __cordl_internal_set_isUnixFilePath)) bool isUnixFilePath;

  /// @brief Field path, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path))::StringW path;

  /// @brief Field port, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Field query, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_query, put = __cordl_internal_set_query))::StringW query;

  /// @brief Field reduce, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_reduce, put = __cordl_internal_set_reduce)) bool reduce;

  /// @brief Field scheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scheme, put = __cordl_internal_set_scheme))::StringW scheme;

  /// @brief Field schemes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_schemes, put = setStaticF_schemes))::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*> schemes;

  /// @brief Field source, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::StringW source;

  /// @brief Field userEscaped, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_userEscaped, put = __cordl_internal_set_userEscaped)) bool userEscaped;

  /// @brief Field userinfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_userinfo, put = __cordl_internal_set_userinfo))::StringW userinfo;

  /// @brief Method Equals, addr 0x1d10108, size 0x230, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparant);

  /// @brief Method EscapeString, addr 0x1d11254, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW EscapeString(::StringW str);

  /// @brief Method EscapeString, addr 0x1d112b4, size 0x2fc, virtual false, abstract: false, final false
  static inline ::StringW EscapeString(::StringW str, bool escapeReserved, bool escapeHex, bool escapeBrackets);

  /// @brief Method FromHex, addr 0x1d10980, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method GetDefaultPort, addr 0x1d10874, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t GetDefaultPort(::StringW scheme);

  /// @brief Method GetHashCode, addr 0x1d10338, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLeftPart, addr 0x1d1040c, size 0x3e4, virtual false, abstract: false, final false
  inline ::StringW GetLeftPart(::Mono::Security::UriPartial part);

  /// @brief Method GetOpaqueWiseSchemeDelimiter, addr 0x1d107f0, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetOpaqueWiseSchemeDelimiter();

  /// @brief Method GetSchemeDelimiter, addr 0x1d12aa4, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetSchemeDelimiter(::StringW scheme);

  /// @brief Method HexEscape, addr 0x1d10a20, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW HexEscape(char16_t character);

  /// @brief Method HexUnescape, addr 0x1d10b64, size 0x31c, virtual false, abstract: false, final false
  static inline char16_t HexUnescape(::StringW pattern, ByRef<int32_t> index);

  /// @brief Method IsHexDigit, addr 0x1d10e80, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsHexDigit(char16_t digit);

  /// @brief Method IsHexEncoding, addr 0x1d10ebc, size 0x130, virtual false, abstract: false, final false
  static inline bool IsHexEncoding(::StringW pattern, int32_t index);

  /// @brief Method IsPredefinedScheme, addr 0x1d125a4, size 0x1c4, virtual false, abstract: false, final false
  static inline bool IsPredefinedScheme(::StringW scheme);

  static inline ::Mono::Security::Uri* New_ctor(::StringW uriString);

  static inline ::Mono::Security::Uri* New_ctor(::StringW uriString, bool dontEscape);

  /// @brief Method Parse, addr 0x1d0fd4c, size 0x90, virtual false, abstract: false, final false
  inline void Parse();

  /// @brief Method Parse, addr 0x1d115b0, size 0xb6c, virtual false, abstract: false, final false
  inline void Parse(::StringW uriString);

  /// @brief Method ParseAsUnixAbsoluteFilePath, addr 0x1d12440, size 0x164, virtual false, abstract: false, final false
  inline void ParseAsUnixAbsoluteFilePath(::StringW uriString);

  /// @brief Method ParseAsWindowsAbsoluteFilePath, addr 0x1d122b8, size 0x188, virtual false, abstract: false, final false
  inline void ParseAsWindowsAbsoluteFilePath(::StringW uriString);

  /// @brief Method ParseAsWindowsUNC, addr 0x1d1211c, size 0x19c, virtual false, abstract: false, final false
  inline void ParseAsWindowsUNC(::StringW uriString);

  /// @brief Method Reduce, addr 0x1d12768, size 0x33c, virtual false, abstract: false, final false
  static inline ::StringW Reduce(::StringW path);

  /// @brief Method ToString, addr 0x1d10fec, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Unescape, addr 0x1d10100, size 0x8, virtual false, abstract: false, final false
  inline ::StringW Unescape(::StringW str);

  /// @brief Method Unescape, addr 0x1d110c8, size 0x18c, virtual false, abstract: false, final false
  inline ::StringW Unescape(::StringW str, bool excludeSharp);

  constexpr int32_t const& __cordl_internal_get_cachedHashCode() const;

  constexpr int32_t& __cordl_internal_get_cachedHashCode();

  constexpr ::StringW const& __cordl_internal_get_cachedLocalPath() const;

  constexpr ::StringW& __cordl_internal_get_cachedLocalPath();

  constexpr ::StringW const& __cordl_internal_get_cachedToString() const;

  constexpr ::StringW& __cordl_internal_get_cachedToString();

  constexpr ::StringW const& __cordl_internal_get_fragment() const;

  constexpr ::StringW& __cordl_internal_get_fragment();

  constexpr ::StringW const& __cordl_internal_get_host() const;

  constexpr ::StringW& __cordl_internal_get_host();

  constexpr bool const& __cordl_internal_get_isOpaquePart() const;

  constexpr bool& __cordl_internal_get_isOpaquePart();

  constexpr bool const& __cordl_internal_get_isUnc() const;

  constexpr bool& __cordl_internal_get_isUnc();

  constexpr bool const& __cordl_internal_get_isUnixFilePath() const;

  constexpr bool& __cordl_internal_get_isUnixFilePath();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr ::StringW const& __cordl_internal_get_query() const;

  constexpr ::StringW& __cordl_internal_get_query();

  constexpr bool const& __cordl_internal_get_reduce() const;

  constexpr bool& __cordl_internal_get_reduce();

  constexpr ::StringW const& __cordl_internal_get_scheme() const;

  constexpr ::StringW& __cordl_internal_get_scheme();

  constexpr ::StringW const& __cordl_internal_get_source() const;

  constexpr ::StringW& __cordl_internal_get_source();

  constexpr bool const& __cordl_internal_get_userEscaped() const;

  constexpr bool& __cordl_internal_get_userEscaped();

  constexpr ::StringW const& __cordl_internal_get_userinfo() const;

  constexpr ::StringW& __cordl_internal_get_userinfo();

  constexpr void __cordl_internal_set_cachedHashCode(int32_t value);

  constexpr void __cordl_internal_set_cachedLocalPath(::StringW value);

  constexpr void __cordl_internal_set_cachedToString(::StringW value);

  constexpr void __cordl_internal_set_fragment(::StringW value);

  constexpr void __cordl_internal_set_host(::StringW value);

  constexpr void __cordl_internal_set_isOpaquePart(bool value);

  constexpr void __cordl_internal_set_isUnc(bool value);

  constexpr void __cordl_internal_set_isUnixFilePath(bool value);

  constexpr void __cordl_internal_set_path(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  constexpr void __cordl_internal_set_query(::StringW value);

  constexpr void __cordl_internal_set_reduce(bool value);

  constexpr void __cordl_internal_set_scheme(::StringW value);

  constexpr void __cordl_internal_set_source(::StringW value);

  constexpr void __cordl_internal_set_userEscaped(bool value);

  constexpr void __cordl_internal_set_userinfo(::StringW value);

  /// @brief Method .ctor, addr 0x1d0fcb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW uriString);

  /// @brief Method .ctor, addr 0x1d0fcbc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW uriString, bool dontEscape);

  static inline ::StringW getStaticF_SchemeDelimiter();

  static inline ::StringW getStaticF_UriSchemeFile();

  static inline ::StringW getStaticF_UriSchemeFtp();

  static inline ::StringW getStaticF_UriSchemeGopher();

  static inline ::StringW getStaticF_UriSchemeHttp();

  static inline ::StringW getStaticF_UriSchemeHttps();

  static inline ::StringW getStaticF_UriSchemeMailto();

  static inline ::StringW getStaticF_UriSchemeNews();

  static inline ::StringW getStaticF_UriSchemeNntp();

  static inline ::StringW getStaticF_hexUpperChars();

  static inline ::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*> getStaticF_schemes();

  /// @brief Method get_AbsolutePath, addr 0x1d0fddc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AbsolutePath();

  /// @brief Method get_IsFile, addr 0x1d0fde4, size 0x68, virtual false, abstract: false, final false
  inline bool get_IsFile();

  /// @brief Method get_IsUnc, addr 0x1d0fe4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUnc();

  /// @brief Method get_LocalPath, addr 0x1d0fe54, size 0x2ac, virtual false, abstract: false, final false
  inline ::StringW get_LocalPath();

  static inline void setStaticF_SchemeDelimiter(::StringW value);

  static inline void setStaticF_UriSchemeFile(::StringW value);

  static inline void setStaticF_UriSchemeFtp(::StringW value);

  static inline void setStaticF_UriSchemeGopher(::StringW value);

  static inline void setStaticF_UriSchemeHttp(::StringW value);

  static inline void setStaticF_UriSchemeHttps(::StringW value);

  static inline void setStaticF_UriSchemeMailto(::StringW value);

  static inline void setStaticF_UriSchemeNews(::StringW value);

  static inline void setStaticF_UriSchemeNntp(::StringW value);

  static inline void setStaticF_hexUpperChars(::StringW value);

  static inline void setStaticF_schemes(::ArrayW<::Mono::Security::__Uri__UriScheme, ::Array<::Mono::Security::__Uri__UriScheme>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Uri(Uri&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Uri(Uri const&) = delete;

  /// @brief Field isUnixFilePath, offset: 0x10, size: 0x1, def value: None
  bool ___isUnixFilePath;

  /// @brief Field source, offset: 0x18, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field scheme, offset: 0x20, size: 0x8, def value: None
  ::StringW ___scheme;

  /// @brief Field host, offset: 0x28, size: 0x8, def value: None
  ::StringW ___host;

  /// @brief Field port, offset: 0x30, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field path, offset: 0x38, size: 0x8, def value: None
  ::StringW ___path;

  /// @brief Field query, offset: 0x40, size: 0x8, def value: None
  ::StringW ___query;

  /// @brief Field fragment, offset: 0x48, size: 0x8, def value: None
  ::StringW ___fragment;

  /// @brief Field userinfo, offset: 0x50, size: 0x8, def value: None
  ::StringW ___userinfo;

  /// @brief Field isUnc, offset: 0x58, size: 0x1, def value: None
  bool ___isUnc;

  /// @brief Field isOpaquePart, offset: 0x59, size: 0x1, def value: None
  bool ___isOpaquePart;

  /// @brief Field userEscaped, offset: 0x5a, size: 0x1, def value: None
  bool ___userEscaped;

  /// @brief Field cachedToString, offset: 0x60, size: 0x8, def value: None
  ::StringW ___cachedToString;

  /// @brief Field cachedLocalPath, offset: 0x68, size: 0x8, def value: None
  ::StringW ___cachedLocalPath;

  /// @brief Field cachedHashCode, offset: 0x70, size: 0x4, def value: None
  int32_t ___cachedHashCode;

  /// @brief Field reduce, offset: 0x74, size: 0x1, def value: None
  bool ___reduce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Uri, 0x78>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___isUnixFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___scheme) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___host) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___port) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___path) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___query) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___fragment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___userinfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___isUnc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___isOpaquePart) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___userEscaped) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___cachedToString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___cachedLocalPath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___cachedHashCode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Uri, ___reduce) == 0x74, "Offset mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::Uri);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Uri*, "Mono.Security", "Uri");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::__Uri__UriScheme, "Mono.Security", "Uri/UriScheme");
