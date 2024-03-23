#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmokeCube)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SmokeCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmokeCube);
// Type: ::SmokeCube
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SmokeCube*
class CORDL_TYPE SmokeCube : public ::System::Object {
public:
  // Declarations
  /// @brief Field aliveTimer, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_aliveTimer, put = __cordl_internal_set_aliveTimer)) float_t aliveTimer;

  /// @brief Field lifetime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_lifetime, put = __cordl_internal_set_lifetime)) float_t lifetime;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  static inline ::GlobalNamespace::SmokeCube* New_ctor(::UnityEngine::Transform* transform, float_t lifetime);

  constexpr float_t const& __cordl_internal_get_aliveTimer() const;

  constexpr float_t& __cordl_internal_get_aliveTimer();

  constexpr float_t const& __cordl_internal_get_lifetime() const;

  constexpr float_t& __cordl_internal_get_lifetime();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set_aliveTimer(float_t value);

  constexpr void __cordl_internal_set_lifetime(float_t value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x29c6828, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, float_t lifetime);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmokeCube();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmokeCube", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmokeCube(SmokeCube&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmokeCube", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmokeCube(SmokeCube const&) = delete;

  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field aliveTimer, offset: 0x18, size: 0x4, def value: None
  float_t ___aliveTimer;

  /// @brief Field lifetime, offset: 0x1c, size: 0x4, def value: None
  float_t ___lifetime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmokeCube, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeCube, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeCube, ___aliveTimer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeCube, ___lifetime) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmokeCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmokeCube*, "", "SmokeCube");
