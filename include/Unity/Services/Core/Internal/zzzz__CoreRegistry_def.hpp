#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CoreRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreRegistry);
// Type: Unity.Services.Core.Internal::CoreRegistry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::CoreRegistry*
class CORDL_TYPE CoreRegistry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ComponentRegistry, put = set_ComponentRegistry))::Unity::Services::Core::Internal::IComponentRegistry* ComponentRegistry;

  __declspec(property(get = get_PackageRegistry, put = set_PackageRegistry))::Unity::Services::Core::Internal::IPackageRegistry* PackageRegistry;

  /// @brief Field <ComponentRegistry>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ComponentRegistry_k__BackingField,
                      put = __cordl_internal_set__ComponentRegistry_k__BackingField))::Unity::Services::Core::Internal::IComponentRegistry* _ComponentRegistry_k__BackingField;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::Unity::Services::Core::Internal::CoreRegistry* _Instance_k__BackingField;

  /// @brief Field <PackageRegistry>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PackageRegistry_k__BackingField,
                      put = __cordl_internal_set__PackageRegistry_k__BackingField))::Unity::Services::Core::Internal::IPackageRegistry* _PackageRegistry_k__BackingField;

  /// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TComponent> inline TComponent GetServiceComponent();

  /// @brief Method LockComponentRegistration, addr 0x266b6fc, size 0x94, virtual false, abstract: false, final false
  inline void LockComponentRegistration();

  /// @brief Method LockPackageRegistration, addr 0x266b640, size 0x94, virtual false, abstract: false, final false
  inline void LockPackageRegistration();

  static inline ::Unity::Services::Core::Internal::CoreRegistry* New_ctor();

  static inline ::Unity::Services::Core::Internal::CoreRegistry* New_ctor(::Unity::Services::Core::Internal::IPackageRegistry* packageRegistry,
                                                                          ::Unity::Services::Core::Internal::IComponentRegistry* componentRegistry);

  /// @brief Method RegisterPackage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPackage> inline ::Unity::Services::Core::Internal::CoreRegistration RegisterPackage(TPackage package);

  /// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TComponent> inline void RegisterServiceComponent(TComponent component);

  constexpr ::Unity::Services::Core::Internal::IComponentRegistry*& __cordl_internal_get__ComponentRegistry_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::IComponentRegistry*> const& __cordl_internal_get__ComponentRegistry_k__BackingField() const;

  constexpr ::Unity::Services::Core::Internal::IPackageRegistry*& __cordl_internal_get__PackageRegistry_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::IPackageRegistry*> const& __cordl_internal_get__PackageRegistry_k__BackingField() const;

  constexpr void __cordl_internal_set__ComponentRegistry_k__BackingField(::Unity::Services::Core::Internal::IComponentRegistry* value);

  constexpr void __cordl_internal_set__PackageRegistry_k__BackingField(::Unity::Services::Core::Internal::IPackageRegistry* value);

  /// @brief Method .ctor, addr 0x266b35c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x266b614, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Internal::IPackageRegistry* packageRegistry, ::Unity::Services::Core::Internal::IComponentRegistry* componentRegistry);

  static inline ::Unity::Services::Core::Internal::CoreRegistry* getStaticF__Instance_k__BackingField();

  /// @brief Method get_ComponentRegistry, addr 0x266b34c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::IComponentRegistry* get_ComponentRegistry();

  /// @brief Method get_Instance, addr 0x266b2a8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::CoreRegistry* get_Instance();

  /// @brief Method get_PackageRegistry, addr 0x266b33c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::IPackageRegistry* get_PackageRegistry();

  static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreRegistry* value);

  /// @brief Method set_ComponentRegistry, addr 0x266b354, size 0x8, virtual false, abstract: false, final false
  inline void set_ComponentRegistry(::Unity::Services::Core::Internal::IComponentRegistry* value);

  /// @brief Method set_Instance, addr 0x266b2f0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Unity::Services::Core::Internal::CoreRegistry* value);

  /// @brief Method set_PackageRegistry, addr 0x266b344, size 0x8, virtual false, abstract: false, final false
  inline void set_PackageRegistry(::Unity::Services::Core::Internal::IPackageRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreRegistry(CoreRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreRegistry(CoreRegistry const&) = delete;

  /// @brief Field <PackageRegistry>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::IPackageRegistry* ____PackageRegistry_k__BackingField;

  /// @brief Field <ComponentRegistry>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::IComponentRegistry* ____ComponentRegistry_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____PackageRegistry_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____ComponentRegistry_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistry*, "Unity.Services.Core.Internal", "CoreRegistry");
