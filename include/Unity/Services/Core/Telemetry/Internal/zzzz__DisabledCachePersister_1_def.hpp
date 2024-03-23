#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DisabledCachePersister_1)
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class DisabledCachePersister_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1);
// Type: Unity.Services.Core.Telemetry.Internal::DisabledCachePersister`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload>
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DisabledCachePersister`1<TPayload>*
class CORDL_TYPE DisabledCachePersister_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanPersist)) bool CanPersist;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*() noexcept;

  /// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Delete();

  static inline ::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>* New_ctor();

  /// @brief Method Persist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache);

  /// @brief Method TryFetch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanPersist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_CanPersist();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
  constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* i___Unity__Services__Core__Telemetry__Internal__ICachePersister_1_TPayload_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisabledCachePersister_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisabledCachePersister_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisabledCachePersister_1(DisabledCachePersister_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisabledCachePersister_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisabledCachePersister_1(DisabledCachePersister_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1, "Unity.Services.Core.Telemetry.Internal", "DisabledCachePersister`1");
