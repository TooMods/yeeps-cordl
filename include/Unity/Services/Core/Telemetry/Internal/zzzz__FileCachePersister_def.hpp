#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileCachePersister)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class FileCachePersister;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::FileCachePersister);
// Type: Unity.Services.Core.Telemetry.Internal::FileCachePersister
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::FileCachePersister*
class CORDL_TYPE FileCachePersister : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPersistentDataPathFor, addr 0x270b0a8, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW GetPersistentDataPathFor(::UnityEngine::RuntimePlatform platform);

  /// @brief Method IsAvailableFor, addr 0x270b088, size 0x20, virtual false, abstract: false, final false
  static inline bool IsAvailableFor(::UnityEngine::RuntimePlatform platform);

  static inline ::Unity::Services::Core::Telemetry::Internal::FileCachePersister* New_ctor();

  /// @brief Method .ctor, addr 0x270b10c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileCachePersister();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileCachePersister", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileCachePersister(FileCachePersister&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileCachePersister", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileCachePersister(FileCachePersister const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::FileCachePersister, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::FileCachePersister);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::FileCachePersister*, "Unity.Services.Core.Telemetry.Internal", "FileCachePersister");
