#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
class ComponentRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::ComponentRegistry);
// Type: Unity.Services.Core.Internal::ComponentRegistry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::ComponentRegistry*
class CORDL_TYPE ComponentRegistry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ComponentTypeHashToInstance))::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* ComponentTypeHashToInstance;

  /// @brief Field <ComponentTypeHashToInstance>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ComponentTypeHashToInstance_k__BackingField, put = __cordl_internal_set__ComponentTypeHashToInstance_k__BackingField))::System::Collections::Generic::
      Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* _ComponentTypeHashToInstance_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IComponentRegistry"
  constexpr operator ::Unity::Services::Core::Internal::IComponentRegistry*() noexcept;

  /// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TComponent> inline TComponent GetServiceComponent();

  /// @brief Method IsComponentTypeRegistered, addr 0x266b0dc, size 0xc8, virtual false, abstract: false, final false
  inline bool IsComponentTypeRegistered(int32_t componentTypeHash);

  static inline ::Unity::Services::Core::Internal::ComponentRegistry*
  New_ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance);

  /// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TComponent> inline void RegisterServiceComponent(TComponent component);

  /// @brief Method ResetProvidedComponents, addr 0x266b1a4, size 0x78, virtual true, abstract: false, final true
  inline void ResetProvidedComponents(::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*& __cordl_internal_get__ComponentTypeHashToInstance_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*> const&
  __cordl_internal_get__ComponentTypeHashToInstance_k__BackingField() const;

  constexpr void __cordl_internal_set__ComponentTypeHashToInstance_k__BackingField(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* value);

  /// @brief Method .ctor, addr 0x266b0b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance);

  /// @brief Method get_ComponentTypeHashToInstance, addr 0x266b0ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* get_ComponentTypeHashToInstance();

  /// @brief Convert to "::Unity::Services::Core::Internal::IComponentRegistry"
  constexpr ::Unity::Services::Core::Internal::IComponentRegistry* i___Unity__Services__Core__Internal__IComponentRegistry() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentRegistry(ComponentRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentRegistry(ComponentRegistry const&) = delete;

  /// @brief Field <ComponentTypeHashToInstance>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* ____ComponentTypeHashToInstance_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::ComponentRegistry, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::ComponentRegistry, ____ComponentTypeHashToInstance_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::ComponentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::ComponentRegistry*, "Unity.Services.Core.Internal", "ComponentRegistry");
