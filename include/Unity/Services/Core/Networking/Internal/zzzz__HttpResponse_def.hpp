#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__ReadOnlyHttpRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpResponse)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Services::Core::Networking::Internal {
class HttpRequest;
}
namespace Unity::Services::Core::Networking::Internal {
struct ReadOnlyHttpRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
class HttpResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Networking::Internal::HttpResponse);
// Type: Unity.Services.Core.Networking.Internal::HttpResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Networking.Internal::HttpResponse*
class CORDL_TYPE HttpResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  /// @brief Field ErrorMessage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ErrorMessage, put = __cordl_internal_set_ErrorMessage))::StringW ErrorMessage;

  /// @brief Field Headers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Headers, put = __cordl_internal_set_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Headers;

  /// @brief Field IsHttpError, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_IsHttpError, put = __cordl_internal_set_IsHttpError)) bool IsHttpError;

  /// @brief Field IsNetworkError, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_IsNetworkError, put = __cordl_internal_set_IsNetworkError)) bool IsNetworkError;

  /// @brief Field Request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Request, put = __cordl_internal_set_Request))::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest Request;

  /// @brief Field StatusCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusCode, put = __cordl_internal_set_StatusCode)) int64_t StatusCode;

  static inline ::Unity::Services::Core::Networking::Internal::HttpResponse* New_ctor();

  /// @brief Method SetData, addr 0x26693dc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SetErrorMessage, addr 0x26693ec, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetErrorMessage(::StringW errorMessage);

  /// @brief Method SetHeader, addr 0x2669364, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetHeader(::StringW key, ::StringW value);

  /// @brief Method SetHeaders, addr 0x26693d4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetHeaders(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetIsHttpError, addr 0x26693f4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetIsHttpError(bool isHttpError);

  /// @brief Method SetIsNetworkError, addr 0x2669400, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetIsNetworkError(bool isNetworkError);

  /// @brief Method SetRequest, addr 0x2669354, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetRequest(::Unity::Services::Core::Networking::Internal::HttpRequest* request);

  /// @brief Method SetRequest, addr 0x266935c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetRequest(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest request);

  /// @brief Method SetStatusCode, addr 0x26693e4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpResponse* SetStatusCode(int64_t statusCode);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Data();

  constexpr ::StringW const& __cordl_internal_get_ErrorMessage() const;

  constexpr ::StringW& __cordl_internal_get_ErrorMessage();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_Headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_Headers() const;

  constexpr bool const& __cordl_internal_get_IsHttpError() const;

  constexpr bool& __cordl_internal_get_IsHttpError();

  constexpr bool const& __cordl_internal_get_IsNetworkError() const;

  constexpr bool& __cordl_internal_get_IsNetworkError();

  constexpr ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest const& __cordl_internal_get_Request() const;

  constexpr ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest& __cordl_internal_get_Request();

  constexpr int64_t const& __cordl_internal_get_StatusCode() const;

  constexpr int64_t& __cordl_internal_get_StatusCode();

  constexpr void __cordl_internal_set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ErrorMessage(::StringW value);

  constexpr void __cordl_internal_set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_IsHttpError(bool value);

  constexpr void __cordl_internal_set_IsNetworkError(bool value);

  constexpr void __cordl_internal_set_Request(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest value);

  constexpr void __cordl_internal_set_StatusCode(int64_t value);

  /// @brief Method .ctor, addr 0x266940c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpResponse(HttpResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpResponse(HttpResponse const&) = delete;

  /// @brief Field Request, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest ___Request;

  /// @brief Field Headers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___Headers;

  /// @brief Field Data, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Data;

  /// @brief Field StatusCode, offset: 0x28, size: 0x8, def value: None
  int64_t ___StatusCode;

  /// @brief Field ErrorMessage, offset: 0x30, size: 0x8, def value: None
  ::StringW ___ErrorMessage;

  /// @brief Field IsHttpError, offset: 0x38, size: 0x1, def value: None
  bool ___IsHttpError;

  /// @brief Field IsNetworkError, offset: 0x39, size: 0x1, def value: None
  bool ___IsNetworkError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::HttpResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___Request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___Headers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___StatusCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___ErrorMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___IsHttpError) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpResponse, ___IsNetworkError) == 0x39, "Offset mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
NEED_NO_BOX(::Unity::Services::Core::Networking::Internal::HttpResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::HttpResponse*, "Unity.Services.Core.Networking.Internal", "HttpResponse");
