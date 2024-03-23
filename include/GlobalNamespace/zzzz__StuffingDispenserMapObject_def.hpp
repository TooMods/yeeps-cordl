#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StuffingDispenserMapObject)
namespace GlobalNamespace {
class StuffingDispenser;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class StuffingDispenserMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StuffingDispenserMapObject);
// Type: ::StuffingDispenserMapObject
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingDispenserMapObject*
class CORDL_TYPE StuffingDispenserMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field activeSides, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_activeSides, put = __cordl_internal_set_activeSides))::ArrayW<bool, ::Array<bool>*> activeSides;

  /// @brief Field amountToGive, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_amountToGive, put = __cordl_internal_set_amountToGive)) int32_t amountToGive;

  /// @brief Field baseActiveSoundEffect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_baseActiveSoundEffect, put = __cordl_internal_set_baseActiveSoundEffect))::UnityW<::UnityEngine::AudioSource> baseActiveSoundEffect;

  /// @brief Field baseActiveSoundKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_baseActiveSoundKey, put = __cordl_internal_set_baseActiveSoundKey))::StringW baseActiveSoundKey;

  /// @brief Field dispensers, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_dispensers,
                      put = __cordl_internal_set_dispensers))::ArrayW<::UnityW<::GlobalNamespace::StuffingDispenser>, ::Array<::UnityW<::GlobalNamespace::StuffingDispenser>>*> dispensers;

  __declspec(property(get = get_isMachineActive)) bool isMachineActive;

  __declspec(property(get = get_isStuffingActive)) bool isStuffingActive;

  /// @brief Field pumpStopSoundKey, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_pumpStopSoundKey, put = __cordl_internal_set_pumpStopSoundKey))::StringW pumpStopSoundKey;

  /// @brief Field riserStuffingSoundEffects, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_riserStuffingSoundEffects,
                      put = __cordl_internal_set_riserStuffingSoundEffects))::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> riserStuffingSoundEffects;

  /// @brief Field riserStuffingSoundKey, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_riserStuffingSoundKey, put = __cordl_internal_set_riserStuffingSoundKey))::StringW riserStuffingSoundKey;

  /// @brief Field startSoundKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_startSoundKey, put = __cordl_internal_set_startSoundKey))::StringW startSoundKey;

  /// @brief Field stopSoundKey, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_stopSoundKey, put = __cordl_internal_set_stopSoundKey))::StringW stopSoundKey;

  /// @brief Field stuffingActiveSoundEffect, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingActiveSoundEffect, put = __cordl_internal_set_stuffingActiveSoundEffect))::UnityW<::UnityEngine::AudioSource> stuffingActiveSoundEffect;

  /// @brief Field stuffingActiveSoundKey, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingActiveSoundKey, put = __cordl_internal_set_stuffingActiveSoundKey))::StringW stuffingActiveSoundKey;

  /// @brief Field stuffingDingSoundKey, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingDingSoundKey, put = __cordl_internal_set_stuffingDingSoundKey))::StringW stuffingDingSoundKey;

  __declspec(property(get = get_stuffingPerSecond)) float_t stuffingPerSecond;

  /// @brief Field stuffingSides, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingSides, put = __cordl_internal_set_stuffingSides))::ArrayW<bool, ::Array<bool>*> stuffingSides;

  /// @brief Field stuffingStopSoundKey, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingStopSoundKey, put = __cordl_internal_set_stuffingStopSoundKey))::StringW stuffingStopSoundKey;

  /// @brief Field timeBetweenDispenses, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenDispenses, put = __cordl_internal_set_timeBetweenDispenses)) float_t timeBetweenDispenses;

  /// @brief Field undergroundActiveSoundEffect, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_undergroundActiveSoundEffect,
                      put = __cordl_internal_set_undergroundActiveSoundEffect))::UnityW<::UnityEngine::AudioSource> undergroundActiveSoundEffect;

  /// @brief Field undergroundActiveSoundKey, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_undergroundActiveSoundKey, put = __cordl_internal_set_undergroundActiveSoundKey))::StringW undergroundActiveSoundKey;

  /// @brief Method Awake, addr 0x30828d8, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::StuffingDispenserMapObject* New_ctor();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3082c4c, size 0x238, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method OnReceiveStartMachine, addr 0x3082e84, size 0x1e0, virtual false, abstract: false, final false
  inline void OnReceiveStartMachine(int32_t sideIndex, bool isMasterPlayer);

  /// @brief Method OnReceiveStartStuffing, addr 0x30833f8, size 0x1a8, virtual false, abstract: false, final false
  inline void OnReceiveStartStuffing(int32_t sideIndex, bool isMasterPlayer, float_t timeOffset);

  /// @brief Method OnReceiveStopMachine, addr 0x3083064, size 0x394, virtual false, abstract: false, final false
  inline void OnReceiveStopMachine(int32_t sideIndex, bool isMasterPlayer, bool shouldDing);

  /// @brief Method OnReceiveStopStuffing, addr 0x30835a0, size 0x1f8, virtual false, abstract: false, final false
  inline void OnReceiveStopStuffing(int32_t sideIndex, bool isMasterPlayer);

  /// @brief Method SendStartMachine, addr 0x30829ac, size 0x70, virtual false, abstract: false, final false
  inline void SendStartMachine(int32_t sideIndex);

  /// @brief Method SendStartStuffing, addr 0x3082af4, size 0xe8, virtual false, abstract: false, final false
  inline void SendStartStuffing(int32_t sideIndex);

  /// @brief Method SendStopMachine, addr 0x3082a1c, size 0xd8, virtual false, abstract: false, final false
  inline void SendStopMachine(int32_t sideIndex);

  /// @brief Method SendStopStuffing, addr 0x3082bdc, size 0x70, virtual false, abstract: false, final false
  inline void SendStopStuffing(int32_t sideIndex);

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_activeSides() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_activeSides();

  constexpr int32_t const& __cordl_internal_get_amountToGive() const;

  constexpr int32_t& __cordl_internal_get_amountToGive();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_baseActiveSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_baseActiveSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_baseActiveSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_baseActiveSoundKey();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::StuffingDispenser>, ::Array<::UnityW<::GlobalNamespace::StuffingDispenser>>*> const& __cordl_internal_get_dispensers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::StuffingDispenser>, ::Array<::UnityW<::GlobalNamespace::StuffingDispenser>>*>& __cordl_internal_get_dispensers();

  constexpr ::StringW const& __cordl_internal_get_pumpStopSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_pumpStopSoundKey();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> const& __cordl_internal_get_riserStuffingSoundEffects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*>& __cordl_internal_get_riserStuffingSoundEffects();

  constexpr ::StringW const& __cordl_internal_get_riserStuffingSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_riserStuffingSoundKey();

  constexpr ::StringW const& __cordl_internal_get_startSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_startSoundKey();

  constexpr ::StringW const& __cordl_internal_get_stopSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_stopSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_stuffingActiveSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_stuffingActiveSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_stuffingActiveSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_stuffingActiveSoundKey();

  constexpr ::StringW const& __cordl_internal_get_stuffingDingSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_stuffingDingSoundKey();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_stuffingSides() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_stuffingSides();

  constexpr ::StringW const& __cordl_internal_get_stuffingStopSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_stuffingStopSoundKey();

  constexpr float_t const& __cordl_internal_get_timeBetweenDispenses() const;

  constexpr float_t& __cordl_internal_get_timeBetweenDispenses();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_undergroundActiveSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_undergroundActiveSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_undergroundActiveSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_undergroundActiveSoundKey();

  constexpr void __cordl_internal_set_activeSides(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_amountToGive(int32_t value);

  constexpr void __cordl_internal_set_baseActiveSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_baseActiveSoundKey(::StringW value);

  constexpr void __cordl_internal_set_dispensers(::ArrayW<::UnityW<::GlobalNamespace::StuffingDispenser>, ::Array<::UnityW<::GlobalNamespace::StuffingDispenser>>*> value);

  constexpr void __cordl_internal_set_pumpStopSoundKey(::StringW value);

  constexpr void __cordl_internal_set_riserStuffingSoundEffects(::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> value);

  constexpr void __cordl_internal_set_riserStuffingSoundKey(::StringW value);

  constexpr void __cordl_internal_set_startSoundKey(::StringW value);

  constexpr void __cordl_internal_set_stopSoundKey(::StringW value);

  constexpr void __cordl_internal_set_stuffingActiveSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_stuffingActiveSoundKey(::StringW value);

  constexpr void __cordl_internal_set_stuffingDingSoundKey(::StringW value);

  constexpr void __cordl_internal_set_stuffingSides(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_stuffingStopSoundKey(::StringW value);

  constexpr void __cordl_internal_set_timeBetweenDispenses(float_t value);

  constexpr void __cordl_internal_set_undergroundActiveSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_undergroundActiveSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x3083798, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isMachineActive, addr 0x3082848, size 0x48, virtual false, abstract: false, final false
  inline bool get_isMachineActive();

  /// @brief Method get_isStuffingActive, addr 0x3082890, size 0x48, virtual false, abstract: false, final false
  inline bool get_isStuffingActive();

  /// @brief Method get_stuffingPerSecond, addr 0x3082838, size 0x10, virtual false, abstract: false, final false
  inline float_t get_stuffingPerSecond();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StuffingDispenserMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StuffingDispenserMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StuffingDispenserMapObject(StuffingDispenserMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StuffingDispenserMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StuffingDispenserMapObject(StuffingDispenserMapObject const&) = delete;

  /// @brief Field timeBetweenDispenses, offset: 0xd8, size: 0x4, def value: None
  float_t ___timeBetweenDispenses;

  /// @brief Field amountToGive, offset: 0xdc, size: 0x4, def value: None
  int32_t ___amountToGive;

  /// @brief Field dispensers, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::StuffingDispenser>, ::Array<::UnityW<::GlobalNamespace::StuffingDispenser>>*> ___dispensers;

  /// @brief Field startSoundKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___startSoundKey;

  /// @brief Field stopSoundKey, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___stopSoundKey;

  /// @brief Field baseActiveSoundKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___baseActiveSoundKey;

  /// @brief Field baseActiveSoundEffect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___baseActiveSoundEffect;

  /// @brief Field undergroundActiveSoundKey, offset: 0x108, size: 0x8, def value: None
  ::StringW ___undergroundActiveSoundKey;

  /// @brief Field undergroundActiveSoundEffect, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___undergroundActiveSoundEffect;

  /// @brief Field pumpStopSoundKey, offset: 0x118, size: 0x8, def value: None
  ::StringW ___pumpStopSoundKey;

  /// @brief Field stuffingActiveSoundKey, offset: 0x120, size: 0x8, def value: None
  ::StringW ___stuffingActiveSoundKey;

  /// @brief Field stuffingActiveSoundEffect, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___stuffingActiveSoundEffect;

  /// @brief Field stuffingStopSoundKey, offset: 0x130, size: 0x8, def value: None
  ::StringW ___stuffingStopSoundKey;

  /// @brief Field stuffingDingSoundKey, offset: 0x138, size: 0x8, def value: None
  ::StringW ___stuffingDingSoundKey;

  /// @brief Field riserStuffingSoundKey, offset: 0x140, size: 0x8, def value: None
  ::StringW ___riserStuffingSoundKey;

  /// @brief Field activeSides, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___activeSides;

  /// @brief Field stuffingSides, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___stuffingSides;

  /// @brief Field riserStuffingSoundEffects, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> ___riserStuffingSoundEffects;

  /// @brief Field PARAMETER_SEPARATOR offset 0xffffffff size 0x2
  static constexpr char16_t PARAMETER_SEPARATOR{ u'/' };

  /// @brief Field RISER_DURATION offset 0xffffffff size 0x4
  static constexpr float_t RISER_DURATION{ 3.5 };

  /// @brief Field START_MACHINE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString START_MACHINE_KEY{ u"startMachine" };

  /// @brief Field START_STUFFING_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString START_STUFFING_KEY{ u"startStuffing" };

  /// @brief Field STOP_MACHINE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STOP_MACHINE_KEY{ u"stopMachine" };

  /// @brief Field STOP_STUFFING_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STOP_STUFFING_KEY{ u"stopStuffing" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StuffingDispenserMapObject, 0x160>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___timeBetweenDispenses) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___amountToGive) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___dispensers) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___startSoundKey) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stopSoundKey) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___baseActiveSoundKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___baseActiveSoundEffect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___undergroundActiveSoundKey) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___undergroundActiveSoundEffect) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___pumpStopSoundKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stuffingActiveSoundKey) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stuffingActiveSoundEffect) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stuffingStopSoundKey) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stuffingDingSoundKey) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___riserStuffingSoundKey) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___activeSides) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___stuffingSides) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenserMapObject, ___riserStuffingSoundEffects) == 0x158, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StuffingDispenserMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StuffingDispenserMapObject*, "", "StuffingDispenserMapObject");
