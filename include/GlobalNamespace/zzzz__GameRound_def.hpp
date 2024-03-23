#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameRound)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class GameRound;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameRound);
// Type: ::GameRound
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameRound*
class CORDL_TYPE GameRound : public ::System::Object {
public:
  // Declarations
  /// @brief Field <endTimestamp>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__endTimestamp_k__BackingField, put = __cordl_internal_set__endTimestamp_k__BackingField))::System::DateTime _endTimestamp_k__BackingField;

  /// @brief Field <huntTimestamp>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__huntTimestamp_k__BackingField, put = __cordl_internal_set__huntTimestamp_k__BackingField))::System::DateTime _huntTimestamp_k__BackingField;

  /// @brief Field <roundNumber>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__roundNumber_k__BackingField, put = __cordl_internal_set__roundNumber_k__BackingField)) int32_t _roundNumber_k__BackingField;

  /// @brief Field <startTimestamp>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__startTimestamp_k__BackingField, put = __cordl_internal_set__startTimestamp_k__BackingField))::System::DateTime _startTimestamp_k__BackingField;

  __declspec(property(get = get_endTimestamp, put = set_endTimestamp))::System::DateTime endTimestamp;

  __declspec(property(get = get_huntTimestamp, put = set_huntTimestamp))::System::DateTime huntTimestamp;

  __declspec(property(get = get_roundNumber, put = set_roundNumber)) int32_t roundNumber;

  __declspec(property(get = get_startTimestamp, put = set_startTimestamp))::System::DateTime startTimestamp;

  /// @brief Method GetCompletionRatio, addr 0x29cbf98, size 0xd8, virtual false, abstract: false, final false
  inline float_t GetCompletionRatio();

  /// @brief Method HasHuntStarted, addr 0x29cbf04, size 0x94, virtual false, abstract: false, final false
  inline bool HasHuntStarted();

  static inline ::GlobalNamespace::GameRound* New_ctor(int32_t roundNumber, ::System::DateTime startTimestamp);

  /// @brief Method ToRoomProperties, addr 0x29cbdcc, size 0x138, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* ToRoomProperties();

  /// @brief Method ToString, addr 0x29cc070, size 0x248, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryConstruct, addr 0x29cbc00, size 0x1cc, virtual false, abstract: false, final false
  static inline bool TryConstruct(::ExitGames::Client::Photon::Hashtable* properties, ByRef<::GlobalNamespace::GameRound*> round);

  constexpr ::System::DateTime const& __cordl_internal_get__endTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__endTimestamp_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__huntTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__huntTimestamp_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__roundNumber_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__roundNumber_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__startTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__startTimestamp_k__BackingField();

  constexpr void __cordl_internal_set__endTimestamp_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__huntTimestamp_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__roundNumber_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__startTimestamp_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x29cbb98, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t roundNumber, ::System::DateTime startTimestamp);

  /// @brief Method get_endTimestamp, addr 0x29cbb88, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_endTimestamp();

  /// @brief Method get_huntTimestamp, addr 0x29cbb78, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_huntTimestamp();

  /// @brief Method get_roundNumber, addr 0x29cbb58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_roundNumber();

  /// @brief Method get_startTimestamp, addr 0x29cbb68, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_startTimestamp();

  /// @brief Method set_endTimestamp, addr 0x29cbb90, size 0x8, virtual false, abstract: false, final false
  inline void set_endTimestamp(::System::DateTime value);

  /// @brief Method set_huntTimestamp, addr 0x29cbb80, size 0x8, virtual false, abstract: false, final false
  inline void set_huntTimestamp(::System::DateTime value);

  /// @brief Method set_roundNumber, addr 0x29cbb60, size 0x8, virtual false, abstract: false, final false
  inline void set_roundNumber(int32_t value);

  /// @brief Method set_startTimestamp, addr 0x29cbb70, size 0x8, virtual false, abstract: false, final false
  inline void set_startTimestamp(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameRound();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameRound", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameRound(GameRound&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameRound", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameRound(GameRound const&) = delete;

  /// @brief Field <roundNumber>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____roundNumber_k__BackingField;

  /// @brief Field <startTimestamp>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____startTimestamp_k__BackingField;

  /// @brief Field <huntTimestamp>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____huntTimestamp_k__BackingField;

  /// @brief Field <endTimestamp>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____endTimestamp_k__BackingField;

  /// @brief Field huntDuration offset 0xffffffff size 0x4
  static constexpr float_t huntDuration{ 300.0 };

  /// @brief Field roundNumberKey offset 0xffffffff size 0x8
  static constexpr ::ConstString roundNumberKey{ u"curRoundNumber" };

  /// @brief Field roundStartTimestampKey offset 0xffffffff size 0x8
  static constexpr ::ConstString roundStartTimestampKey{ u"curRoundStartTimestamp" };

  /// @brief Field setupDuration offset 0xffffffff size 0x4
  static constexpr float_t setupDuration{ 30.0 };

  /// @brief Field totalDuration offset 0xffffffff size 0x4
  static constexpr float_t totalDuration{ 330.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameRound, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameRound, ____roundNumber_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameRound, ____startTimestamp_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameRound, ____huntTimestamp_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameRound, ____endTimestamp_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameRound);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameRound*, "", "GameRound");
