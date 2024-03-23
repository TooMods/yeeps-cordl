#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __Random__State;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
namespace UnityEngine {
struct __Random__State;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Random);
MARK_VAL_T(::UnityEngine::__Random__State);
// Type: ::State
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Random::State
struct CORDL_TYPE __Random__State {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Random__State();

  // Ctor Parameters [CppParam { name: "s0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s2", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Random__State(int32_t s0, int32_t s1, int32_t s2, int32_t s3) noexcept;

  /// @brief Field s0, offset: 0x0, size: 0x4, def value: None
  int32_t s0;

  /// @brief Field s1, offset: 0x4, size: 0x4, def value: None
  int32_t s1;

  /// @brief Field s2, offset: 0x8, size: 0x4, def value: None
  int32_t s2;

  /// @brief Field s3, offset: 0xc, size: 0x4, def value: None
  int32_t s3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Random__State, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Random__State, s0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Random__State, s1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Random__State, s2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Random__State, s3) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Random
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Random*
class CORDL_TYPE Random : public ::System::Object {
public:
  // Declarations
  using State = ::UnityEngine::__Random__State;

  /// @brief Method GetRandomUnitCircle, addr 0x27fb754, size 0x3c, virtual false, abstract: false, final false
  static inline void GetRandomUnitCircle(ByRef<::UnityEngine::Vector2> output);

  /// @brief Method InitState, addr 0x27fb4a4, size 0x3c, virtual false, abstract: false, final false
  static inline void InitState(int32_t seed);

  /// @brief Method RandomRangeInt, addr 0x27fb660, size 0x44, virtual false, abstract: false, final false
  static inline int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method Range, addr 0x27fb5dc, size 0x40, virtual false, abstract: false, final false
  static inline float_t Range(float_t minInclusive, float_t maxInclusive);

  /// @brief Method Range, addr 0x27fb61c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t Range(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method get_insideUnitCircle, addr 0x27fb790, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_insideUnitCircle();

  /// @brief Method get_insideUnitSphere, addr 0x27fb6cc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_insideUnitSphere();

  /// @brief Method get_insideUnitSphere_Injected, addr 0x27fb718, size 0x3c, virtual false, abstract: false, final false
  static inline void get_insideUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x27fb7d4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x27fb81c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_state, addr 0x27fb4e0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::__Random__State get_state();

  /// @brief Method get_state_Injected, addr 0x27fb524, size 0x3c, virtual false, abstract: false, final false
  static inline void get_state_Injected(ByRef<::UnityEngine::__Random__State> ret);

  /// @brief Method get_value, addr 0x27fb6a4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_value();

  /// @brief Method set_state, addr 0x27fb560, size 0x40, virtual false, abstract: false, final false
  static inline void set_state(::UnityEngine::__Random__State value);

  /// @brief Method set_state_Injected, addr 0x27fb5a0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_state_Injected(ByRef<::UnityEngine::__Random__State> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Random(Random&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Random(Random const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Random, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random*, "UnityEngine", "Random");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Random__State, "UnityEngine", "Random/State");
