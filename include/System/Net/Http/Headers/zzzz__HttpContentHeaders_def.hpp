#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContentHeaders)
namespace System::Net::Http::Headers {
class MediaTypeHeaderValue;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpContentHeaders);
// Type: System.Net.Http.Headers::HttpContentHeaders
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::HttpContentHeaders*
class CORDL_TYPE HttpContentHeaders : public ::System::Net::Http::Headers::HttpHeaders {
public:
  // Declarations
  __declspec(property(get = get_ContentLength, put = set_ContentLength))::System::Nullable_1<int64_t> ContentLength;

  __declspec(property(get = get_ContentType, put = set_ContentType))::System::Net::Http::Headers::MediaTypeHeaderValue* ContentType;

  __declspec(property(put = set_Expires))::System::Nullable_1<::System::DateTimeOffset> Expires;

  /// @brief Field content, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::System::Net::Http::HttpContent* content;

  static inline ::System::Net::Http::Headers::HttpContentHeaders* New_ctor(::System::Net::Http::HttpContent* content);

  constexpr ::System::Net::Http::HttpContent*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& __cordl_internal_get_content() const;

  constexpr void __cordl_internal_set_content(::System::Net::Http::HttpContent* value);

  /// @brief Method .ctor, addr 0x161c9f0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpContent* content);

  /// @brief Method get_ContentLength, addr 0x16198bc, size 0x128, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_ContentLength();

  /// @brief Method get_ContentType, addr 0x161dc14, size 0x68, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType();

  /// @brief Method set_ContentLength, addr 0x1623818, size 0x80, virtual false, abstract: false, final false
  inline void set_ContentLength(::System::Nullable_1<int64_t> value);

  /// @brief Method set_ContentType, addr 0x161f1c0, size 0x74, virtual false, abstract: false, final false
  inline void set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue* value);

  /// @brief Method set_Expires, addr 0x1623898, size 0xcc, virtual false, abstract: false, final false
  inline void set_Expires(::System::Nullable_1<::System::DateTimeOffset> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContentHeaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpContentHeaders(HttpContentHeaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpContentHeaders(HttpContentHeaders const&) = delete;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpContentHeaders, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpContentHeaders, ___content) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpContentHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpContentHeaders*, "System.Net.Http.Headers", "HttpContentHeaders");
