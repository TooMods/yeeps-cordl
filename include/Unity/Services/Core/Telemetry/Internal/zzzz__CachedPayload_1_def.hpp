#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedPayload_1)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1);
// Type: Unity.Services.Core.Telemetry.Internal::CachedPayload`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload>
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::CachedPayload`1<TPayload>*
class CORDL_TYPE CachedPayload_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Payload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Payload, put = __cordl_internal_set_Payload)) TPayload Payload;

  /// @brief Field TimeOfOccurenceTicks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TimeOfOccurenceTicks, put = __cordl_internal_set_TimeOfOccurenceTicks)) int64_t TimeOfOccurenceTicks;

  static inline ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* New_ctor();

  constexpr TPayload const& __cordl_internal_get_Payload() const;

  constexpr TPayload& __cordl_internal_get_Payload();

  constexpr int64_t const& __cordl_internal_get_TimeOfOccurenceTicks() const;

  constexpr int64_t& __cordl_internal_get_TimeOfOccurenceTicks();

  constexpr void __cordl_internal_set_Payload(TPayload value);

  constexpr void __cordl_internal_set_TimeOfOccurenceTicks(int64_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedPayload_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedPayload_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedPayload_1(CachedPayload_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedPayload_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedPayload_1(CachedPayload_1 const&) = delete;

  /// @brief Field TimeOfOccurenceTicks, offset: 0x10, size: 0x8, def value: None
  int64_t ___TimeOfOccurenceTicks;

  /// @brief Field Payload, offset: 0x18, size: 0x8, def value: None
  TPayload ___Payload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1, "Unity.Services.Core.Telemetry.Internal", "CachedPayload`1");
