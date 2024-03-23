#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTeam)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonTeam;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PhotonTeam);
// Type: Photon.Pun.UtilityScripts::PhotonTeam
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PhotonTeam*
class CORDL_TYPE PhotonTeam : public ::System::Object {
public:
  // Declarations
  /// @brief Field Code, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code)) uint8_t Code;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  static inline ::Photon::Pun::UtilityScripts::PhotonTeam* New_ctor();

  /// @brief Method ToString, addr 0x1ec2ebc, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr uint8_t const& __cordl_internal_get_Code() const;

  constexpr uint8_t& __cordl_internal_get_Code();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr void __cordl_internal_set_Code(uint8_t value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  /// @brief Method .ctor, addr 0x1ec2f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTeam();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTeam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTeam(PhotonTeam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTeam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTeam(PhotonTeam const&) = delete;

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Code, offset: 0x18, size: 0x1, def value: None
  uint8_t ___Code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PhotonTeam, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeam, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeam, ___Code) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PhotonTeam);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PhotonTeam*, "Photon.Pun.UtilityScripts", "PhotonTeam");
