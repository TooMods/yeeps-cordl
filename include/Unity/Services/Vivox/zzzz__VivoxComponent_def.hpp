#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VivoxComponent)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Vivox::Internal {
class IVivoxTokenProviderInternal;
}
namespace Unity::Services::Vivox::Internal {
class IVivox;
}
namespace Unity::Services::Vivox {
class VivoxServiceInternal;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxComponent);
// Type: Unity.Services.Vivox::VivoxComponent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxComponent*
class CORDL_TYPE VivoxComponent : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_vivoxService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_vivoxService, put = __cordl_internal_set_m_vivoxService))::Unity::Services::Vivox::VivoxServiceInternal* m_vivoxService;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::Internal::IVivox"
  constexpr operator ::Unity::Services::Vivox::Internal::IVivox*() noexcept;

  static inline ::Unity::Services::Vivox::VivoxComponent* New_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService);

  /// @brief Method RegisterTokenProvider, addr 0x1c13138, size 0x1c, virtual true, abstract: false, final true
  inline void RegisterTokenProvider(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* tokenProvider);

  constexpr ::Unity::Services::Vivox::VivoxServiceInternal*& __cordl_internal_get_m_vivoxService();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxServiceInternal*> const& __cordl_internal_get_m_vivoxService() const;

  constexpr void __cordl_internal_set_m_vivoxService(::Unity::Services::Vivox::VivoxServiceInternal* value);

  /// @brief Method .ctor, addr 0x1c13110, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::Internal::IVivox"
  constexpr ::Unity::Services::Vivox::Internal::IVivox* i___Unity__Services__Vivox__Internal__IVivox() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxComponent(VivoxComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxComponent(VivoxComponent const&) = delete;

  /// @brief Field m_vivoxService, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* ___m_vivoxService;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxComponent, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxComponent, ___m_vivoxService) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxComponent*, "Unity.Services.Vivox", "VivoxComponent");
