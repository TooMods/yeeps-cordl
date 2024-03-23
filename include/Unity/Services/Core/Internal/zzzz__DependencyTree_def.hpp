#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTree)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTree);
// Type: Unity.Services.Core.Internal::DependencyTree
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::DependencyTree*
class CORDL_TYPE DependencyTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field ComponentTypeHashToInstance, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_ComponentTypeHashToInstance,
      put = __cordl_internal_set_ComponentTypeHashToInstance))::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* ComponentTypeHashToInstance;

  /// @brief Field ComponentTypeHashToPackageTypeHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ComponentTypeHashToPackageTypeHash,
                      put = __cordl_internal_set_ComponentTypeHashToPackageTypeHash))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ComponentTypeHashToPackageTypeHash;

  /// @brief Field PackageTypeHashToComponentTypeHashDependencies, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PackageTypeHashToComponentTypeHashDependencies, put = __cordl_internal_set_PackageTypeHashToComponentTypeHashDependencies))::System::Collections::
      Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* PackageTypeHashToComponentTypeHashDependencies;

  /// @brief Field PackageTypeHashToInstance, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_PackageTypeHashToInstance,
      put = __cordl_internal_set_PackageTypeHashToInstance))::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* PackageTypeHashToInstance;

  static inline ::Unity::Services::Core::Internal::DependencyTree* New_ctor();

  static inline ::Unity::Services::Core::Internal::DependencyTree*
  New_ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* packageToInstance,
           ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* componentToPackage,
           ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* packageToComponentDependencies,
           ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentToInstance);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*& __cordl_internal_get_ComponentTypeHashToInstance();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*> const&
  __cordl_internal_get_ComponentTypeHashToInstance() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_ComponentTypeHashToPackageTypeHash();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_ComponentTypeHashToPackageTypeHash() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get_PackageTypeHashToComponentTypeHashDependencies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*> const&
  __cordl_internal_get_PackageTypeHashToComponentTypeHashDependencies() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*& __cordl_internal_get_PackageTypeHashToInstance();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*> const&
  __cordl_internal_get_PackageTypeHashToInstance() const;

  constexpr void __cordl_internal_set_ComponentTypeHashToInstance(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* value);

  constexpr void __cordl_internal_set_ComponentTypeHashToPackageTypeHash(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_PackageTypeHashToComponentTypeHashDependencies(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_PackageTypeHashToInstance(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* value);

  /// @brief Method .ctor, addr 0x266b4a0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x266c584, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* packageToInstance,
                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* componentToPackage,
                    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* packageToComponentDependencies,
                    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentToInstance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependencyTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependencyTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependencyTree(DependencyTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependencyTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependencyTree(DependencyTree const&) = delete;

  /// @brief Field PackageTypeHashToInstance, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* ___PackageTypeHashToInstance;

  /// @brief Field ComponentTypeHashToPackageTypeHash, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___ComponentTypeHashToPackageTypeHash;

  /// @brief Field PackageTypeHashToComponentTypeHashDependencies, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* ___PackageTypeHashToComponentTypeHashDependencies;

  /// @brief Field ComponentTypeHashToInstance, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* ___ComponentTypeHashToInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTree, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTree, ___PackageTypeHashToInstance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTree, ___ComponentTypeHashToPackageTypeHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTree, ___PackageTypeHashToComponentTypeHashDependencies) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTree, ___ComponentTypeHashToInstance) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTree);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTree*, "Unity.Services.Core.Internal", "DependencyTree");
