#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CacheExtensions)
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct DiagnosticsPayload;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class CacheExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::CacheExtensions);
// Type: Unity.Services.Core.Telemetry.Internal::CacheExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::CacheExtensions*
class CORDL_TYPE CacheExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPayload>
  static inline void Add(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* self, ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* telemetryEvent);

  /// @brief Method AddRangeFrom, addr 0x270bda0, size 0xd4, virtual false, abstract: false, final false
  static inline void AddRangeFrom(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* self,
                                  ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* payload);

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPayload> static inline bool IsEmpty(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CacheExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheExtensions(CacheExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheExtensions(CacheExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::CacheExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::CacheExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::CacheExtensions*, "Unity.Services.Core.Telemetry.Internal", "CacheExtensions");
