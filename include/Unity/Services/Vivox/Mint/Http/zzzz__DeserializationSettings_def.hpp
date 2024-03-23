#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__MissingMemberHandling_def.hpp"
CORDL_MODULE_EXPORT(DeserializationSettings)
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class DeserializationSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::DeserializationSettings);
// Type: Unity.Services.Vivox.Mint.Http::DeserializationSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::DeserializationSettings*
class CORDL_TYPE DeserializationSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field MissingMemberHandling, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_MissingMemberHandling,
                      put = __cordl_internal_set_MissingMemberHandling))::Unity::Services::Vivox::Mint::Http::MissingMemberHandling MissingMemberHandling;

  static inline ::Unity::Services::Vivox::Mint::Http::DeserializationSettings* New_ctor();

  constexpr ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling const& __cordl_internal_get_MissingMemberHandling() const;

  constexpr ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling& __cordl_internal_get_MissingMemberHandling();

  constexpr void __cordl_internal_set_MissingMemberHandling(::Unity::Services::Vivox::Mint::Http::MissingMemberHandling value);

  /// @brief Method .ctor, addr 0x1701bac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializationSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeserializationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializationSettings(DeserializationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializationSettings(DeserializationSettings const&) = delete;

  /// @brief Field MissingMemberHandling, offset: 0x10, size: 0x4, def value: None
  ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling ___MissingMemberHandling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::DeserializationSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::DeserializationSettings, ___MissingMemberHandling) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::DeserializationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::DeserializationSettings*, "Unity.Services.Vivox.Mint.Http", "DeserializationSettings");
