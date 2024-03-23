#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
CORDL_MODULE_EXPORT(RoomDoorConfiguration)
namespace GlobalNamespace {
struct __RoomDatabase__RoomDoorConfigurationDataBaseEntry;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomDoorConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomDoorConfiguration);
// Type: ::RoomDoorConfiguration
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDoorConfiguration*
class CORDL_TYPE RoomDoorConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field <position>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField))::UnityEngine::Vector2Int _position_k__BackingField;

  /// @brief Field <size>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__size_k__BackingField, put = __cordl_internal_set__size_k__BackingField))::UnityEngine::Vector2Int _size_k__BackingField;

  /// @brief Field hallwayDoorSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hallwayDoorSize, put = setStaticF_hallwayDoorSize))::UnityEngine::Vector2Int hallwayDoorSize;

  /// @brief Field lobbyDoorSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lobbyDoorSize, put = setStaticF_lobbyDoorSize))::UnityEngine::Vector2Int lobbyDoorSize;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2Int position;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector2Int size;

  /// @brief Method Construct, addr 0x1632034, size 0xac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::RoomDoorConfiguration* Construct(::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry doorConfigurationDataBaseEntry, bool isLobby);

  static inline ::GlobalNamespace::RoomDoorConfiguration* New_ctor(::UnityEngine::Vector2Int position, ::UnityEngine::Vector2Int size);

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__position_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__size_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__size_k__BackingField();

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set__size_k__BackingField(::UnityEngine::Vector2Int value);

  /// @brief Method .ctor, addr 0x1632008, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2Int position, ::UnityEngine::Vector2Int size);

  static inline ::UnityEngine::Vector2Int getStaticF_hallwayDoorSize();

  static inline ::UnityEngine::Vector2Int getStaticF_lobbyDoorSize();

  /// @brief Method get_position, addr 0x1631fe8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_position();

  /// @brief Method get_size, addr 0x1631ff8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_size();

  static inline void setStaticF_hallwayDoorSize(::UnityEngine::Vector2Int value);

  static inline void setStaticF_lobbyDoorSize(::UnityEngine::Vector2Int value);

  /// @brief Method set_position, addr 0x1631ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2Int value);

  /// @brief Method set_size, addr 0x1632000, size 0x8, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2Int value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomDoorConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomDoorConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomDoorConfiguration(RoomDoorConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomDoorConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomDoorConfiguration(RoomDoorConfiguration const&) = delete;

  /// @brief Field <position>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____position_k__BackingField;

  /// @brief Field <size>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____size_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomDoorConfiguration, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomDoorConfiguration, ____position_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomDoorConfiguration, ____size_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomDoorConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomDoorConfiguration*, "", "RoomDoorConfiguration");
