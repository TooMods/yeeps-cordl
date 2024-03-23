#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComponentRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IComponentRegistry);
// Type: Unity.Services.Core.Internal::IComponentRegistry
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IComponentRegistry*
class CORDL_TYPE IComponentRegistry {
public:
  // Declarations
  /// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TComponent> inline TComponent GetServiceComponent();

  /// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TComponent> inline void RegisterServiceComponent(TComponent component);

  /// @brief Method ResetProvidedComponents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetProvidedComponents(::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance);

  // Ctor Parameters [CppParam { name: "", ty: "IComponentRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComponentRegistry(IComponentRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComponentRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentRegistry(IComponentRegistry const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IComponentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IComponentRegistry*, "Unity.Services.Core.Internal", "IComponentRegistry");
