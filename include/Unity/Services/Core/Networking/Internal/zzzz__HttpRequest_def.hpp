#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Services::Core::Networking::Internal {
struct HttpOptions;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
class HttpRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Networking::Internal::HttpRequest);
// Type: Unity.Services.Core.Networking.Internal::HttpRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Networking.Internal::HttpRequest*
class CORDL_TYPE HttpRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field Body, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Body, put = __cordl_internal_set_Body))::ArrayW<uint8_t, ::Array<uint8_t>*> Body;

  /// @brief Field Headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Headers, put = __cordl_internal_set_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Headers;

  /// @brief Field Method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Method, put = __cordl_internal_set_Method))::StringW Method;

  /// @brief Field Options, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Options, put = __cordl_internal_set_Options))::Unity::Services::Core::Networking::Internal::HttpOptions Options;

  /// @brief Field Url, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Url, put = __cordl_internal_set_Url))::StringW Url;

  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* New_ctor();

  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* New_ctor(::StringW method, ::StringW url, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers,
                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method SetBody, addr 0x2669040, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetBody(::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method SetHeader, addr 0x2668f7c, size 0xbc, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetHeader(::StringW key, ::StringW value);

  /// @brief Method SetHeaders, addr 0x2669038, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetHeaders(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetMethod, addr 0x2668f6c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetMethod(::StringW method);

  /// @brief Method SetOptions, addr 0x2669048, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetOptions(::Unity::Services::Core::Networking::Internal::HttpOptions options);

  /// @brief Method SetRedirectLimit, addr 0x2669050, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetRedirectLimit(int32_t redirectLimit);

  /// @brief Method SetTimeOutInSeconds, addr 0x2669058, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetTimeOutInSeconds(int32_t timeout);

  /// @brief Method SetUrl, addr 0x2668f74, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* SetUrl(::StringW url);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Body() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Body();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_Headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_Headers() const;

  constexpr ::StringW const& __cordl_internal_get_Method() const;

  constexpr ::StringW& __cordl_internal_get_Method();

  constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions const& __cordl_internal_get_Options() const;

  constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions& __cordl_internal_get_Options();

  constexpr ::StringW const& __cordl_internal_get_Url() const;

  constexpr ::StringW& __cordl_internal_get_Url();

  constexpr void __cordl_internal_set_Body(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_Method(::StringW value);

  constexpr void __cordl_internal_set_Options(::Unity::Services::Core::Networking::Internal::HttpOptions value);

  constexpr void __cordl_internal_set_Url(::StringW value);

  /// @brief Method .ctor, addr 0x2668f24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2668f2c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW method, ::StringW url, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequest(HttpRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequest(HttpRequest const&) = delete;

  /// @brief Field Method, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Method;

  /// @brief Field Url, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Url;

  /// @brief Field Headers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___Headers;

  /// @brief Field Body, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Body;

  /// @brief Field Options, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Core::Networking::Internal::HttpOptions ___Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::HttpRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpRequest, ___Method) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpRequest, ___Url) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpRequest, ___Headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpRequest, ___Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpRequest, ___Options) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
NEED_NO_BOX(::Unity::Services::Core::Networking::Internal::HttpRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::HttpRequest*, "Unity.Services.Core.Networking.Internal", "HttpRequest");
