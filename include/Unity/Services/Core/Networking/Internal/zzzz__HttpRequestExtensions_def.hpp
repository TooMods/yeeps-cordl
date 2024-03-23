#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpRequestExtensions)
namespace Unity::Services::Core::Networking::Internal {
class HttpRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
class HttpRequestExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Networking::Internal::HttpRequestExtensions);
// Type: Unity.Services.Core.Networking.Internal::HttpRequestExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Networking.Internal::HttpRequestExtensions*
class CORDL_TYPE HttpRequestExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsConnect, addr 0x2669258, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsConnect(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsDelete, addr 0x266915c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsDelete(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsGet, addr 0x2669060, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsGet(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsHead, addr 0x2669204, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsHead(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsOptions, addr 0x26692ac, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsOptions(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsPatch, addr 0x26691b0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsPatch(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsPost, addr 0x26690b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsPost(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsPut, addr 0x2669108, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsPut(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

  /// @brief Method AsTrace, addr 0x2669300, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Networking::Internal::HttpRequest* AsTrace(::Unity::Services::Core::Networking::Internal::HttpRequest* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestExtensions(HttpRequestExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestExtensions(HttpRequestExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::HttpRequestExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
NEED_NO_BOX(::Unity::Services::Core::Networking::Internal::HttpRequestExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::HttpRequestExtensions*, "Unity.Services.Core.Networking.Internal", "HttpRequestExtensions");
