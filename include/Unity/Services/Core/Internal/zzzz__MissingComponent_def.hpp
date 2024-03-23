#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MissingComponent)
namespace System {
class Type;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class MissingComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::MissingComponent);
// Type: Unity.Services.Core.Internal::MissingComponent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::MissingComponent*
class CORDL_TYPE MissingComponent : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IntendedType))::System::Type* IntendedType;

  /// @brief Field <IntendedType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__IntendedType_k__BackingField, put = __cordl_internal_set__IntendedType_k__BackingField))::System::Type* _IntendedType_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  static inline ::Unity::Services::Core::Internal::MissingComponent* New_ctor(::System::Type* intendedType);

  constexpr ::System::Type*& __cordl_internal_get__IntendedType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__IntendedType_k__BackingField() const;

  constexpr void __cordl_internal_set__IntendedType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x266ed84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* intendedType);

  /// @brief Method get_IntendedType, addr 0x266ed7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_IntendedType();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingComponent(MissingComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingComponent(MissingComponent const&) = delete;

  /// @brief Field <IntendedType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____IntendedType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::MissingComponent, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::MissingComponent, ____IntendedType_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::MissingComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::MissingComponent*, "Unity.Services.Core.Internal", "MissingComponent");
