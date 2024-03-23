#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Environments)
namespace Unity::Services::Core::Environments::Internal {
class IEnvironments;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Environments::Internal {
class Environments;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Environments::Internal::Environments);
// Type: Unity.Services.Core.Environments.Internal::Environments
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Environments::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Environments.Internal::Environments*
class CORDL_TYPE Environments : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current, put = set_Current))::StringW Current;

  /// @brief Field <Current>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Current_k__BackingField, put = __cordl_internal_set__Current_k__BackingField))::StringW _Current_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Environments::Internal::IEnvironments"
  constexpr operator ::Unity::Services::Core::Environments::Internal::IEnvironments*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  static inline ::Unity::Services::Core::Environments::Internal::Environments* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Current_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Current_k__BackingField();

  constexpr void __cordl_internal_set__Current_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x28fa394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x28fa384, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Current();

  /// @brief Convert to "::Unity::Services::Core::Environments::Internal::IEnvironments"
  constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments* i___Unity__Services__Core__Environments__Internal__IEnvironments() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Method set_Current, addr 0x28fa38c, size 0x8, virtual false, abstract: false, final false
  inline void set_Current(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Environments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Environments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Environments(Environments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Environments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Environments(Environments const&) = delete;

  /// @brief Field <Current>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Current_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Environments::Internal::Environments, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Environments::Internal::Environments, ____Current_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Environments::Internal
NEED_NO_BOX(::Unity::Services::Core::Environments::Internal::Environments);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Environments::Internal::Environments*, "Unity.Services.Core.Environments.Internal", "Environments");
