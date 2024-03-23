#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHttpRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Networking::Internal {
class HttpRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
struct ReadOnlyHttpRequest;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest);
// Type: Unity.Services.Core.Networking.Internal::ReadOnlyHttpRequest
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Networking.Internal::ReadOnlyHttpRequest
struct CORDL_TYPE ReadOnlyHttpRequest {
public:
  // Declarations
  __declspec(property(get = get_Body))::ArrayW<uint8_t, ::Array<uint8_t>*> Body;

  __declspec(property(get = get_Headers))::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_Method))::StringW Method;

  __declspec(property(get = get_Url))::StringW Url;

  /// @brief Method .ctor, addr 0x2669414, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Networking::Internal::HttpRequest* request);

  /// @brief Method get_Body, addr 0x2669470, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Body();

  /// @brief Method get_Headers, addr 0x2669454, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_Method, addr 0x266941c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_Url, addr 0x2669438, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Url();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyHttpRequest();

  // Ctor Parameters [CppParam { name: "m_Request", ty: "::Unity::Services::Core::Networking::Internal::HttpRequest*", modifiers: "", def_value: None }]
  constexpr ReadOnlyHttpRequest(::Unity::Services::Core::Networking::Internal::HttpRequest* m_Request) noexcept;

  /// @brief Field m_Request, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Networking::Internal::HttpRequest* m_Request;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest, m_Request) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest, "Unity.Services.Core.Networking.Internal", "ReadOnlyHttpRequest");
