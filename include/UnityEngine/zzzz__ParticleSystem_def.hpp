#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__Burst;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__Burst;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Burst);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmissionModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmitParams);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MainModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxCurve);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Particle);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ShapeModule);
// Type: ::MainModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::MainModule
struct CORDL_TYPE __ParticleSystem__MainModule {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  __declspec(property(get = get_startLifetime, put = set_startLifetime))::UnityEngine::__ParticleSystem__MinMaxCurve startLifetime;

  __declspec(property(get = get_startSize, put = set_startSize))::UnityEngine::__ParticleSystem__MinMaxCurve startSize;

  __declspec(property(put = set_startSpeed))::UnityEngine::__ParticleSystem__MinMaxCurve startSpeed;

  /// @brief Method .ctor, addr 0x2a28880, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_duration, addr 0x2a28a84, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_duration_Injected, addr 0x2a28ac0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_duration_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_maxParticles, addr 0x2a28ddc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method get_maxParticles_Injected, addr 0x2a28e18, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startLifetime, addr 0x2a28afc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MinMaxCurve get_startLifetime();

  /// @brief Method get_startLifetime_Injected, addr 0x2a28b5c, size 0x44, virtual false, abstract: false, final false
  static inline void get_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> ret);

  /// @brief Method get_startSize, addr 0x2a28cb0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MinMaxCurve get_startSize();

  /// @brief Method get_startSize_Injected, addr 0x2a28d10, size 0x44, virtual false, abstract: false, final false
  static inline void get_startSize_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> ret);

  /// @brief Method set_maxParticles, addr 0x2a28e54, size 0x44, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method set_maxParticles_Injected, addr 0x2a28e98, size 0x44, virtual false, abstract: false, final false
  static inline void set_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, int32_t value);

  /// @brief Method set_startLifetime, addr 0x2a28ba0, size 0x44, virtual false, abstract: false, final false
  inline void set_startLifetime(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startLifetime_Injected, addr 0x2a28be4, size 0x44, virtual false, abstract: false, final false
  static inline void set_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  /// @brief Method set_startSize, addr 0x2a28d54, size 0x44, virtual false, abstract: false, final false
  inline void set_startSize(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startSize_Injected, addr 0x2a28d98, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSize_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  /// @brief Method set_startSpeed, addr 0x2a28c28, size 0x44, virtual false, abstract: false, final false
  inline void set_startSpeed(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startSpeed_Injected, addr 0x2a28c6c, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MainModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__MainModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MainModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::EmissionModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::EmissionModule
struct CORDL_TYPE __ParticleSystem__EmissionModule {
public:
  // Declarations
  /// @brief Method GetBurst, addr 0x2a28f84, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__Burst GetBurst(int32_t index);

  /// @brief Method GetBurst_Injected, addr 0x2a2900c, size 0x54, virtual false, abstract: false, final false
  static inline void GetBurst_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, int32_t index, ByRef<::UnityEngine::__ParticleSystem__Burst> ret);

  /// @brief Method SetBurst, addr 0x2a28edc, size 0x54, virtual false, abstract: false, final false
  inline void SetBurst(int32_t index, ::UnityEngine::__ParticleSystem__Burst burst);

  /// @brief Method SetBurst_Injected, addr 0x2a28f30, size 0x54, virtual false, abstract: false, final false
  static inline void SetBurst_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, int32_t index, ByRef<::UnityEngine::__ParticleSystem__Burst> burst);

  /// @brief Method .ctor, addr 0x2a2888c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmissionModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmissionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmissionModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmissionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ShapeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ShapeModule
struct CORDL_TYPE __ParticleSystem__ShapeModule {
public:
  // Declarations
  __declspec(property(get = get_scale, put = set_scale))::UnityEngine::Vector3 scale;

  /// @brief Method .ctor, addr 0x2a28898, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_scale, addr 0x2a29060, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_scale();

  /// @brief Method get_scale_Injected, addr 0x2a290bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_scale_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_scale, addr 0x2a29100, size 0x54, virtual false, abstract: false, final false
  inline void set_scale(::UnityEngine::Vector3 value);

  /// @brief Method set_scale_Injected, addr 0x2a29154, size 0x44, virtual false, abstract: false, final false
  static inline void set_scale_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ShapeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ShapeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ShapeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ShapeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::MinMaxCurve
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::MinMaxCurve
struct CORDL_TYPE __ParticleSystem__MinMaxCurve {
public:
  // Declarations
  __declspec(property(get = get_constantMax)) float_t constantMax;

  __declspec(property(get = get_constantMin)) float_t constantMin;

  /// @brief Method .ctor, addr 0x2a291f8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t constant);

  /// @brief Method .ctor, addr 0x2a2920c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t min, float_t max);

  /// @brief Method get_constantMax, addr 0x2a291f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_constantMax();

  /// @brief Method get_constantMin, addr 0x2a29228, size 0x8, virtual false, abstract: false, final false
  inline float_t get_constantMin();

  /// @brief Method op_Implicit, addr 0x2a291c0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ParticleSystem__MinMaxCurve op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve(float_t constant);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MinMaxCurve();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*",
  // modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr __ParticleSystem__MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::UnityEngine::AnimationCurve* m_CurveMin,
                                          ::UnityEngine::AnimationCurve* m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept;

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::ParticleSystemCurveMode m_Mode;

  /// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
  float_t m_CurveMultiplier;

  /// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* m_CurveMin;

  /// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* m_CurveMax;

  /// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
  float_t m_ConstantMin;

  /// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
  float_t m_ConstantMax;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MinMaxCurve, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_ConstantMax) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Burst
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::Burst
struct CORDL_TYPE __ParticleSystem__Burst {
public:
  // Declarations
  __declspec(property(get = get_maxCount)) int16_t maxCount;

  /// @brief Method .ctor, addr 0x2a29198, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t _time, int16_t _count);

  /// @brief Method get_maxCount, addr 0x2a291d4, size 0x1c, virtual false, abstract: false, final false
  inline int16_t get_maxCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__Burst();

  // Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "::UnityEngine::__ParticleSystem__MinMaxCurve", modifiers: "",
  // def_value: None }, CppParam { name: "m_RepeatCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RepeatInterval", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_InvProbability", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__Burst(float_t m_Time, ::UnityEngine::__ParticleSystem__MinMaxCurve m_Count, int32_t m_RepeatCount, float_t m_RepeatInterval, float_t m_InvProbability) noexcept;

  /// @brief Field m_Time, offset: 0x0, size: 0x4, def value: None
  float_t m_Time;

  /// @brief Field m_Count, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::__ParticleSystem__MinMaxCurve m_Count;

  /// @brief Field m_RepeatCount, offset: 0x28, size: 0x4, def value: None
  int32_t m_RepeatCount;

  /// @brief Field m_RepeatInterval, offset: 0x2c, size: 0x4, def value: None
  float_t m_RepeatInterval;

  /// @brief Field m_InvProbability, offset: 0x30, size: 0x4, def value: None
  float_t m_InvProbability;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__Burst, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Burst, m_Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Burst, m_Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Burst, m_RepeatCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Burst, m_RepeatInterval) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Burst, m_InvProbability) == 0x30, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Particle
// SizeInfo { instance_size: 132, native_size: 132, calculated_instance_size: 132, calculated_native_size: 148, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::Particle
struct CORDL_TYPE __ParticleSystem__Particle {
public:
  // Declarations
  __declspec(property(put = set_angularVelocity3D))::UnityEngine::Vector3 angularVelocity3D;

  __declspec(property(put = set_lifetime)) float_t lifetime;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(put = set_remainingLifetime)) float_t remainingLifetime;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor))::UnityEngine::Color32 startColor;

  __declspec(property(put = set_startLifetime)) float_t startLifetime;

  __declspec(property(put = set_startSize)) float_t startSize;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method get_position, addr 0x2a29230, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_velocity, addr 0x2a2923c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method set_angularVelocity3D, addr 0x2a28a04, size 0x2c, virtual false, abstract: false, final false
  inline void set_angularVelocity3D(::UnityEngine::Vector3 value);

  /// @brief Method set_lifetime, addr 0x2a289bc, size 0x8, virtual false, abstract: false, final false
  inline void set_lifetime(float_t value);

  /// @brief Method set_position, addr 0x2a289a4, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_randomSeed, addr 0x2a28a38, size 0x8, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_remainingLifetime, addr 0x2a29248, size 0x8, virtual false, abstract: false, final false
  inline void set_remainingLifetime(float_t value);

  /// @brief Method set_rotation3D, addr 0x2a289d8, size 0x2c, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x2a28a30, size 0x8, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  /// @brief Method set_startLifetime, addr 0x2a289c4, size 0x8, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startSize, addr 0x2a289cc, size 0xc, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_velocity, addr 0x2a289b0, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__Particle();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__Particle(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AnimatedVelocity, ::UnityEngine::Vector3 m_InitialVelocity,
                                       ::UnityEngine::Vector3 m_AxisOfRotation, ::UnityEngine::Vector3 m_Rotation, ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_StartSize,
                                       ::UnityEngine::Color32 m_StartColor, uint32_t m_RandomSeed, uint32_t m_ParentRandomSeed, float_t m_Lifetime, float_t m_StartLifetime, int32_t m_MeshIndex,
                                       float_t m_EmitAccumulator0, float_t m_EmitAccumulator1, uint32_t m_Flags) noexcept;

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Velocity, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Velocity;

  /// @brief Field m_AnimatedVelocity, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AnimatedVelocity;

  /// @brief Field m_InitialVelocity, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_InitialVelocity;

  /// @brief Field m_AxisOfRotation, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AxisOfRotation;

  /// @brief Field m_Rotation, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Rotation;

  /// @brief Field m_AngularVelocity, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AngularVelocity;

  /// @brief Field m_StartSize, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_StartSize;

  /// @brief Field m_StartColor, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Color32 m_StartColor;

  /// @brief Field m_RandomSeed, offset: 0x64, size: 0x4, def value: None
  uint32_t m_RandomSeed;

  /// @brief Field m_ParentRandomSeed, offset: 0x68, size: 0x4, def value: None
  uint32_t m_ParentRandomSeed;

  /// @brief Field m_Lifetime, offset: 0x6c, size: 0x4, def value: None
  float_t m_Lifetime;

  /// @brief Field m_StartLifetime, offset: 0x70, size: 0x4, def value: None
  float_t m_StartLifetime;

  /// @brief Field m_MeshIndex, offset: 0x74, size: 0x4, def value: None
  int32_t m_MeshIndex;

  /// @brief Field m_EmitAccumulator0, offset: 0x78, size: 0x4, def value: None
  float_t m_EmitAccumulator0;

  /// @brief Field m_EmitAccumulator1, offset: 0x7c, size: 0x4, def value: None
  float_t m_EmitAccumulator1;

  /// @brief Field m_Flags, offset: 0x80, size: 0x4, def value: None
  uint32_t m_Flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__Particle, 0x84>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Flags) == 0x80, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::EmitParams
// SizeInfo { instance_size: 144, native_size: 176, calculated_instance_size: 144, calculated_native_size: 159, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::EmitParams
struct CORDL_TYPE __ParticleSystem__EmitParams {
public:
  // Declarations
  __declspec(property(put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startLifetime)) float_t startLifetime;

  __declspec(property(put = set_startSize)) float_t startSize;

  /// @brief Method set_position, addr 0x2a29250, size 0x14, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation3D, addr 0x2a29288, size 0x34, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startLifetime, addr 0x2a29264, size 0x10, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startSize, addr 0x2a29274, size 0x14, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmitParams();

  // Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::__ParticleSystem__Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmitParams(::UnityEngine::__ParticleSystem__Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet, bool m_RotationSet,
                                         bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet,
                                         bool m_ApplyShapeToPosition) noexcept;

  /// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
  ::UnityEngine::__ParticleSystem__Particle m_Particle;

  /// @brief Field m_PositionSet, offset: 0x84, size: 0x1, def value: None
  bool m_PositionSet;

  /// @brief Field m_VelocitySet, offset: 0x85, size: 0x1, def value: None
  bool m_VelocitySet;

  /// @brief Field m_AxisOfRotationSet, offset: 0x86, size: 0x1, def value: None
  bool m_AxisOfRotationSet;

  /// @brief Field m_RotationSet, offset: 0x87, size: 0x1, def value: None
  bool m_RotationSet;

  /// @brief Field m_AngularVelocitySet, offset: 0x88, size: 0x1, def value: None
  bool m_AngularVelocitySet;

  /// @brief Field m_StartSizeSet, offset: 0x89, size: 0x1, def value: None
  bool m_StartSizeSet;

  /// @brief Field m_StartColorSet, offset: 0x8a, size: 0x1, def value: None
  bool m_StartColorSet;

  /// @brief Field m_RandomSeedSet, offset: 0x8b, size: 0x1, def value: None
  bool m_RandomSeedSet;

  /// @brief Field m_StartLifetimeSet, offset: 0x8c, size: 0x1, def value: None
  bool m_StartLifetimeSet;

  /// @brief Field m_MeshIndexSet, offset: 0x8d, size: 0x1, def value: None
  bool m_MeshIndexSet;

  /// @brief Field m_ApplyShapeToPosition, offset: 0x8e, size: 0x1, def value: None
  bool m_ApplyShapeToPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmitParams, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ParticleSystem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ParticleSystem*
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
  // Declarations
  using Burst = ::UnityEngine::__ParticleSystem__Burst;

  using EmissionModule = ::UnityEngine::__ParticleSystem__EmissionModule;

  using EmitParams = ::UnityEngine::__ParticleSystem__EmitParams;

  using MainModule = ::UnityEngine::__ParticleSystem__MainModule;

  using MinMaxCurve = ::UnityEngine::__ParticleSystem__MinMaxCurve;

  using Particle = ::UnityEngine::__ParticleSystem__Particle;

  using ShapeModule = ::UnityEngine::__ParticleSystem__ShapeModule;

  __declspec(property(get = get_emission))::UnityEngine::__ParticleSystem__EmissionModule emission;

  __declspec(property(get = get_main))::UnityEngine::__ParticleSystem__MainModule main;

  __declspec(property(get = get_shape))::UnityEngine::__ParticleSystem__ShapeModule shape;

  /// @brief Method Clear, addr 0x2a286c8, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x2a28684, size 0x44, virtual false, abstract: false, final false
  inline void Clear(bool withChildren);

  /// @brief Method Emit, addr 0x2a28708, size 0x44, virtual false, abstract: false, final false
  inline void Emit(int32_t count);

  /// @brief Method Emit, addr 0x2a28790, size 0x54, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__EmitParams emitParams, int32_t count);

  /// @brief Method Emit, addr 0x2a28a40, size 0x44, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__Particle particle);

  /// @brief Method Emit, addr 0x2a288a0, size 0x104, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color);

  /// @brief Method EmitOld_Internal, addr 0x2a28838, size 0x44, virtual false, abstract: false, final false
  inline void EmitOld_Internal(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method Emit_Injected, addr 0x2a287e4, size 0x54, virtual false, abstract: false, final false
  inline void Emit_Injected(ByRef<::UnityEngine::__ParticleSystem__EmitParams> emitParams, int32_t count);

  /// @brief Method Emit_Internal, addr 0x2a2874c, size 0x44, virtual false, abstract: false, final false
  inline void Emit_Internal(int32_t count);

  /// @brief Method GetParticles, addr 0x2a284d4, size 0x4c, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles);

  /// @brief Method GetParticles, addr 0x2a2847c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x2a28420, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method Play, addr 0x2a28564, size 0x40, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x2a28520, size 0x44, virtual false, abstract: false, final false
  inline void Play(bool withChildren);

  /// @brief Method SetParticles, addr 0x2a283c8, size 0x58, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method SetParticles, addr 0x2a2836c, size 0x5c, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method Stop, addr 0x2a28640, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x2a285f8, size 0x48, virtual false, abstract: false, final false
  inline void Stop(bool withChildren);

  /// @brief Method Stop, addr 0x2a285a4, size 0x54, virtual false, abstract: false, final false
  inline void Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior);

  /// @brief Method get_emission, addr 0x2a28888, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__EmissionModule get_emission();

  /// @brief Method get_main, addr 0x2a2887c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MainModule get_main();

  /// @brief Method get_shape, addr 0x2a28894, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ShapeModule get_shape();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystem(ParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystem(ParticleSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Burst, "UnityEngine", "ParticleSystem/Burst");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
