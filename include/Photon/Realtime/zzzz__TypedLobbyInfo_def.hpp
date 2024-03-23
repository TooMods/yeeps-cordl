#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypedLobbyInfo)
// Forward declare root types
namespace Photon::Realtime {
class TypedLobbyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::TypedLobbyInfo);
// Type: Photon.Realtime::TypedLobbyInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::TypedLobbyInfo*
class CORDL_TYPE TypedLobbyInfo : public ::Photon::Realtime::TypedLobby {
public:
  // Declarations
  /// @brief Field PlayerCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_PlayerCount, put = __cordl_internal_set_PlayerCount)) int32_t PlayerCount;

  /// @brief Field RoomCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_RoomCount, put = __cordl_internal_set_RoomCount)) int32_t RoomCount;

  static inline ::Photon::Realtime::TypedLobbyInfo* New_ctor();

  /// @brief Method ToString, addr 0x2247eec, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_PlayerCount() const;

  constexpr int32_t& __cordl_internal_get_PlayerCount();

  constexpr int32_t const& __cordl_internal_get_RoomCount() const;

  constexpr int32_t& __cordl_internal_get_RoomCount();

  constexpr void __cordl_internal_set_PlayerCount(int32_t value);

  constexpr void __cordl_internal_set_RoomCount(int32_t value);

  /// @brief Method .ctor, addr 0x2243950, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedLobbyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedLobbyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedLobbyInfo(TypedLobbyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedLobbyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedLobbyInfo(TypedLobbyInfo const&) = delete;

  /// @brief Field PlayerCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___PlayerCount;

  /// @brief Field RoomCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___RoomCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::TypedLobbyInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::TypedLobbyInfo, ___PlayerCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::TypedLobbyInfo, ___RoomCount) == 0x20, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::TypedLobbyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::TypedLobbyInfo*, "Photon.Realtime", "TypedLobbyInfo");
