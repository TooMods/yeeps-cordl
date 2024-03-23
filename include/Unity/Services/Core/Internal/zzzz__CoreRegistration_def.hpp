#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreRegistration)
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Internal::CoreRegistration);
// Type: Unity.Services.Core.Internal::CoreRegistration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Internal::CoreRegistration
struct CORDL_TYPE CoreRegistration {
public:
  // Declarations
  /// @brief Method DependsOn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration DependsOn();

  /// @brief Method OptionallyDependsOn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration OptionallyDependsOn();

  /// @brief Method ProvidesComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration ProvidesComponent();

  /// @brief Method .ctor, addr 0x266b29c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Internal::IPackageRegistry* registry, int32_t packageHash);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreRegistration();

  // Ctor Parameters [CppParam { name: "m_Registry", ty: "::Unity::Services::Core::Internal::IPackageRegistry*", modifiers: "", def_value: None }, CppParam { name: "m_PackageHash", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr CoreRegistration(::Unity::Services::Core::Internal::IPackageRegistry* m_Registry, int32_t m_PackageHash) noexcept;

  /// @brief Field m_Registry, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::IPackageRegistry* m_Registry;

  /// @brief Field m_PackageHash, offset: 0x8, size: 0x4, def value: None
  int32_t m_PackageHash;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistration, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistration, m_Registry) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistration, m_PackageHash) == 0x8, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistration, "Unity.Services.Core.Internal", "CoreRegistration");
