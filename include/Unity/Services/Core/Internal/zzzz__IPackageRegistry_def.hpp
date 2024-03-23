#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPackageRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IPackageRegistry);
// Type: Unity.Services.Core.Internal::IPackageRegistry
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IPackageRegistry*
class CORDL_TYPE IPackageRegistry {
public:
  // Declarations
  __declspec(property(get = get_Tree, put = set_Tree))::Unity::Services::Core::Internal::DependencyTree* Tree;

  /// @brief Method RegisterDependency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TComponent> inline void RegisterDependency(int32_t packageTypeHash);

  /// @brief Method RegisterOptionalDependency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TComponent> inline void RegisterOptionalDependency(int32_t packageTypeHash);

  /// @brief Method RegisterPackage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TPackage> inline ::Unity::Services::Core::Internal::CoreRegistration RegisterPackage(TPackage package);

  /// @brief Method RegisterProvision, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TComponent> inline void RegisterProvision(int32_t packageTypeHash);

  /// @brief Method get_Tree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::DependencyTree* get_Tree();

  /// @brief Method set_Tree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Tree(::Unity::Services::Core::Internal::DependencyTree* value);

  // Ctor Parameters [CppParam { name: "", ty: "IPackageRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPackageRegistry(IPackageRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPackageRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPackageRegistry(IPackageRegistry const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IPackageRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IPackageRegistry*, "Unity.Services.Core.Internal", "IPackageRegistry");
