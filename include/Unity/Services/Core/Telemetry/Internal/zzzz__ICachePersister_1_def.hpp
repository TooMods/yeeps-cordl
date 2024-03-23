#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ICachePersister_1)
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::ICachePersister_1);
// Type: Unity.Services.Core.Telemetry.Internal::ICachePersister`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload>
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::ICachePersister`1<TPayload>*
class CORDL_TYPE ICachePersister_1 {
public:
  // Declarations
  __declspec(property(get = get_CanPersist)) bool CanPersist;

  /// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Delete();

  /// @brief Method Persist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache);

  /// @brief Method TryFetch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache);

  /// @brief Method get_CanPersist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CanPersist();

  // Ctor Parameters [CppParam { name: "", ty: "ICachePersister_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICachePersister_1(ICachePersister_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICachePersister_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICachePersister_1(ICachePersister_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::ICachePersister_1, "Unity.Services.Core.Telemetry.Internal", "ICachePersister`1");
