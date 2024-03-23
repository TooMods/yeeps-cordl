#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LockedComponentRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class LockedComponentRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::LockedComponentRegistry);
// Type: Unity.Services.Core.Internal::LockedComponentRegistry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::LockedComponentRegistry*
class CORDL_TYPE LockedComponentRegistry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Registry))::Unity::Services::Core::Internal::IComponentRegistry* Registry;

  /// @brief Field <Registry>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Registry_k__BackingField,
                      put = __cordl_internal_set__Registry_k__BackingField))::Unity::Services::Core::Internal::IComponentRegistry* _Registry_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IComponentRegistry"
  constexpr operator ::Unity::Services::Core::Internal::IComponentRegistry*() noexcept;

  /// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TComponent> inline TComponent GetServiceComponent();

  static inline ::Unity::Services::Core::Internal::LockedComponentRegistry* New_ctor(::Unity::Services::Core::Internal::IComponentRegistry* registryToLock);

  /// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TComponent> inline void RegisterServiceComponent(TComponent component);

  /// @brief Method ResetProvidedComponents, addr 0x266b24c, size 0x50, virtual true, abstract: false, final true
  inline void ResetProvidedComponents(::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance);

  constexpr ::Unity::Services::Core::Internal::IComponentRegistry*& __cordl_internal_get__Registry_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::IComponentRegistry*> const& __cordl_internal_get__Registry_k__BackingField() const;

  constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IComponentRegistry* value);

  /// @brief Method .ctor, addr 0x266b224, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Internal::IComponentRegistry* registryToLock);

  /// @brief Method get_Registry, addr 0x266b21c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Internal::IComponentRegistry* get_Registry();

  /// @brief Convert to "::Unity::Services::Core::Internal::IComponentRegistry"
  constexpr ::Unity::Services::Core::Internal::IComponentRegistry* i___Unity__Services__Core__Internal__IComponentRegistry() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LockedComponentRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LockedComponentRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LockedComponentRegistry(LockedComponentRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LockedComponentRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LockedComponentRegistry(LockedComponentRegistry const&) = delete;

  /// @brief Field <Registry>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::IComponentRegistry* ____Registry_k__BackingField;

  /// @brief Field k_ErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ErrorMessage{ u"Component registration has been locked. Make sure to register service components before all packages have finished initializing." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::LockedComponentRegistry, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::LockedComponentRegistry, ____Registry_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::LockedComponentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::LockedComponentRegistry*, "Unity.Services.Core.Internal", "LockedComponentRegistry");
