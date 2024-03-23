#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector3);
// Type: UnityEngine::Vector3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::Vector3
struct CORDL_TYPE Vector3 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Field backVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_backVector, put = setStaticF_backVector))::UnityEngine::Vector3 backVector;

  /// @brief Field downVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_downVector, put = setStaticF_downVector))::UnityEngine::Vector3 downVector;

  /// @brief Field forwardVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_forwardVector, put = setStaticF_forwardVector))::UnityEngine::Vector3 forwardVector;

  /// @brief Field leftVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_leftVector, put = setStaticF_leftVector))::UnityEngine::Vector3 leftVector;

  __declspec(property(get = get_magnitude)) float_t magnitude;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector))::UnityEngine::Vector3 negativeInfinityVector;

  __declspec(property(get = get_normalized))::UnityEngine::Vector3 normalized;

  /// @brief Field oneVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector))::UnityEngine::Vector3 oneVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector))::UnityEngine::Vector3 positiveInfinityVector;

  /// @brief Field rightVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_rightVector, put = setStaticF_rightVector))::UnityEngine::Vector3 rightVector;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Field upVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_upVector, put = setStaticF_upVector))::UnityEngine::Vector3 upVector;

  /// @brief Field zeroVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector))::UnityEngine::Vector3 zeroVector;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Angle, addr 0x2846290, size 0x11c, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method ClampMagnitude, addr 0x28465cc, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3 vector, float_t maxLength);

  /// @brief Method Cross, addr 0x2845cb0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Distance, addr 0x284652c, size 0xa0, virtual false, abstract: false, final false
  static inline float_t Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Dot, addr 0x28460a4, size 0x18, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Equals, addr 0x2845d20, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2845db8, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector3 other);

  /// @brief Method GetHashCode, addr 0x2845cd8, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Lerp, addr 0x2845730, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x284576c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method Magnitude, addr 0x2846680, size 0x80, virtual false, abstract: false, final false
  static inline float_t Magnitude(::UnityEngine::Vector3 vector);

  /// @brief Method Max, addr 0x28467d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Min, addr 0x28467b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method MoveTowards, addr 0x2845794, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 MoveTowards(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, float_t maxDistanceDelta);

  /// @brief Method Normalize, addr 0x2845e20, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value);

  /// @brief Method Normalize, addr 0x2845ef0, size 0xe8, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method Project, addr 0x28460bc, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 onNormal);

  /// @brief Method ProjectOnPlane, addr 0x28461b8, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal);

  /// @brief Method Reflect, addr 0x2845de8, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 inDirection, ::UnityEngine::Vector3 inNormal);

  /// @brief Method Scale, addr 0x2845c80, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Scale, addr 0x2845c90, size 0x20, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector3 scale);

  /// @brief Method SignedAngle, addr 0x28463ac, size 0x180, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axis);

  /// @brief Method Slerp, addr 0x2846cf0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method Slerp_Injected, addr 0x2846d64, size 0x64, virtual false, abstract: false, final false
  static inline void Slerp_Injected(ByRef<::UnityEngine::Vector3> a, ByRef<::UnityEngine::Vector3> b, float_t t, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SmoothDamp, addr 0x28458a8, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ByRef<::UnityEngine::Vector3> currentVelocity, float_t smoothTime);

  /// @brief Method SmoothDamp, addr 0x2845934, size 0x23c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ByRef<::UnityEngine::Vector3> currentVelocity, float_t smoothTime, float_t maxSpeed,
                                                  float_t deltaTime);

  /// @brief Method SqrMagnitude, addr 0x2846780, size 0x18, virtual false, abstract: false, final false
  static inline float_t SqrMagnitude(::UnityEngine::Vector3 vector);

  /// @brief Method ToString, addr 0x2846b1c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2846b28, size 0x1c8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x2845c74, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x2845c68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  static inline ::UnityEngine::Vector3 getStaticF_backVector();

  static inline ::UnityEngine::Vector3 getStaticF_downVector();

  static inline ::UnityEngine::Vector3 getStaticF_forwardVector();

  static inline ::UnityEngine::Vector3 getStaticF_leftVector();

  static inline ::UnityEngine::Vector3 getStaticF_negativeInfinityVector();

  static inline ::UnityEngine::Vector3 getStaticF_oneVector();

  static inline ::UnityEngine::Vector3 getStaticF_positiveInfinityVector();

  static inline ::UnityEngine::Vector3 getStaticF_rightVector();

  static inline ::UnityEngine::Vector3 getStaticF_upVector();

  static inline ::UnityEngine::Vector3 getStaticF_zeroVector();

  /// @brief Method get_Item, addr 0x2845b70, size 0x7c, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_back, addr 0x28468d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_back();

  /// @brief Method get_down, addr 0x284696c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_down();

  /// @brief Method get_forward, addr 0x2846888, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_left, addr 0x28469b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_left();

  /// @brief Method get_magnitude, addr 0x2846700, size 0x80, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_normalized, addr 0x2845fd8, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalized();

  /// @brief Method get_one, addr 0x284683c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_one();

  /// @brief Method get_right, addr 0x2846a04, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_sqrMagnitude, addr 0x2846798, size 0x20, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_up, addr 0x2846920, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_zero, addr 0x28467f0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector3>* i___System__IEquatable_1___UnityEngine__Vector3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x2846a50, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_Division, addr 0x2846aa4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Equality, addr 0x2846ab4, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Inequality, addr 0x2846ae8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Multiply, addr 0x2846a80, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Multiply, addr 0x2846a90, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(float_t d, ::UnityEngine::Vector3 a);

  /// @brief Method op_Subtraction, addr 0x2846a60, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_UnaryNegation, addr 0x2846a70, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3 a);

  static inline void setStaticF_backVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_downVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_forwardVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_leftVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_oneVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_rightVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_upVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_zeroVector(::UnityEngine::Vector3 value);

  /// @brief Method set_Item, addr 0x2845bec, size 0x7c, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Vector3(float_t x, float_t y, float_t z) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ 0.00001 };

  /// @brief Field kEpsilonNormalSqrt offset 0xffffffff size 0x4
  static constexpr float_t kEpsilonNormalSqrt{ 0.000000000000001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector3, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, z) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3, "UnityEngine", "Vector3");
