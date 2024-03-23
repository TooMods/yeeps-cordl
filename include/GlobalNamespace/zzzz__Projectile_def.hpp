#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Projectile)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Projectile;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Projectile);
// Type: ::Projectile
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Projectile*
class CORDL_TYPE Projectile : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <isMaster>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isMaster_k__BackingField, put = __cordl_internal_set__isMaster_k__BackingField)) bool _isMaster_k__BackingField;

  /// @brief Field <projectileID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__projectileID_k__BackingField, put = __cordl_internal_set__projectileID_k__BackingField))::StringW _projectileID_k__BackingField;

  /// @brief Field <rb>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rb_k__BackingField, put = __cordl_internal_set__rb_k__BackingField))::UnityW<::UnityEngine::Rigidbody> _rb_k__BackingField;

  /// @brief Field <timeSinceSpawn>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceSpawn_k__BackingField, put = __cordl_internal_set__timeSinceSpawn_k__BackingField)) float_t _timeSinceSpawn_k__BackingField;

  /// @brief Field gravityMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_gravityMultiplier, put = __cordl_internal_set_gravityMultiplier)) float_t gravityMultiplier;

  __declspec(property(get = get_isMaster, put = set_isMaster)) bool isMaster;

  /// @brief Field isScalingUp, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isScalingUp, put = __cordl_internal_set_isScalingUp)) bool isScalingUp;

  /// @brief Field lifetime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_lifetime, put = __cordl_internal_set_lifetime)) float_t lifetime;

  __declspec(property(get = get_projectileID, put = set_projectileID))::StringW projectileID;

  __declspec(property(get = get_rb, put = set_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field scaleInflateAmount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleInflateAmount, put = __cordl_internal_set_scaleInflateAmount)) float_t scaleInflateAmount;

  __declspec(property(get = get_timeSinceSpawn, put = set_timeSinceSpawn)) float_t timeSinceSpawn;

  /// @brief Method DestroySelf, addr 0x175654c, size 0x98, virtual true, abstract: false, final false
  inline void DestroySelf(::UnityEngine::Vector3 position);

  /// @brief Method FixedUpdate, addr 0x1756e9c, size 0x64, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initialize, addr 0x1755ca4, size 0xb8, virtual true, abstract: false, final false
  inline void Initialize(::StringW projectileID, bool isMaster, ::UnityEngine::Vector3 velocity);

  static inline ::GlobalNamespace::Projectile* New_ctor();

  /// @brief Method OnFixedUpdate, addr 0x1756f00, size 0x4, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnUpdate, addr 0x1756e98, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SendDestroySelf, addr 0x1756244, size 0x118, virtual false, abstract: false, final false
  inline void SendDestroySelf(::UnityEngine::Vector3 position);

  /// @brief Method SetColor, addr 0x1756f5c, size 0x40, virtual true, abstract: false, final false
  inline void SetColor(::StringW colorKey);

  /// @brief Method Update, addr 0x1756d94, size 0x104, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isMaster_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMaster_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__projectileID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__projectileID_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rb_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rb_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timeSinceSpawn_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timeSinceSpawn_k__BackingField();

  constexpr float_t const& __cordl_internal_get_gravityMultiplier() const;

  constexpr float_t& __cordl_internal_get_gravityMultiplier();

  constexpr bool const& __cordl_internal_get_isScalingUp() const;

  constexpr bool& __cordl_internal_get_isScalingUp();

  constexpr float_t const& __cordl_internal_get_lifetime() const;

  constexpr float_t& __cordl_internal_get_lifetime();

  constexpr float_t const& __cordl_internal_get_scaleInflateAmount() const;

  constexpr float_t& __cordl_internal_get_scaleInflateAmount();

  constexpr void __cordl_internal_set__isMaster_k__BackingField(bool value);

  constexpr void __cordl_internal_set__projectileID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__rb_k__BackingField(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set__timeSinceSpawn_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_gravityMultiplier(float_t value);

  constexpr void __cordl_internal_set_isScalingUp(bool value);

  constexpr void __cordl_internal_set_lifetime(float_t value);

  constexpr void __cordl_internal_set_scaleInflateAmount(float_t value);

  /// @brief Method .ctor, addr 0x1756614, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isMaster, addr 0x1756d60, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_projectileID, addr 0x1756d50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_projectileID();

  /// @brief Method get_rb, addr 0x1756d74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_rb();

  /// @brief Method get_timeSinceSpawn, addr 0x1756d84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeSinceSpawn();

  /// @brief Method set_isMaster, addr 0x1756d68, size 0xc, virtual false, abstract: false, final false
  inline void set_isMaster(bool value);

  /// @brief Method set_projectileID, addr 0x1756d58, size 0x8, virtual false, abstract: false, final false
  inline void set_projectileID(::StringW value);

  /// @brief Method set_rb, addr 0x1756d7c, size 0x8, virtual false, abstract: false, final false
  inline void set_rb(::UnityEngine::Rigidbody* value);

  /// @brief Method set_timeSinceSpawn, addr 0x1756d8c, size 0x8, virtual false, abstract: false, final false
  inline void set_timeSinceSpawn(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Projectile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Projectile(Projectile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Projectile(Projectile const&) = delete;

  /// @brief Field <projectileID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____projectileID_k__BackingField;

  /// @brief Field scaleInflateAmount, offset: 0x20, size: 0x4, def value: None
  float_t ___scaleInflateAmount;

  /// @brief Field isScalingUp, offset: 0x24, size: 0x1, def value: None
  bool ___isScalingUp;

  /// @brief Field gravityMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ___gravityMultiplier;

  /// @brief Field lifetime, offset: 0x2c, size: 0x4, def value: None
  float_t ___lifetime;

  /// @brief Field <isMaster>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isMaster_k__BackingField;

  /// @brief Field <rb>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rb_k__BackingField;

  /// @brief Field <timeSinceSpawn>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____timeSinceSpawn_k__BackingField;

  /// @brief Field scaleInflateDuration offset 0xffffffff size 0x4
  static constexpr float_t scaleInflateDuration{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Projectile, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ____projectileID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ___scaleInflateAmount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ___isScalingUp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ___gravityMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ___lifetime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ____isMaster_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ____rb_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Projectile, ____timeSinceSpawn_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Projectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Projectile*, "", "Projectile");
