#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStuffingDispenserMapObject)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class RemoteStuffingDispenserMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RemoteStuffingDispenserMapObject);
// Type: ::RemoteStuffingDispenserMapObject
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RemoteStuffingDispenserMapObject*
class CORDL_TYPE RemoteStuffingDispenserMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field amountToGive, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_amountToGive, put = __cordl_internal_set_amountToGive)) int32_t amountToGive;

  /// @brief Field bounceSize, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceSize, put = __cordl_internal_set_bounceSize)) float_t bounceSize;

  /// @brief Field bounceStartPosition, offset 0xf4, size 0xc
  __declspec(property(get = __cordl_internal_get_bounceStartPosition, put = __cordl_internal_set_bounceStartPosition))::UnityEngine::Vector3 bounceStartPosition;

  /// @brief Field bounceTimer, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceTimer, put = __cordl_internal_set_bounceTimer)) float_t bounceTimer;

  /// @brief Field dispenseSoundKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_dispenseSoundKey, put = __cordl_internal_set_dispenseSoundKey))::StringW dispenseSoundKey;

  /// @brief Field horizontalBounceSize, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_horizontalBounceSize, put = __cordl_internal_set_horizontalBounceSize)) float_t horizontalBounceSize;

  /// @brief Field inBounce, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_inBounce, put = __cordl_internal_set_inBounce)) bool inBounce;

  /// @brief Field nextDispenseTime, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_nextDispenseTime, put = __cordl_internal_set_nextDispenseTime)) float_t nextDispenseTime;

  /// @brief Field timeBetweenDispenses, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenDispenses, put = __cordl_internal_set_timeBetweenDispenses)) float_t timeBetweenDispenses;

  /// @brief Method AllowsBatching, addr 0x30819ac, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method Initialize, addr 0x3081960, size 0x4c, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::RemoteStuffingDispenserMapObject* New_ctor();

  /// @brief Method Update, addr 0x30819b4, size 0x30c, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_amountToGive() const;

  constexpr int32_t& __cordl_internal_get_amountToGive();

  constexpr float_t const& __cordl_internal_get_bounceSize() const;

  constexpr float_t& __cordl_internal_get_bounceSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bounceStartPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bounceStartPosition();

  constexpr float_t const& __cordl_internal_get_bounceTimer() const;

  constexpr float_t& __cordl_internal_get_bounceTimer();

  constexpr ::StringW const& __cordl_internal_get_dispenseSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_dispenseSoundKey();

  constexpr float_t const& __cordl_internal_get_horizontalBounceSize() const;

  constexpr float_t& __cordl_internal_get_horizontalBounceSize();

  constexpr bool const& __cordl_internal_get_inBounce() const;

  constexpr bool& __cordl_internal_get_inBounce();

  constexpr float_t const& __cordl_internal_get_nextDispenseTime() const;

  constexpr float_t& __cordl_internal_get_nextDispenseTime();

  constexpr float_t const& __cordl_internal_get_timeBetweenDispenses() const;

  constexpr float_t& __cordl_internal_get_timeBetweenDispenses();

  constexpr void __cordl_internal_set_amountToGive(int32_t value);

  constexpr void __cordl_internal_set_bounceSize(float_t value);

  constexpr void __cordl_internal_set_bounceStartPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bounceTimer(float_t value);

  constexpr void __cordl_internal_set_dispenseSoundKey(::StringW value);

  constexpr void __cordl_internal_set_horizontalBounceSize(float_t value);

  constexpr void __cordl_internal_set_inBounce(bool value);

  constexpr void __cordl_internal_set_nextDispenseTime(float_t value);

  constexpr void __cordl_internal_set_timeBetweenDispenses(float_t value);

  /// @brief Method .ctor, addr 0x3081cc0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteStuffingDispenserMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteStuffingDispenserMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteStuffingDispenserMapObject(RemoteStuffingDispenserMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteStuffingDispenserMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteStuffingDispenserMapObject(RemoteStuffingDispenserMapObject const&) = delete;

  /// @brief Field timeBetweenDispenses, offset: 0xd8, size: 0x4, def value: None
  float_t ___timeBetweenDispenses;

  /// @brief Field amountToGive, offset: 0xdc, size: 0x4, def value: None
  int32_t ___amountToGive;

  /// @brief Field bounceSize, offset: 0xe0, size: 0x4, def value: None
  float_t ___bounceSize;

  /// @brief Field horizontalBounceSize, offset: 0xe4, size: 0x4, def value: None
  float_t ___horizontalBounceSize;

  /// @brief Field dispenseSoundKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___dispenseSoundKey;

  /// @brief Field nextDispenseTime, offset: 0xf0, size: 0x4, def value: None
  float_t ___nextDispenseTime;

  /// @brief Field bounceStartPosition, offset: 0xf4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bounceStartPosition;

  /// @brief Field inBounce, offset: 0x100, size: 0x1, def value: None
  bool ___inBounce;

  /// @brief Field bounceTimer, offset: 0x104, size: 0x4, def value: None
  float_t ___bounceTimer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RemoteStuffingDispenserMapObject, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___timeBetweenDispenses) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___amountToGive) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___bounceSize) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___horizontalBounceSize) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___dispenseSoundKey) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___nextDispenseTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___bounceStartPosition) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___inBounce) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteStuffingDispenserMapObject, ___bounceTimer) == 0x104, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RemoteStuffingDispenserMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteStuffingDispenserMapObject*, "", "RemoteStuffingDispenserMapObject");
