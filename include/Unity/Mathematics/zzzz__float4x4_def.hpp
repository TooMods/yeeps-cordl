#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x4)
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
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint4x4;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x4);
// Type: Unity.Mathematics::float4x4
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float4x4
struct CORDL_TYPE float4x4 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::float4 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::float4x4 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::float4x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x23536a0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x23527f0, size 0x168, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x23526e4, size 0x10c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float4x4 rhs);

  /// @brief Method Euler, addr 0x2356300, size 0xd34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method Euler, addr 0x235554c, size 0xdb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x23546b4, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x235381c, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x2354924, size 0x268, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x2353a8c, size 0x268, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x2354b8c, size 0x274, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x2353cf4, size 0x274, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x2354e00, size 0x268, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x2353f68, size 0x268, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x2355068, size 0x274, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x23541d0, size 0x274, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x23552dc, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x2354444, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x2352958, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookAt, addr 0x2357380, size 0x1bc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 LookAt(::Unity::Mathematics::float3 eye, ::Unity::Mathematics::float3 target, ::Unity::Mathematics::float3 up);

  /// @brief Method Ortho, addr 0x235753c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Ortho(float_t width, float_t height, float_t near, float_t far);

  /// @brief Method OrthoOffCenter, addr 0x2357598, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 OrthoOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far);

  /// @brief Method PerspectiveFov, addr 0x2357610, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 PerspectiveFov(float_t verticalFov, float_t aspect, float_t near, float_t far);

  /// @brief Method PerspectiveOffCenter, addr 0x23576f4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 PerspectiveOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far);

  /// @brief Method RotateX, addr 0x2357034, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x235710c, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x23571f4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateZ(float_t angle);

  /// @brief Method Scale, addr 0x23572c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(float_t s);

  /// @brief Method Scale, addr 0x2357320, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(::Unity::Mathematics::float3 scales);

  /// @brief Method Scale, addr 0x23572f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(float_t x, float_t y, float_t z);

  /// @brief Method TRS, addr 0x2357774, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 TRS(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method ToString, addr 0x2352ac4, size 0x4ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2352f70, size 0x494, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Translate, addr 0x235734c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Translate(::Unity::Mathematics::float3 vector);

  /// @brief Method .ctor, addr 0x2350944, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method .ctor, addr 0x2350960, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22, float_t m23, float_t m30,
                    float_t m31, float_t m32, float_t m33);

  /// @brief Method .ctor, addr 0x2353548, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x235358c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x2353618, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method .ctor, addr 0x23509d4, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x4 v);

  /// @brief Method .ctor, addr 0x2350c10, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x4 v);

  /// @brief Method .ctor, addr 0x2350a9c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x4 v);

  /// @brief Method .ctor, addr 0x2350b38, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x4 v);

  /// @brief Method .ctor, addr 0x23509b4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x2350bfc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x23509a4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x2350a88, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x2350b20, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float4x4 getStaticF_identity();

  static inline ::Unity::Mathematics::float4x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x23526dc, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::float4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x4>* i___System__IEquatable_1___Unity__Mathematics__float4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x2350f70, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Addition, addr 0x2350f9c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x2350fc4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Decrement, addr 0x235163c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Decrement(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_Division, addr 0x2351068, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Division, addr 0x2351094, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x23510bc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Equality, addr 0x2352174, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Equality, addr 0x2352270, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x235234c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Explicit, addr 0x2350c84, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method op_Explicit, addr 0x2350ec0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method op_Explicit, addr 0x2350c64, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(bool v);

  /// @brief Method op_Explicit, addr 0x2350eac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x2351bd4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x2351cd0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x2351dac, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2351e88, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2351f84, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2352060, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Implicit, addr 0x23534e4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 op_Implicit___UnityEngine__Matrix4x4(::Unity::Mathematics::float4x4 m);

  /// @brief Method op_Implicit, addr 0x2353404, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::UnityEngine::Matrix4x4 m);

  /// @brief Method op_Implicit, addr 0x2350d4c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method op_Implicit, addr 0x2350de8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method op_Implicit, addr 0x2350c54, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(float_t v);

  /// @brief Method op_Implicit, addr 0x2350d38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x2350dd0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x235160c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Increment(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_Inequality, addr 0x2352428, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Inequality, addr 0x2352524, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x2352600, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThan, addr 0x235166c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThan, addr 0x2351768, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x2351844, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x2351920, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x2351a1c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x2351af8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Modulus, addr 0x23510e4, size 0x1d0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Modulus, addr 0x23512b4, size 0x1b4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x2351468, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Multiply, addr 0x2350efc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Multiply, addr 0x2350f28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x2350f4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x2350fec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x2351018, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x2351040, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x235213c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_UnaryNegation(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_UnaryPlus, addr 0x2352160, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_UnaryPlus(::Unity::Mathematics::float4x4 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float4x4 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float4x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float4x4, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c3) == 0x30, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float4x4, "Unity.Mathematics", "float4x4");
