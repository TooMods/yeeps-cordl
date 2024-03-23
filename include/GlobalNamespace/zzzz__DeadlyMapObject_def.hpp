#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DeadlyMapObject)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DeadlyMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeadlyMapObject);
// Type: ::DeadlyMapObject
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 233, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DeadlyMapObject*
class CORDL_TYPE DeadlyMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field killSoundKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_killSoundKey, put = __cordl_internal_set_killSoundKey))::StringW killSoundKey;

  /// @brief Field onlyKillOnUpwardCollision, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_onlyKillOnUpwardCollision, put = __cordl_internal_set_onlyKillOnUpwardCollision)) bool onlyKillOnUpwardCollision;

  /// @brief Field stabSoundKey, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_stabSoundKey, put = __cordl_internal_set_stabSoundKey))::StringW stabSoundKey;

  /// @brief Method DoCollisionMessaging, addr 0x30789ac, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  static inline ::GlobalNamespace::DeadlyMapObject* New_ctor();

  /// @brief Method OnMasterHandTouched, addr 0x3078c2c, size 0x1c, virtual false, abstract: false, final false
  inline void OnMasterHandTouched(::UnityEngine::Vector3 hitPos, ::UnityEngine::Vector3 hitNormal);

  /// @brief Method OnMasterPlayerCollided, addr 0x30789b4, size 0x278, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  constexpr ::StringW const& __cordl_internal_get_killSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_killSoundKey();

  constexpr bool const& __cordl_internal_get_onlyKillOnUpwardCollision() const;

  constexpr bool& __cordl_internal_get_onlyKillOnUpwardCollision();

  constexpr ::StringW const& __cordl_internal_get_stabSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_stabSoundKey();

  constexpr void __cordl_internal_set_killSoundKey(::StringW value);

  constexpr void __cordl_internal_set_onlyKillOnUpwardCollision(bool value);

  constexpr void __cordl_internal_set_stabSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x3078c48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeadlyMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeadlyMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeadlyMapObject(DeadlyMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeadlyMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeadlyMapObject(DeadlyMapObject const&) = delete;

  /// @brief Field killSoundKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___killSoundKey;

  /// @brief Field stabSoundKey, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___stabSoundKey;

  /// @brief Field onlyKillOnUpwardCollision, offset: 0xe8, size: 0x1, def value: None
  bool ___onlyKillOnUpwardCollision;

  /// @brief Field deadlyTag offset 0xffffffff size 0x8
  static constexpr ::ConstString deadlyTag{ u"Deadly" };

  /// @brief Field killVelocityThreshold offset 0xffffffff size 0x4
  static constexpr float_t killVelocityThreshold{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeadlyMapObject, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeadlyMapObject, ___killSoundKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeadlyMapObject, ___stabSoundKey) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeadlyMapObject, ___onlyKillOnUpwardCollision) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeadlyMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeadlyMapObject*, "", "DeadlyMapObject");
