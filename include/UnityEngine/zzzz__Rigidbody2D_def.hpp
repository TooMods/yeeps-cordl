#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody2D)
namespace UnityEngine {
struct ForceMode2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody2D);
// Type: UnityEngine::Rigidbody2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Rigidbody2D*
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_angularVelocity, put = set_angularVelocity)) float_t angularVelocity;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector2 velocity;

  /// @brief Method AddForce, addr 0x22349d0, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector2 force);

  /// @brief Method AddForce, addr 0x22349d8, size 0x58, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector2 force, ::UnityEngine::ForceMode2D mode);

  /// @brief Method AddForce_Injected, addr 0x2234a30, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector2> force, ::UnityEngine::ForceMode2D mode);

  /// @brief Method get_angularVelocity, addr 0x2234948, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularVelocity();

  /// @brief Method get_position, addr 0x2234688, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_position_Injected, addr 0x22346d4, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_rotation, addr 0x22347a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method get_velocity, addr 0x223482c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x2234878, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_angularVelocity, addr 0x2234984, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularVelocity(float_t value);

  /// @brief Method set_position, addr 0x2234718, size 0x48, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_position_Injected, addr 0x2234760, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_rotation, addr 0x22347e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

  /// @brief Method set_velocity, addr 0x22348bc, size 0x48, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector2 value);

  /// @brief Method set_velocity_Injected, addr 0x2234904, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector2> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody2D(Rigidbody2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody2D(Rigidbody2D const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody2D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
