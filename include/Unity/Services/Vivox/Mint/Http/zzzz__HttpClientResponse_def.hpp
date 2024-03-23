#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClientResponse)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::HttpClientResponse);
// Type: Unity.Services.Vivox.Mint.Http::HttpClientResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::HttpClientResponse*
class CORDL_TYPE HttpClientResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_ErrorMessage))::StringW ErrorMessage;

  __declspec(property(get = get_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_IsHttpError)) bool IsHttpError;

  __declspec(property(get = get_IsNetworkError)) bool IsNetworkError;

  __declspec(property(get = get_StatusCode)) int64_t StatusCode;

  /// @brief Field <Data>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _Data_k__BackingField;

  /// @brief Field <ErrorMessage>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ErrorMessage_k__BackingField, put = __cordl_internal_set__ErrorMessage_k__BackingField))::StringW _ErrorMessage_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField,
                      put = __cordl_internal_set__Headers_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _Headers_k__BackingField;

  /// @brief Field <IsHttpError>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsHttpError_k__BackingField, put = __cordl_internal_set__IsHttpError_k__BackingField)) bool _IsHttpError_k__BackingField;

  /// @brief Field <IsNetworkError>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__IsNetworkError_k__BackingField, put = __cordl_internal_set__IsNetworkError_k__BackingField)) bool _IsNetworkError_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) int64_t _StatusCode_k__BackingField;

  static inline ::Unity::Services::Vivox::Mint::Http::HttpClientResponse* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int64_t statusCode, bool isHttpError,
                                                                                   bool isNetworkError, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW errorMessage);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Data_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ErrorMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ErrorMessage_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsHttpError_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsHttpError_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsNetworkError_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsNetworkError_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__ErrorMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__IsHttpError_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsNetworkError_k__BackingField(bool value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x170457c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int64_t statusCode, bool isHttpError, bool isNetworkError, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                    ::StringW errorMessage);

  /// @brief Method get_Data, addr 0x17045f4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_ErrorMessage, addr 0x17045fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ErrorMessage();

  /// @brief Method get_Headers, addr 0x17045d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_IsHttpError, addr 0x17045e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsHttpError();

  /// @brief Method get_IsNetworkError, addr 0x17045ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNetworkError();

  /// @brief Method get_StatusCode, addr 0x17045dc, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_StatusCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientResponse(HttpClientResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientResponse(HttpClientResponse const&) = delete;

  /// @brief Field <Headers>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____Headers_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____StatusCode_k__BackingField;

  /// @brief Field <IsHttpError>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsHttpError_k__BackingField;

  /// @brief Field <IsNetworkError>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____IsNetworkError_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Data_k__BackingField;

  /// @brief Field <ErrorMessage>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ErrorMessage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::HttpClientResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____Headers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____StatusCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____IsHttpError_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____IsNetworkError_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____Data_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpClientResponse, ____ErrorMessage_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::HttpClientResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::HttpClientResponse*, "Unity.Services.Vivox.Mint.Http", "HttpClientResponse");
