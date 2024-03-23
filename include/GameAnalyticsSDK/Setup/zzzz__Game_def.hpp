#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Game)
// Forward declare root types
namespace GameAnalyticsSDK::Setup {
class Game;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Setup::Game);
// Type: GameAnalyticsSDK.Setup::Game
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Setup::Game*
class CORDL_TYPE Game : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GameKey, put = set_GameKey))::StringW GameKey;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_SecretKey, put = set_SecretKey))::StringW SecretKey;

  /// @brief Field <GameKey>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__GameKey_k__BackingField, put = __cordl_internal_set__GameKey_k__BackingField))::StringW _GameKey_k__BackingField;

  /// @brief Field <ID>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ID_k__BackingField, put = __cordl_internal_set__ID_k__BackingField)) int32_t _ID_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretKey_k__BackingField, put = __cordl_internal_set__SecretKey_k__BackingField))::StringW _SecretKey_k__BackingField;

  __declspec(property(get = get_ID, put = set_ID)) int32_t _cordl_ID;

  static inline ::GameAnalyticsSDK::Setup::Game* New_ctor(::StringW name, int32_t id, ::StringW gameKey, ::StringW secretKey);

  constexpr ::StringW const& __cordl_internal_get__GameKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__GameKey_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ID_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretKey_k__BackingField();

  constexpr void __cordl_internal_set__GameKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ID_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SecretKey_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1081f60, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t id, ::StringW gameKey, ::StringW secretKey);

  /// @brief Method get_GameKey, addr 0x1081f40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GameKey();

  /// @brief Method get_ID, addr 0x1081f30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_Name, addr 0x1081f20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SecretKey, addr 0x1081f50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretKey();

  /// @brief Method set_GameKey, addr 0x1081f48, size 0x8, virtual false, abstract: false, final false
  inline void set_GameKey(::StringW value);

  /// @brief Method set_ID, addr 0x1081f38, size 0x8, virtual false, abstract: false, final false
  inline void set_ID(int32_t value);

  /// @brief Method set_Name, addr 0x1081f28, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_SecretKey, addr 0x1081f58, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Game();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Game", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Game(Game&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Game", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Game(Game const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <ID>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____ID_k__BackingField;

  /// @brief Field <GameKey>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____GameKey_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____SecretKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::Game, 0x30>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Game, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Game, ____ID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Game, ____GameKey_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Game, ____SecretKey_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
NEED_NO_BOX(::GameAnalyticsSDK::Setup::Game);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::Game*, "GameAnalyticsSDK.Setup", "Game");
