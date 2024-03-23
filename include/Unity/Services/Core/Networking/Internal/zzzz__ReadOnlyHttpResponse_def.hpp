#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHttpResponse)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Networking::Internal {
class HttpResponse;
}
namespace Unity::Services::Core::Networking::Internal {
struct ReadOnlyHttpRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
struct ReadOnlyHttpResponse;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse);
// Type: Unity.Services.Core.Networking.Internal::ReadOnlyHttpResponse
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Networking.Internal::ReadOnlyHttpResponse
struct CORDL_TYPE ReadOnlyHttpResponse {
public:
  // Declarations
  __declspec(property(get = get_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_ErrorMessage))::StringW ErrorMessage;

  __declspec(property(get = get_Headers))::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_IsHttpError)) bool IsHttpError;

  __declspec(property(get = get_IsNetworkError)) bool IsNetworkError;

  __declspec(property(get = get_Request))::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest Request;

  __declspec(property(get = get_StatusCode)) int64_t StatusCode;

  /// @brief Method .ctor, addr 0x266948c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Networking::Internal::HttpResponse* response);

  /// @brief Method get_Data, addr 0x26694cc, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_ErrorMessage, addr 0x2669504, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_ErrorMessage();

  /// @brief Method get_Headers, addr 0x26694b0, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_IsHttpError, addr 0x2669520, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsHttpError();

  /// @brief Method get_IsNetworkError, addr 0x266953c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsNetworkError();

  /// @brief Method get_Request, addr 0x2669494, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest get_Request();

  /// @brief Method get_StatusCode, addr 0x26694e8, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_StatusCode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyHttpResponse();

  // Ctor Parameters [CppParam { name: "m_Response", ty: "::Unity::Services::Core::Networking::Internal::HttpResponse*", modifiers: "", def_value: None }]
  constexpr ReadOnlyHttpResponse(::Unity::Services::Core::Networking::Internal::HttpResponse* m_Response) noexcept;

  /// @brief Field m_Response, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Networking::Internal::HttpResponse* m_Response;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse, m_Response) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse, "Unity.Services.Core.Networking.Internal", "ReadOnlyHttpResponse");
