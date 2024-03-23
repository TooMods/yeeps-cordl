#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITelemetryPayload)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryPayload;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload);
// Type: Unity.Services.Core.Telemetry.Internal::ITelemetryPayload
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::ITelemetryPayload*
class CORDL_TYPE ITelemetryPayload {
public:
  // Declarations
  __declspec(property(get = get_CommonTags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CommonTags;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Add(::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* telemetryEvent);

  /// @brief Method get_CommonTags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_CommonTags();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "ITelemetryPayload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITelemetryPayload(ITelemetryPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITelemetryPayload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITelemetryPayload(ITelemetryPayload const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*, "Unity.Services.Core.Telemetry.Internal", "ITelemetryPayload");
